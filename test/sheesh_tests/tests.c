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

AI_SINGLE_BATTLE_TEST("AI correctly scores Substitute and Shed Tail")
{
    u32 subOrShedTail;
    u32 opponentSpeed;
    u32 maybeFocusPunch;
    u32 playerStatus;
    u32 maybeSoundMove;
    u32 opponentHP;

    PARAMETRIZE { subOrShedTail = MOVE_SUBSTITUTE; opponentSpeed = 110; maybeFocusPunch = MOVE_SPLASH; playerStatus = STATUS1_NONE; maybeSoundMove = MOVE_SCREECH; opponentHP = 55; }
    PARAMETRIZE { subOrShedTail = MOVE_SUBSTITUTE; opponentSpeed = 110; maybeFocusPunch = MOVE_SPLASH; playerStatus = STATUS1_NONE; maybeSoundMove = MOVE_SCRATCH; opponentHP = 55; }
    PARAMETRIZE { subOrShedTail = MOVE_SUBSTITUTE; opponentSpeed = 110; maybeFocusPunch = MOVE_FOCUS_PUNCH; playerStatus = STATUS1_BURN; maybeSoundMove = MOVE_SCRATCH; opponentHP = 55; }
    PARAMETRIZE { subOrShedTail = MOVE_SHED_TAIL; opponentSpeed = 110; maybeFocusPunch = MOVE_FOCUS_PUNCH; playerStatus = STATUS1_BURN; maybeSoundMove = MOVE_SCRATCH; opponentHP = 55; }
    PARAMETRIZE { subOrShedTail = MOVE_SHED_TAIL; opponentSpeed = 90; maybeFocusPunch = MOVE_FOCUS_PUNCH; playerStatus = STATUS1_BURN; maybeSoundMove = MOVE_SCREECH; opponentHP = 55; }
    PARAMETRIZE { subOrShedTail = MOVE_SHED_TAIL; opponentSpeed = 110; maybeFocusPunch = MOVE_FOCUS_PUNCH; playerStatus = STATUS1_BURN; maybeSoundMove = MOVE_SCREECH; opponentHP = 45; }


    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Speed(100); Status1(playerStatus); Moves(MOVE_CELEBRATE, maybeSoundMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); Moves(MOVE_CELEBRATE, maybeFocusPunch, subOrShedTail); MaxHP(100); HP(opponentHP); }
        OPPONENT(SPECIES_LINOONE) { Speed(1); Moves(MOVE_CELEBRATE); }
    } WHEN {
        if (subOrShedTail == MOVE_SUBSTITUTE && playerStatus == STATUS1_NONE && maybeFocusPunch == MOVE_SPLASH && maybeSoundMove == MOVE_SCREECH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, subOrShedTail, 80);
            }
        }
        else if (subOrShedTail == MOVE_SUBSTITUTE && playerStatus == STATUS1_NONE && maybeFocusPunch == MOVE_SPLASH && maybeSoundMove == MOVE_SCRATCH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, subOrShedTail, 106);
            }
        }
        else if (subOrShedTail == MOVE_SUBSTITUTE && playerStatus == STATUS1_BURN && maybeFocusPunch == MOVE_FOCUS_PUNCH && maybeSoundMove == MOVE_SCRATCH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, subOrShedTail, 109);
            }
        }
        else if (subOrShedTail == MOVE_SHED_TAIL && playerStatus == STATUS1_BURN && maybeFocusPunch == MOVE_FOCUS_PUNCH && maybeSoundMove == MOVE_SCRATCH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, subOrShedTail, 107);
            }
        }
        else if (opponentSpeed == 90)
        {
            TURN {
                SCORE_EQ_VAL(opponent, subOrShedTail, 106);
            }
        }
        else if (opponentHP == 45)
        {
            TURN {
                SCORE_EQ_VAL(opponent, subOrShedTail, 80);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Pivot moves such as U-Turn")
{
    u32 pivotMove;
    u32 otherMoveDamageChecker;
    u32 opponentSpeed;
    u32 playerKillingMoveChecker;

    PARAMETRIZE { pivotMove = MOVE_U_TURN; otherMoveDamageChecker = MOVE_X_SCISSOR; opponentSpeed = 110; playerKillingMoveChecker = MOVE_SPLASH;}
    // PARAMETRIZE { pivotMove = MOVE_U_TURN; otherMoveDamageChecker = MOVE_X_SCISSOR; opponentSpeed = 90; playerKillingMoveChecker = MOVE_SPLASH;}
    PARAMETRIZE { pivotMove = MOVE_FLIP_TURN; otherMoveDamageChecker = MOVE_BUG_BITE; opponentSpeed = 110; playerKillingMoveChecker = MOVE_THUNDERBOLT;}
    PARAMETRIZE { pivotMove = MOVE_U_TURN; otherMoveDamageChecker = MOVE_X_SCISSOR; opponentSpeed = 110; playerKillingMoveChecker = MOVE_DISCHARGE;}

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_CAMERUPT) { HP(281); Defense(176); SpAttack(246); Speed(100); Moves(MOVE_CELEBRATE, playerKillingMoveChecker); }
        OPPONENT(SPECIES_FERALIGATR) { HP(158); SpDefense(202); Attack(246); Speed(opponentSpeed); Moves(MOVE_CELEBRATE, pivotMove, otherMoveDamageChecker); }
        OPPONENT(SPECIES_LINOONE) { Speed(1); Moves(MOVE_CELEBRATE); }
    } WHEN {
        // Scores applied: -1 from resist, -2 from AI being faster and outdamaging player with another move
        if (pivotMove == MOVE_U_TURN && otherMoveDamageChecker == MOVE_X_SCISSOR && opponentSpeed == 110 && playerKillingMoveChecker == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, pivotMove, 103);
            }
        }
        //Bazzo note: second test checked conditions if ai had no other mons left, but need to give it an extra mon for first test to work
        /*
        // Ignores all other scores since there are no other mons in back and it deals more with another move
        else if (pivotMove == MOVE_U_TURN && otherMoveDamageChecker == MOVE_X_SCISSOR && opponentSpeed == 90 && playerKillingMoveChecker == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, pivotMove, 80);
            }
        }
        */
        // Scores applied: +1 faster and player kills AI, +2 kill with move, +1 super effective (and an extra +7 from fast kill)
        if (pivotMove == MOVE_FLIP_TURN && otherMoveDamageChecker == MOVE_BUG_BITE && opponentSpeed == 110 && playerKillingMoveChecker == MOVE_THUNDERBOLT)
        {
            TURN {
                SCORE_EQ_VAL(opponent, pivotMove, 117);
            }
        }
        // Scores applied: -1 from resist, +1 (50%) from Player dealing more damage than AI
        if (pivotMove == MOVE_U_TURN && otherMoveDamageChecker == MOVE_X_SCISSOR && opponentSpeed == 110 && playerKillingMoveChecker == MOVE_DISCHARGE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, pivotMove, 106);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Paralysis moves correctly")
{
    u32 opponentSpeed;
    u32 maybeElectroBall;

    PARAMETRIZE { opponentSpeed = 110; maybeElectroBall = MOVE_SPLASH; }
    PARAMETRIZE { opponentSpeed = 30; maybeElectroBall = MOVE_ELECTRO_BALL; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Speed(100); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); Moves(MOVE_CELEBRATE, MOVE_THUNDER_WAVE, maybeElectroBall); }
    } WHEN {
        if (opponentSpeed == 110)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_THUNDER_WAVE, 106);
            }
        }
        else if (opponentSpeed == 30)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_THUNDER_WAVE, 108);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Parting Shot correctly")
{
    u32 playerMaybeKillingMove;
    u32 playerAbility;
    u32 opponentSpeed;

    PARAMETRIZE { playerMaybeKillingMove = MOVE_DRAGON_RAGE; playerAbility = ABILITY_ADAPTABILITY; opponentSpeed = 110; }
    PARAMETRIZE { playerMaybeKillingMove = MOVE_DRAGON_RAGE; playerAbility = ABILITY_HYPER_CUTTER; opponentSpeed = 110; }
    PARAMETRIZE { playerMaybeKillingMove = MOVE_SPLASH; playerAbility = ABILITY_ADAPTABILITY; opponentSpeed = 110; }
    PARAMETRIZE { playerMaybeKillingMove = MOVE_DRAGON_RAGE; playerAbility = ABILITY_ADAPTABILITY; opponentSpeed = 90; }


    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Speed(100); Moves(MOVE_CELEBRATE, playerMaybeKillingMove); Ability(playerAbility); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); HP(30); Moves(MOVE_CELEBRATE, MOVE_PARTING_SHOT); }
        OPPONENT(SPECIES_LINOONE) { Speed(1); Moves(MOVE_CELEBRATE); }
    } WHEN {
        if (playerMaybeKillingMove == MOVE_DRAGON_RAGE && playerAbility == ABILITY_ADAPTABILITY && opponentSpeed == 110)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 107);
            }
        }
        else if (playerAbility == ABILITY_HYPER_CUTTER)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 105);
            }
        }
        else if (playerMaybeKillingMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 106);
            }
        }
        else if (opponentSpeed == 90)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 106);
            }
        }
    }
}

// Bazzo note: this test changes celebrate to mean look to prove that trapping is passed via baton pass
AI_SINGLE_BATTLE_TEST("Test to check how Baton Pass deals with trapping opponent")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_SWITCHING);
        ASSUME(GetMoveEffect(MOVE_SKY_ATTACK) == EFFECT_TWO_TURNS_ATTACK);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SHADOW_TAG); Moves(MOVE_MEAN_LOOK, MOVE_CELEBRATE, MOVE_BATON_PASS); }
        PLAYER(SPECIES_SWELLOW) { Moves(MOVE_SKY_ATTACK); }
        OPPONENT(SPECIES_ARBOK) { Moves(MOVE_LAST_RESORT); }
        OPPONENT(SPECIES_LAIRON) { Moves(MOVE_ROCK_SLIDE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_BATON_PASS); SEND_OUT(player, 1); EXPECT_MOVE(opponent, MOVE_LAST_RESORT); }
        TURN { MOVE(player, MOVE_SKY_ATTACK); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Baton Pass correctly")
{
    u32 opponentSetUpOrTrapMove;

    PARAMETRIZE { opponentSetUpOrTrapMove = MOVE_MEAN_LOOK; }
    PARAMETRIZE { opponentSetUpOrTrapMove = MOVE_SHARPEN; }
    PARAMETRIZE { opponentSetUpOrTrapMove = MOVE_SWORDS_DANCE; }
    PARAMETRIZE { opponentSetUpOrTrapMove = MOVE_SUBSTITUTE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_ARBOK) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SHED_SKIN); }
        PLAYER(SPECIES_ARBOK) {Ability(ABILITY_SHED_SKIN); } ;
        OPPONENT(SPECIES_ARBOK) { Moves(opponentSetUpOrTrapMove, MOVE_BATON_PASS, MOVE_CELEBRATE, MOVE_LAST_RESORT); Ability(ABILITY_SHED_SKIN); }
        OPPONENT(SPECIES_ARBOK) { Moves(MOVE_CELEBRATE); Ability(ABILITY_SHED_SKIN); }
        ASSUME(GetMoveEffect(MOVE_BATON_PASS) == EFFECT_BATON_PASS);
        ASSUME(GetMoveEffect(MOVE_MEAN_LOOK) == EFFECT_MEAN_LOOK);
        ASSUME(GetMoveEffect(MOVE_SHARPEN) == EFFECT_ATTACK_UP);
        ASSUME(GetMoveEffect(MOVE_SWORDS_DANCE) == EFFECT_ATTACK_UP_2);
        ASSUME(GetMoveEffect(MOVE_SUBSTITUTE) == EFFECT_SUBSTITUTE);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, opponentSetUpOrTrapMove); }
        if (opponentSetUpOrTrapMove == MOVE_MEAN_LOOK)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_BATON_PASS, 109);
            }
        }
        else if (opponentSetUpOrTrapMove == MOVE_SHARPEN)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_BATON_PASS, 109);
            }
        }
        else if (opponentSetUpOrTrapMove == MOVE_SWORDS_DANCE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_BATON_PASS, 111);
            }
        }
        else if (opponentSetUpOrTrapMove == MOVE_SUBSTITUTE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_BATON_PASS, 111);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Baton Pass correctly on the first turn")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_ARBOK) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ARBOK) { Moves(MOVE_TACKLE, MOVE_BATON_PASS, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ARBOK) { Moves(MOVE_BATON_PASS, MOVE_CELEBRATE); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_BATON_PASS, 105); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_BATON_PASS, 106); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Hazard setting moves correctly")
{
    u32 hazardSettingMove;
    u32 opponentMaybeHighestDamageMove;

    PARAMETRIZE { hazardSettingMove = MOVE_SPIKES; opponentMaybeHighestDamageMove = MOVE_SPLASH; }
    PARAMETRIZE { hazardSettingMove = MOVE_CEASELESS_EDGE; opponentMaybeHighestDamageMove = MOVE_SPLASH; }
    PARAMETRIZE { hazardSettingMove = MOVE_CEASELESS_EDGE; opponentMaybeHighestDamageMove = MOVE_CRUNCH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(hazardSettingMove, MOVE_CELEBRATE, opponentMaybeHighestDamageMove); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (hazardSettingMove == MOVE_SPIKES && opponentMaybeHighestDamageMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, hazardSettingMove, 110); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, hazardSettingMove); }
            TURN { SCORE_EQ_VAL(opponent, hazardSettingMove, 88); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_CELEBRATE); }
        }
        else if (hazardSettingMove == MOVE_CEASELESS_EDGE && opponentMaybeHighestDamageMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, hazardSettingMove, 112); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, hazardSettingMove); }
            TURN { SCORE_EQ_VAL(opponent, hazardSettingMove, 108); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, hazardSettingMove); }
        }
        else if (hazardSettingMove == MOVE_CEASELESS_EDGE && opponentMaybeHighestDamageMove == MOVE_CRUNCH)
        {
            TURN { SCORE_EQ_VAL(opponent, hazardSettingMove, 110); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, hazardSettingMove); }
            TURN { SCORE_EQ_VAL(opponent, hazardSettingMove, 100); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, opponentMaybeHighestDamageMove); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Belly Drum correctly")
{
    u32 opponentItem;
    u32 opponentHP;

    PARAMETRIZE { opponentItem = ITEM_SITRUS_BERRY; opponentHP = 70; }
    PARAMETRIZE { opponentItem = ITEM_SITRUS_BERRY; opponentHP = 60; }
    PARAMETRIZE { opponentItem = ITEM_IAPAPA_BERRY; opponentHP = 60; }
    PARAMETRIZE { opponentItem = ITEM_NONE; opponentHP = 80; }
    PARAMETRIZE { opponentItem = ITEM_NONE; opponentHP = 95; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_LINOONE) { MaxHP(100); HP(opponentHP);  Moves(MOVE_BELLY_DRUM, MOVE_CELEBRATE); Ability(ABILITY_GLUTTONY); Item(opponentItem); }
    } WHEN {
        if (opponentItem == ITEM_SITRUS_BERRY && opponentHP == 70)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_BELLY_DRUM, 108); }
        }
        else if (opponentItem == ITEM_SITRUS_BERRY && opponentHP == 60)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_BELLY_DRUM, 100); }
        }
        else if (opponentItem == ITEM_IAPAPA_BERRY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_BELLY_DRUM, 108); }
        }
        else if (opponentItem == ITEM_NONE && opponentHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_BELLY_DRUM, 100); }
        }
        else if (opponentItem == ITEM_NONE && opponentHP == 95)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_BELLY_DRUM, 108); }
        }
    }
}
