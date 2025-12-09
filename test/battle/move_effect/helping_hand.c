#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HELPING_HAND) == EFFECT_HELPING_HAND);
}

SINGLE_BATTLE_TEST("Helping Hand fails in a Single Battle")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HELPING_HAND); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HELPING_HAND, player);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Helping Hand fails if ally already acted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HELPING_HAND, target: playerRight); MOVE(playerRight, MOVE_HELPING_HAND, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HELPING_HAND, playerLeft);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HELPING_HAND, playerRight);
    }
}

DOUBLE_BATTLE_TEST("Helping Hand boosts the power of attacking moves by 50%", s16 damage)
{
    bool32 useHelpingHand;

    PARAMETRIZE { useHelpingHand = FALSE; }
    PARAMETRIZE { useHelpingHand = TRUE;  }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useHelpingHand)
            TURN { MOVE(playerRight, MOVE_HELPING_HAND, target: playerLeft); MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
        else
            TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Helping Hand still boosts moves used due to Instruct", s16 damage)
{
    bool32 useHelpingHand;

    PARAMETRIZE { useHelpingHand = FALSE; }
    PARAMETRIZE { useHelpingHand = TRUE;  }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_INSTRUCT) == EFFECT_INSTRUCT);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useHelpingHand)
        {
            TURN { MOVE(playerRight, MOVE_HELPING_HAND, target: playerLeft);
                   MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft);
                   MOVE(opponentLeft, MOVE_INSTRUCT, target: playerLeft); }
        }
        else
        {
            TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft);
                   MOVE(opponentLeft, MOVE_INSTRUCT, target: playerLeft); }
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_INSTRUCT, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Helping Hand boosts the power of attacking moves by 125% if Instructed into using it again", s16 damage)
{
    bool32 useHelpingHandTwice;

    PARAMETRIZE { useHelpingHandTwice = FALSE; }
    PARAMETRIZE { useHelpingHandTwice = TRUE;  }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_INSTRUCT) == EFFECT_INSTRUCT);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useHelpingHandTwice)
            TURN { MOVE(playerRight, MOVE_HELPING_HAND, target: playerLeft);
                   MOVE(opponentLeft, MOVE_INSTRUCT, target: playerRight);
                   MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
        else
            TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.25), results[1].damage);
    }
}

TO_DO_BATTLE_TEST("TODO: Write Helping Hand (Move Effect) test titles")

AI_DOUBLE_BATTLE_TEST("Helping Hand gets +7 when AI's partner outdamages them on both Player mons, +12 when it's outsped OHKO'd by enemy mon, +6 otherwise")
{
    u32 moveOpponent;
    u32 hp;

    PARAMETRIZE { moveOpponent = MOVE_TWISTER; hp = 1; }
    PARAMETRIZE { moveOpponent = MOVE_TWISTER; hp = 999; }
    PARAMETRIZE { moveOpponent = MOVE_DRACO_METEOR; hp = 1; }
    PARAMETRIZE { moveOpponent = MOVE_DRACO_METEOR; hp = 999; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_TACKLE, MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_TACKLE, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(4); HP(hp); Moves(moveOpponent, MOVE_HELPING_HAND); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(6); Moves(MOVE_DRACO_METEOR, MOVE_CELEBRATE); }
    } WHEN {
        if (hp == 1)
            {
                TURN {  
                    SCORE_EQ_VAL(opponentLeft, MOVE_HELPING_HAND, 112, target:opponentRight);
                }
            }
            
        else if (hp == 999 && moveOpponent == MOVE_TWISTER)
            {
                TURN {
                    SCORE_EQ_VAL(opponentLeft, MOVE_HELPING_HAND, 107, target:opponentRight);
                }
            }
        else if (hp == 999 && moveOpponent == MOVE_DRACO_METEOR)
            {
                TURN {
                    SCORE_EQ_VAL(opponentLeft, MOVE_HELPING_HAND, 106, target:opponentRight);
                }
            }
            
        }
}


