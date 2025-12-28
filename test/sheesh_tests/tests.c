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

    PARAMETRIZE { opponentSetUpMove = MOVE_SHARPEN; opponentAttack = MOVE_FIRE_PUNCH; playerAttack = MOVE_TACKLE; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SHARPEN; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_TACKLE; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SHARPEN; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_ICE_HAMMER; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SWORDS_DANCE; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_ICE_HAMMER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_ABOMASNOW) { HP(321); Defense(186); Attack(220); Speed(1); Moves(playerAttack, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_URSARING) { Attack(313); HP(321); Defense(186); Speed(10); Moves(MOVE_CELEBRATE, opponentSetUpMove, opponentAttack); }
    } WHEN {
        if (opponentSetUpMove == MOVE_SHARPEN && opponentAttack == MOVE_FIRE_PUNCH && playerAttack == MOVE_TACKLE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, opponentSetUpMove, 108);
            }
        }
        else if (opponentSetUpMove == MOVE_SHARPEN && opponentAttack == MOVE_FLAME_CHARGE && playerAttack == MOVE_TACKLE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, opponentSetUpMove, 107);
            }
        }
        else if (opponentSetUpMove == MOVE_SHARPEN && opponentAttack == MOVE_FLAME_CHARGE && playerAttack == MOVE_ICE_HAMMER)
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

AI_SINGLE_BATTLE_TEST("AI scores Swagger correctly")
{
    u32 opponentItem;
    u32 playerStatus;

    PARAMETRIZE { opponentItem = ITEM_NONE; playerStatus = STATUS1_NONE; }
    PARAMETRIZE { opponentItem = ITEM_MIRROR_HERB; playerStatus = STATUS1_PARALYSIS; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Status1(playerStatus); }
        OPPONENT(SPECIES_LINOONE) { Moves(MOVE_CELEBRATE, MOVE_SWAGGER); Item(opponentItem); }
    } WHEN {
        if (opponentItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWAGGER, 106); }
        }
        if (opponentItem == ITEM_MIRROR_HERB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWAGGER, 109); }
        }
    }
}

// I have no idea where this -10 comes from when it doesn't apply, but 
AI_DOUBLE_BATTLE_TEST("AI scores Follow Me correctly")
{
    u32 playerMaybeDragonRage;
    u32 playerPartnerMaybeDragonRage;

    PARAMETRIZE { playerMaybeDragonRage = MOVE_SPLASH; playerPartnerMaybeDragonRage = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; playerPartnerMaybeDragonRage = MOVE_SPLASH; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_SPLASH; playerPartnerMaybeDragonRage = MOVE_SPLASH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE, playerMaybeDragonRage); }
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE, playerPartnerMaybeDragonRage); }
        OPPONENT(SPECIES_ABSOL) { Moves(MOVE_FOLLOW_ME, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABSOL) { Moves (MOVE_CELEBRATE, MOVE_TACKLE); HP(40); }
        ASSUME(GetMoveEffect(MOVE_FOLLOW_ME) == EFFECT_FOLLOW_ME);
    } WHEN {
        if (playerMaybeDragonRage == MOVE_SPLASH && playerPartnerMaybeDragonRage == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 112, target:playerRight); }
        }
        if (playerMaybeDragonRage == MOVE_DRAGON_RAGE && playerPartnerMaybeDragonRage == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 112, target:playerLeft); }
        }
        if (playerMaybeDragonRage == MOVE_SPLASH && playerPartnerMaybeDragonRage == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 90, target:opponentRight); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Trick correctly with different items")
{
    u32 opponentItem; 
    u32 playerItem;

    PARAMETRIZE { opponentItem = ITEM_FLAME_ORB; playerItem = ITEM_NONE; }
    PARAMETRIZE { opponentItem = ITEM_FLAME_ORB; playerItem = ITEM_ORAN_BERRY; }
    PARAMETRIZE { opponentItem = ITEM_TOXIC_ORB; playerItem = ITEM_ORAN_BERRY; }
    PARAMETRIZE { opponentItem = ITEM_FLOAT_STONE; playerItem = ITEM_ORAN_BERRY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE, MOVE_FLARE_BLITZ); Item(playerItem); }
        OPPONENT(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE, MOVE_TRICK, MOVE_HEX); Item(opponentItem); }
    } WHEN {
        if (opponentItem == ITEM_FLAME_ORB && playerItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK, 80); }
        }
        else if (opponentItem == ITEM_FLAME_ORB && playerItem == ITEM_ORAN_BERRY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK, 108); }
        }
        else if (opponentItem == ITEM_TOXIC_ORB && playerItem == ITEM_ORAN_BERRY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK, 107); }
        }
        else if (opponentItem == ITEM_FLOAT_STONE && playerItem == ITEM_ORAN_BERRY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Skill Swap in singles correctly")
{
    u32 opponentAbility;

    PARAMETRIZE { opponentAbility = ABILITY_TRUANT; }
    PARAMETRIZE { opponentAbility = ABILITY_ADAPTABILITY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE, MOVE_SKILL_SWAP); Ability(opponentAbility); }
    } WHEN {
        if (opponentAbility == ABILITY_TRUANT)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SKILL_SWAP, 106); }
        }
        if (opponentAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SKILL_SWAP, 100); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores Skill Swap in doubles correctly")
{
    u32 opponentAbility;

    PARAMETRIZE { opponentAbility = ABILITY_SAP_SIPPER; }
    PARAMETRIZE { opponentAbility = ABILITY_ADAPTABILITY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE );
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_FARIGIRAF) { Moves(MOVE_CELEBRATE, MOVE_SKILL_SWAP); Ability(opponentAbility); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(ABILITY_ADAPTABILITY); }
        ASSUME(GetMoveEffect(MOVE_SKILL_SWAP) == EFFECT_SKILL_SWAP);
    } WHEN {
        if (opponentAbility == ABILITY_SAP_SIPPER)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_SKILL_SWAP, 109, target:opponentRight); }
        }
        else if (opponentAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_SKILL_SWAP, 90, target:opponentRight); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Grudge correctly")
{
    u32 opponentHP;
    u32 opponentAbility;
    u32 opponentSpeed;

    PARAMETRIZE { opponentHP = 40; opponentAbility = ABILITY_PRANKSTER; opponentSpeed = 90; }
    PARAMETRIZE { opponentHP = 40; opponentAbility = ABILITY_ADAPTABILITY; opponentSpeed = 110; }
    PARAMETRIZE { opponentHP = 40; opponentAbility = ABILITY_ADAPTABILITY; opponentSpeed = 90; }
    PARAMETRIZE { opponentHP = 50; opponentAbility = ABILITY_PRANKSTER; opponentSpeed = 110; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DRAGON_RAGE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_GRUDGE); Ability(opponentAbility); Speed(opponentSpeed); HP(opponentHP); }
    } WHEN {
        if (opponentAbility == ABILITY_PRANKSTER && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GRUDGE, 106); }
        }
        else if (opponentAbility == ABILITY_ADAPTABILITY && opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GRUDGE, 106); }
        }
        else if (opponentAbility == ABILITY_ADAPTABILITY && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GRUDGE, 100); }
        }
        else if (opponentHP == 50)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GRUDGE, 100); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Cosmic Power correctly")
{
    u32 opponentHP;

    PARAMETRIZE { opponentHP = 40; }
    PARAMETRIZE { opponentHP = 90; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DRAGON_RAGE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_COSMIC_POWER); Speed(110); HP(opponentHP); }
        ASSUME(GetMoveEffect(MOVE_COSMIC_POWER) == EFFECT_COSMIC_POWER);
    } WHEN {
        if (opponentHP == 40)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_COSMIC_POWER, 80); }
        }
        if (opponentHP == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_COSMIC_POWER, 107); EXPECT_MOVE(opponent, MOVE_COSMIC_POWER); MOVE(player, MOVE_DRAGON_RAGE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_COSMIC_POWER, 106); EXPECT_MOVE(opponent, MOVE_COSMIC_POWER); MOVE(player, MOVE_DRAGON_RAGE); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Shell Smash correctly")
{
    u32 opponentSpeed;
    u32 opponentItem;
    u32 opponentHP;

    PARAMETRIZE { opponentSpeed = 110; opponentItem = ITEM_NONE; opponentHP = 321; }
    PARAMETRIZE { opponentSpeed = 110; opponentItem = ITEM_WHITE_HERB; opponentHP = 321; }
    PARAMETRIZE { opponentSpeed = 90; opponentItem = ITEM_NONE; opponentHP = 321; }
    PARAMETRIZE { opponentSpeed = 90; opponentItem = ITEM_WHITE_HERB; opponentHP = 321; }
    PARAMETRIZE { opponentSpeed = 50; opponentItem = ITEM_NONE; opponentHP = 999; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_CAMERUPT) { Moves(MOVE_CELEBRATE, MOVE_EMBER); Speed(100); SpAttack(220); }
        OPPONENT(SPECIES_ABOMASNOW) { Moves(MOVE_CELEBRATE, MOVE_SHELL_SMASH); Speed(opponentSpeed); Item(opponentItem); HP(opponentHP); SpDefense(206); }
        ASSUME(GetMoveEffect(MOVE_SHELL_SMASH) == EFFECT_SHELL_SMASH);
    } WHEN {
        if (opponentSpeed == 110 && opponentItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SHELL_SMASH, 80); }
        }
        else if (opponentSpeed == 110 && opponentItem == ITEM_WHITE_HERB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SHELL_SMASH, 108); }
        }
        else if (opponentSpeed == 90 && opponentItem == ITEM_WHITE_HERB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SHELL_SMASH, 108); }
        }
        else if (opponentSpeed == 90 && opponentItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SHELL_SMASH, 108); }
        }
        else if (opponentHP == 999)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SHELL_SMASH, 108); MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_SHELL_SMASH); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_SHELL_SMASH, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Power Swap correctly")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_CROBAT) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_CELEBI) { Moves(MOVE_CELEBRATE, MOVE_LEAF_STORM, MOVE_POWER_SWAP); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_LEAF_STORM); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_POWER_SWAP, 108); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Guard Split correctly")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_CROBAT) { Moves(MOVE_CELEBRATE); Defense(101); }
        OPPONENT(SPECIES_CELEBI) { Moves(MOVE_CELEBRATE, MOVE_GUARD_SPLIT); Defense(200); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_GUARD_SPLIT); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_GUARD_SPLIT, 80); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Fling correctly with different items")
{
    u32 opponentItem;
    u32 maybeFakeOut;
    u32 playerStatus;

    PARAMETRIZE { opponentItem = ITEM_LIGHT_BALL; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_NONE; }
    PARAMETRIZE { opponentItem = ITEM_FLAME_ORB; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_NONE; }
    PARAMETRIZE { opponentItem = ITEM_TOXIC_ORB; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_BURN; }
    PARAMETRIZE { opponentItem = ITEM_KINGS_ROCK; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_NONE; }
    PARAMETRIZE { opponentItem = ITEM_KINGS_ROCK; maybeFakeOut = MOVE_FAKE_OUT; playerStatus = STATUS1_NONE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Status1(playerStatus); Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FLING, maybeFakeOut); Item(opponentItem); Speed(30); }
        ASSUME(gItemsInfo[ITEM_KINGS_ROCK].holdEffect == HOLD_EFFECT_FLINCH);
    } WHEN {
        if (opponentItem == ITEM_LIGHT_BALL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 106); }
        }
        else if (opponentItem == ITEM_FLAME_ORB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 106); }
        }
        else if (opponentItem == ITEM_TOXIC_ORB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 100); }
        }
        else if (opponentItem == ITEM_KINGS_ROCK && maybeFakeOut == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 109); }
        }
        else if (opponentItem == ITEM_KINGS_ROCK && maybeFakeOut == MOVE_FAKE_OUT)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 108); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, maybeFakeOut); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 109); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_FLING); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 80); }
        }
    }
} 

AI_DOUBLE_BATTLE_TEST("AI scores Telekinesis correctly on its partner")
{
    u32 playerMaybeGroundMove;
    u32 playerPartnerMaybeGroundMove;
    u32 opponentPartnerSpecies;

    PARAMETRIZE { playerMaybeGroundMove = MOVE_SPLASH; playerPartnerMaybeGroundMove = MOVE_SPLASH; opponentPartnerSpecies = SPECIES_ARBOK; }
    PARAMETRIZE { playerMaybeGroundMove = MOVE_EARTHQUAKE; playerPartnerMaybeGroundMove = MOVE_SPLASH; opponentPartnerSpecies = SPECIES_ARBOK; }
    PARAMETRIZE { playerMaybeGroundMove = MOVE_SPLASH; playerPartnerMaybeGroundMove = MOVE_EARTHQUAKE; opponentPartnerSpecies = SPECIES_ARBOK; }
    PARAMETRIZE { playerMaybeGroundMove = MOVE_SPLASH; playerPartnerMaybeGroundMove = MOVE_EARTHQUAKE; opponentPartnerSpecies = SPECIES_WOBBUFFET; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeGroundMove); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerPartnerMaybeGroundMove); }
        OPPONENT(SPECIES_RIBOMBEE) { Moves(MOVE_CELEBRATE, MOVE_TELEKINESIS); }
        OPPONENT(opponentPartnerSpecies) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        if (playerMaybeGroundMove == MOVE_SPLASH && playerPartnerMaybeGroundMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TELEKINESIS, 80, target:opponentRight); }
        }
        else if (playerMaybeGroundMove == MOVE_EARTHQUAKE && opponentPartnerSpecies == SPECIES_ARBOK)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TELEKINESIS, 110, target:opponentRight); MOVE(playerLeft, MOVE_EARTHQUAKE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_MOVE (opponentLeft, MOVE_TELEKINESIS); EXPECT_MOVE (opponentRight, MOVE_CELEBRATE); }
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TELEKINESIS, 80, target:opponentRight); }
        }
        else if (playerPartnerMaybeGroundMove == MOVE_EARTHQUAKE && opponentPartnerSpecies == SPECIES_ARBOK)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TELEKINESIS, 110, target:opponentRight); MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_EARTHQUAKE); EXPECT_MOVE (opponentLeft, MOVE_TELEKINESIS); EXPECT_MOVE (opponentRight, MOVE_CELEBRATE); }
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TELEKINESIS, 80, target:opponentRight); }
        }
        else if (opponentPartnerSpecies == SPECIES_WOBBUFFET)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TELEKINESIS, 80, target:opponentRight); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Magic Powder correctly")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_RIBOMBEE) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_MAGIC_POWDER); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_MAGIC_POWDER, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MAGIC_POWDER); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_MAGIC_POWDER, 80); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores Topsy Turvy correctly")
{
    u32 opponentPartnerMaybeStatDropMove;
    u32 opponentSpeed;

    PARAMETRIZE { opponentPartnerMaybeStatDropMove = MOVE_SPLASH; opponentSpeed = 90; }
    PARAMETRIZE { opponentPartnerMaybeStatDropMove = MOVE_CLOSE_COMBAT; opponentSpeed = 110; }
    PARAMETRIZE { opponentPartnerMaybeStatDropMove = MOVE_CLOSE_COMBAT; opponentSpeed = 90; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, opponentPartnerMaybeStatDropMove); Speed(100); } 
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TOPSY_TURVY); Speed(opponentSpeed); }
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_CLOSE_COMBAT, MOVE_EFFECT_DEF_SPDEF_DOWN));
        ASSUME(GetMoveEffect(MOVE_TOPSY_TURVY) == EFFECT_TOPSY_TURVY);
    } WHEN {
        if (opponentPartnerMaybeStatDropMove == MOVE_SPLASH && opponentSpeed == 90)
        {
            TURN { DebugPrintf("%d", i); SCORE_EQ_VAL(opponentRight, MOVE_TOPSY_TURVY, 90, target:opponentLeft); }
        }
        else if (opponentPartnerMaybeStatDropMove == MOVE_CLOSE_COMBAT && opponentSpeed == 110)
        {
            TURN { 
                DebugPrintf("%d", i); 
                SCORE_EQ_VAL(opponentRight, MOVE_TOPSY_TURVY, 80, target:opponentLeft);
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE); 
                EXPECT_MOVE(opponentRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, opponentPartnerMaybeStatDropMove, target:playerLeft);
            }
            TURN { 
                DebugPrintf("%d", i); 
                SCORE_EQ_VAL(opponentRight, MOVE_TOPSY_TURVY, 108, target:opponentLeft); 
            }
        }
        else if (opponentPartnerMaybeStatDropMove == MOVE_CLOSE_COMBAT && opponentSpeed == 90)
        {
            TURN { DebugPrintf("%d", i); 
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, opponentPartnerMaybeStatDropMove, target:playerLeft);
                EXPECT_MOVE(opponentRight, MOVE_TOPSY_TURVY);
                SCORE_EQ_VAL(opponentRight, MOVE_TOPSY_TURVY, 108, target:opponentLeft);
             }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores Quash correctly")
{
    u32 opponentSpeed;
    u32 player1MaybeDragonRage;
    u32 player2MaybeDragonRage;

    PARAMETRIZE { opponentSpeed = 110; player1MaybeDragonRage = MOVE_DRAGON_RAGE; player2MaybeDragonRage = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { opponentSpeed = 110; player1MaybeDragonRage = MOVE_SPLASH; player2MaybeDragonRage = MOVE_DRAGON_RAGE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, player1MaybeDragonRage); Speed(100); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, player2MaybeDragonRage); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE, MOVE_QUASH); Speed(100); } 
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(40); Speed(opponentSpeed); }
    } WHEN {
        if (opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_QUASH, 80, target:playerLeft); }
        }
        else if (opponentSpeed == 90 && player1MaybeDragonRage == MOVE_SPLASH && player2MaybeDragonRage == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_QUASH, 80, target:playerLeft); SCORE_EQ_VAL(opponentLeft, MOVE_QUASH, 107, target:playerRight); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores Tailwind correctly in doubles")
{
    u32 opponentSpeed;
    u32 opponentPartnerSpeed;
    u32 player1Speed;
    u32 player2Speed;

    PARAMETRIZE { opponentSpeed = 5; opponentPartnerSpeed = 5; player1Speed = 8; player2Speed = 3; }
    PARAMETRIZE { opponentSpeed = 6; opponentPartnerSpeed = 6; player1Speed = 4; player2Speed = 9; }
    PARAMETRIZE { opponentSpeed = 7; opponentPartnerSpeed = 7; player1Speed = 8; player2Speed = 3; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(player1Speed); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(player2Speed); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FAKE_OUT, MOVE_TAILWIND); Speed(opponentSpeed); } 
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(opponentPartnerSpeed); }
    } WHEN {
        if (opponentSpeed == 5)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TAILWIND, 110, target:opponentRight); }
        }
        else if (opponentSpeed == 6)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TAILWIND, 110, target:opponentRight); }
        }
        else if (opponentSpeed == 7)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_TAILWIND, 90, target:opponentRight); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Tailwind correctly in singles")
{
    u32 opponentSpeed;
    u32 player1Speed;

    PARAMETRIZE { opponentSpeed = 5; player1Speed = 8; }
    PARAMETRIZE { opponentSpeed = 6; player1Speed = 4; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(player1Speed); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FAKE_OUT, MOVE_TAILWIND); Speed(opponentSpeed); } 
    } WHEN {
        if (opponentSpeed == 5)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TAILWIND, 110); }
        }
        else if (opponentSpeed == 6)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TAILWIND, 100); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores No Retreat correctly")
{
    u32 opponentHP;

    PARAMETRIZE { opponentHP = 40; }
    PARAMETRIZE { opponentHP = 50; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DRAGON_RAGE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_NO_RETREAT); HP(opponentHP); } 
    } WHEN {
        if (opponentHP == 40)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_NO_RETREAT, 80); }
        }
        else if (opponentHP == 50)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_NO_RETREAT, 112); EXPECT_MOVE(opponent, MOVE_NO_RETREAT); MOVE(player, MOVE_CELEBRATE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_NO_RETREAT, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Knock Off correctly")
{
    u32 playerAbility;
    u32 opponentMaybeHighestDamageMove;
    u32 player2HKOCheckMove;
    u32 playerItem;

    PARAMETRIZE { playerAbility = ABILITY_STICKY_HOLD; opponentMaybeHighestDamageMove = MOVE_SPLASH; player2HKOCheckMove = MOVE_SPLASH; playerItem = ITEM_PECHA_BERRY; }
    PARAMETRIZE { playerAbility = ABILITY_STICKY_HOLD; opponentMaybeHighestDamageMove = MOVE_TACKLE; player2HKOCheckMove = MOVE_SPLASH; playerItem = ITEM_PECHA_BERRY; }
    PARAMETRIZE { playerAbility = ABILITY_ADAPTABILITY; opponentMaybeHighestDamageMove = MOVE_TACKLE; player2HKOCheckMove = MOVE_SPLASH; playerItem = ITEM_PECHA_BERRY; }   
    PARAMETRIZE { playerAbility = ABILITY_ADAPTABILITY; opponentMaybeHighestDamageMove = MOVE_TACKLE; player2HKOCheckMove = MOVE_SPLASH; playerItem = ITEM_NONE; } 
    PARAMETRIZE { playerAbility = ABILITY_ADAPTABILITY; opponentMaybeHighestDamageMove = MOVE_TACKLE; player2HKOCheckMove = MOVE_DRAGON_RAGE; playerItem = ITEM_PECHA_BERRY; } 

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_SCRAFTY) { Moves(MOVE_CELEBRATE, player2HKOCheckMove); HP(70); Ability(playerAbility); Item(playerItem); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_KNOCK_OFF, opponentMaybeHighestDamageMove); HP(70); } 
    } WHEN {
        if (playerAbility == ABILITY_STICKY_HOLD && opponentMaybeHighestDamageMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_KNOCK_OFF, 108); }
        }
        else if (playerAbility == ABILITY_STICKY_HOLD && opponentMaybeHighestDamageMove == MOVE_TACKLE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_KNOCK_OFF, 100); }
        }
        else if (playerAbility == ABILITY_ADAPTABILITY && opponentMaybeHighestDamageMove == MOVE_TACKLE && playerItem == ITEM_PECHA_BERRY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_KNOCK_OFF, 106); }
        }
        else if (playerItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_KNOCK_OFF, 100); }
        }
        else if (player2HKOCheckMove == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_KNOCK_OFF, 100); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores Coaching correctly on its partner")
{
    u32 playerLeftOHKOCheck;
    u32 playerRightOHKOCheck;

    PARAMETRIZE { playerLeftOHKOCheck = MOVE_DRAGON_RAGE; playerRightOHKOCheck = MOVE_SPLASH; }
    PARAMETRIZE { playerLeftOHKOCheck = MOVE_SPLASH; playerRightOHKOCheck = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { playerLeftOHKOCheck = MOVE_SPLASH; playerRightOHKOCheck = MOVE_SPLASH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerLeftOHKOCheck); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerRightOHKOCheck); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_COACHING);  } 
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); HP(40); }
    } WHEN {
        if (playerLeftOHKOCheck == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_COACHING, 80, target:opponentRight); }
        }
        else if (playerRightOHKOCheck == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_COACHING, 80, target:opponentRight); }
        }
        else if (playerLeftOHKOCheck == MOVE_SPLASH && playerRightOHKOCheck == MOVE_SPLASH)
        {
            TURN { 
                SCORE_EQ_VAL(opponentLeft, MOVE_COACHING, 107, target:opponentRight); 
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, MOVE_COACHING, target:opponentRight);
                EXPECT_MOVE(opponentRight, MOVE_TACKLE, target:playerLeft);
            }
            TURN { 
                SCORE_EQ_VAL(opponentLeft, MOVE_COACHING, 107, target:opponentRight); 
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, MOVE_COACHING, target:opponentRight);
                EXPECT_MOVE(opponentRight, MOVE_TACKLE, target:playerLeft);
            }
            TURN {SCORE_EQ_VAL(opponentLeft, MOVE_COACHING, 80, target:opponentRight); }
        }
    }
}

//Bazzo note: this test is actually scoring correctly, but 1) reads test assigned scores as negative past 128... will need to look into this later - who fucking knows man
AI_SINGLE_BATTLE_TEST("AI Scores Pursuit correctly")
{
    u32 playerHP;
    u32 opponentSpeed;

    PARAMETRIZE { playerHP = 200; opponentSpeed = 90; }
    PARAMETRIZE { playerHP = 80; opponentSpeed = 90; }
    PARAMETRIZE { playerHP = 40; opponentSpeed = 90; }
    PARAMETRIZE { playerHP = 30; opponentSpeed = 110; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); HP(playerHP); Level(100); Defense(152); Ability(ABILITY_ADAPTABILITY); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_PURSUIT, MOVE_ROCK_CLIMB); Speed(opponentSpeed); Level(100); Attack(102); }
        //ASSUME(GetMoveEffect(MOVE_PURSUIT) == EFFECT_HIT);
    } WHEN {
        if (playerHP == 200 && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PURSUIT, 100); }
        }
        else if (playerHP == 80 && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PURSUIT, 120); }
        }
        else if (playerHP == 40 && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PURSUIT, 132); SEND_OUT(player, 1); }
        }
        else if (playerHP == 30 && opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PURSUIT, 145); SEND_OUT(player, 1); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("Testing if AI sees future sight killing rolls")
{
    u32 playerHP;
    u32 opponentSpeed;

    PARAMETRIZE { playerHP = 60; opponentSpeed = 90; }
    PARAMETRIZE { playerHP = 40; opponentSpeed = 90; }
    PARAMETRIZE { playerHP = 40; opponentSpeed = 110; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); HP(playerHP); SpDefense(152); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FUTURE_SIGHT); Speed(opponentSpeed); Level(100); SpAttack(102); }
    } WHEN {
        if (playerHP == 60)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FUTURE_SIGHT, 107); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_FUTURE_SIGHT); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_FUTURE_SIGHT, 80); }
        }
        else if (playerHP == 40 && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FUTURE_SIGHT, 111); }
        }
        else if (playerHP == 40 && opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FUTURE_SIGHT, 114); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Two Turn Attack moves correctly")
{
    u32 playerMaybeDragonRage;
    u32 opponentTwoTurnMove;
    u32 opponentHP;

    PARAMETRIZE { opponentTwoTurnMove = MOVE_SOLARBEAM; playerMaybeDragonRage = MOVE_SPLASH; opponentHP = 80; }
    PARAMETRIZE { opponentTwoTurnMove = MOVE_METEOR_BEAM; playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentHP = 80; }
    PARAMETRIZE { opponentTwoTurnMove = MOVE_METEOR_BEAM; playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentHP = 100; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeDragonRage); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, opponentTwoTurnMove); HP(opponentHP); Item(ITEM_POWER_HERB); }
    } WHEN {
        if (opponentTwoTurnMove == MOVE_SOLARBEAM && playerMaybeDragonRage == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentTwoTurnMove, 108); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, opponentTwoTurnMove); }
            TURN { SCORE_EQ_VAL(opponent, opponentTwoTurnMove, 88); }
        }
        else if (opponentTwoTurnMove == MOVE_METEOR_BEAM && playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentTwoTurnMove, 108); MOVE(player, MOVE_DRAGON_RAGE); EXPECT_MOVE(opponent, opponentTwoTurnMove); }
            TURN { SCORE_EQ_VAL(opponent, opponentTwoTurnMove, 88); }
        }
        else if (opponentTwoTurnMove == MOVE_METEOR_BEAM && playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentHP == 100)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentTwoTurnMove, 108); MOVE(player, MOVE_DRAGON_RAGE); EXPECT_MOVE(opponent, opponentTwoTurnMove); }
            TURN { SCORE_EQ_VAL(opponent, opponentTwoTurnMove, 108); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores switch out moves like Dragon Tail correctly")
{
    u32 playerMaybeDragonRage;
    u32 playerMaybeOutdamage;
    u32 opponentMaybeHighestDamageMove;
    u32 playerSpeed;

    PARAMETRIZE { playerMaybeDragonRage = MOVE_SPLASH; opponentMaybeHighestDamageMove = MOVE_DRAGON_CLAW; playerSpeed = 110; playerMaybeOutdamage = MOVE_TACKLE; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentMaybeHighestDamageMove = MOVE_DRAGON_CLAW; playerSpeed = 110; playerMaybeOutdamage = MOVE_DRAGON_HAMMER; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentMaybeHighestDamageMove = MOVE_DRAGON_CLAW; playerSpeed = 90; playerMaybeOutdamage = MOVE_DRAGON_HAMMER; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_SPLASH; opponentMaybeHighestDamageMove = MOVE_DRAGON_CLAW; playerSpeed = 110; playerMaybeOutdamage = MOVE_DRAGON_HAMMER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_AGGRON) { Moves(MOVE_CELEBRATE, playerMaybeDragonRage, playerMaybeOutdamage); Speed(playerSpeed); HP(80); MaxHP(281); Attack(256); Defense(396); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_AGGRON) { Moves(MOVE_CELEBRATE, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL, opponentMaybeHighestDamageMove); Speed(100); HP(80); MaxHP(281); Attack(256); Defense(396); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        if (playerMaybeDragonRage == MOVE_SPLASH && opponentMaybeHighestDamageMove == MOVE_DRAGON_CLAW && playerSpeed == 110 && playerMaybeOutdamage == MOVE_TACKLE)
        {
            TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STEALTH_ROCK); SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
        }
        else if (playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentMaybeHighestDamageMove == MOVE_DRAGON_CLAW && playerSpeed == 110 && playerMaybeOutdamage == MOVE_DRAGON_HAMMER)
        {
            TURN { MOVE(player, playerMaybeDragonRage); EXPECT_MOVE(opponent, MOVE_STEALTH_ROCK); SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
        }
        else if (playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentMaybeHighestDamageMove == MOVE_DRAGON_CLAW && playerSpeed == 90 && playerMaybeOutdamage == MOVE_DRAGON_HAMMER)
        {
            TURN { MOVE(player, playerMaybeDragonRage); EXPECT_MOVE(opponent, MOVE_STEALTH_ROCK); SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 80); }
        }
        else if (playerMaybeDragonRage == MOVE_SPLASH && opponentMaybeHighestDamageMove == MOVE_DRAGON_CLAW && playerSpeed == 110 && playerMaybeOutdamage == MOVE_DRAGON_HAMMER)
        {
            TURN { MOVE(player, playerMaybeOutdamage); EXPECT_MOVE(opponent, MOVE_STEALTH_ROCK); SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI DRAGON TAIL DEBUGGING")
{
    u32 playerMaybeDragonRage;
    u32 playerMaybeOutdamage;
    u32 opponentMaybeHighestDamageMove;
    u32 playerSpeed;

    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentMaybeHighestDamageMove = MOVE_DRAGON_CLAW; playerSpeed = 110; playerMaybeOutdamage = MOVE_DRAGON_HAMMER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_AGGRON) { Moves(MOVE_CELEBRATE, playerMaybeDragonRage, playerMaybeOutdamage); Speed(playerSpeed); HP(80); MaxHP(281); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_AGGRON) { Moves(MOVE_CELEBRATE, MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL, opponentMaybeHighestDamageMove); Speed(100); HP(90); MaxHP(281); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); } 
    } WHEN {
        if (playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentMaybeHighestDamageMove == MOVE_DRAGON_CLAW && playerSpeed == 110 && playerMaybeOutdamage == MOVE_DRAGON_HAMMER)
        {
            TURN { MOVE(player, playerMaybeOutdamage); EXPECT_MOVE(opponent, MOVE_STEALTH_ROCK); SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 100); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_DRAGON_TAIL, 106); }
        }
    }
}

//Bazzo note: apparently 
AI_DOUBLE_BATTLE_TEST("AI Scores Pollen Puff on Partner correctly")
{
    u32 partnerHP;

    PARAMETRIZE { partnerHP = 100; }
    PARAMETRIZE { partnerHP = 60; }
    PARAMETRIZE { partnerHP = 40; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_POLLEN_PUFF); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(partnerHP); MaxHP(100); }
        ASSUME(GetMoveEffect(MOVE_POLLEN_PUFF) == EFFECT_HIT_ENEMY_HEAL_ALLY);
    } WHEN {
        if (partnerHP == 100)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_POLLEN_PUFF, 80, target:opponentRight); }
        }
        else if (partnerHP == 60)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_POLLEN_PUFF, 106, target:opponentRight); }
        }
        else if (partnerHP == 40)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_POLLEN_PUFF, 107, target:opponentRight); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI Targets correctly like Lucid")
{
    u32 playerLeftHP;
    u32 playerRightHP;

    PARAMETRIZE { playerLeftHP = 150; playerRightHP = 150; }
    PARAMETRIZE { playerLeftHP = 150; playerRightHP = 100; }
    PARAMETRIZE { playerLeftHP = 100; playerRightHP = 150; }
    PARAMETRIZE { playerLeftHP = 40; playerRightHP = 150; }
    PARAMETRIZE { playerLeftHP = 100; playerRightHP = 40; }
    PARAMETRIZE { playerLeftHP = 40; playerRightHP = 40; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerLeftHP); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerRightHP); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DRAGON_RAGE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_NIGHT_SHADE); Level(100); }
    } WHEN {
        if (playerLeftHP == 150 && playerRightHP == 150)
        {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target:playerLeft); EXPECT_MOVE(opponentRight, MOVE_NIGHT_SHADE, target:playerLeft); }
        }
        else if (playerLeftHP == 150 && playerRightHP == 100)
        {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target:playerLeft); EXPECT_MOVE(opponentRight, MOVE_NIGHT_SHADE, target:playerRight); }
        }
        else if (playerLeftHP == 100 && playerRightHP == 150)
        {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target:playerRight); EXPECT_MOVE(opponentRight, MOVE_NIGHT_SHADE, target:playerLeft); }
        }
        else if (playerLeftHP == 40 && playerRightHP == 150)
        {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target:playerLeft); EXPECT_MOVE(opponentRight, MOVE_NIGHT_SHADE, target:playerRight); }
        }
        else if (playerLeftHP == 100 && playerRightHP == 40)
        {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target:playerRight); EXPECT_MOVE(opponentRight, MOVE_NIGHT_SHADE, target:playerLeft); }
        }
        else if (playerLeftHP == 40 && playerRightHP == 40)
        {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target:playerLeft); EXPECT_MOVE(opponentRight, MOVE_NIGHT_SHADE, target:playerRight); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores first condition of speed drop AI")
{
    u32 playerHP;

    PARAMETRIZE { playerHP = 87; }
    PARAMETRIZE { playerHP = 187; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerHP); Speed(20); Defense(152); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_ROCK_TOMB, MOVE_FEINT_ATTACK); Speed(15); Attack(102); }
    } WHEN {
        if (playerHP == 87)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_ROCK_TOMB, 108); }
        }
        else if (playerHP == 187)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_ROCK_TOMB, 107); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI makes use of the Tag Partner flag correctly")
{
    u32 opponentTestedMove;
    u32 playerTestMove1;
    u32 playerSpeed;
    u32 opponentHP;

    PARAMETRIZE { opponentTestedMove = MOVE_RAPID_SPIN; playerTestMove1 = MOVE_SPIKES; playerSpeed = 10; opponentHP = 100; }
    PARAMETRIZE { opponentTestedMove = MOVE_PROTECT; playerTestMove1 = MOVE_SPLASH; playerSpeed = 20; opponentHP = 80; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_TAG_PARTNER);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerTestMove1, MOVE_DRAGON_RAGE); Speed(playerSpeed); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, opponentTestedMove, MOVE_FEINT_ATTACK); Speed(15); HP(opponentHP); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        if (opponentTestedMove == MOVE_RAPID_SPIN)
        {
            TURN { MOVE(player, playerTestMove1); EXPECT_MOVE(opponent, MOVE_FEINT_ATTACK); }
            TURN { MOVE(player, MOVE_DRAGON_RAGE); EXPECT_MOVE(opponent, opponentTestedMove); SCORE_EQ_VAL(opponent, opponentTestedMove, 109); }
            TURN { SCORE_EQ_VAL(opponent, opponentTestedMove, 100); }
        }
        else if (opponentTestedMove == MOVE_PROTECT)
        {
            TURN { MOVE(player, MOVE_DRAGON_RAGE); EXPECT_MOVE(opponent, MOVE_FEINT_ATTACK); }
            TURN { MOVE(player, MOVE_DRAGON_RAGE); EXPECT_MOVE(opponent, opponentTestedMove); SCORE_EQ_VAL(opponent, opponentTestedMove, 113); }
            TURN { MOVE(player, MOVE_DRAGON_RAGE); EXPECT_MOVE(opponent, MOVE_FEINT_ATTACK); SCORE_EQ_VAL(opponent, opponentTestedMove, 80); }
        }
    }
}
