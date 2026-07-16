#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(BODY_PRESS) \
    F(DARK_PULSE) \
    F(DAZZLING_GLEAM) \
    F(DEFOG) \
    F(DRACO_METEOR) \
    F(DRAGON_CLAW) \
    F(DRAGON_PULSE) \
    F(DRAIN_PUNCH) \
    F(DRAINING_KISS) \
    F(DUAL_WINGBEAT) \
    F(EARTH_POWER) \
    F(EARTHQUAKE) \
    F(ENERGY_BALL) \
    F(EXPLOSION) \
    F(FACADE) \
    F(FLAMETHROWER) \
    F(FLASH_CANNON) \
    F(FLIP_TURN) \
    F(FOCUS_BLAST) \
    F(FOCUS_PUNCH) \
    F(GIGA_DRAIN) \
    F(GIGA_IMPACT) \
    F(GRASS_KNOT) \
    F(HYPER_BEAM) \
    F(HYPER_VOICE) \
    F(ICE_BEAM) \
    F(IRON_TAIL) \
    F(LIGHT_SCREEN) \
    F(LOW_KICK) \
    F(MISTY_EXPLOSION) \
    F(MOONBLAST) \
    F(NIGHT_SHADE) \
    F(OVERHEAT) \
    F(PAYBACK) \
    F(PLAY_ROUGH) \
    F(PLUCK) \
    F(PROTECT) \
    F(PSYCHIC) \
    F(PSYCHO_SHIFT) \
    F(REFLECT) \
    F(REST) \
    F(RETURN) \
    F(ROCK_SLIDE) \
    F(ROOST) \
    F(SEISMIC_TOSS) \
    F(SHADOW_BALL) \
    F(SLEEP_TALK) \
    F(SLUDGE_BOMB) \
    F(SOLAR_BEAM) \
    F(SOLAR_BLADE) \
    F(STEEL_WING) \
    F(STONE_EDGE) \
    F(THUNDER_WAVE) \
    F(THUNDERBOLT) \
    F(TOXIC) \
    F(TRIPLE_AXEL) \
    F(U_TURN) \
    F(VOLT_SWITCH) \
    F(VOLT_TACKLE) \
    F(WATER_PULSE) \
    F(WEATHER_BALL) \
    F(WILL_O_WISP) \
    F(X_SCISSOR) \
    F(HEAL_BELL) \
    F(AROMATHERAPY) \
    F(SCALD) \
    F(SIGNAL_BEAM)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(WHIRLPOOL) // HnS - DIVE in emerald

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
