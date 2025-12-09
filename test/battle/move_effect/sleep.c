#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HYPNOSIS) == EFFECT_NON_VOLATILE_STATUS);
    ASSUME(GetMoveNonVolatileStatus(MOVE_HYPNOSIS) == MOVE_EFFECT_SLEEP);
}

SINGLE_BATTLE_TEST("Hypnosis inflicts 1-3 turns of sleep")
{
    u32 turns, count;
    ASSUME(B_SLEEP_TURNS >= GEN_5);
    PARAMETRIZE { turns = 1; }
    PARAMETRIZE { turns = 2; }
    PARAMETRIZE { turns = 3; }
    PASSES_RANDOMLY(1, 3, RNG_SLEEP_TURNS);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HYPNOSIS); MOVE(opponent, MOVE_CELEBRATE); }
        for (count = 0; count < turns; ++count)
            TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPNOSIS, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Wobbuffet fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        for (count = 0; count < turns; ++count)
        {
            if (count < turns - 1)
                MESSAGE("The opposing Wobbuffet is fast asleep.");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        }
        MESSAGE("The opposing Wobbuffet woke up!");
        STATUS_ICON(opponent, none: TRUE);
    }
}

AI_SINGLE_BATTLE_TEST("AI will vary sleep score depending on different circumstances")
{
    u32 opponentMove1;
    u32 opponentMove2;
    u32 opponentSpeed;

    PARAMETRIZE { opponentMove1 = MOVE_TACKLE ; opponentMove2 = MOVE_SWIFT ; opponentSpeed = 10; }
    PARAMETRIZE { opponentMove1 = MOVE_TACKLE ; opponentMove2 = MOVE_SWIFT ; opponentSpeed = 150; }
    PARAMETRIZE { opponentMove1 = MOVE_TACKLE ; opponentMove2 = MOVE_DREAM_EATER ; opponentSpeed = 150; }
    PARAMETRIZE { opponentMove1 = MOVE_HEX ; opponentMove2 = MOVE_DREAM_EATER ; opponentSpeed = 150; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); HP(20); Moves(opponentMove1, opponentMove2, MOVE_SLEEP_POWDER); }
    } WHEN {
        if (opponentMove1 == MOVE_TACKLE && opponentMove2 == MOVE_SWIFT && opponentSpeed == 10)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_SLEEP_POWDER, 106);
            }
        }
        else if (opponentMove1 == MOVE_TACKLE && opponentMove2 == MOVE_SWIFT && opponentSpeed == 150)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_SLEEP_POWDER, 107);
            }
        }
        else if (opponentMove1 == MOVE_TACKLE && opponentMove2 == MOVE_DREAM_EATER && opponentSpeed == 150)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_SLEEP_POWDER, 108);
            }
        }
        else if (opponentMove1 == MOVE_HEX && opponentMove2 == MOVE_DREAM_EATER && opponentSpeed == 150)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_SLEEP_POWDER, 109);
            }
        }
    }

}
