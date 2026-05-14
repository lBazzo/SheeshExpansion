#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_FINAL_GAMBIT) == EFFECT_FINAL_GAMBIT);
}

SINGLE_BATTLE_TEST("Final Gambit faints user and target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_FINAL_GAMBIT); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FINAL_GAMBIT, player);
        HP_BAR(opponent);
        HP_BAR(player);
    } THEN {
        EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_HP), 0);
        EXPECT_EQ(GetMonData(&gEnemyParty[0], MON_DATA_HP), 0);
    }
}

SINGLE_BATTLE_TEST("Final Gambit does not faint user if target protects")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_FINAL_GAMBIT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_FINAL_GAMBIT, player);
    } THEN {
        EXPECT_NE(GetMonData(&gPlayerParty[0], MON_DATA_HP), 0);
        EXPECT_NE(GetMonData(&gEnemyParty[0], MON_DATA_HP), 0);
    }
}

SINGLE_BATTLE_TEST("Final Gambit does not faint user if attacker fails to attack")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); MOVE(player, MOVE_FINAL_GAMBIT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_FINAL_GAMBIT, player);
    } THEN {
        EXPECT_NE(GetMonData(&gPlayerParty[0], MON_DATA_HP), 0);
        EXPECT_NE(GetMonData(&gEnemyParty[0], MON_DATA_HP), 0);
    }
}

SINGLE_BATTLE_TEST("Final Gambit does not faint user if target is immune")
{
    KNOWN_FAILING; //fails because it's dark type move now
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GASTLY);
    } WHEN {
        TURN { MOVE(player, MOVE_FINAL_GAMBIT); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_FINAL_GAMBIT, player);
    } THEN {
        EXPECT_NE(GetMonData(&gPlayerParty[0], MON_DATA_HP), 0);
        EXPECT_NE(GetMonData(&gEnemyParty[0], MON_DATA_HP), 0);
    }
}

TO_DO_BATTLE_TEST("Final Gambit faints the user, and the target receives damage equal to the user's HP") // User should faint before the target
TO_DO_BATTLE_TEST("Final Gambit doesn't faint the user if it misses")
TO_DO_BATTLE_TEST("Final Gambit doesn't faint the user if the target is immune")
TO_DO_BATTLE_TEST("Final Gambit doesn't faint the user if the target is protected")
TO_DO_BATTLE_TEST("Final Gambit doesn't trigger the user's Focus Band")
TO_DO_BATTLE_TEST("Final Gambit doesn't trigger the user's Focus Sash")
TO_DO_BATTLE_TEST("Final Gambit doesn't trigger the user's Sturdy")
TO_DO_BATTLE_TEST("Final Gambit triggers the target's Focus Band")
TO_DO_BATTLE_TEST("Final Gambit triggers the target's Focus Sash")
TO_DO_BATTLE_TEST("Final Gambit triggers the target's Sturdy")
TO_DO_BATTLE_TEST("Final Gambit triggers the target's Endure")
TO_DO_BATTLE_TEST("Final Gambit fails in Max Raids")
TO_DO_BATTLE_TEST("Final Gambit fails in Tera Raids")

AI_SINGLE_BATTLE_TEST("AI correctly scores Final Gambit")
{
    u32 opponentCurrentHP;
    u32 opponentSpeed;
    u32 playerMove;

    PARAMETRIZE { opponentCurrentHP = 30; opponentSpeed = 110; playerMove = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { opponentCurrentHP = 20; opponentSpeed = 110; playerMove = MOVE_DRAGON_RAGE; }
    PARAMETRIZE { opponentCurrentHP = 20; opponentSpeed = 110; playerMove = MOVE_GROWL; }
    PARAMETRIZE { opponentCurrentHP = 20; opponentSpeed = 90; playerMove = MOVE_DRAGON_RAGE; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_FINAL_GAMBIT) == EFFECT_FINAL_GAMBIT);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Speed(100); HP(25); Moves(MOVE_CELEBRATE, playerMove); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); HP(opponentCurrentHP); Moves(MOVE_FINAL_GAMBIT, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_LINOONE) { Speed(1); Moves(MOVE_CELEBRATE); }
    } WHEN {
        if (opponentCurrentHP == 30)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FINAL_GAMBIT, 108);
            }
        }
        else if (opponentCurrentHP == 20 && opponentSpeed == 110 && playerMove == MOVE_DRAGON_RAGE)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FINAL_GAMBIT, 107);
            }
        }
        else if (opponentCurrentHP == 20 && playerMove == MOVE_GROWL)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FINAL_GAMBIT, 106);
            }
        }
        else if (opponentCurrentHP == 20 && opponentSpeed == 90)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_FINAL_GAMBIT, 106);
            }
        }
    }
}
