#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("TODO: Write Paralyze (Move Effect) test titles")

AI_SINGLE_BATTLE_TEST("AI will vary paralysis move score depending on various factors while recognising para as 1/4 speed")
{
    u32 moveOpponent;
    u32 opponentSpeed;

    PARAMETRIZE { moveOpponent = MOVE_TACKLE ; opponentSpeed = 20; }
    PARAMETRIZE { moveOpponent = MOVE_TACKLE ; opponentSpeed = 30; }
    PARAMETRIZE { moveOpponent = MOVE_ELECTRO_BALL ; opponentSpeed = 30; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE);
        PLAYER(SPECIES_WOBBUFFET) { Speed(100); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(opponentSpeed); Moves(moveOpponent, MOVE_THUNDER_WAVE); }
    } WHEN {
        if (moveOpponent == MOVE_TACKLE && opponentSpeed == 20)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_THUNDER_WAVE, 106);
            }
        }
        else if (moveOpponent == MOVE_TACKLE && opponentSpeed == 30)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_THUNDER_WAVE, 107);
            }
        }
        else if (moveOpponent == MOVE_ELECTRO_BALL && opponentSpeed == 30)
        {
            TURN {
                SCORE_EQ_VAL(opponent, MOVE_THUNDER_WAVE, 108);
            }
        }
    }
}
