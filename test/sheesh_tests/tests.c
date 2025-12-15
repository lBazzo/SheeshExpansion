#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_DOUBLE_BATTLE_TEST("AI will not target the same slot as its partner when it sees a kill")
{
    u32 moveOpponentLeft;
    u32 moveOpponentRight;
    u32 hpPlayerLeft;
    u32 hpPlayerRight;

    // Only AI Slot 2 sees kill on only Player Slot 2, diagonal targeting
    PARAMETRIZE { moveOpponentLeft = MOVE_DRAGON_RAGE ; moveOpponentRight = MOVE_NIGHT_SHADE ; hpPlayerLeft = 110 ; hpPlayerRight = 90 ; } 
    // Both AI Slots see kill on only Player Slot 1, diagonal targeting
    PARAMETRIZE { moveOpponentLeft = MOVE_NIGHT_SHADE ; moveOpponentRight = MOVE_NIGHT_SHADE ; hpPlayerLeft = 90 ; hpPlayerRight = 110 ; }
    // AI Slot 1 sees kill on Player Slot 1 and Slot 2, AI Slot 2 only sees kill on Player Slot 1, parallel targeting (AI slot 1 into Player Slot 2, AI Slot 2 into Player Slot 1)
    PARAMETRIZE { moveOpponentLeft = MOVE_NIGHT_SHADE ; moveOpponentRight = MOVE_DRAGON_RAGE ; hpPlayerLeft = 30 ; hpPlayerRight = 90 ; }
    // Both AI Slots see kill on both Player Slots, diagonal targeting
    PARAMETRIZE { moveOpponentLeft = MOVE_NIGHT_SHADE ; moveOpponentRight = MOVE_NIGHT_SHADE ; hpPlayerLeft = 90 ; hpPlayerRight = 90 ; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { HP(hpPlayerLeft); Speed(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { HP(hpPlayerRight); Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Level(100); Speed(2); Moves(MOVE_CELEBRATE, moveOpponentLeft); }
        OPPONENT(SPECIES_WOBBUFFET) { Level(100); Speed(2); Moves(MOVE_CELEBRATE, moveOpponentRight); }
    } WHEN {
        if (hpPlayerLeft == 110 && hpPlayerRight == 90)
        {
            TURN {
                EXPECT_MOVE(opponentLeft, moveOpponentLeft, target:playerLeft); EXPECT_MOVE(opponentRight, moveOpponentRight, target:playerRight); 
            }
        }
        else if (hpPlayerLeft == 90 && hpPlayerRight == 110)
        {
            TURN {
                EXPECT_MOVE(opponentLeft, moveOpponentLeft, target:playerLeft); EXPECT_MOVE(opponentRight, moveOpponentRight, target:playerRight);
            }
        }
        else if (hpPlayerLeft == 30 && hpPlayerRight == 90)
        {
            TURN {
                EXPECT_MOVE(opponentLeft, moveOpponentLeft, target:playerRight); EXPECT_MOVE(opponentRight, moveOpponentRight, target:playerLeft);
            }
        }
        else if (hpPlayerLeft == 90 && hpPlayerRight == 90)
        {
            TURN {
                EXPECT_MOVE(opponentLeft, moveOpponentLeft, target:playerLeft); EXPECT_MOVE(opponentRight, moveOpponentRight, target:playerRight);
            }
        }
    }
}

// Bazzo note: TODO having hammer arm here instead of crosschop causes test to fail for some reason - possibly because of the stat change/stat id getting mixed up as 3 to speed?
// Even Ice Hammer works when Hammer Arm doesn't, who fucking knows lol
AI_SINGLE_BATTLE_TEST("AI correctly scores offensive setup moves under different circumstances")
{
    u32 opponentSetUpMove;
    u32 opponentAttack;
    u32 playerAttack;

    PARAMETRIZE { opponentSetUpMove = MOVE_HOWL; opponentAttack = MOVE_FIRE_PUNCH; playerAttack = MOVE_TACKLE; }
    PARAMETRIZE { opponentSetUpMove = MOVE_HOWL; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_TACKLE; }
    PARAMETRIZE { opponentSetUpMove = MOVE_HOWL; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_ICE_HAMMER; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SWORDS_DANCE; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_ICE_HAMMER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_ABOMASNOW) { HP(321); Defense(186); Attack(220); Speed(1); Moves(playerAttack, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_URSARING) { Attack(313); HP(321); Defense(186); Speed(10); Moves(MOVE_CELEBRATE, opponentSetUpMove, opponentAttack); }
    } WHEN {
        if (opponentSetUpMove == MOVE_HOWL && opponentAttack == MOVE_FIRE_PUNCH && playerAttack == MOVE_TACKLE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, opponentSetUpMove, 108);
            }
        }
        else if (opponentSetUpMove == MOVE_HOWL && opponentAttack == MOVE_FLAME_CHARGE && playerAttack == MOVE_TACKLE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, opponentSetUpMove, 107);
            }
        }
        else if (opponentSetUpMove == MOVE_HOWL && opponentAttack == MOVE_FLAME_CHARGE && playerAttack == MOVE_ICE_HAMMER)
        {
            TURN {
                SCORE_EQ_VAL(opponent, opponentSetUpMove, 106);
            }
        }
        else if (opponentSetUpMove == MOVE_SWORDS_DANCE && opponentAttack == MOVE_FLAME_CHARGE && playerAttack == MOVE_ICE_HAMMER)
        {
            TURN {
                SCORE_EQ_VAL(opponent, opponentSetUpMove, 108);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores defensive setup moves under different circumstances")
{
    u32 opponentMaybeBodyPress;
    u32 playerCategoryMove;
    u32 playerDamageTestMove;

    PARAMETRIZE { opponentMaybeBodyPress = MOVE_BODY_PRESS; playerCategoryMove = MOVE_WATER_GUN; playerDamageTestMove = MOVE_SPLASH; }
    PARAMETRIZE { opponentMaybeBodyPress = MOVE_BODY_PRESS; playerCategoryMove = MOVE_TACKLE; playerDamageTestMove = MOVE_SPLASH; }
    PARAMETRIZE { opponentMaybeBodyPress = MOVE_BODY_PRESS; playerCategoryMove = MOVE_TACKLE; playerDamageTestMove = MOVE_CROSS_CHOP; }
    PARAMETRIZE { opponentMaybeBodyPress = MOVE_SCRATCH; playerCategoryMove = MOVE_TACKLE; playerDamageTestMove = MOVE_CROSS_CHOP; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_ABOMASNOW) { HP(321); Defense(186); Attack(220); Speed(1); Moves(playerCategoryMove, playerDamageTestMove, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_URSARING) { Attack(313); HP(321); Defense(186); Speed(10); Moves(MOVE_CELEBRATE, MOVE_HARDEN, opponentMaybeBodyPress); }
    } WHEN {
        if (opponentMaybeBodyPress == MOVE_BODY_PRESS && playerCategoryMove == MOVE_WATER_GUN && playerDamageTestMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_HARDEN, 100);
            }
        }
        if (opponentMaybeBodyPress == MOVE_BODY_PRESS && playerCategoryMove == MOVE_TACKLE && playerDamageTestMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_HARDEN, 108);
            }
        }
        if (opponentMaybeBodyPress == MOVE_BODY_PRESS && playerCategoryMove == MOVE_TACKLE && playerDamageTestMove == MOVE_CROSS_CHOP)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_HARDEN, 107);
            }
        }
        if (opponentMaybeBodyPress == MOVE_SCRATCH && playerCategoryMove == MOVE_TACKLE && playerDamageTestMove == MOVE_CROSS_CHOP)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_HARDEN, 106);
            }
        }
    }

}

AI_SINGLE_BATTLE_TEST("AI correctly scores speed setup moves under different circumstances")
{
    u32 opponentSpeed;
    u32 player3HKOCheckMove;
    u32 speedBoostingMove;
    
    PARAMETRIZE { opponentSpeed = 70; speedBoostingMove = MOVE_TRAILBLAZE; player3HKOCheckMove = MOVE_SPLASH; }
    PARAMETRIZE { opponentSpeed = 40; speedBoostingMove = MOVE_TRAILBLAZE; player3HKOCheckMove = MOVE_SPLASH; }
    PARAMETRIZE { opponentSpeed = 40; speedBoostingMove = MOVE_AGILITY; player3HKOCheckMove = MOVE_SPLASH; }
    PARAMETRIZE { opponentSpeed = 40; speedBoostingMove = MOVE_AGILITY; player3HKOCheckMove = MOVE_CROSS_CHOP; }

    GIVEN {
       AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
       PLAYER(SPECIES_ABOMASNOW) { HP(321); Defense(186); Attack(220); Speed(100); Moves(MOVE_CELEBRATE, player3HKOCheckMove); } 
       OPPONENT(SPECIES_URSARING) { Attack(313); HP(321); Defense(186); Speed(opponentSpeed); Moves(MOVE_CELEBRATE, speedBoostingMove, MOVE_LEAF_BLADE); }
    } WHEN {
        if (opponentSpeed == 70 && speedBoostingMove == MOVE_TRAILBLAZE && player3HKOCheckMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, speedBoostingMove, 107);
            }
        }
        else if (opponentSpeed == 40 && speedBoostingMove == MOVE_TRAILBLAZE && player3HKOCheckMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, speedBoostingMove, 106);
            }
        }
        else if (opponentSpeed == 40 && speedBoostingMove == MOVE_AGILITY && player3HKOCheckMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, speedBoostingMove, 106);
            }
        }
        else if (opponentSpeed == 40 && speedBoostingMove == MOVE_AGILITY && player3HKOCheckMove == MOVE_CROSS_CHOP)
        {
            TURN {
                SCORE_EQ_VAL(opponent, speedBoostingMove, 100);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores defence dropping moves under different circumstances")
{
    u32 opponent3HKOCheckMove;
    u32 opponentMaybeHighestDamageMove;

    PARAMETRIZE { opponent3HKOCheckMove = MOVE_SPLASH; opponentMaybeHighestDamageMove = MOVE_FLAME_WHEEL; }
    PARAMETRIZE { opponent3HKOCheckMove = MOVE_SPLASH; opponentMaybeHighestDamageMove = MOVE_SACRED_FIRE; }
    PARAMETRIZE { opponent3HKOCheckMove = MOVE_EARTHQUAKE; opponentMaybeHighestDamageMove = MOVE_SACRED_FIRE; }

    GIVEN {
       AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
       PLAYER(SPECIES_ARCANINE) { HP(321); Defense(196); Moves(MOVE_CELEBRATE); } 
       OPPONENT(SPECIES_URSARING) { Attack(313); Moves(MOVE_CELEBRATE, opponent3HKOCheckMove, MOVE_FIRE_LASH, opponentMaybeHighestDamageMove); }
    } WHEN {
        if (opponent3HKOCheckMove == MOVE_SPLASH && opponentMaybeHighestDamageMove == MOVE_FLAME_WHEEL)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FIRE_LASH, 108);
            }
        }
        else if (opponent3HKOCheckMove == MOVE_SPLASH && opponentMaybeHighestDamageMove == MOVE_SACRED_FIRE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FIRE_LASH, 107);
            }
        }
        else if (opponent3HKOCheckMove == MOVE_EARTHQUAKE && opponentMaybeHighestDamageMove == MOVE_SACRED_FIRE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FIRE_LASH, 106);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Reflect")
{
    u32 opponentItem;
    u32 playerCategoryMove;

    PARAMETRIZE { opponentItem = ITEM_ORAN_BERRY; playerCategoryMove = MOVE_SPLASH; }
    PARAMETRIZE { opponentItem = ITEM_LIGHT_CLAY; playerCategoryMove = MOVE_TACKLE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerCategoryMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_REFLECT); Item(opponentItem); }
    } WHEN {
        if (opponentItem == ITEM_ORAN_BERRY)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_REFLECT, 106);
            }
        }
        else if (opponentItem == ITEM_LIGHT_CLAY)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_REFLECT, 108);
            }
        }
    }
}
