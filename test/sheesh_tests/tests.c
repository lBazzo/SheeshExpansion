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










