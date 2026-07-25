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
    KNOWN_FAILING; //think this is setup ai not being updated
    u32 opponentSetUpMove;
    u32 opponentAttack;
    u32 playerAttack;

    PARAMETRIZE { opponentSetUpMove = MOVE_SHARPEN; opponentAttack = MOVE_FIRE_PUNCH; playerAttack = MOVE_TACKLE; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SHARPEN; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_TACKLE; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SHARPEN; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_ICE_HAMMER; }
    PARAMETRIZE { opponentSetUpMove = MOVE_SWORDS_DANCE; opponentAttack = MOVE_FLAME_CHARGE; playerAttack = MOVE_ICE_HAMMER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_ABOMASNOW) { HP(321); Defense(186); Attack(220); Speed(1); Moves(playerAttack, MOVE_CELEBRATE); Ability(ABILITY_SNOW_WARNING); }
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
    //KNOWN_FAILING; //temporarily removed highest setup scoring until that becomes feasible to code
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
    KNOWN_FAILING; //(old pivot move ai)
    u32 pivotMove;
    u32 otherMoveDamageChecker;
    u32 opponentSpeed;
    u32 playerKillingMoveChecker;

    PARAMETRIZE { pivotMove = MOVE_U_TURN; otherMoveDamageChecker = MOVE_X_SCISSOR; opponentSpeed = 110; playerKillingMoveChecker = MOVE_SPLASH;}
    // PARAMETRIZE { pivotMove = MOVE_U_TURN; otherMoveDamageChecker = MOVE_X_SCISSOR; opponentSpeed = 90; playerKillingMoveChecker = MOVE_SPLASH;}
    PARAMETRIZE { pivotMove = MOVE_FLIP_TURN; otherMoveDamageChecker = MOVE_BUG_BITE; opponentSpeed = 110; playerKillingMoveChecker = MOVE_DRACO_METEOR;}
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
        if (pivotMove == MOVE_FLIP_TURN && otherMoveDamageChecker == MOVE_BUG_BITE && opponentSpeed == 110 && playerKillingMoveChecker == MOVE_DRACO_METEOR)
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
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); Moves(MOVE_CELEBRATE, MOVE_NUZZLE, maybeElectroBall, MOVE_THUNDER_SHOCK); }
    } WHEN {
        if (opponentSpeed == 110)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_NUZZLE, 106);
            }
        }
        else if (opponentSpeed == 30)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_NUZZLE, 108);
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
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 108);
            }
        }
        else if (playerAbility == ABILITY_HYPER_CUTTER)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 107);
            }
        }
        else if (playerMaybeKillingMove == MOVE_SPLASH)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_PARTING_SHOT, 105);
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
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWAGGER, 107); }
        }
        if (opponentItem == ITEM_MIRROR_HERB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWAGGER, 110); }
        }
    }
}

// I have no idea where this -10 comes from when it doesn't apply, but 
AI_DOUBLE_BATTLE_TEST("AI scores Follow Me correctly")
{
    KNOWN_FAILING; //Bazzo note: updated follow me ai
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
        OPPONENT(SPECIES_CELEBI) { Moves(MOVE_CELEBRATE, MOVE_GUARD_SPLIT); Defense(100); }
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
    u32 playerAbility;

    PARAMETRIZE { opponentItem = ITEM_LIGHT_BALL; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_NONE; playerAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { opponentItem = ITEM_FLAME_ORB; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_NONE; playerAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { opponentItem = ITEM_TOXIC_ORB; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_BURN; playerAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { opponentItem = ITEM_KINGS_ROCK; maybeFakeOut = MOVE_SPLASH; playerStatus = STATUS1_NONE; playerAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { opponentItem = ITEM_KINGS_ROCK; maybeFakeOut = MOVE_FAKE_OUT; playerStatus = STATUS1_NONE; playerAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { opponentItem = ITEM_KINGS_ROCK; maybeFakeOut = MOVE_FAKE_OUT; playerStatus = STATUS1_NONE; playerAbility = ABILITY_SHIELD_DUST; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Status1(playerStatus); Speed(10); Ability(playerAbility); }
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
        else if (opponentItem == ITEM_KINGS_ROCK && maybeFakeOut == MOVE_FAKE_OUT && playerAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 108); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, maybeFakeOut); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 109); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_FLING); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 80); }
        }
        else if (opponentItem == ITEM_KINGS_ROCK && maybeFakeOut == MOVE_FAKE_OUT && playerAbility == ABILITY_SHIELD_DUST)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLING, 80); SCORE_EQ_VAL(opponent, maybeFakeOut, 100); }
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
        TURN { SCORE_EQ_VAL(opponent, MOVE_MAGIC_POWDER, 86); }
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

AI_SINGLE_BATTLE_TEST("AI correctly scores first condition of speed boost AI")
{
    u32 playerHP;

    PARAMETRIZE { playerHP = 83; }
    PARAMETRIZE { playerHP = 187; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerHP); Speed(20); Defense(152); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FLAME_CHARGE, MOVE_FEINT_ATTACK); Speed(15); Attack(102); }
    } WHEN {
        if (playerHP == 83)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLAME_CHARGE, 108); }
        }
        else if (playerHP == 187)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLAME_CHARGE, 107); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI Correctly scores Wrap Effect moves")
{
    u32 playerItem;
    u32 player2HKOCheck;

    PARAMETRIZE { playerItem = ITEM_SHED_SHELL; player2HKOCheck = MOVE_SPLASH; }
    PARAMETRIZE { playerItem = ITEM_NONE; player2HKOCheck = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { playerItem = ITEM_NONE; player2HKOCheck = MOVE_SPLASH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_GYARADOS) { Moves(MOVE_CELEBRATE, player2HKOCheck); Item(playerItem); Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_GYARADOS);
        OPPONENT(SPECIES_GYARADOS) { Moves(MOVE_CELEBRATE, MOVE_WHIRLPOOL, MOVE_SURF); HP(80); Ability(ABILITY_INTIMIDATE); } 
        OPPONENT(SPECIES_GYARADOS);
    } WHEN {
        if (playerItem == ITEM_SHED_SHELL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_WHIRLPOOL, 100); }
        }
        else if (playerItem == ITEM_NONE && player2HKOCheck == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_WHIRLPOOL, 106); }
        }
        else if (playerItem == ITEM_NONE && player2HKOCheck == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_WHIRLPOOL, 107); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores attack drop damaging moves correctly")
{
    u32 maybePhysicalMovePlayer;
    u32 sometimesLeafBlade;

    PARAMETRIZE { maybePhysicalMovePlayer = MOVE_WATER_GUN; sometimesLeafBlade = MOVE_LEAF_BLADE; }
    PARAMETRIZE { maybePhysicalMovePlayer = MOVE_WATERFALL; sometimesLeafBlade = MOVE_LEAF_BLADE; }
    PARAMETRIZE { maybePhysicalMovePlayer = MOVE_JET_PUNCH; sometimesLeafBlade = MOVE_VINE_WHIP; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, maybePhysicalMovePlayer); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TROP_KICK, sometimesLeafBlade); }
    } WHEN {
        if (maybePhysicalMovePlayer == MOVE_WATER_GUN)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TROP_KICK, 100); }
        }
        else if (maybePhysicalMovePlayer == MOVE_WATERFALL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TROP_KICK, 107); }
        }
        else if (maybePhysicalMovePlayer == MOVE_JET_PUNCH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TROP_KICK, 108); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores evasion boosting moves correctly")
{
    u32 opponentHP;

    PARAMETRIZE { opponentHP = 100; }
    PARAMETRIZE { opponentHP = 150; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DRAGON_RAGE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DOUBLE_TEAM); HP(opponentHP); }
    } WHEN {
        if (opponentHP == 100)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_DOUBLE_TEAM, 106); }
        }
        else if (opponentHP == 150)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_DOUBLE_TEAM, 107); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores weather setting moves correctly")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_CHILLY_RECEPTION); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_CHILLY_RECEPTION); } 
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_CHILLY_RECEPTION); SCORE_EQ_VAL(opponent, MOVE_CHILLY_RECEPTION, 107); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_CHILLY_RECEPTION, 80); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores OHKO moves correctly")
{
    u32 opponentHP;

    PARAMETRIZE { opponentHP = 60; }
    PARAMETRIZE { opponentHP = 40; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_HORN_DRILL); HP(opponentHP); MaxHP(100); }
    } WHEN {
        if (opponentHP == 60)
        {
            TURN {SCORE_EQ_VAL (opponent, MOVE_HORN_DRILL, 106); }
        }
        else if (opponentHP == 40)
        {
            TURN {SCORE_EQ_VAL (opponent, MOVE_HORN_DRILL, 109); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Mean Look correctly")
{
    u32 playerItem;
    u32 playerSpecies;

    PARAMETRIZE { playerItem = ITEM_NONE; playerSpecies = SPECIES_GASTLY; }
    PARAMETRIZE { playerItem = ITEM_SHED_SHELL; playerSpecies = SPECIES_GYARADOS; }
    PARAMETRIZE { playerItem = ITEM_NONE; playerSpecies = SPECIES_GYARADOS; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(playerSpecies) { Moves(MOVE_CELEBRATE); Item(playerItem); }
        PLAYER(SPECIES_GYARADOS);
        OPPONENT(SPECIES_GYARADOS) { Moves(MOVE_CELEBRATE, MOVE_MEAN_LOOK); }
    } WHEN {
        if (playerSpecies == SPECIES_GASTLY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MEAN_LOOK, 80); }
        }
        else if (playerItem == ITEM_SHED_SHELL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MEAN_LOOK, 80); }
        }
        else if (playerItem == ITEM_NONE && playerSpecies == SPECIES_GYARADOS)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MEAN_LOOK, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MEAN_LOOK); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_MEAN_LOOK, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Smack Down correctly")
{
    u32 playerAbility;
    u32 groundMoveCheck;

    PARAMETRIZE { playerAbility = ABILITY_LEVITATE; groundMoveCheck = MOVE_SPLASH; }
    PARAMETRIZE { playerAbility = ABILITY_ADAPTABILITY; groundMoveCheck = MOVE_FISSURE; }
    PARAMETRIZE { playerAbility = ABILITY_LEVITATE; groundMoveCheck = MOVE_FISSURE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(playerAbility); }
        OPPONENT(SPECIES_GYARADOS) { Moves(MOVE_CELEBRATE, MOVE_SMACK_DOWN, MOVE_STONE_EDGE, groundMoveCheck); }
    } WHEN {
        if (groundMoveCheck == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SMACK_DOWN, 100); }
        }
        else if (playerAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SMACK_DOWN, 100); }
        }
        else if (playerAbility == ABILITY_LEVITATE && groundMoveCheck == MOVE_FISSURE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SMACK_DOWN, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Item removing moves correctly")
{
    u32 playerItem;
    u32 itemRemovingMove;

    PARAMETRIZE { playerItem = ITEM_ORAN_BERRY; itemRemovingMove = MOVE_BUG_BITE; }
    PARAMETRIZE { playerItem = ITEM_FIRE_GEM; itemRemovingMove = MOVE_BUG_BITE; }
    PARAMETRIZE { playerItem = ITEM_FIRE_GEM; itemRemovingMove = MOVE_INCINERATE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Item(playerItem); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, itemRemovingMove, MOVE_FLAMETHROWER, MOVE_X_SCISSOR); }
    } WHEN {
        if (playerItem == ITEM_ORAN_BERRY && itemRemovingMove == MOVE_BUG_BITE)
        {
            TURN { SCORE_EQ_VAL(opponent, itemRemovingMove, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_X_SCISSOR); }
            //TURN { SCORE_EQ_VAL(opponent, itemRemovingMove, 100); }
        }
        else if (playerItem == ITEM_FIRE_GEM && itemRemovingMove == MOVE_BUG_BITE)
        {
            TURN { SCORE_EQ_VAL(opponent, itemRemovingMove, 100); }
        }
        else if (playerItem == ITEM_FIRE_GEM && itemRemovingMove == MOVE_INCINERATE)
        {
            TURN { SCORE_EQ_VAL(opponent, itemRemovingMove, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI knows item has been used for Incinerate AI")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_EMBER); Item(ITEM_FIRE_GEM); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_INCINERATE, MOVE_FLAMETHROWER); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_INCINERATE, 106); MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_FLAMETHROWER); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_INCINERATE, 100); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores damage/kills/highest damage on Fake Out")
{
    u32 opponentHP;

    PARAMETRIZE { opponentHP = 100; }
    PARAMETRIZE { opponentHP = 1; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(opponentHP); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FAKE_OUT); }
    } WHEN {
        if (opponentHP == 100)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FAKE_OUT, 117); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_FAKE_OUT); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_FAKE_OUT, 80); }
        }
        else if (opponentHP == 1)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FAKE_OUT, 124); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly avoids Leech Seed when it won't work")
{
    u32 playerAbility;

    PARAMETRIZE { playerAbility = ABILITY_LIQUID_OOZE; }
    PARAMETRIZE { playerAbility = ABILITY_MAGIC_GUARD; }
    PARAMETRIZE { playerAbility = ABILITY_MAGIC_BOUNCE; }
    PARAMETRIZE { playerAbility = ABILITY_ADAPTABILITY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(playerAbility); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_LEECH_SEED); }
    } WHEN {
        if (playerAbility == ABILITY_LIQUID_OOZE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_LEECH_SEED, 80); }
        }
        else if (playerAbility == ABILITY_MAGIC_GUARD)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_LEECH_SEED, 80); }
        }
        else if (playerAbility == ABILITY_MAGIC_BOUNCE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_LEECH_SEED, 80); }
        }
        else if (playerAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_LEECH_SEED, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores the leftover Pivot Move conditions")
{
    KNOWN_FAILING; //updated pivot move ai
    u32 playerMaybeOutdamage;
    u32 playerMaybeIntimidate;

    PARAMETRIZE { playerMaybeOutdamage = MOVE_SPLASH; playerMaybeIntimidate = ABILITY_AROMA_VEIL; }
    PARAMETRIZE { playerMaybeOutdamage = MOVE_WATERFALL; playerMaybeIntimidate = ABILITY_INTIMIDATE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeOutdamage); HP(300); Ability(playerMaybeIntimidate); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FLIP_TURN); HP(300); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (playerMaybeOutdamage == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLIP_TURN, 106); }
        }
        else if (playerMaybeOutdamage == MOVE_WATERFALL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FLIP_TURN, 108); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Aurora Veil")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_WATER_GUN); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_AURORA_VEIL); Item(ITEM_LIGHT_CLAY); Ability(ABILITY_SNOW_WARNING); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_AURORA_VEIL, 109); }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Counter")
{
    u32 playerMaybeDragonRage;
    u32 opponentItem;
    u32 playerMaybePhysicalMove;

    PARAMETRIZE { playerMaybeDragonRage = MOVE_SPLASH; opponentItem = ITEM_NONE; playerMaybePhysicalMove = MOVE_TICKLE; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentItem = ITEM_NONE; playerMaybePhysicalMove = MOVE_TACKLE; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentItem = ITEM_FOCUS_SASH; playerMaybePhysicalMove = MOVE_TACKLE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeDragonRage, playerMaybePhysicalMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_COUNTER, MOVE_TACKLE); Item(opponentItem); HP(40); MaxHP(40); }
    } WHEN {
        if (playerMaybePhysicalMove == MOVE_TICKLE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_COUNTER, 80); }
        }
        else if (playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_COUNTER, 80); }
        }
        else if (opponentItem == ITEM_FOCUS_SASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_COUNTER, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Metal Burst")
{
    u32 playerMaybeDragonRage;
    u32 opponentItem;
    u32 playerMaybePhysicalMove;
    u32 opponentSpeed;

    PARAMETRIZE { playerMaybeDragonRage = MOVE_SPLASH; opponentItem = ITEM_NONE; playerMaybePhysicalMove = MOVE_TICKLE; opponentSpeed = 90; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentItem = ITEM_NONE; playerMaybePhysicalMove = MOVE_TACKLE; opponentSpeed = 90; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentItem = ITEM_FOCUS_SASH; playerMaybePhysicalMove = MOVE_TACKLE; opponentSpeed = 90; }
    PARAMETRIZE { playerMaybeDragonRage = MOVE_DRAGON_RAGE; opponentItem = ITEM_FOCUS_SASH; playerMaybePhysicalMove = MOVE_TACKLE; opponentSpeed = 110; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeDragonRage, playerMaybePhysicalMove); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_METAL_BURST, MOVE_TACKLE); Item(opponentItem); HP(40); MaxHP(40); Speed(opponentSpeed); }
    } WHEN {
        if (playerMaybePhysicalMove == MOVE_TICKLE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_METAL_BURST, 80); }
        }
        else if (playerMaybeDragonRage == MOVE_DRAGON_RAGE && opponentItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_METAL_BURST, 80); }
        }
        else if (opponentItem == ITEM_FOCUS_SASH && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_METAL_BURST, 106); }
        }
        else if (opponentItem == ITEM_FOCUS_SASH && opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_METAL_BURST, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Rest correctly")
{
    u32 opponentHP;
    u32 opponentStatus;
    u32 opponentItem;

    PARAMETRIZE { opponentHP = 80; opponentStatus = STATUS1_BURN; opponentItem = ITEM_CHESTO_BERRY; }
    PARAMETRIZE { opponentHP = 50; opponentStatus = STATUS1_BURN; opponentItem = ITEM_CHESTO_BERRY; }
    PARAMETRIZE { opponentHP = 50; opponentStatus = STATUS1_FREEZE; opponentItem = ITEM_CHESTO_BERRY; }

    GIVEN {
        //ASSUME(GetMoveEffect(MOVE_REST) == EFFECT_REST);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_REST, MOVE_TACKLE); Item(opponentItem); HP(opponentHP); MaxHP(100); Status1(opponentStatus); Speed(110); }
    } WHEN {
        if (opponentHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_REST, 100); }
        }
        if (opponentHP == 50 && opponentStatus == STATUS1_BURN)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_REST, 108); }
        }
        else if (opponentHP == 50 && opponentStatus == STATUS1_FREEZE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_REST, 107); }
        }
    }
}


AI_SINGLE_BATTLE_TEST("AI correctly follows Explosion chart")
{
    u32 opponentHP;

    PARAMETRIZE { opponentHP = 80; }
    PARAMETRIZE { opponentHP = 50; }
    PARAMETRIZE { opponentHP = 20; }
    PARAMETRIZE { opponentHP = 5; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE);  }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_EXPLOSION); HP(opponentHP); MaxHP(100); }
    } WHEN {
        if (opponentHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_EXPLOSION, 109); }
        }
        else if (opponentHP == 50)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_EXPLOSION, 109); }
        }
        else if (opponentHP == 20)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_EXPLOSION, 109); }
        }
        else if (opponentHP == 5)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_EXPLOSION, 109); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Powder")
{
    u32 playerHP;
    u32 maybeFireMove;

    PARAMETRIZE { maybeFireMove = MOVE_SPLASH; playerHP = 80; }
    PARAMETRIZE { maybeFireMove = MOVE_EMBER; playerHP = 70; }
    PARAMETRIZE { maybeFireMove = MOVE_EMBER; playerHP = 20; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, maybeFireMove); HP(playerHP); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_POWDER); }
    } WHEN {
        if (maybeFireMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_POWDER, 80);  }
        }
        else if (playerHP == 70)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_POWDER, 106);  }
        }
        else if (playerHP == 20)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_POWDER, 114);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Pain Split")
{
    u32 playerHP;

    PARAMETRIZE { playerHP = 80; }
    PARAMETRIZE { playerHP = 70; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerHP); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_PAIN_SPLIT); MaxHP(100); HP(75); }
    } WHEN {
        if (playerHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PAIN_SPLIT, 106);  }
        }
        else if (playerHP == 70)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PAIN_SPLIT, 80);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly fails Focus Punch sometimes not seeing kill")
{
    u32 playerHP;

    PARAMETRIZE { playerHP = 80; }
    PARAMETRIZE { playerHP = 30; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); HP(playerHP); Defense(152); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FOCUS_PUNCH); Attack(102); Speed(1); }
    } WHEN {
        if (playerHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FOCUS_PUNCH, 88);  }
        }
        else if (playerHP == 30)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FOCUS_PUNCH, 112);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly fails Focus Punch sometimes not seeing kill")
{
    u32 playerHP;

    PARAMETRIZE { playerHP = 80; }
    PARAMETRIZE { playerHP = 30; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); HP(playerHP); Defense(152); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_FOCUS_PUNCH); Attack(102); Speed(1); }
    } WHEN {
        if (playerHP == 80)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FOCUS_PUNCH, 88);  }
        }
        else if (playerHP == 30)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_FOCUS_PUNCH, 112);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Magnet Rise")
{
    u32 playerMaybeGroundMove;

    PARAMETRIZE { playerMaybeGroundMove = MOVE_SPLASH; }
    PARAMETRIZE { playerMaybeGroundMove = MOVE_EARTHQUAKE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeGroundMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_MAGNET_RISE); }
    } WHEN {
        if (playerMaybeGroundMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MAGNET_RISE, 100);  }
        }
        else if (playerMaybeGroundMove == MOVE_EARTHQUAKE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MAGNET_RISE, 106);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Destiny Bond")
{
    u32 playerMaybeKillingMove;
    u32 opponentSpeed;

    PARAMETRIZE { playerMaybeKillingMove = MOVE_SPLASH; opponentSpeed = 110;}
    PARAMETRIZE { playerMaybeKillingMove = MOVE_DRAGON_RAGE; opponentSpeed = 90; }
    PARAMETRIZE { playerMaybeKillingMove = MOVE_DRAGON_RAGE; opponentSpeed = 110; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeKillingMove); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_DESTINY_BOND); HP(40); Speed(opponentSpeed); }
    } WHEN {
        if (playerMaybeKillingMove == MOVE_SPLASH && opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_DESTINY_BOND, 106);  }
        }
        else if (playerMaybeKillingMove == MOVE_DRAGON_RAGE && opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_DESTINY_BOND, 106);  }
        }
        else if (playerMaybeKillingMove == MOVE_DRAGON_RAGE && opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_DESTINY_BOND, 107);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Stockpile")
{
    u32 playerMaybeKillingMove;

    PARAMETRIZE { playerMaybeKillingMove = MOVE_SPLASH; }
    PARAMETRIZE { playerMaybeKillingMove = MOVE_DRAGON_RAGE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerMaybeKillingMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_STOCKPILE); HP(40); }
    } WHEN {
        if (playerMaybeKillingMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 107); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 80); }
        }
        else if (playerMaybeKillingMove == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 80);  }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Swallow")
{
    u32 opponentHP;
    u32 opponentStatus;

    PARAMETRIZE { opponentHP = 100; opponentStatus = STATUS1_NONE; }
    PARAMETRIZE { opponentHP = 50; opponentStatus = STATUS1_NONE; }
    PARAMETRIZE { opponentHP = 50; opponentStatus = STATUS1_TOXIC_POISON; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_STOCKPILE, MOVE_SWALLOW); HP(opponentHP); MaxHP(100); Status1(opponentStatus); }
    } WHEN {
        if (opponentHP == 100)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 107); SCORE_EQ_VAL(opponent, MOVE_SWALLOW, 80); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWALLOW, 80); }
        }
        else if (opponentHP == 50 && opponentStatus == STATUS1_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 107); SCORE_EQ_VAL(opponent, MOVE_SWALLOW, 80); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWALLOW, 106); }
        }
        else if (opponentHP == 50 && opponentStatus == STATUS1_TOXIC_POISON)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_STOCKPILE, 107); SCORE_EQ_VAL(opponent, MOVE_SWALLOW, 80); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_SWALLOW, 105); }
        }
    }
}

//Bazzo Note: gets the +8 for highest damage here still since it technically is...
AI_SINGLE_BATTLE_TEST("AI correctly scores Spit Up")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(49); SpDefense(152); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_STOCKPILE, MOVE_SPIT_UP); SpAttack(102); Speed(2); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SPIT_UP, 88); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_SPIT_UP, 115); } 
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Curse")
{
    u32 opponentSpecies;
    u32 opponent2HKOCheck;
    u32 player3HKOCheck;

    PARAMETRIZE { opponentSpecies = SPECIES_WOBBUFFET; opponent2HKOCheck = MOVE_SPLASH; player3HKOCheck = MOVE_SPLASH; }
    PARAMETRIZE { opponentSpecies = SPECIES_WOBBUFFET; opponent2HKOCheck = MOVE_SPLASH; player3HKOCheck = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { opponentSpecies = SPECIES_HAUNTER; opponent2HKOCheck = MOVE_SPLASH; player3HKOCheck = MOVE_SPLASH; }
    PARAMETRIZE { opponentSpecies = SPECIES_HAUNTER; opponent2HKOCheck = MOVE_DRAGON_RAGE; player3HKOCheck = MOVE_SPLASH; }


    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, player3HKOCheck); HP(80); }
        OPPONENT(opponentSpecies) { Moves(MOVE_CELEBRATE, MOVE_CURSE, opponent2HKOCheck, MOVE_POISON_STING); HP(120); }
    } WHEN {
        if(opponentSpecies == SPECIES_WOBBUFFET && opponent2HKOCheck == MOVE_SPLASH && player3HKOCheck == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CURSE, 107); }
        }
        else if(opponentSpecies == SPECIES_WOBBUFFET && opponent2HKOCheck == MOVE_SPLASH && player3HKOCheck == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CURSE, 106); }
        }
        else if(opponentSpecies == SPECIES_HAUNTER && opponent2HKOCheck == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CURSE, 107); }
        }
        else if(opponentSpecies == SPECIES_HAUNTER && opponent2HKOCheck == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CURSE, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Teleport")
{
    u32 maybeDragonRage;

    PARAMETRIZE { maybeDragonRage = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { maybeDragonRage = MOVE_SPLASH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, maybeDragonRage); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE, MOVE_TELEPORT); HP(40); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if(maybeDragonRage == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TELEPORT, 80); }
        }
        else if(maybeDragonRage == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TELEPORT, 105); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_TACKLE); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_TELEPORT, 106); } 
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Clangorous Soul")
{
    u32 maybeDragonRage;
    u32 maybeStatRiseAbility;
    u32 opponentMaxHP;

    PARAMETRIZE { maybeDragonRage = MOVE_DRAGON_RAGE; opponentMaxHP = 60; maybeStatRiseAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { maybeDragonRage = MOVE_SPLASH; opponentMaxHP = 120; maybeStatRiseAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { maybeDragonRage = MOVE_SPLASH; opponentMaxHP = 60; maybeStatRiseAbility = ABILITY_DOWNLOAD; }
    PARAMETRIZE { maybeDragonRage = MOVE_SPLASH; opponentMaxHP = 60; maybeStatRiseAbility = ABILITY_ADAPTABILITY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, maybeDragonRage); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_CLANGOROUS_SOUL); HP(40); MaxHP(opponentMaxHP); Ability(maybeStatRiseAbility); }
    } WHEN {
        if(maybeDragonRage == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CLANGOROUS_SOUL, 80); }
        }
        else if(opponentMaxHP == 120)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CLANGOROUS_SOUL, 80); } 
        }
        else if(maybeStatRiseAbility == ABILITY_DOWNLOAD)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_CLANGOROUS_SOUL, 80); } 
        }
        else if(maybeDragonRage == MOVE_SPLASH && opponentMaxHP == 60 && maybeStatRiseAbility == ABILITY_ADAPTABILITY)
        { DebugPrintf("test 4");
            TURN { SCORE_EQ_VAL(opponent, MOVE_CLANGOROUS_SOUL, 112); } 
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Whirlwind/Roar")
{
    u32 maybeDragonRage;

    PARAMETRIZE { maybeDragonRage = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { maybeDragonRage = MOVE_SPLASH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, maybeDragonRage); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_STEALTH_ROCK, MOVE_WHIRLWIND); HP(40); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if(maybeDragonRage == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_WHIRLWIND, 80); }
        }
        else if(maybeDragonRage == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_WHIRLWIND, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_STEALTH_ROCK); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_WHIRLWIND, 107); } 
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Mirror Move")
{
    u32 opponentSpeed;

    PARAMETRIZE { opponentSpeed = 1; }
    PARAMETRIZE { opponentSpeed = 3; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_MIRROR_MOVE); Speed(opponentSpeed); }
    } WHEN {
        if (opponentSpeed == 1)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MIRROR_MOVE, 106); }
        }
        else if (opponentSpeed == 3)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MIRROR_MOVE, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Gravity")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE);  }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_GRAVITY); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_GRAVITY, 113); }
        TURN { SCORE_EQ_VAL(opponent, MOVE_GRAVITY, 80); }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Embargo")
{
    u32 playerItem;

    PARAMETRIZE { playerItem = ITEM_ULTRA_BALL; }
    PARAMETRIZE { playerItem = ITEM_SHED_SHELL; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Item(playerItem); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_EMBARGO); }
    } WHEN {
        if (playerItem == ITEM_ULTRA_BALL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_EMBARGO, 100); }
        }
        else if (playerItem == ITEM_SHED_SHELL)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_EMBARGO, 106); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_EMBARGO);  }
            TURN { SCORE_EQ_VAL(opponent, MOVE_EMBARGO, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Trick Room")
{
    u32 opponentSpeed;

    PARAMETRIZE { opponentSpeed = 110; }
    PARAMETRIZE { opponentSpeed = 90; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TRICK_ROOM); Speed(opponentSpeed); }
    } WHEN {
        if (opponentSpeed == 110)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK_ROOM, 100); }
        }
        else if (opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK_ROOM, 111); MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_TRICK_ROOM);  }
            TURN { SCORE_EQ_VAL(opponent, MOVE_TRICK_ROOM, 80); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI correctly scores Instruct")
{
    u32 opponentSpeed;

    PARAMETRIZE { opponentSpeed = 110; }
    PARAMETRIZE { opponentSpeed = 90; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_INSTRUCT); Speed(opponentSpeed); }
    } WHEN {
        if (opponentSpeed == 110)
        {
            TURN { 
                SCORE_EQ_VAL(opponentRight, MOVE_INSTRUCT, 80, target:opponentLeft);
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, MOVE_TACKLE);
                EXPECT_MOVE(opponentRight, MOVE_CELEBRATE);
            }
            TURN { SCORE_EQ_VAL(opponentRight, MOVE_INSTRUCT, 108, target:opponentLeft); }
        }
        else if (opponentSpeed == 90)
        {
            TURN { SCORE_EQ_VAL(opponentRight, MOVE_INSTRUCT, 108, target:opponentLeft); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI correctly scores Mat Block")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_MAT_BLOCK); Speed(100); }
    } WHEN {
            TURN { 
                SCORE_EQ_VAL(opponentRight, MOVE_MAT_BLOCK, 113, target:opponentLeft);
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, MOVE_TACKLE);
                EXPECT_MOVE(opponentRight, MOVE_MAT_BLOCK);
            }
            TURN { SCORE_EQ_VAL(opponentRight, MOVE_MAT_BLOCK, 0, target:opponentLeft); }
        }
}

AI_DOUBLE_BATTLE_TEST("AI correctly scores Pledge Moves")
{
    u32 maybePledgeMove;

    PARAMETRIZE { maybePledgeMove = MOVE_SPLASH; }
    PARAMETRIZE { maybePledgeMove = MOVE_WATER_PLEDGE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_GRASS_PLEDGE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, maybePledgeMove); }
    } WHEN {
        if (maybePledgeMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_GRASS_PLEDGE, 108, target:playerLeft); }
        }
        else if (maybePledgeMove == MOVE_WATER_PLEDGE)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_GRASS_PLEDGE, 109, target:playerLeft); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI correctly scores Spicy Extract")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_SPICY_EXTRACT); }
    } WHEN {
        {
            TURN { 
                SCORE_EQ_VAL(opponentRight, MOVE_SPICY_EXTRACT, 109, target:opponentLeft);
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentRight, MOVE_SPICY_EXTRACT, target:opponentLeft); 
            }
            TURN { SCORE_EQ_VAL(opponentRight, MOVE_SPICY_EXTRACT, 105, target:opponentLeft); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Salt Cure")
{
    u32 playerSpecies;

    PARAMETRIZE { playerSpecies = SPECIES_WOBBUFFET; }
    PARAMETRIZE { playerSpecies = SPECIES_CUFANT; }
    PARAMETRIZE { playerSpecies = SPECIES_EMPOLEON; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(playerSpecies) { Moves(MOVE_CELEBRATE, MOVE_FLIP_TURN); Speed(2); }
        PLAYER(SPECIES_CUFANT) { Moves(MOVE_CELEBRATE); Speed(2); };
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_SALT_CURE, MOVE_ICE_PUNCH); Speed(1); }
    } WHEN {
        if (playerSpecies == SPECIES_WOBBUFFET)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SALT_CURE, 106); }
        }
        else if (playerSpecies == SPECIES_CUFANT)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SALT_CURE, 107); }
        }
        else if (playerSpecies == SPECIES_EMPOLEON)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_SALT_CURE, 108);
            MOVE(player, MOVE_FLIP_TURN);
            SEND_OUT(player, 1);
            EXPECT_MOVE(opponent, MOVE_SALT_CURE);
            }
            TURN { SCORE_EQ_VAL(opponent, MOVE_SALT_CURE, 100); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Haze")
{
    u32 playerAbility;
    u32 opponentAbility;

    PARAMETRIZE { playerAbility = ABILITY_INTIMIDATE; opponentAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { playerAbility = ABILITY_DOWNLOAD; opponentAbility = ABILITY_ADAPTABILITY; }
    PARAMETRIZE { playerAbility = ABILITY_INTIMIDATE; opponentAbility = ABILITY_DOWNLOAD; }
    PARAMETRIZE { playerAbility = ABILITY_DOWNLOAD; opponentAbility = ABILITY_INTIMIDATE; }
    PARAMETRIZE { playerAbility = ABILITY_ADAPTABILITY; opponentAbility = ABILITY_ADAPTABILITY; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(playerAbility); SpDefense(1); Defense(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_HAZE); Ability(opponentAbility); SpDefense(1); Defense(2); }
    } WHEN {
        if (playerAbility == ABILITY_INTIMIDATE && opponentAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_HAZE, 106); }
        }
        else if (playerAbility == ABILITY_DOWNLOAD && opponentAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_HAZE, 106); }
        }
        else if (playerAbility == ABILITY_INTIMIDATE && opponentAbility == ABILITY_DOWNLOAD)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_HAZE, 100); }
        }
        else if (playerAbility == ABILITY_DOWNLOAD && opponentAbility == ABILITY_INTIMIDATE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_HAZE, 100); }
        }
        else if (playerAbility == ABILITY_ADAPTABILITY && opponentAbility == ABILITY_ADAPTABILITY)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_HAZE, 80); }
        }
    }
}

//Bazzo Note: this test is a bit weird since protect actually targets itself when used but the scoring is looking at player
AI_DOUBLE_BATTLE_TEST("AI correctly scores Protect in Doubles")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_PROTECT, MOVE_CELEBRATE); }
    } WHEN {
        {
            TURN { 
                SCORE_EQ_VAL(opponentRight, MOVE_PROTECT, 106, target:playerLeft);
                MOVE(playerLeft, MOVE_CELEBRATE);
                MOVE(playerRight, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentLeft, MOVE_CELEBRATE);
                EXPECT_MOVE(opponentRight, MOVE_PROTECT, target:opponentRight); 
            }
            TURN { SCORE_EQ_VAL(opponentRight, MOVE_PROTECT, 80, target:playerLeft); }
        }
    }
}
 
AI_SINGLE_BATTLE_TEST("AI correctly scores Protect in Singles")
{
    KNOWN_FAILING; // At the moment it's hard to get protect to succeed on the second turn to check AI for the third...
    u32 playerStatus;
    u32 opponentStatus;

    PARAMETRIZE { playerStatus = STATUS1_BURN; opponentStatus = STATUS1_NONE; }
    PARAMETRIZE { playerStatus = STATUS1_NONE; opponentStatus = STATUS1_BURN; }

    GIVEN {
        gDisableStructs[opponent - gBattleMons].protectUses = 2;
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TACKLE); Status1(playerStatus); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_PROTECT); Status1(opponentStatus); }
    } WHEN {
        if (playerStatus == STATUS1_BURN)
        {
            TURN { 
                SCORE_EQ_VAL(opponent, MOVE_PROTECT, 108);
                MOVE(player, MOVE_TACKLE);
                EXPECT_MOVE(opponent, MOVE_PROTECT); 
            }
            TURN { 
                SCORE_EQ_VAL(opponent, MOVE_PROTECT, 108);
                MOVE(player, MOVE_TACKLE);
                //EXPECT_MOVE(opponent, MOVE_PROTECT, WITH_RNG(RNG_PROTECT_FAIL, TRUE)); 
                EXPECT_MOVE(opponent, MOVE_PROTECT, WITH_RNG(RNG_PROTECT_FAIL, 0)); 
            }
            TURN { 
                SCORE_EQ_VAL(opponent, MOVE_PROTECT, 80); 
                //EXPECT(gDisableStructs[B_POSITION_OPPONENT_LEFT].protectUses == 0);
            }
        }
        else if (playerStatus == STATUS1_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_PROTECT, 105); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Taunt")
{
    u32 maybeStatusMove;

    PARAMETRIZE { maybeStatusMove = MOVE_TACKLE; }
    PARAMETRIZE { maybeStatusMove = MOVE_THUNDER_WAVE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(maybeStatusMove, MOVE_WATER_GUN); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_TAUNT); }
    } WHEN {
        if (maybeStatusMove == MOVE_TACKLE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TAUNT, 80);
            MOVE(player, MOVE_WATER_GUN);
            EXPECT_MOVE(opponent, MOVE_CELEBRATE);
            }
        }
        else if (maybeStatusMove == MOVE_THUNDER_WAVE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_TAUNT, 108);
            MOVE(player, maybeStatusMove);
            EXPECT_MOVE(opponent, MOVE_TAUNT);
            }
            TURN { SCORE_EQ_VAL(opponent, MOVE_TAUNT, 60);
            MOVE(player, MOVE_WATER_GUN);
            EXPECT_MOVE(opponent, MOVE_CELEBRATE);
            }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Memento")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_MEMENTO); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
            TURN { SCORE_EQ_VAL(opponent, MOVE_MEMENTO, 110); }
    }
}




//TERA TESTS 


AI_SINGLE_BATTLE_TEST("AI correctly always uses tera if it goes from being outdamaged to outdamaging")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_WATER_GUN, MOVE_SURF, MOVE_WATER_PULSE); TeraType(TYPE_NORMAL); Speed(2); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_TACKLE, MOVE_TERA_BLAST, MOVE_ABSORB/*, MOVE_WATER_GUN*/); TeraType(TYPE_GRASS); Speed(1); }
        //PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_SURF, MOVE_SURF, MOVE_SURF, MOVE_SURF); TeraType(TYPE_NORMAL); }
        //OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_TERA_BLAST, MOVE_TERA_BLAST, MOVE_TERA_BLAST, MOVE_TERA_BLAST); TeraType(TYPE_GRASS); }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly sometimes uses tera if both mons kill each other before and after tera")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_SURF); TeraType(TYPE_NORMAL); HP(1);  }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_ENERGY_BALL); TeraType(TYPE_GRASS); HP(1);  }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly sometimes uses tera if it outdamages player before and after tera")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_SQUIRTLE) { Moves(MOVE_SURF); TeraType(TYPE_NORMAL); HP(1); Ability(ABILITY_SHELL_ARMOR); Speed(2); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_ENERGY_BALL); TeraType(TYPE_GRASS); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly always uses tera to score a KO, but makes this a 50/50 if it would die only using Tera")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_ICE_BEAM); TeraType(TYPE_NORMAL); HP(204); Speed(2); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_ENERGY_BALL); TeraType(TYPE_GRASS); HP(130); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_ICE_BEAM); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly never uses tera if it outdamages Player before using tera and not after")
{
    KNOWN_FAILING; //fails because of new same type tera condition
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_VOLCANION) { Moves(MOVE_NIGHT_SHADE, MOVE_CELEBRATE); TeraType(TYPE_NORMAL); HP(60); Level(100); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_TERA_BLAST); TeraType(TYPE_FIRE); HP(110); }
    } WHEN {
        TURN {  }
    } SCENE {
        NOT MESSAGE("The opposing Typhlosion terastallized into the Fire type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly sometimes uses tera if it is outdamaged before and after tera")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_SURF); TeraType(TYPE_NORMAL); Ability(ABILITY_SHELL_ARMOR); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_ENERGY_BALL); TeraType(TYPE_GRASS); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly always uses tera if it plays into kill but can kill ai first")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_ICE_BEAM); TeraType(TYPE_NORMAL); Speed(1); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_FRENZY_PLANT); TeraType(TYPE_GRASS); HP(130); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_ICE_BEAM); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly always uses tera if it can dodge a KO and not get KO'd in Tera form")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_SURF); TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_TACKLE); TeraType(TYPE_GRASS); HP(130); }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Grass type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly always uses tera if it has tera type as its primary type with only one type")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_BLASTOISE) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_TYPHLOSION) { TeraType(TYPE_FIRE); Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Fire type!");
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly uses tera sometimes even if it outdamages Player before using tera and not after if it has the spencer flag")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA
             | AI_FLAG_SPENCER_TERA);
        PLAYER(SPECIES_VOLCANION) { Moves(MOVE_NIGHT_SHADE, MOVE_CELEBRATE); TeraType(TYPE_NORMAL); HP(60); Level(100); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_TERA_BLAST); TeraType(TYPE_WATER); HP(110); }
    } WHEN {
        TURN {  }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Water type!");
    }
}




//Faulty Shield tests - needs item proc rate to be at 90 for the random rng to work properly

/*
SINGLE_BATTLE_TEST("Faulty Shield works properly")
{

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Item(ITEM_FAULTY_SHIELD); }
        OPPONENT(SPECIES_FARFETCHD) { Moves(MOVE_SLASH); Ability(ABILITY_INFILTRATOR); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SLASH); MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_SLASH); MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_SLASH); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Wobbuffet partially covered itself using its Faulty Shield!");

        //MESSAGE("Wobbuffet partially covered itself using its Faulty Shield!");
    }
}


SINGLE_BATTLE_TEST("Focus Band procs multiple times")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Item(ITEM_FOCUS_BAND); HP(1); }
        OPPONENT(SPECIES_FARFETCHD) { Moves(MOVE_SLASH); Ability(OpponentAbility); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SLASH); MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_SLASH); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Wobbuffet hung on using its Focus Band!");

        //MESSAGE("Wobbuffet partially covered itself using its Faulty Shield!");
    }
}

SINGLE_BATTLE_TEST("Delta Stream procs multiple times")
{
    GIVEN {
        PLAYER(SPECIES_RAYQUAZA_MEGA) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_FARFETCHD) { Moves(MOVE_POWDER_SNOW); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_POWDER_SNOW); MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_POWDER_SNOW); MOVE(player, MOVE_CELEBRATE); }
    } //SCENE {
        //MESSAGE("Wobbuffet hung on using its Focus Band!");

        //MESSAGE("Wobbuffet partially covered itself using its Faulty Shield!");
    //}
}

SINGLE_BATTLE_TEST("Faulty Shield isn't disappearing after first use")
{
    //u32 OpponentAbility;
    //u32 OpponentItem;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Item(ITEM_FAULTY_SHIELD); }
        OPPONENT(SPECIES_FARFETCHD) { Moves(MOVE_SLASH, MOVE_KNOCK_OFF); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SLASH); MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Wobbuffet partially covered itself using its Faulty Shield!");

        //MESSAGE("Wobbuffet partially covered itself using its Faulty Shield!");
    }
}
*/

AI_SINGLE_BATTLE_TEST("Checking AI is calcing damage wrong")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_TYPHLOSION) { Moves(MOVE_TERA_BLAST, MOVE_CELEBRATE); HP(297); MaxHP(297); SpDefense(206); }
        OPPONENT(SPECIES_BLASTOISE) { Moves(MOVE_HYDRO_PUMP); SpAttack(206); Ability(ABILITY_SHELL_ARMOR); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponent, MOVE_HYDRO_PUMP, 108); }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Geomancy correctly")
{
    u32 playerKillingMoveChecker;
    u32 opponentItem;

    PARAMETRIZE { playerKillingMoveChecker = MOVE_DRAGON_RAGE; opponentItem = ITEM_POWER_HERB; }
    PARAMETRIZE { playerKillingMoveChecker = MOVE_SPLASH; opponentItem = ITEM_NONE; }
    PARAMETRIZE { playerKillingMoveChecker = MOVE_SPLASH; opponentItem = ITEM_POWER_HERB; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(playerKillingMoveChecker, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_GEOMANCY, MOVE_CELEBRATE); Item(opponentItem); HP(40); }
    } WHEN {
        if (playerKillingMoveChecker == MOVE_DRAGON_RAGE && opponentItem == ITEM_POWER_HERB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GEOMANCY, 80); }
        }
        else if (playerKillingMoveChecker == MOVE_SPLASH && opponentItem == ITEM_NONE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GEOMANCY, 80); }
        }
        else if (playerKillingMoveChecker == MOVE_SPLASH && opponentItem == ITEM_POWER_HERB)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_GEOMANCY, 109); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_GEOMANCY, 80); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly uses tera sometimes when it deals the same damage as player before and after tera seeing that as outdamaging with new tera edit")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TERA);
        PLAYER(SPECIES_TYPHLOSION) { Moves(MOVE_HYPER_BEAM, MOVE_CELEBRATE); TeraType(TYPE_GRASS); }
        OPPONENT(SPECIES_TYPHLOSION) { Moves(MOVE_HYPER_BEAM, MOVE_CELEBRATE); TeraType(TYPE_WATER); }
    } WHEN {
        TURN {  }
    } SCENE {
        MESSAGE("The opposing Typhlosion terastallized into the Water type!");
    }
}

SINGLE_BATTLE_TEST("Threatening Aura correctly boosts dark type damage")
{
    GIVEN {
        PLAYER(SPECIES_FERALIGATR) { Moves(MOVE_CRUNCH, MOVE_CELEBRATE); Ability(ABILITY_THREATENING_AURA); }
        OPPONENT(SPECIES_BRONZOR) { Moves(MOVE_CELEBRATE); HP(210); }
    } WHEN {
        TURN { MOVE(player, MOVE_CRUNCH); }
    } SCENE {
        MESSAGE("The opposing Bronzor fainted!");
    }
}

SINGLE_BATTLE_TEST("Sense Danger correctly gives +2 Crit Chance")
{
    //u32 OpponentAbility;

    //PARAMETRIZE { OpponentAbility = ABILITY_AROMA_VEIL; }
    //PARAMETRIZE { OpponentAbility = ABILITY_SENSE_DANGER; }

    GIVEN {
        PLAYER(SPECIES_ZANGOOSE) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SEVIPER) { Moves(MOVE_DRILL_RUN); Ability(ABILITY_SENSE_DANGER); }
    } WHEN {
        /*if (OpponentAbility == ABILITY_AROMA_VEIL)
        {
            TURN {  }
        } SCENE {
            NOT MESSAGE("A critical hit!");
        }
        else if (OpponentAbility == ABILITY_SENSE_DANGER)
        { */
            TURN { MOVE(opponent, MOVE_DRILL_RUN);/*SCORE_EQ_VAL(opponent, MOVE_DRILL_RUN, 108);*/ }
        } SCENE {
            MESSAGE("A critical hit!");
        }
        //}
    }
//}

SINGLE_BATTLE_TEST("Skitter Speed only grants priority to Bug/Poison-type moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_X_SCISSOR; }
    PARAMETRIZE { move = MOVE_POISON_JAB; }
    PARAMETRIZE { move = MOVE_FLARE_BLITZ; }
    GIVEN {
        ASSUME(GetMoveType(MOVE_X_SCISSOR) == TYPE_BUG);
        ASSUME(GetMoveType(MOVE_POISON_JAB) == TYPE_POISON);
        ASSUME(GetMoveType(MOVE_FLARE_BLITZ) == TYPE_FIRE);
        PLAYER(SPECIES_TALONFLAME) { Ability(ABILITY_SKITTER_SPEED); HP(100); MaxHP(100); Speed(1);}
        OPPONENT(SPECIES_LINOONE) { Speed(100);};
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (move == MOVE_X_SCISSOR) {
            MESSAGE("Talonflame used X-Scissor!");
            MESSAGE("The opposing Linoone used Celebrate!");
        }
        else if (move == MOVE_POISON_JAB) {
            MESSAGE("Talonflame used Poison Jab!");
            MESSAGE("The opposing Linoone used Celebrate!");
        }
        else {
            MESSAGE("The opposing Linoone used Celebrate!");
            MESSAGE("Talonflame used Flare Blitz!");
        }
    }
}

SINGLE_BATTLE_TEST("Sun Gazer reduces damage to Normal Effective moves by 0.66", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_SOUNDPROOF; }
    PARAMETRIZE { ability = ABILITY_SUN_GAZER; }
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_MR_MIME].types[0] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_MR_MIME].types[1] == TYPE_FAIRY);
        ASSUME(GetMoveType(MOVE_STRENGTH) == TYPE_NORMAL);
        ASSUME(gTypeEffectivenessTable[TYPE_NORMAL][TYPE_FAIRY] == UQ_4_12(1.0));
        ASSUME(gTypeEffectivenessTable[TYPE_NORMAL][TYPE_PSYCHIC] == UQ_4_12(1.0));
        PLAYER(SPECIES_MR_MIME) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STRENGTH); }
    } SCENE {
        HP_BAR(player, captureDamage: &results[i].damage);
        //MESSAGE("It's super effective!");
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.67), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Updated Defiant doesn't let mon proc it's own Defiant")
{
    GIVEN {
        PLAYER(SPECIES_PRIMEAPE) { Moves(MOVE_CLOSE_COMBAT, MOVE_CELEBRATE); Ability(ABILITY_DEFIANT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CLOSE_COMBAT); }
    } SCENE {
        NOT MESSAGE("Primeape's Attack sharply rose!");
    }
}

SINGLE_BATTLE_TEST("Flower Block stops self stat reduction")
{
    GIVEN {
        PLAYER(SPECIES_SERPERIOR) { Moves(MOVE_LEAF_STORM, MOVE_CELEBRATE); Ability(ABILITY_FLOWER_BLOCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_LEAF_STORM); }
    } SCENE {
        NOT MESSAGE("Serperior's Special Attack harshly fell!");
    }
}

SINGLE_BATTLE_TEST("Flower Block shows animation for Intimidate")
{
    GIVEN {
        PLAYER(SPECIES_SERPERIOR) { Moves(MOVE_LEAF_STORM, MOVE_CELEBRATE); Ability(ABILITY_FLOWER_BLOCK); }
        OPPONENT(SPECIES_WOBBUFFET) Ability(ABILITY_INTIMIDATE);
    } WHEN {
        TURN {  }
    } SCENE {
        MESSAGE("Serperior's Flower Block prevents stat loss!");
    }
}

SINGLE_BATTLE_TEST("Night Owl increases damage for Moon based moves", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_SOUNDPROOF; }
    PARAMETRIZE { ability = ABILITY_NOCTURNAL; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_NOCTOWL) { Ability(ability); Moves(MOVE_MOONBLAST); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_MOONBLAST); }
    } SCENE {
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Moonlight recovers 2/3 of the user's max HP with Night Owl")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(300); Ability(ABILITY_NOCTURNAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MOONLIGHT); }
    } SCENE {
        HP_BAR(player, damage: -(300 / 1.5));
    }
}

SINGLE_BATTLE_TEST("Night Owl halves damage taken from dark/fairy moves", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_SOUNDPROOF; }
    PARAMETRIZE { ability = ABILITY_NOCTURNAL; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(ability); }
        OPPONENT(SPECIES_NOCTOWL) { Moves(MOVE_MOONBLAST); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_MOONBLAST); }
    } SCENE {
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Twin Flame works correctly")
{
    GIVEN {
        PLAYER(SPECIES_TYPHLOSION_HISUI) { Moves(MOVE_TWIN_FLAME, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_MEGANIUM);
    } WHEN {
        TURN { MOVE(player, MOVE_TWIN_FLAME); }
    } SCENE {
        MESSAGE("It's super effective!");
    }
}

// DO NOT WRITE TESTS WITH A WOBBUFFET HERE BECAUSE OF THE RULE
AI_SINGLE_BATTLE_TEST("NEW SWITCH: AI correctly scores switch ai for fast ohko in the back")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_SWELLOW) { HP(30); Moves(MOVE_BOOMBURST); Speed(100); }
        OPPONENT(SPECIES_ARTICUNO) { HP(1); Moves(MOVE_CELEBRATE); Speed(90); }
        OPPONENT(SPECIES_ZAPDOS) { Moves(MOVE_THUNDERBOLT, MOVE_SEISMIC_TOSS); Speed(90); } //slow ohko
        OPPONENT(SPECIES_LUGIA) { Level(20); Moves(MOVE_SEISMIC_TOSS); Speed(110); } //fast outdamage
        OPPONENT(SPECIES_MOLTRES) { Moves(MOVE_THUNDERBOLT); Speed(110); } // fast ohko
    } WHEN {
        TURN { MOVE(player, MOVE_BOOMBURST); EXPECT_SEND_OUT(opponent, 3); }
    }
}

AI_SINGLE_BATTLE_TEST("NEW SWITCH: AI correctly scores switch ai for fast/slow outdamaging")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_SWELLOW) { Level(45); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(100); }
        OPPONENT(SPECIES_ARTICUNO) { HP(1); Moves(MOVE_CELEBRATE); Speed(90); }
        OPPONENT(SPECIES_ZAPDOS) { Level(40); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(90); } //slower and outdamaged AKA default
        OPPONENT(SPECIES_LUGIA) { Level(60); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(90); } // slow outdamage
        OPPONENT(SPECIES_MOLTRES) { Level(30); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(110); } //just faster
        OPPONENT(SPECIES_MEWTWO) { Level(60); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(110); } //faster and outdamage
    } WHEN {
        TURN { MOVE(player, MOVE_SEISMIC_TOSS); EXPECT_SEND_OUT(opponent, 4); }
    }
}

AI_SINGLE_BATTLE_TEST("NEW SWITCH: AI correctly scores switch ai for just fast, default and getting fast ohko'd")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_SWELLOW) { Level(45); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(100); }
        OPPONENT(SPECIES_ARTICUNO) { HP(1); Moves(MOVE_CELEBRATE); Speed(90); }
        OPPONENT(SPECIES_LUGIA) { Level(40); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(90); } //default
        OPPONENT(SPECIES_MOLTRES) { Level(40); HP(100); Moves(MOVE_SEISMIC_TOSS); Speed(110); } //just fast
        OPPONENT(SPECIES_MEWTWO) { Level(100); HP(45); Moves(MOVE_SEISMIC_TOSS); Speed(90); } //outsped + ohko'd
    } WHEN {
        TURN { MOVE(player, MOVE_SEISMIC_TOSS); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("NEW SWITCH: AI correctly scores switch ai default")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_TOTODILE) { Level(45); HP(1); Moves(MOVE_SEISMIC_TOSS); Speed(100); }
        OPPONENT(SPECIES_TOTODILE) { HP(1); Moves(MOVE_CELEBRATE); Speed(90); }
        OPPONENT(SPECIES_TOTODILE) { Level(40); HP(100); Moves(MOVE_SEISMIC_TOSS, MOVE_SUCKER_PUNCH); Speed(90); } //default
        OPPONENT(SPECIES_TOTODILE) { Level(40); HP(100); Moves(MOVE_SEISMIC_TOSS, MOVE_NIGHT_SHADE); Speed(90); } 
    } WHEN {
        TURN { MOVE(player, MOVE_SEISMIC_TOSS); EXPECT_SEND_OUT(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Conversion 2")
{
    u32 opponentSpeed;
    u32 opponentSpeciesForType;

    PARAMETRIZE { opponentSpeed = 110; opponentSpeciesForType = SPECIES_PORYGON_Z; }
    PARAMETRIZE { opponentSpeed = 90; opponentSpeciesForType = SPECIES_STARYU; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_KNOCK_OFF); Speed(100); }
        OPPONENT(opponentSpeciesForType) { Moves(MOVE_TRI_ATTACK, MOVE_CONVERSION_2); Speed(opponentSpeed); }
    } WHEN {
        if (opponentSpeed == 110)
        {
            TURN { MOVE(player, MOVE_KNOCK_OFF); EXPECT_MOVE(opponent, MOVE_TRI_ATTACK); SCORE_EQ_VAL(opponent, MOVE_CONVERSION_2, 80); }
            TURN { MOVE(player, MOVE_KNOCK_OFF); EXPECT_MOVE(opponent, MOVE_TRI_ATTACK); SCORE_EQ_VAL(opponent, MOVE_CONVERSION_2, 107); }
        }
        else if (opponentSpeed == 90)
        {
            TURN { MOVE(player, MOVE_KNOCK_OFF); EXPECT_MOVE(opponent, MOVE_TRI_ATTACK); SCORE_EQ_VAL(opponent, MOVE_CONVERSION_2, 107); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Endure")
{
    u32 opponentItem;
    u32 playerCheckOHKOMove;

    PARAMETRIZE { opponentItem = ITEM_CUSTAP_BERRY; playerCheckOHKOMove = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { opponentItem = ITEM_CUSTAP_BERRY; playerCheckOHKOMove = MOVE_SONIC_BOOM; }
    PARAMETRIZE { opponentItem = ITEM_ORAN_BERRY; playerCheckOHKOMove = MOVE_DRAGON_RAGE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, playerCheckOHKOMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_ENDURE); HP(40); MaxHP(50); Item(opponentItem); }
    } WHEN {
        if (opponentItem == ITEM_CUSTAP_BERRY && playerCheckOHKOMove == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_ENDURE, 110); }
        }
        else if (opponentItem == ITEM_CUSTAP_BERRY && playerCheckOHKOMove == MOVE_SONIC_BOOM)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_ENDURE, 100); }
        }
        else if (opponentItem == ITEM_ORAN_BERRY && playerCheckOHKOMove == MOVE_DRAGON_RAGE)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_ENDURE, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly scores Soak/Magic Powder")
{
    u32 opponentMove;
    u32 playerSpecies;

    PARAMETRIZE { opponentMove = MOVE_SOAK; playerSpecies = SPECIES_WOBBUFFET; }
    PARAMETRIZE { opponentMove = MOVE_SOAK; playerSpecies = SPECIES_TOTODILE; }
    PARAMETRIZE { opponentMove = MOVE_MAGIC_POWDER; playerSpecies = SPECIES_TOTODILE; }
    PARAMETRIZE { opponentMove = MOVE_MAGIC_POWDER; playerSpecies = SPECIES_WOBBUFFET; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(playerSpecies) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, opponentMove); }
    } WHEN {
        if (opponentMove == MOVE_SOAK && playerSpecies == SPECIES_WOBBUFFET)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentMove, 106); }
        }
        else if (opponentMove == MOVE_SOAK && playerSpecies == SPECIES_TOTODILE)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentMove, 86); }
        }
        if (opponentMove == MOVE_MAGIC_POWDER && playerSpecies == SPECIES_WOBBUFFET)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentMove, 86); }
        }
        else if (opponentMove == MOVE_MAGIC_POWDER && playerSpecies == SPECIES_TOTODILE)
        {
            TURN { SCORE_EQ_VAL(opponent, opponentMove, 106); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI Correctly scores Pivot moves with new AI")
{
    u32 opponentMatchupCheckMove;
    u32 opponentSpeed;
    u32 playerHP;

    PARAMETRIZE { opponentMatchupCheckMove = MOVE_SONIC_BOOM; opponentSpeed = 90; playerHP = 190; }
    PARAMETRIZE { opponentMatchupCheckMove = MOVE_DRAGON_RAGE; opponentSpeed = 110; playerHP = 150; }
    PARAMETRIZE { opponentMatchupCheckMove = MOVE_DRAGON_RAGE; opponentSpeed = 90; playerHP = 1; }
    PARAMETRIZE { opponentMatchupCheckMove = MOVE_DRAGON_RAGE; opponentSpeed = 110; playerHP = 1; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(100); HP(playerHP);  }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(opponentMatchupCheckMove, MOVE_U_TURN); Speed(opponentSpeed); HP(180); Attack(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); Moves(MOVE_CELEBRATE); } 
    } WHEN {
        if (opponentMatchupCheckMove == MOVE_SONIC_BOOM && opponentSpeed == 90 && playerHP == 190)
        {
            TURN { /*MOVE(player, MOVE_SONIC_BOOM); EXPECT_MOVE(opponent, MOVE_U_TURN);*/ SCORE_EQ_VAL(opponent, MOVE_U_TURN, 108); /*SEND_OUT(opponent, 1);*/ }
        }
        else if (opponentMatchupCheckMove == MOVE_DRAGON_RAGE && opponentSpeed == 110 && playerHP == 150)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_U_TURN, 104); }
        }
        else if (opponentMatchupCheckMove == MOVE_DRAGON_RAGE && opponentSpeed == 90 && playerHP == 1)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_U_TURN, 112); }
        }
        else if (opponentMatchupCheckMove == MOVE_DRAGON_RAGE && opponentSpeed == 110 && playerHP == 1)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_U_TURN, 116); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI Correctly scores Pivot moves with no mon in the back and new AI")
{
    u32 betterMoveCheck;
    u32 playerHP;

    PARAMETRIZE { betterMoveCheck = MOVE_X_SCISSOR; playerHP = 500; }
    PARAMETRIZE { betterMoveCheck = MOVE_SPLASH; playerHP = 500; }
    PARAMETRIZE { betterMoveCheck = MOVE_X_SCISSOR; playerHP = 5; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerHP); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_U_TURN, betterMoveCheck); Speed(2); }
    } WHEN {
        if (betterMoveCheck == MOVE_X_SCISSOR && playerHP == 500)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_U_TURN, 80); }
        }
        else if (betterMoveCheck == MOVE_SPLASH && playerHP == 500)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_U_TURN, 109); }
        }
        else if (betterMoveCheck == MOVE_X_SCISSOR && playerHP == 5)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_U_TURN, 115); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI Correctly recognises different speed drop move scorings")
{
    KNOWN_FAILING; //this test was made weirdly to check double rock tomb in a row, the ai works!
    u32 playerHP;

    PARAMETRIZE { playerHP = 174; }
    PARAMETRIZE { playerHP = 145; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); HP(playerHP); Speed(85); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ROCK_TOMB, MOVE_MEGAHORN); Speed(52); }
    } WHEN {
        if (playerHP == 174)
        {
            TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_ROCK_TOMB); SCORE_EQ_VAL(opponent, MOVE_MEGAHORN, 106); }
            TURN { SCORE_EQ_VAL(opponent, MOVE_ROCK_TOMB, 108); }
        }
        else if (playerHP == 145)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_ROCK_TOMB, 108); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("Forcefield ability functions properly")
{
    u32 playerMove;
    
    PARAMETRIZE { playerMove = MOVE_TACKLE; }
    PARAMETRIZE { playerMove = MOVE_WATER_GUN; }

    GIVEN { 
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(playerMove); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Speed(1); Ability(ABILITY_FORCEFIELD); }
    } WHEN {
        if (playerMove == MOVE_TACKLE)
        {
            TURN { MOVE(player, playerMove); NOT MESSAGE("Wobbuffet was hurt by the opposing Wobbuffet's Forcefield!"); }
        }
        else if (playerMove == MOVE_WATER_GUN)
        {
            TURN { MOVE(player, playerMove); MESSAGE("Wobbuffet was hurt by the opposing Wobbuffet's Forcefield!"); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI scores Sucker Punch correctly")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_FAKE_OUT, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SUCKER_PUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_FAKE_OUT); EXPECT_MOVE(opponent, MOVE_SUCKER_PUNCH); SCORE_EQ_VAL(opponent, MOVE_SUCKER_PUNCH, 108); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_SUCKER_PUNCH); SCORE_EQ_VAL(opponent, MOVE_SUCKER_PUNCH, 108); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_SUCKER_PUNCH); SCORE_EQ_VAL(opponent, MOVE_SUCKER_PUNCH, 88); }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores Healing Wish correctly")
{
    u32 AIBackMonHP;

    PARAMETRIZE { AIBackMonHP = 100; }
    PARAMETRIZE { AIBackMonHP = 90; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_HEALING_WISH); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(AIBackMonHP); MaxHP(100); };
    } WHEN {
        if (AIBackMonHP == 100)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_HEALING_WISH, 80, target:playerLeft); }
        }
        else if (AIBackMonHP == 90)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_HEALING_WISH, 108, target:playerLeft); }
        }
    }
}

AI_DOUBLE_BATTLE_TEST("AI scores updated Follow Me correctly")
{
    u32 playerLeftMaybeKillingAIMove;
    u32 playerLeftMaybeKillingAIPartnerMove;
    u32 playerRightMaybeKillingAIMove;
    u32 playerRightMaybeKillingAIPartnerMove;
    u32 AIPartnerMaybeKillingPlayerLeftMove;
    u32 AIPartnerMaybeKillingPlayerRightMove;

    PARAMETRIZE { playerLeftMaybeKillingAIMove = MOVE_SPLASH; playerLeftMaybeKillingAIPartnerMove = MOVE_SPLASH; playerRightMaybeKillingAIMove = MOVE_SPLASH; playerRightMaybeKillingAIPartnerMove = MOVE_SPLASH; AIPartnerMaybeKillingPlayerLeftMove = MOVE_SPLASH; AIPartnerMaybeKillingPlayerRightMove = MOVE_SPLASH; }
    PARAMETRIZE { playerLeftMaybeKillingAIMove = MOVE_BRAVE_BIRD; playerLeftMaybeKillingAIPartnerMove = MOVE_CLOSE_COMBAT; playerRightMaybeKillingAIMove = MOVE_BRAVE_BIRD; playerRightMaybeKillingAIPartnerMove = MOVE_BODY_PRESS; AIPartnerMaybeKillingPlayerLeftMove = MOVE_BRAVE_BIRD; AIPartnerMaybeKillingPlayerRightMove = MOVE_BODY_PRESS; }
    PARAMETRIZE { playerLeftMaybeKillingAIMove = MOVE_SPLASH; playerLeftMaybeKillingAIPartnerMove = MOVE_CLOSE_COMBAT; playerRightMaybeKillingAIMove = MOVE_SPLASH; playerRightMaybeKillingAIPartnerMove = MOVE_SPLASH; AIPartnerMaybeKillingPlayerLeftMove = MOVE_BRAVE_BIRD; AIPartnerMaybeKillingPlayerRightMove = MOVE_BODY_PRESS; }
    //PARAMETRIZE { playerLeftMaybeKillingAIMove = ; playerLeftMaybeKillingAIPartnerMove = ; playerRightMaybeKillingAIMove = ; playerRightMaybeKillingAIPartnerMove = ; AIPartnerMaybeKillingPlayerLeftMove = ; AIPartnerMaybeKillingPlayerRightMove = ;}

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_LEAVANNY) { Moves(MOVE_CELEBRATE, playerLeftMaybeKillingAIMove, playerLeftMaybeKillingAIPartnerMove); HP(100); Level(100); }
        PLAYER(SPECIES_PROBOPASS) { Moves(MOVE_CELEBRATE, playerRightMaybeKillingAIMove, playerRightMaybeKillingAIPartnerMove); HP(100); Level(100); Ability(ABILITY_SAND_FORCE); }
        OPPONENT(SPECIES_LEAVANNY) { Moves(MOVE_CELEBRATE, MOVE_FOLLOW_ME); HP(100); Level(100); }
        OPPONENT(SPECIES_PROBOPASS) { Moves(MOVE_CELEBRATE, AIPartnerMaybeKillingPlayerLeftMove, AIPartnerMaybeKillingPlayerRightMove); HP(100); Level(100); Ability(ABILITY_SAND_FORCE); }
        ASSUME(GetMoveEffect(MOVE_FOLLOW_ME) == EFFECT_FOLLOW_ME);
    } WHEN {
        if (playerLeftMaybeKillingAIMove == MOVE_SPLASH && playerLeftMaybeKillingAIPartnerMove == MOVE_SPLASH && playerRightMaybeKillingAIMove == MOVE_SPLASH && playerRightMaybeKillingAIPartnerMove == MOVE_SPLASH && AIPartnerMaybeKillingPlayerLeftMove == MOVE_SPLASH && AIPartnerMaybeKillingPlayerRightMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 106, target:playerLeft); SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 106, target:playerRight); }
        }
        else if (playerLeftMaybeKillingAIMove == MOVE_BRAVE_BIRD && playerLeftMaybeKillingAIPartnerMove == MOVE_CLOSE_COMBAT && playerRightMaybeKillingAIMove == MOVE_BRAVE_BIRD && playerRightMaybeKillingAIPartnerMove == MOVE_BODY_PRESS && AIPartnerMaybeKillingPlayerLeftMove == MOVE_BRAVE_BIRD && AIPartnerMaybeKillingPlayerRightMove == MOVE_BODY_PRESS)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 108, target:playerLeft); SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 108, target:playerRight); }
        }
        else if (playerLeftMaybeKillingAIMove == MOVE_SPLASH && playerLeftMaybeKillingAIPartnerMove == MOVE_CLOSE_COMBAT && playerRightMaybeKillingAIMove == MOVE_SPLASH && playerRightMaybeKillingAIPartnerMove == MOVE_SPLASH && AIPartnerMaybeKillingPlayerLeftMove == MOVE_BRAVE_BIRD && AIPartnerMaybeKillingPlayerRightMove == MOVE_BODY_PRESS)
        {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 109, target:playerLeft); SCORE_EQ_VAL(opponentLeft, MOVE_FOLLOW_ME, 109, target:playerRight); }
        }
    }
}

SINGLE_BATTLE_TEST("Mind Game (opponent) lowers player's attack after switch out", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_MIND_GAME; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        if (ability == ABILITY_MIND_GAME)
        {
            ABILITY_POPUP(opponent, ABILITY_MIND_GAME);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("The opposing Arbok's Mind Game cuts Wobbuffet's Special Attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

AI_SINGLE_BATTLE_TEST("AI still correctly scores the next highest damaging move while an inelegible move does the most damage")
{
    u32 maybePivotMove;

    PARAMETRIZE { maybePivotMove = MOVE_SPLASH; }
    PARAMETRIZE { maybePivotMove = MOVE_VOLT_SWITCH; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_THUNDER_SHOCK); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_THUNDER_SHOCK, maybePivotMove); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (maybePivotMove == MOVE_SPLASH)
        {
            TURN { SCORE_EQ_VAL(opponent, MOVE_THUNDER_SHOCK, 108); }
        }
        else if (maybePivotMove == MOVE_VOLT_SWITCH)
        {
            TURN { SCORE_EQ_VAL(opponent, maybePivotMove, 104); SCORE_EQ_VAL(opponent, MOVE_THUNDER_SHOCK, 108); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI correctly sees Belch as usable when its Custap Berry is about to proc")
{
    u32 AICurrentHP;
    u32 AIItem;
    enum Ability AIAbility;
    enum Ability playerAbility;

    PARAMETRIZE { AICurrentHP = 100; AIItem = ITEM_CUSTAP_BERRY; AIAbility = ABILITY_SHADOW_TAG; playerAbility = ABILITY_SHADOW_TAG; }
    PARAMETRIZE { AICurrentHP = 199; AIItem = ITEM_CUSTAP_BERRY; AIAbility = ABILITY_SHADOW_TAG; playerAbility = ABILITY_SHADOW_TAG; }
    PARAMETRIZE { AICurrentHP = 199; AIItem = ITEM_CUSTAP_BERRY; AIAbility = ABILITY_GLUTTONY; playerAbility = ABILITY_SHADOW_TAG; }
    PARAMETRIZE { AICurrentHP = 299; AIItem = ITEM_CUSTAP_BERRY; AIAbility = ABILITY_GLUTTONY; playerAbility = ABILITY_SHADOW_TAG; }
    PARAMETRIZE { AICurrentHP = 199; AIItem = ITEM_PECHA_BERRY; AIAbility = ABILITY_GLUTTONY; playerAbility = ABILITY_SHADOW_TAG; }
    PARAMETRIZE { AICurrentHP = 199; AIItem = ITEM_CUSTAP_BERRY; AIAbility = ABILITY_GLUTTONY; playerAbility = ABILITY_UNNERVE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(playerAbility); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE, MOVE_SLUDGE, MOVE_BELCH); Item(AIItem); Ability(AIAbility); MaxHP(400); HP(AICurrentHP); }
    } WHEN {
        if (AICurrentHP == 100)
        {
            TURN { EXPECT_MOVE(opponent, MOVE_BELCH); }
        }
        else if (AICurrentHP == 199 && AIAbility == ABILITY_SHADOW_TAG)
        {
            TURN { EXPECT_MOVE(opponent, MOVE_SLUDGE); }
        }
        else if (AICurrentHP == 199 && AIItem == ITEM_CUSTAP_BERRY && AIAbility == ABILITY_GLUTTONY && playerAbility == ABILITY_SHADOW_TAG)
        {
            TURN { EXPECT_MOVE(opponent, MOVE_BELCH); }
        }
        else
        {
            TURN { EXPECT_MOVE(opponent, MOVE_SLUDGE); }
        }
    }
}
