#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("TODO: Write Poison (Move Effect) test titles")

AI_SINGLE_BATTLE_TEST("AI will vary scores on poisoning move depending on conditions")
{
    u32 hp;
    u32 moveOpponent;

    PARAMETRIZE { hp = 70; moveOpponent = MOVE_SPLASH; }
    PARAMETRIZE { hp = 70; moveOpponent = MOVE_HEX; }
    PARAMETRIZE { hp = 90; moveOpponent = MOVE_SPLASH; }
    PARAMETRIZE { hp = 90; moveOpponent = MOVE_HEX; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(hp); Moves(moveOpponent, MOVE_POISON_POWDER); }
    } WHEN {
        if (hp == 70 && moveOpponent == MOVE_SPLASH)
            {
                TURN {
                    SCORE_EQ_VAL(opponent, MOVE_POISON_POWDER, 106);
                }
            }

        else if (hp == 70 && moveOpponent == MOVE_HEX)
            {
                TURN {
                    SCORE_EQ_VAL(opponent, MOVE_POISON_POWDER, 107);
                }
            }

        else if (hp == 90 && moveOpponent == MOVE_SPLASH)
            {
                TURN {
                    SCORE_EQ_VAL(opponent, MOVE_POISON_POWDER, 107);
                }
            }

        else if (hp == 90 && moveOpponent == MOVE_HEX)
            {
                TURN {
                    SCORE_EQ_VAL(opponent, MOVE_POISON_POWDER, 108);
                }
            }
    }
}
