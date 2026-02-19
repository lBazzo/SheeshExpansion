//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 90
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 91
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_ROSS] =
    {
#line 98
        .trainerName = _("ROSS"),
#line 99
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 100
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COLLECTOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 110
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 111
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 114
    [DIFFICULTY_NORMAL][TRAINER_MITCH] =
    {
#line 115
        .trainerName = _("MITCH"),
#line 116
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 117
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 120
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COLLECTOR,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 123
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 127
    [DIFFICULTY_NORMAL][TRAINER_JED] =
    {
#line 128
        .trainerName = _("JED"),
#line 129
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 130
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 132
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 133
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COLLECTOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 136
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 140
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 141
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 144
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 145
        .trainerName = _("MARC"),
#line 146
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 147
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 149
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COLLECTOR,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 153
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 154
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 157
    [DIFFICULTY_NORMAL][TRAINER_RICH] =
    {
#line 158
        .trainerName = _("RICH"),
#line 159
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 160
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 162
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 163
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COLLECTOR,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 166
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 167
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 170
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 171
        .trainerName = _("Joey"),
#line 172
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 173
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 175
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 176
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 179
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 179
            .heldItem = ITEM_ORAN_BERRY,
#line 183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 180
            .ability = ABILITY_PRANKSTER,
#line 181
            .lvl = 12,
#line 182
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 183
                MOVE_ACROBATICS,
                MOVE_MEGA_DRAIN,
                MOVE_U_TURN,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 188
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .heldItem = ITEM_MYSTIC_WATER,
#line 192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 189
            .ability = ABILITY_THICK_FAT,
#line 190
            .lvl = 12,
#line 191
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 192
                MOVE_FAKE_OUT,
                MOVE_AQUA_JET,
                MOVE_WATER_PULSE,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 197
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 197
            .heldItem = ITEM_CHARCOAL,
#line 201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 198
            .ability = ABILITY_FLAME_BODY,
#line 199
            .lvl = 12,
#line 200
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 201
                MOVE_INCINERATE,
                MOVE_ANCIENT_POWER,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
            },
            },
        },
    },
#line 206
    [DIFFICULTY_NORMAL][TRAINER_MIKEY] =
    {
#line 207
        .trainerName = _("MIKEY"),
#line 208
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 209
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 211
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 212
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 215
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 216
            .lvl = 2,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 219
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 220
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 223
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 224
        .trainerName = _("Albert"),
#line 225
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 226
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 228
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 229
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 232
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 232
            .heldItem = ITEM_SHUCA_BERRY,
#line 237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 233
            .ability = ABILITY_VOLT_ABSORB,
#line 234
            .lvl = 20,
#line 236
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 235
            .teraType = TYPE_ELECTRIC,
            .moves = {
#line 237
                MOVE_FAKE_TEARS,
                MOVE_SHOCK_WAVE,
                MOVE_GRASS_KNOT,
                MOVE_SWIFT,
            },
            },
            {
#line 242
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 242
            .heldItem = ITEM_CHOPLE_BERRY,
#line 246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .ability = ABILITY_THICK_FAT,
#line 244
            .lvl = 21,
#line 245
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 246
                MOVE_SCREECH,
                MOVE_FACADE,
                MOVE_BRICK_BREAK,
                MOVE_CHARM,
            },
            },
            {
#line 251
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 251
            .heldItem = ITEM_BERRY_JUICE,
#line 255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 252
            .ability = ABILITY_COLOR_CHANGE,
#line 253
            .lvl = 21,
#line 254
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 255
                MOVE_SWAGGER,
                MOVE_FOUL_PLAY,
                MOVE_ROCK_SMASH,
                MOVE_CUT,
            },
            },
        },
    },
#line 260
    [DIFFICULTY_NORMAL][TRAINER_GORDON] =
    {
#line 261
        .trainerName = _("GORDON"),
#line 262
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 263
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 265
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 269
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 270
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 273
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 274
        .trainerName = _("Samuel"),
#line 275
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 276
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 278
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 279
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 282
            .heldItem = ITEM_LEFTOVERS,
#line 286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 283
            .ability = ABILITY_TANGLING_HAIR,
#line 284
            .lvl = 32,
#line 285
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 286
                MOVE_GIGA_DRAIN,
                MOVE_SLUDGE_BOMB,
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 291
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 291
            .heldItem = ITEM_MYSTIC_WATER,
#line 295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 292
            .ability = ABILITY_TORRENT,
#line 293
            .lvl = 33,
#line 294
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 295
                MOVE_AQUA_TAIL,
                MOVE_BRICK_BREAK,
                MOVE_BULLDOZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 300
            .species = SPECIES_DOUBLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 300
            .heldItem = ITEM_EVIOLITE,
#line 304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 301
            .ability = ABILITY_NO_GUARD,
#line 302
            .lvl = 34,
#line 303
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 304
                MOVE_SWORDS_DANCE,
                MOVE_SHADOW_SNEAK,
                MOVE_IRON_HEAD,
                MOVE_SACRED_SWORD,
            },
            },
        },
    },
#line 309
    [DIFFICULTY_NORMAL][TRAINER_IAN] =
    {
#line 310
        .trainerName = _("Ian"),
#line 311
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 312
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 314
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 315
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 318
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 318
            .heldItem = ITEM_SALAC_BERRY,
#line 322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 319
            .ability = ABILITY_STURDY,
#line 320
            .lvl = 34,
#line 321
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 322
                MOVE_STEALTH_ROCK,
                MOVE_METAL_SOUND,
                MOVE_AIR_CUTTER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 327
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .heldItem = ITEM_LUM_BERRY,
#line 331
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 328
            .ability = ABILITY_LEVITATE,
#line 329
            .lvl = 35,
#line 330
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 332
                MOVE_HYPER_BEAM,
                MOVE_SCORCHING_SANDS,
                MOVE_PSYSHOCK,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 337
            .species = SPECIES_GRIMMSNARL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 337
            .heldItem = ITEM_EJECT_BUTTON,
#line 341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 338
            .ability = ABILITY_PRANKSTER,
#line 339
            .lvl = 33,
#line 340
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 341
                MOVE_SCREECH,
                MOVE_THUNDER_WAVE,
                MOVE_SPIRIT_BREAK,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 346
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 346
            .heldItem = ITEM_BLACK_SLUDGE,
#line 350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 347
            .ability = ABILITY_POISON_POINT,
#line 348
            .lvl = 33,
#line 349
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 350
                MOVE_BULLDOZE,
                MOVE_SLUDGE,
                MOVE_ROCK_TOMB,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 355
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 356
        .trainerName = _("WARREN"),
#line 357
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 358
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 360
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 361
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 364
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 365
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 368
    [DIFFICULTY_NORMAL][TRAINER_JIMMY] =
    {
#line 369
        .trainerName = _("JIMMY"),
#line 370
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 371
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 373
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 377
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 378
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 381
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 382
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 385
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 386
        .trainerName = _("OWEN"),
#line 387
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 388
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 390
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 391
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 394
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 395
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 398
    [DIFFICULTY_NORMAL][TRAINER_JASON] =
    {
#line 399
        .trainerName = _("JASON"),
#line 400
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 401
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 403
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 404
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNGSTER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 407
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 408
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 411
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 412
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 415
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 416
        .trainerName = _("Jack"),
#line 417
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 418
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 420
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 421
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 424
            .species = SPECIES_RIBOMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 424
            .heldItem = ITEM_POWER_HERB,
#line 428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 425
            .ability = ABILITY_SHIELD_DUST,
#line 426
            .lvl = 46,
#line 427
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 428
                MOVE_STICKY_WEB,
                MOVE_MOONBLAST,
                MOVE_BUG_BUZZ,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 433
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 433
            .heldItem = ITEM_ASSAULT_VEST,
#line 437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 434
            .ability = ABILITY_ROUGH_SKIN,
#line 435
            .lvl = 45,
#line 436
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 437
                MOVE_OUTRAGE,
                MOVE_IRON_TAIL,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 442
            .species = SPECIES_GLACEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 442
            .heldItem = ITEM_WISE_GLASSES,
#line 446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 443
            .ability = ABILITY_ICE_SCALES,
#line 444
            .lvl = 45,
#line 445
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 446
                MOVE_ICE_BEAM,
                MOVE_ALLURING_VOICE,
                MOVE_SHADOW_BALL,
                MOVE_YAWN,
            },
            },
            {
#line 451
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .heldItem = ITEM_THROAT_SPRAY,
#line 455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 452
            .ability = ABILITY_TINTED_LENS,
#line 453
            .lvl = 46,
#line 454
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 455
                MOVE_HYPER_VOICE,
                MOVE_CHATTER,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 460
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 460
            .heldItem = ITEM_MUSCLE_BAND,
#line 464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 461
            .ability = ABILITY_INTIMIDATE,
#line 462
            .lvl = 45,
#line 463
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 464
                MOVE_AQUA_TAIL,
                MOVE_POISON_JAB,
                MOVE_PIN_MISSILE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 469
    [DIFFICULTY_NORMAL][TRAINER_KIPP] =
    {
#line 470
        .trainerName = _("KIPP"),
#line 471
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 472
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 474
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 475
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 478
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 479
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 482
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 483
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 486
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 487
        .trainerName = _("Alan"),
#line 488
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 489
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 491
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 492
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 495
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 495
            .heldItem = ITEM_PASSHO_BERRY,
#line 499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 496
            .ability = ABILITY_GOOEY,
#line 497
            .lvl = 46,
#line 498
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 499
                MOVE_FLAMETHROWER,
                MOVE_POWER_GEM,
                MOVE_MUD_SHOT,
                MOVE_YAWN,
            },
            },
            {
#line 504
            .species = SPECIES_DRACOVISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .heldItem = ITEM_LUM_BERRY,
#line 508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 505
            .ability = ABILITY_WATER_ABSORB,
#line 506
            .lvl = 44,
#line 507
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 508
                MOVE_FISHIOUS_REND,
                MOVE_LEECH_LIFE,
                MOVE_DRAGON_RUSH,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 513
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 513
            .heldItem = ITEM_DRAGON_FANG,
#line 517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 514
            .ability = ABILITY_COTTON_DOWN,
#line 515
            .lvl = 45,
#line 516
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 517
                MOVE_DRAGON_BREATH,
                MOVE_MOONBLAST,
                MOVE_FLAMETHROWER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 522
            .species = SPECIES_ARCTOZOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 522
            .heldItem = ITEM_MAGNET,
#line 526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 523
            .ability = ABILITY_VOLT_ABSORB,
#line 524
            .lvl = 44,
#line 525
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 526
                MOVE_BOLT_BEAK,
                MOVE_ICICLE_CRASH,
                MOVE_LOW_KICK,
                MOVE_HYDRO_PUMP,
            },
            },
        },
    },
#line 531
    [DIFFICULTY_NORMAL][TRAINER_JOHNNY] =
    {
#line 532
        .trainerName = _("JOHNNY"),
#line 533
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 534
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 536
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 537
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 540
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 541
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 544
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 545
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 548
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 549
        .trainerName = _("DANNY"),
#line 550
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 551
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 553
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 554
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 557
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 558
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 561
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 562
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 565
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 566
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 569
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 570
        .trainerName = _("TOMMY"),
#line 571
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 572
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 574
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 575
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 578
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 579
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 582
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 583
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 586
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 587
        .trainerName = _("DUDLEY"),
#line 588
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 589
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 591
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 592
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 595
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 596
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 599
    [DIFFICULTY_NORMAL][TRAINER_JOE] =
    {
#line 600
        .trainerName = _("JOE"),
#line 601
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 602
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 604
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 605
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 608
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 609
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 612
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 613
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 616
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 617
        .trainerName = _("BILLY"),
#line 618
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 619
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 621
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 625
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 626
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 629
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 630
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 633
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 634
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 637
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 638
        .trainerName = _("Chad"),
#line 639
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 640
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 642
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 643
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 646
            .species = SPECIES_CARBINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .heldItem = ITEM_FAIRY_GEM,
#line 650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 647
            .ability = ABILITY_STURDY,
#line 648
            .lvl = 55,
#line 649
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 650
                MOVE_STEALTH_ROCK,
                MOVE_MISTY_EXPLOSION,
                MOVE_EXPLOSION,
            },
            },
            {
#line 654
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 654
            .heldItem = ITEM_EXPERT_BELT,
#line 658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 655
            .ability = ABILITY_SNIPER,
#line 656
            .lvl = 55,
#line 657
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 658
                MOVE_LEECH_LIFE,
                MOVE_POISON_JAB,
                MOVE_BRICK_BREAK,
                MOVE_DRILL_RUN,
            },
            },
        },
    },
#line 663
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 664
        .trainerName = _("NATE"),
#line 665
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 666
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 668
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 669
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 672
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 673
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 676
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 677
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 680
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 681
        .trainerName = _("RICKY"),
#line 682
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 683
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 685
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 686
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SCHOOL_KID_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 689
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 690
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 693
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 694
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 697
    [DIFFICULTY_NORMAL][TRAINER_ROD] =
    {
#line 698
        .trainerName = _("Rod"),
#line 699
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 700
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 702
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 703
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 706
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 706
            .heldItem = ITEM_TOXIC_ORB,
#line 710
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 707
            .ability = ABILITY_TRACE,
#line 708
            .lvl = 17,
#line 709
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 711
                MOVE_TRICK,
                MOVE_SWIFT,
                MOVE_CHARGE_BEAM,
                MOVE_RECOVER,
            },
            },
            {
#line 716
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 716
            .heldItem = ITEM_CHOICE_BAND,
#line 720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 717
            .ability = ABILITY_TECHNICIAN,
#line 718
            .lvl = 18,
#line 719
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 720
                MOVE_FALSE_SWIPE,
            },
            },
            {
#line 722
            .species = SPECIES_CUTIEFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 722
            .heldItem = ITEM_FOCUS_SASH,
#line 726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 723
            .ability = ABILITY_SHIELD_DUST,
#line 724
            .lvl = 16,
#line 725
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 726
                MOVE_DRAINING_KISS,
                MOVE_BUG_BITE,
                MOVE_MAGICAL_LEAF,
                MOVE_CHARM,
            },
            },
            {
#line 731
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 731
            .heldItem = ITEM_SHINY_STONE,
#line 735
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 732
            .ability = ABILITY_PRANKSTER,
#line 733
            .lvl = 15,
#line 734
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 735
                MOVE_PURSUIT,
                MOVE_ACROBATICS,
                MOVE_NIGHT_SHADE,
            },
            },
        },
    },
#line 739
    [DIFFICULTY_NORMAL][TRAINER_ABE] =
    {
#line 740
        .trainerName = _("Abe"),
#line 741
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 742
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 744
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 745
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 748
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 748
            .heldItem = ITEM_ROWAP_BERRY,
#line 752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 749
            .ability = ABILITY_SERENE_GRACE,
#line 750
            .lvl = 16,
#line 751
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 752
                MOVE_ACROBATICS,
                MOVE_FAIRY_WIND,
                MOVE_AGILITY,
            },
            },
            {
#line 756
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 756
            .heldItem = ITEM_MAGNET,
#line 760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 757
            .ability = ABILITY_WIND_POWER,
#line 758
            .lvl = 17,
#line 759
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 760
                MOVE_VOLT_SWITCH,
                MOVE_U_TURN,
            },
            },
            {
#line 763
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .heldItem = ITEM_LUM_BERRY,
#line 767
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 764
            .ability = ABILITY_INNER_FOCUS,
#line 765
            .lvl = 18,
#line 766
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 768
                MOVE_CONFUSE_RAY,
                MOVE_TOXIC,
                MOVE_VENOSHOCK,
                MOVE_AIR_CUTTER,
            },
            },
            {
#line 773
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .heldItem = ITEM_BERRY_JUICE,
#line 777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 774
            .ability = ABILITY_SUPER_LUCK,
#line 775
            .lvl = 18,
#line 776
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 777
                MOVE_WHIRLPOOL,
                MOVE_ICY_WIND,
                MOVE_PROTECT,
                MOVE_AQUA_JET,
            },
            },
            {
#line 782
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 782
            .heldItem = ITEM_SILK_SCARF,
#line 786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 783
            .ability = ABILITY_SPEED_BOOST,
#line 784
            .lvl = 17,
#line 785
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 786
                MOVE_EMBER,
                MOVE_BOUNCE,
                MOVE_LAST_RESORT,
            },
            },
        },
    },
#line 790
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 791
        .trainerName = _("Bryan"),
#line 792
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 793
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 795
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 796
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 799
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 799
            .heldItem = ITEM_SHARP_BEAK,
#line 803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 800
            .ability = ABILITY_UNNERVE,
#line 801
            .lvl = 43,
#line 802
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 803
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_AQUA_TAIL,
                MOVE_SCREECH,
            },
            },
            {
#line 808
            .species = SPECIES_HELIOLISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 808
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 809
            .ability = ABILITY_DRY_SKIN,
#line 810
            .lvl = 44,
#line 811
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 812
                MOVE_VOLT_SWITCH,
                MOVE_HYPER_VOICE,
                MOVE_GRASS_KNOT,
                MOVE_SURF,
            },
            },
            {
#line 817
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 817
            .heldItem = ITEM_LEFTOVERS,
#line 821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 818
            .ability = ABILITY_SKILL_LINK,
#line 819
            .lvl = 43,
#line 820
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 821
                MOVE_ARM_THRUST,
                MOVE_PIN_MISSILE,
                MOVE_ROCK_BLAST,
                MOVE_AGILITY,
            },
            },
            {
#line 826
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 826
            .heldItem = ITEM_LIECHI_BERRY,
#line 830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 827
            .ability = ABILITY_BLAZE,
#line 828
            .lvl = 44,
#line 829
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 830
                MOVE_DRAGON_DANCE,
                MOVE_BLAZE_KICK,
                MOVE_DUAL_WINGBEAT,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 835
            .species = SPECIES_TOEDSCRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 835
            .heldItem = ITEM_ROCKY_HELMET,
#line 839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 836
            .ability = ABILITY_MYCELIUM_MIGHT,
#line 837
            .lvl = 45,
#line 838
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 839
                MOVE_WRAP,
                MOVE_GIGA_DRAIN,
                MOVE_SCORCHING_SANDS,
                MOVE_SPORE,
            },
            },
            {
#line 844
            .species = SPECIES_SLIGGOO_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 844
            .heldItem = ITEM_EXPERT_BELT,
#line 848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 845
            .ability = ABILITY_SAP_SIPPER,
#line 846
            .lvl = 46,
#line 847
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 848
                MOVE_SHELTER,
                MOVE_BODY_PRESS,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 853
    [DIFFICULTY_NORMAL][TRAINER_THEO] =
    {
#line 854
        .trainerName = _("THEO"),
#line 855
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 856
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 858
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 859
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 862
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 863
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 866
    [DIFFICULTY_NORMAL][TRAINER_TOBY] =
    {
#line 867
        .trainerName = _("Toby"),
#line 868
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 869
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 871
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 872
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 876
            .species = SPECIES_CRAMORANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 876
            .heldItem = ITEM_FOCUS_SASH,
#line 880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 877
            .ability = ABILITY_GULP_MISSILE,
#line 878
            .lvl = 55,
#line 879
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 880
                MOVE_SURF,
                MOVE_HURRICANE,
                MOVE_BLIZZARD,
                MOVE_TAILWIND,
            },
            },
            {
#line 885
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 885
            .heldItem = ITEM_FAIRY_FEATHER,
#line 889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 886
            .ability = ABILITY_SERENE_GRACE,
#line 887
            .lvl = 52,
#line 888
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 889
                MOVE_AIR_SLASH,
                MOVE_DRAINING_KISS,
                MOVE_AURA_SPHERE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 894
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 894
            .heldItem = ITEM_LUM_BERRY,
#line 898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 895
            .ability = ABILITY_BLAZE,
#line 896
            .lvl = 52,
#line 897
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 898
                MOVE_FLAMETHROWER,
                MOVE_AIR_SLASH,
                MOVE_EARTH_POWER,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 903
    [DIFFICULTY_NORMAL][TRAINER_DENIS] =
    {
#line 904
        .trainerName = _("DENIS"),
#line 905
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 906
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 908
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 909
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 912
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 913
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 916
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 917
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 920
    [DIFFICULTY_NORMAL][TRAINER_VANCE] =
    {
#line 921
        .trainerName = _("VANCE"),
#line 922
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 923
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 925
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 926
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 929
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 930
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 933
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 934
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 937
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 938
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 941
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 942
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 945
    [DIFFICULTY_NORMAL][TRAINER_HANK] =
    {
#line 946
        .trainerName = _("HANK"),
#line 947
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 948
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 950
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 951
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 954
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 955
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 958
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 959
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 962
    [DIFFICULTY_NORMAL][TRAINER_ROY] =
    {
#line 963
        .trainerName = _("ROY"),
#line 964
        .trainerClass = TRAINER_CLASS_BIKER,
#line 965
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 967
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 971
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 972
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 975
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 976
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 979
    [DIFFICULTY_NORMAL][TRAINER_BORIS] =
    {
#line 980
        .trainerName = _("BORIS"),
#line 981
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 982
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 984
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 985
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 988
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 989
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 992
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 993
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 996
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 997
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1000
    [DIFFICULTY_NORMAL][TRAINER_BOB] =
    {
#line 1001
        .trainerName = _("BOB"),
#line 1002
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1003
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1005
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1006
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1009
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1010
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1013
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 1014
        .trainerName = _("JOSE"),
#line 1015
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1016
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1018
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1019
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1022
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1023
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1026
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1027
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1030
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1031
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1034
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1035
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1038
    [DIFFICULTY_NORMAL][TRAINER_PETER] =
    {
#line 1039
        .trainerName = _("Peter"),
#line 1040
        .trainerClass = TRAINER_CLASS_SAGE,
#line 1041
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 1043
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1044
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1047
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1048
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1051
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1052
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1055
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 1056
        .trainerName = _("PERRY"),
#line 1057
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 1058
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 1060
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1061
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIRD_KEEPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1064
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1065
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1068
    [DIFFICULTY_NORMAL][TRAINER_BRET] =
    {
#line 1069
        .trainerName = _("BRET"),
#line 1070
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 1071
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 1073
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 1074
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_JUGGLER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1077
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1078
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1081
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1082
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1085
    [DIFFICULTY_NORMAL][TRAINER_CARRIE] =
    {
#line 1086
        .trainerName = _("Carrie"),
#line 1087
        .trainerClass = TRAINER_CLASS_LASS,
#line 1088
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1090
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1091
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1094
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .heldItem = ITEM_EJECT_BUTTON,
#line 1098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1095
            .ability = ABILITY_INTIMIDATE,
#line 1096
            .lvl = 39,
#line 1097
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1098
                MOVE_AQUA_JET,
                MOVE_BARB_BARRAGE,
                MOVE_LIQUIDATION,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 1103
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .heldItem = ITEM_CHOICE_SCARF,
#line 1107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1104
            .ability = ABILITY_ADAPTABILITY,
#line 1105
            .lvl = 39,
#line 1106
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1107
                MOVE_FLIP_TURN,
                MOVE_FINAL_GAMBIT,
            },
            },
            {
#line 1110
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1110
            .heldItem = ITEM_BLACK_GLASSES,
#line 1114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1111
            .ability = ABILITY_AFTERMATH,
#line 1112
            .lvl = 37,
#line 1113
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1114
                MOVE_PURSUIT,
                MOVE_SUPER_FANG,
                MOVE_NIGHT_SLASH,
                MOVE_VENOSHOCK,
            },
            },
            {
#line 1119
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1119
            .heldItem = ITEM_THROAT_SPRAY,
#line 1123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1120
            .ability = ABILITY_COMPETITIVE,
#line 1121
            .lvl = 36,
#line 1122
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1123
                MOVE_HYPER_VOICE,
                MOVE_ALLURING_VOICE,
                MOVE_FLAMETHROWER,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 1128
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1129
        .trainerName = _("Bridget"),
#line 1130
        .trainerClass = TRAINER_CLASS_LASS,
#line 1131
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1133
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1134
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1137
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1137
            .heldItem = ITEM_FOCUS_SASH,
#line 1141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1138
            .ability = ABILITY_KEEN_EYE,
#line 1139
            .lvl = 38,
#line 1140
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1141
                MOVE_TAILWIND,
                MOVE_DUAL_WINGBEAT,
                MOVE_UPROAR,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 1146
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .heldItem = ITEM_SITRUS_BERRY,
#line 1150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1147
            .ability = ABILITY_THICK_FAT,
#line 1148
            .lvl = 38,
#line 1149
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1150
                MOVE_HEAVY_SLAM,
                MOVE_STOCKPILE,
                MOVE_SWALLOW,
                MOVE_SPIT_UP,
            },
            },
            {
#line 1155
            .species = SPECIES_TSAREENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1155
            .heldItem = ITEM_LIGHT_BALL,
#line 1159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1156
            .ability = ABILITY_QUEENLY_MAJESTY,
#line 1157
            .lvl = 37,
#line 1158
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1159
                MOVE_TROP_KICK,
                MOVE_KNOCK_OFF,
                MOVE_LOW_KICK,
                MOVE_FLING,
            },
            },
            {
#line 1164
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1164
            .heldItem = ITEM_HARD_STONE,
#line 1168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1165
            .ability = ABILITY_SHEER_FORCE,
#line 1166
            .lvl = 36,
#line 1167
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1168
                MOVE_POUNCE,
                MOVE_TRAILBLAZE,
                MOVE_LOW_SWEEP,
                MOVE_ACCELEROCK,
            },
            },
        },
    },
#line 1173
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 1174
        .trainerName = _("ALICE"),
#line 1175
        .trainerClass = TRAINER_CLASS_LASS,
#line 1176
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1178
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1179
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1182
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1183
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1186
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1187
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1190
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1191
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1194
    [DIFFICULTY_NORMAL][TRAINER_KRISE] =
    {
#line 1195
        .trainerName = _("Krise"),
#line 1196
        .trainerClass = TRAINER_CLASS_LASS,
#line 1197
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1199
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1200
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1203
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1203
            .heldItem = ITEM_COVERT_CLOAK,
#line 1207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1204
            .ability = ABILITY_SHELL_ARMOR,
#line 1205
            .lvl = 44,
#line 1206
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1207
                MOVE_RAZOR_SHELL,
                MOVE_HAMMER_ARM,
                MOVE_ICE_HAMMER,
                MOVE_AQUA_JET,
            },
            },
            {
#line 1212
            .species = SPECIES_HYDRAPPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1212
            .heldItem = ITEM_ASSAULT_VEST,
#line 1216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1213
            .ability = ABILITY_SUPERSWEET_SYRUP,
#line 1214
            .lvl = 44,
#line 1215
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1216
                MOVE_DRACO_METEOR,
                MOVE_LEAF_STORM,
                MOVE_EARTH_POWER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 1221
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1222
        .trainerName = _("CONNIE"),
#line 1223
        .trainerClass = TRAINER_CLASS_LASS,
#line 1224
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1226
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1227
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1230
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1231
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1234
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1235
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1238
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 1239
        .trainerName = _("LINDA"),
#line 1240
        .trainerClass = TRAINER_CLASS_LASS,
#line 1241
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1243
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1244
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1247
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1248
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1251
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1252
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1255
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1256
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1259
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 1260
        .trainerName = _("LAURA"),
#line 1261
        .trainerClass = TRAINER_CLASS_LASS,
#line 1262
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1264
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1265
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1268
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1269
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1272
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1273
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1276
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1277
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1280
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1281
        .trainerName = _("SHANNON"),
#line 1282
        .trainerClass = TRAINER_CLASS_LASS,
#line 1283
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1285
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1289
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1290
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1293
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1294
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1297
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1298
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1301
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1302
        .trainerName = _("Michelle"),
#line 1303
        .trainerClass = TRAINER_CLASS_LASS,
#line 1304
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1306
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1307
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1310
            .species = SPECIES_RILLABOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1310
            .heldItem = ITEM_MIRACLE_SEED,
#line 1314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1311
            .ability = ABILITY_GRASSY_SURGE,
#line 1312
            .lvl = 49,
#line 1313
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1314
                MOVE_FAKE_OUT,
                MOVE_GRASSY_GLIDE,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 1319
            .species = SPECIES_FLORGES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .heldItem = ITEM_GRASSY_SEED,
#line 1323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1320
            .ability = ABILITY_FLOWER_VEIL,
#line 1321
            .lvl = 50,
#line 1322
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1323
                MOVE_ALLURING_VOICE,
                MOVE_STORED_POWER,
                MOVE_FLORAL_HEALING,
                MOVE_CALM_MIND,
            },
            },
            {
#line 1328
            .species = SPECIES_GOGOAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1328
            .heldItem = ITEM_LUM_BERRY,
#line 1332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1329
            .ability = ABILITY_GRASS_PELT,
#line 1330
            .lvl = 50,
#line 1331
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1332
                MOVE_HORN_LEECH,
                MOVE_BODY_PRESS,
                MOVE_ROCK_SLIDE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1337
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1337
            .heldItem = ITEM_BLUNDER_POLICY,
#line 1341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1338
            .ability = ABILITY_BLAZE,
#line 1339
            .lvl = 49,
#line 1340
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1341
                MOVE_INFERNO,
                MOVE_NATURE_POWER,
                MOVE_FOCUS_BLAST,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 1346
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 1347
        .trainerName = _("Dana"),
#line 1348
        .trainerClass = TRAINER_CLASS_LASS,
#line 1349
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1351
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1352
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1355
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1355
            .heldItem = ITEM_EVIOLITE,
#line 1359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1356
            .ability = ABILITY_OWN_TEMPO,
#line 1357
            .lvl = 55,
#line 1358
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1359
                MOVE_LICK,
                MOVE_MEGA_KICK,
                MOVE_ZEN_HEADBUTT,
                MOVE_COUNTER,
            },
            },
            {
#line 1364
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1364
            .heldItem = ITEM_MUSCLE_BAND,
#line 1368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1365
            .ability = ABILITY_TECHNICIAN,
#line 1366
            .lvl = 53,
#line 1367
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1368
                MOVE_AERIAL_ACE,
                MOVE_BUG_BITE,
                MOVE_ROCK_SMASH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 1373
            .species = SPECIES_AURORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1373
            .heldItem = ITEM_POWER_HERB,
#line 1377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1374
            .ability = ABILITY_REFRIGERATE,
#line 1375
            .lvl = 53,
#line 1376
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1377
                MOVE_HYPER_BEAM,
                MOVE_HYPER_VOICE,
                MOVE_METEOR_BEAM,
                MOVE_THUNDER,
            },
            },
        },
    },
#line 1382
    [DIFFICULTY_NORMAL][TRAINER_ELLEN] =
    {
#line 1383
        .trainerName = _("ELLEN"),
#line 1384
        .trainerClass = TRAINER_CLASS_LASS,
#line 1385
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 1387
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 1388
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_LASS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1391
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1392
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1395
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1396
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1399
    [DIFFICULTY_NORMAL][TRAINER_NICK] =
    {
#line 1400
        .trainerName = _("NICK"),
#line 1401
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1402
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1404
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1405
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1408
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1409
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1412
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1413
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1416
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1417
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1420
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 1421
        .trainerName = _("AARON"),
#line 1422
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1425
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1426
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1429
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1430
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1433
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1434
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1437
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1438
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1441
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 1442
        .trainerName = _("PAUL"),
#line 1443
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1444
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1446
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1447
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_DRAGON_TAMER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1450
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1451
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1454
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1455
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1458
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1459
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1462
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1463
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1466
    [DIFFICULTY_NORMAL][TRAINER_CODY] =
    {
#line 1467
        .trainerName = _("CODY"),
#line 1468
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1469
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1471
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1472
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_DRAGON_TAMER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1475
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1476
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1479
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1480
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1483
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1484
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1487
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1488
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1491
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 1492
        .trainerName = _("MIKE"),
#line 1493
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1494
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1496
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_DRAGON_TAMER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1500
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1501
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1504
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1505
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1508
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1509
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1512
    [DIFFICULTY_NORMAL][TRAINER_GAVEN] =
    {
#line 1513
        .trainerName = _("GAVEN"),
#line 1514
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1515
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1517
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1518
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1521
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1522
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1525
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1526
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1529
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1530
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1533
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1534
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1537
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1538
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1541
    [DIFFICULTY_NORMAL][TRAINER_RYAN] =
    {
#line 1542
        .trainerName = _("RYAN"),
#line 1543
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1544
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1546
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1547
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1550
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1551
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1554
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1555
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1558
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1559
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1562
    [DIFFICULTY_NORMAL][TRAINER_JAKE] =
    {
#line 1563
        .trainerName = _("JAKE"),
#line 1564
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1565
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1567
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1568
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1571
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1572
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1575
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1576
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1579
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1580
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1583
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1584
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1587
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1588
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1591
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 1592
        .trainerName = _("BLAKE"),
#line 1593
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1594
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1596
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1597
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1600
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1601
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1604
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1605
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1608
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1609
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1612
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1613
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1616
    [DIFFICULTY_NORMAL][TRAINER_BRIAN] =
    {
#line 1617
        .trainerName = _("BRIAN"),
#line 1618
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1619
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1621
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1625
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1626
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1629
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1630
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1633
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1634
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1637
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1638
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1641
    [DIFFICULTY_NORMAL][TRAINER_ERICK] =
    {
#line 1642
        .trainerName = _("ERICK"),
#line 1643
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1644
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1646
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1647
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1650
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1651
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1654
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1655
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1658
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1659
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1662
    [DIFFICULTY_NORMAL][TRAINER_ANDY] =
    {
#line 1663
        .trainerName = _("ANDY"),
#line 1664
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1665
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1667
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1668
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1671
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1672
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1675
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1676
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1679
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1680
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1683
    [DIFFICULTY_NORMAL][TRAINER_TYLER] =
    {
#line 1684
        .trainerName = _("TYLER"),
#line 1685
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1686
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1688
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1689
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1692
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1693
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1696
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1697
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1700
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1701
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1704
    [DIFFICULTY_NORMAL][TRAINER_SEAN] =
    {
#line 1705
        .trainerName = _("SEAN"),
#line 1706
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1707
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1709
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1710
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1713
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1714
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1717
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1718
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1721
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1722
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1725
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 1726
        .trainerName = _("KEVIN"),
#line 1727
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1728
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1730
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1731
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1734
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1735
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1738
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1739
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1742
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1743
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1746
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1747
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1750
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1751
        .trainerName = _("STEVE"),
#line 1752
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1753
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1755
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1756
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1759
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1760
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1763
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1764
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1767
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1768
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1771
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 1772
        .trainerName = _("ALLEN"),
#line 1773
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1774
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1776
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 1777
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1780
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1781
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1784
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1785
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1788
    [DIFFICULTY_NORMAL][TRAINER_DARIN] =
    {
#line 1789
        .trainerName = _("DARIN"),
#line 1790
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 1791
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 1793
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 1794
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_DRAGON_TAMER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1797
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1798
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1801
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1802
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1805
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1806
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1809
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1810
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1813
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 1814
        .trainerName = _("GWEN"),
#line 1815
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1816
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1818
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1819
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1822
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1823
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1826
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1827
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1830
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1831
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1834
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1835
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1838
    [DIFFICULTY_NORMAL][TRAINER_LOIS] =
    {
#line 1839
        .trainerName = _("LOIS"),
#line 1840
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1841
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1843
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1844
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1847
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1848
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1851
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1852
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1855
    [DIFFICULTY_NORMAL][TRAINER_FRAN] =
    {
#line 1856
        .trainerName = _("FRAN"),
#line 1857
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1858
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1860
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1861
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1864
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1865
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1868
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1869
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1872
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1873
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1876
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 1877
        .trainerName = _("LOLA"),
#line 1878
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1879
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1881
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1882
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1885
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1886
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1889
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1890
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1893
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1894
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1897
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1898
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1901
    [DIFFICULTY_NORMAL][TRAINER_KATE] =
    {
#line 1902
        .trainerName = _("KATE"),
#line 1903
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1904
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1906
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1907
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1910
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1911
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1914
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1915
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1918
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 1919
        .trainerName = _("IRENE"),
#line 1920
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1921
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1923
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1924
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1927
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1928
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1931
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1932
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1935
    [DIFFICULTY_NORMAL][TRAINER_KELLY] =
    {
#line 1936
        .trainerName = _("KELLY"),
#line 1937
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1938
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1940
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1941
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1944
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1945
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1948
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1949
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1952
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1953
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1956
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1957
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1960
    [DIFFICULTY_NORMAL][TRAINER_JOYCE] =
    {
#line 1961
        .trainerName = _("JOYCE"),
#line 1962
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1963
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1965
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1966
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1969
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1970
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1973
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1974
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1977
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1978
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1981
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1982
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1985
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1986
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1989
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 1990
        .trainerName = _("BETH"),
#line 1991
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1992
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1994
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 1995
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1998
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1999
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2002
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2003
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2006
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2007
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2010
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2011
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2014
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2015
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2018
    [DIFFICULTY_NORMAL][TRAINER_REENA] =
    {
#line 2019
        .trainerName = _("REENA"),
#line 2020
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2021
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2023
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2024
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2027
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2028
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2031
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2032
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2035
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2036
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2039
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2040
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2043
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2044
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2047
    [DIFFICULTY_NORMAL][TRAINER_MEGAN] =
    {
#line 2048
        .trainerName = _("MEGAN"),
#line 2049
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2050
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2052
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2053
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2056
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2057
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2060
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2061
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2064
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2065
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2068
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2069
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2072
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 2073
        .trainerName = _("CAROL"),
#line 2074
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2075
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2077
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2078
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2081
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2082
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2085
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2086
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2089
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2090
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2093
    [DIFFICULTY_NORMAL][TRAINER_QUINN] =
    {
#line 2094
        .trainerName = _("Quinn"),
#line 2095
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2096
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2098
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2099
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2102
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2102
            .heldItem = ITEM_FOCUS_SASH,
#line 2106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2103
            .ability = ABILITY_SUN_GAZER,
#line 2104
            .lvl = 50,
#line 2105
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2106
                MOVE_STRENGTH_SAP,
                MOVE_MOONBLAST,
                MOVE_MATCHA_GOTCHA,
                MOVE_SACRED_FIRE,
            },
            },
            {
#line 2111
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2111
            .heldItem = ITEM_EJECT_PACK,
#line 2115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2112
            .ability = ABILITY_CHLOROPHYLL,
#line 2113
            .lvl = 50,
#line 2114
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2115
                MOVE_LEAF_STORM,
                MOVE_PSYCHO_BOOST,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 2119
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2119
            .heldItem = ITEM_WISE_GLASSES,
#line 2123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2120
            .ability = ABILITY_LEVITATE,
#line 2121
            .lvl = 51,
#line 2122
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2123
                MOVE_ANCIENT_POWER,
                MOVE_EXTRASENSORY,
                MOVE_FIRE_SPIN,
                MOVE_ROCK_POLISH,
            },
            },
            {
#line 2128
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2128
            .heldItem = ITEM_BIG_ROOT,
#line 2132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2129
            .ability = ABILITY_DANCER,
#line 2130
            .lvl = 51,
#line 2131
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2132
                MOVE_GIGA_DRAIN,
                MOVE_BOUNCY_BUBBLE,
                MOVE_ICE_BEAM,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 2137
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2137
            .heldItem = ITEM_WHITE_HERB,
#line 2141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2138
            .ability = ABILITY_SWARM,
#line 2139
            .lvl = 50,
#line 2140
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2141
                MOVE_IRON_HEAD,
                MOVE_MEGAHORN,
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 2146
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2146
            .heldItem = ITEM_CHOICE_SCARF,
#line 2150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2147
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 2148
            .lvl = 51,
#line 2149
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2150
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 2155
    [DIFFICULTY_NORMAL][TRAINER_EMMA] =
    {
#line 2156
        .trainerName = _("EMMA"),
#line 2157
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2158
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2160
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2161
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2164
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2165
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2168
    [DIFFICULTY_NORMAL][TRAINER_CYBIL] =
    {
#line 2169
        .trainerName = _("CYBIL"),
#line 2170
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2171
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2173
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2174
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2177
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2178
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2181
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2182
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2185
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2186
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2189
    [DIFFICULTY_NORMAL][TRAINER_JENN] =
    {
#line 2190
        .trainerName = _("JENN"),
#line 2191
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2192
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2194
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2195
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2198
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2199
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2202
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2203
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2206
    [DIFFICULTY_NORMAL][TRAINER_CARA] =
    {
#line 2207
        .trainerName = _("CARA"),
#line 2208
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 2209
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 2211
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2212
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2215
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2216
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2219
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2220
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2223
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2224
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2227
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 2228
        .trainerName = _("Victoria"),
#line 2229
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2230
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2232
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2233
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2236
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2236
            .heldItem = ITEM_LUM_BERRY,
#line 2240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2237
            .ability = ABILITY_THICK_FAT,
#line 2238
            .lvl = 37,
#line 2239
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2240
                MOVE_BODY_SLAM,
                MOVE_BODY_PRESS,
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
            },
            },
            {
#line 2245
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2245
            .heldItem = ITEM_FAIRY_FEATHER,
#line 2249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2246
            .ability = ABILITY_CUTE_CHARM,
#line 2247
            .lvl = 36,
#line 2248
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2249
                MOVE_DRAINING_KISS,
                MOVE_MYSTICAL_FIRE,
                MOVE_PSYSHOCK,
                MOVE_CALM_MIND,
            },
            },
            {
#line 2254
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2254
            .heldItem = ITEM_SALAC_BERRY,
#line 2258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2255
            .ability = ABILITY_STURDY,
#line 2256
            .lvl = 36,
#line 2257
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2258
                MOVE_RAPID_SPIN,
                MOVE_BULLDOZE,
                MOVE_TRAILBLAZE,
                MOVE_ICE_FANG,
            },
            },
            {
#line 2263
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2263
            .heldItem = ITEM_PUNCHING_GLOVE,
#line 2267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2264
            .ability = ABILITY_IRON_FIST,
#line 2265
            .lvl = 37,
#line 2266
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2267
                MOVE_JET_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_POWER_UP_PUNCH,
            },
            },
        },
    },
#line 2272
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2273
        .trainerName = _("SAMANTHA"),
#line 2274
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2275
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2277
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2278
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2281
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2281
            .heldItem = ITEM_JABOCA_BERRY,
#line 2285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2282
            .ability = ABILITY_SOLID_ROCK,
#line 2283
            .lvl = 37,
#line 2284
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2285
                MOVE_STEALTH_ROCK,
                MOVE_COUNTER,
                MOVE_GIGA_DRAIN,
                MOVE_POWER_GEM,
            },
            },
            {
#line 2290
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2290
            .heldItem = ITEM_ROWAP_BERRY,
#line 2294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2291
            .ability = ABILITY_PROTEAN,
#line 2292
            .lvl = 38,
#line 2293
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2294
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_KNOCK_OFF,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 2299
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2299
            .heldItem = ITEM_IRON_BALL,
#line 2303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 2300
            .ability = ABILITY_STURDY,
#line 2301
            .lvl = 36,
#line 2302
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2304
                MOVE_GYRO_BALL,
                MOVE_LUNGE,
                MOVE_VOLT_SWITCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2309
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2309
            .heldItem = ITEM_TWISTED_SPOON,
#line 2313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2310
            .ability = ABILITY_INTIMIDATE,
#line 2311
            .lvl = 38,
#line 2312
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2313
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_SLAM,
                MOVE_BULLDOZE,
                MOVE_SUBSTITUTE,
            },
            },
        },
    },
#line 2318
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 2319
        .trainerName = _("JULIE"),
#line 2320
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2321
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2323
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2324
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2327
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2328
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2331
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2332
        .trainerName = _("JACLYN"),
#line 2333
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2334
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2336
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2337
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2340
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2344
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 2345
        .trainerName = _("BRENDA"),
#line 2346
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2347
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2349
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2350
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2353
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2354
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2357
    [DIFFICULTY_NORMAL][TRAINER_CASSIE] =
    {
#line 2358
        .trainerName = _("CASSIE"),
#line 2359
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2360
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2362
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2363
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2366
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2367
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2370
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2371
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2374
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 2375
        .trainerName = _("CAROLINE"),
#line 2376
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2377
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2379
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2380
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2383
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2384
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2387
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2388
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2391
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2392
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2395
    [DIFFICULTY_NORMAL][TRAINER_CARLENE] =
    {
#line 2396
        .trainerName = _("CARLENE"),
#line 2397
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2398
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2400
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2401
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2404
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2405
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2408
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 2409
        .trainerName = _("JESSICA"),
#line 2410
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2411
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2413
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2414
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2417
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2418
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2421
    [DIFFICULTY_NORMAL][TRAINER_RACHAEL] =
    {
#line 2422
        .trainerName = _("RACHAEL"),
#line 2423
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2424
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2426
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2430
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2431
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2434
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 2435
        .trainerName = _("ANGELICA"),
#line 2436
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2437
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2439
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2440
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2443
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2444
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2447
    [DIFFICULTY_NORMAL][TRAINER_KENDRA] =
    {
#line 2448
        .trainerName = _("KENDRA"),
#line 2449
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2450
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2452
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2453
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2456
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2457
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2460
    [DIFFICULTY_NORMAL][TRAINER_VERONICA] =
    {
#line 2461
        .trainerName = _("VERONICA"),
#line 2462
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2463
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2465
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2466
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2469
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2470
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2473
    [DIFFICULTY_NORMAL][TRAINER_JULIA] =
    {
#line 2474
        .trainerName = _("Julia"),
#line 2475
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2476
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2478
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2479
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2482
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2482
            .heldItem = ITEM_SITRUS_BERRY,
#line 2486
            .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
#line 2483
            .ability = ABILITY_LEVITATE,
#line 2484
            .lvl = 48,
#line 2485
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2487
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_HIDDEN_POWER,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 2492
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2492
            .heldItem = ITEM_MAGNET,
#line 2496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2493
            .ability = ABILITY_EARTH_EATER,
#line 2494
            .lvl = 50,
#line 2495
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2496
                MOVE_AQUA_TAIL,
                MOVE_HIGH_HORSEPOWER,
                MOVE_SPARK,
                MOVE_ICY_WIND,
            },
            },
        },
    },
#line 2501
    [DIFFICULTY_NORMAL][TRAINER_THERESA] =
    {
#line 2502
        .trainerName = _("THERESA"),
#line 2503
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2504
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2506
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2507
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2510
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2511
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2514
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 2515
        .trainerName = _("Valerie"),
#line 2516
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2517
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2519
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2520
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2523
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2523
            .heldItem = ITEM_CHOPLE_BERRY,
#line 2527
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2524
            .ability = ABILITY_ADAPTABILITY,
#line 2525
            .lvl = 69,
#line 2526
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2527
                MOVE_FACADE,
                MOVE_BLIZZARD,
                MOVE_THUNDER,
                MOVE_THIEF,
            },
            },
        },
    },
#line 2532
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 2533
        .trainerName = _("Olivia"),
#line 2534
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2535
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2537
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 2538
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BEAUTY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 2541
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2541
            .heldItem = ITEM_LIFE_ORB,
#line 2545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2542
            .ability = ABILITY_MAGIC_GUARD,
#line 2543
            .lvl = 54,
#line 2544
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2545
                MOVE_PSYCHIC,
                MOVE_CHARGE_BEAM,
                MOVE_ENERGY_BALL,
                MOVE_AURA_SPHERE,
            },
            },
            {
#line 2550
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2550
            .heldItem = ITEM_MIRACLE_SEED,
#line 2554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2551
            .ability = ABILITY_EFFECT_SPORE,
#line 2552
            .lvl = 54,
#line 2553
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2554
                MOVE_GIGA_DRAIN,
                MOVE_MOONBLAST,
                MOVE_LEECH_SEED,
                MOVE_SPORE,
            },
            },
            {
#line 2559
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2559
            .heldItem = ITEM_SALAC_BERRY,
#line 2563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2560
            .ability = ABILITY_STURDY,
#line 2561
            .lvl = 55,
#line 2562
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2563
                MOVE_ZIPPY_ZAP,
                MOVE_IRON_TAIL,
                MOVE_SPIKY_SHIELD,
                MOVE_REVERSAL,
            },
            },
            {
#line 2568
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2568
            .heldItem = ITEM_LEFTOVERS,
#line 2572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2569
            .ability = ABILITY_IRON_FIST,
#line 2570
            .lvl = 54,
#line 2571
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2572
                MOVE_BULK_UP,
                MOVE_JET_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 2577
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2577
            .heldItem = ITEM_WISE_GLASSES,
#line 2581
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2578
            .ability = ABILITY_FLASH_FIRE,
#line 2579
            .lvl = 53,
#line 2580
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2581
                MOVE_FLAMETHROWER,
                MOVE_SCORCHING_SANDS,
                MOVE_DARK_PULSE,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 2586
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2587
        .trainerName = _("LARRY"),
#line 2588
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2589
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2591
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2592
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2595
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2596
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2599
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 2600
        .trainerName = _("ANDREW"),
#line 2601
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2602
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2604
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2605
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2608
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2609
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2612
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2613
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2616
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 2617
        .trainerName = _("CALVIN"),
#line 2618
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2619
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2621
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2625
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2626
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2629
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2630
        .trainerName = _("SHANE"),
#line 2631
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2632
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2634
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2635
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2638
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2639
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2642
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2643
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2646
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 2647
        .trainerName = _("BEN"),
#line 2648
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2649
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2651
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2652
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2655
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2656
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2659
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2660
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2663
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2664
        .trainerName = _("BRENT"),
#line 2665
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2666
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2668
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2669
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2672
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2673
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2676
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2677
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2680
    [DIFFICULTY_NORMAL][TRAINER_RON] =
    {
#line 2681
        .trainerName = _("RON"),
#line 2682
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2683
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2685
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2686
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2689
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2690
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2693
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2694
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2697
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2698
        .trainerName = _("ETHAN"),
#line 2699
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2700
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2702
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2703
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2706
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2707
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2710
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2711
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2714
    [DIFFICULTY_NORMAL][TRAINER_ISSAC] =
    {
#line 2715
        .trainerName = _("ISSAC"),
#line 2716
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2717
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2719
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2720
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2723
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2724
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2727
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2728
        .trainerName = _("DONALD"),
#line 2729
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2730
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2732
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2733
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2736
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2737
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2740
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2741
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2744
    [DIFFICULTY_NORMAL][TRAINER_ZACH] =
    {
#line 2745
        .trainerName = _("ZACH"),
#line 2746
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2747
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2749
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2750
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2753
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2754
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2757
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2758
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2761
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2762
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2765
    [DIFFICULTY_NORMAL][TRAINER_MILLER] =
    {
#line 2766
        .trainerName = _("MILLER"),
#line 2767
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2768
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2771
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEMANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2774
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2775
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2778
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2779
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2782
    [DIFFICULTY_NORMAL][TRAINER_GRUNT] =
    {
#line 2783
        .trainerName = _("GRUNT"),
#line 2784
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2785
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2787
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2788
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2791
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2792
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2795
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2796
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2799
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2800
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2803
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_2] =
    {
#line 2804
        .trainerName = _("GRUNT"),
#line 2805
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2806
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2808
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2809
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2812
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2813
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2816
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2817
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2820
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2821
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2824
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_3] =
    {
#line 2825
        .trainerName = _("GRUNT"),
#line 2826
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2827
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2829
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2830
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2833
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2834
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2837
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2838
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2841
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_4] =
    {
#line 2842
        .trainerName = _("GRUNT"),
#line 2843
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2844
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2846
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2847
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2850
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2851
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2854
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2855
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2858
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2859
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2862
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_5] =
    {
#line 2863
        .trainerName = _("GRUNT"),
#line 2864
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2865
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2867
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2868
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2871
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2872
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2875
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2876
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2879
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_6] =
    {
#line 2880
        .trainerName = _("GRUNT"),
#line 2881
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2882
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2884
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2885
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2888
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2889
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2892
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2893
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2896
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2897
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2900
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_7] =
    {
#line 2901
        .trainerName = _("GRUNT"),
#line 2902
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2903
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2905
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2906
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2909
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2910
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2913
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2914
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2917
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_8] =
    {
#line 2918
        .trainerName = _("GRUNT"),
#line 2919
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2920
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2922
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2923
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2926
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2927
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2930
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2931
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2934
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_9] =
    {
#line 2935
        .trainerName = _("GRUNT"),
#line 2936
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2937
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2939
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2940
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2943
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2944
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2947
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2948
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2951
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2952
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2955
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_10] =
    {
#line 2956
        .trainerName = _("GRUNT"),
#line 2957
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2958
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2960
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2961
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2964
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2965
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2968
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2969
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2972
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_11] =
    {
#line 2973
        .trainerName = _("GRUNT"),
#line 2974
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2975
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2977
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2978
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2981
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2982
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2985
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2986
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2989
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_12] =
    {
#line 2990
        .trainerName = _("GRUNT"),
#line 2991
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 2992
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 2994
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 2995
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2998
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2999
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3002
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3003
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3006
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3007
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3010
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_13] =
    {
#line 3011
        .trainerName = _("GRUNT"),
#line 3012
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3013
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3015
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3016
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3019
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3020
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3023
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_14] =
    {
#line 3024
        .trainerName = _("GRUNT"),
#line 3025
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3026
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3028
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3029
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3032
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3033
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3036
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_15] =
    {
#line 3037
        .trainerName = _("GRUNT"),
#line 3038
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3039
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3041
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3042
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3045
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3046
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3049
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3050
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3053
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3054
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3057
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_16] =
    {
#line 3058
        .trainerName = _("GRUNT"),
#line 3059
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3060
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3062
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3063
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3066
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3067
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3070
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_17] =
    {
#line 3071
        .trainerName = _("GRUNT"),
#line 3072
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3073
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3075
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3076
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3079
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3080
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3083
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3084
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3087
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_18] =
    {
#line 3088
        .trainerName = _("GRUNT"),
#line 3089
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3090
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3092
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3093
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3096
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3097
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3100
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3101
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3104
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3105
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3108
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_19] =
    {
#line 3109
        .trainerName = _("GRUNT"),
#line 3110
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3111
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3113
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3114
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3117
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3118
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3121
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_20] =
    {
#line 3122
        .trainerName = _("GRUNT"),
#line 3123
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3124
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3126
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3127
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3130
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3131
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3134
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3135
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3138
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_21] =
    {
#line 3139
        .trainerName = _("Grunt"),
#line 3140
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3141
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3143
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3144
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3147
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3147
            .heldItem = ITEM_CHOICE_SCARF,
#line 3151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3148
            .ability = ABILITY_RATTLED,
#line 3149
            .lvl = 25,
#line 3150
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3151
                MOVE_DRAGON_RAGE,
            },
            },
            {
#line 3153
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3153
            .heldItem = ITEM_SILK_SCARF,
#line 3157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3154
            .ability = ABILITY_MOLD_BREAKER,
#line 3155
            .lvl = 23,
#line 3156
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3157
                MOVE_BULLDOZE,
                MOVE_HEADBUTT,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3162
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3162
            .heldItem = ITEM_SITRUS_BERRY,
#line 3166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3163
            .ability = ABILITY_EFFECT_SPORE,
#line 3164
            .lvl = 23,
#line 3165
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3166
                MOVE_POWDER,
                MOVE_BUG_BITE,
                MOVE_HORN_LEECH,
                MOVE_STOMPING_TANTRUM,
            },
            },
            {
#line 3171
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3171
            .heldItem = ITEM_CHOICE_SCARF,
#line 3175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3172
            .ability = ABILITY_WEAK_ARMOR,
#line 3173
            .lvl = 25,
#line 3174
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3175
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 3178
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3178
            .heldItem = ITEM_WATER_GEM,
#line 3182
            .iv = TRAINER_PARTY_IVS(31, 0, 30, 31, 30, 31),
#line 3179
            .ability = ABILITY_LEVITATE,
#line 3180
            .lvl = 22,
#line 3181
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3183
                MOVE_COSMIC_POWER,
                MOVE_STORED_POWER,
                MOVE_HIDDEN_POWER,
                MOVE_REST,
            },
            },
        },
    },
#line 3188
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_22] =
    {
#line 3189
        .trainerName = _("Grunt"),
#line 3190
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3191
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 3193
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3194
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3197
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3197
            .heldItem = ITEM_CUSTAP_BERRY,
#line 3201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3198
            .ability = ABILITY_GLUTTONY,
#line 3199
            .lvl = 24,
#line 3200
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3201
                MOVE_GIGA_DRAIN,
                MOVE_ACID_SPRAY,
                MOVE_BELCH,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 3206
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3206
            .heldItem = ITEM_THROAT_SPRAY,
#line 3210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3207
            .ability = ABILITY_TRACE,
#line 3208
            .lvl = 25,
#line 3209
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3210
                MOVE_DISARMING_VOICE,
                MOVE_GRASS_WHISTLE,
                MOVE_SHOCK_WAVE,
                MOVE_PSYBEAM,
            },
            },
            {
#line 3215
            .species = SPECIES_SANDYGAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3215
            .heldItem = ITEM_ASSAULT_VEST,
#line 3219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3216
            .ability = ABILITY_WATER_COMPACTION,
#line 3217
            .lvl = 25,
#line 3218
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3219
                MOVE_SCORCHING_SANDS,
                MOVE_HEX,
                MOVE_ANCIENT_POWER,
                MOVE_POLTERGEIST,
            },
            },
            {
#line 3224
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3224
            .heldItem = ITEM_SITRUS_BERRY,
#line 3228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3225
            .ability = ABILITY_HARVEST,
#line 3226
            .lvl = 23,
#line 3227
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3228
                MOVE_LEECH_SEED,
                MOVE_BULLDOZE,
                MOVE_TROP_KICK,
                MOVE_PROTECT,
            },
            },
            {
#line 3233
            .species = SPECIES_QWILFISH_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3233
            .heldItem = ITEM_METRONOME,
#line 3237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3234
            .ability = ABILITY_POISON_POINT,
#line 3235
            .lvl = 24,
#line 3236
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3237
                MOVE_BARB_BARRAGE,
            },
            },
        },
    },
#line 3239
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_23] =
    {
#line 3240
        .trainerName = _("GRUNT"),
#line 3241
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3242
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3244
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3245
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3248
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3249
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3252
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3253
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3256
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3257
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3260
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_24] =
    {
#line 3261
        .trainerName = _("GRUNT"),
#line 3262
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3263
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3265
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3269
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3270
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3273
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3274
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3277
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3278
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3281
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3282
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3285
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3286
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3289
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_25] =
    {
#line 3290
        .trainerName = _("GRUNT"),
#line 3291
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3292
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3294
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3295
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3298
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3299
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3302
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3303
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3306
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_26] =
    {
#line 3307
        .trainerName = _("GRUNT"),
#line 3308
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3309
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 3311
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3312
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3315
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3316
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3319
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3320
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3323
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_27] =
    {
#line 3324
        .trainerName = _("GRUNT"),
#line 3325
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3326
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3328
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3329
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3332
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3333
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3336
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3337
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3340
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3341
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3344
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3345
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3348
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_28] =
    {
#line 3349
        .trainerName = _("GRUNT"),
#line 3350
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3351
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 3353
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3354
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3357
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3358
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3361
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3362
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3365
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3366
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3369
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3370
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3373
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_29] =
    {
#line 3374
        .trainerName = _("GRUNT"),
#line 3375
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3376
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .encounterMusic_gender =
#line 3378
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3379
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3382
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3383
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3386
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3387
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3390
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_30] =
    {
#line 3391
        .trainerName = _("GRUNT"),
#line 3392
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3393
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3395
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3396
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3397
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3400
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3401
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3404
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_31] =
    {
#line 3405
        .trainerName = _("GRUNT"),
#line 3406
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3407
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3409
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3410
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3411
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3414
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3415
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3418
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_32] =
    {
#line 3419
        .trainerName = _("GRUNT"),
#line 3420
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3421
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3423
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3424
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3425
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3428
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3429
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3432
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_33] =
    {
#line 3433
        .trainerName = _("Grunt"),
#line 3434
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3435
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3437
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3438
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3441
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .heldItem = ITEM_QUICK_CLAW,
#line 3445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3442
            .ability = ABILITY_REGENERATOR,
#line 3443
            .lvl = 44,
#line 3444
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3445
                MOVE_FLIP_TURN,
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_MIRROR_COAT,
            },
            },
            {
#line 3450
            .species = SPECIES_WEEZING_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3450
            .heldItem = ITEM_PAYAPA_BERRY,
#line 3454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3451
            .ability = ABILITY_LEVITATE,
#line 3452
            .lvl = 43,
#line 3453
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3454
                MOVE_STRANGE_STEAM,
                MOVE_SLUDGE_WAVE,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 3459
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3459
            .heldItem = ITEM_FOCUS_BAND,
#line 3463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3460
            .ability = ABILITY_SCRAPPY,
#line 3461
            .lvl = 42,
#line 3462
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3463
                MOVE_DIZZY_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_ROCK_SMASH,
                MOVE_COUNTER,
            },
            },
            {
#line 3468
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3468
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3469
            .ability = ABILITY_VOLT_ABSORB,
#line 3470
            .lvl = 43,
#line 3471
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3472
                MOVE_SURF,
                MOVE_DISCHARGE,
                MOVE_THUNDER_WAVE,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 3477
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_36] =
    {
#line 3478
        .trainerName = _("Grunt"),
#line 3479
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3480
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3482
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3483
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3486
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3486
            .heldItem = ITEM_LEFTOVERS,
#line 3490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3487
            .ability = ABILITY_NATURAL_CURE,
#line 3488
            .lvl = 25,
#line 3489
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3490
                MOVE_HELPING_HAND,
                MOVE_HEAL_PULSE,
                MOVE_COPYCAT,
            },
            },
            {
#line 3494
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3494
            .heldItem = ITEM_EXPERT_BELT,
#line 3498
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3495
            .ability = ABILITY_SUN_GAZER,
#line 3496
            .lvl = 25,
#line 3497
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3498
                MOVE_AIR_CUTTER,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_DRAIN,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3503
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3503
            .heldItem = ITEM_SITRUS_BERRY,
#line 3507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3504
            .ability = ABILITY_INTIMIDATE,
#line 3505
            .lvl = 25,
#line 3506
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3507
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_BITE,
                MOVE_BULK_UP,
            },
            },
            {
#line 3512
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .heldItem = ITEM_SILVER_POWDER,
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .ability = ABILITY_PRANKSTER,
#line 3514
            .lvl = 25,
#line 3515
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_TAILWIND,
                MOVE_BUG_BUZZ,
                MOVE_INFESTATION,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3521
    [DIFFICULTY_NORMAL][TRAINER_ETO_2] =
    {
#line 3522
        .trainerName = _("ETO"),
#line 3523
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3524
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3526
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3527
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3530
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3531
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3534
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3535
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3538
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3539
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3542
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3543
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3546
    [DIFFICULTY_NORMAL][TRAINER_ETO_3] =
    {
#line 3547
        .trainerName = _("ETO"),
#line 3548
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 3549
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 3551
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 3552
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3555
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3556
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3559
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3560
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3563
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3564
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3567
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3568
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3571
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3572
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3575
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 3576
        .trainerName = _("PRESTON"),
#line 3577
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3578
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3580
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3581
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_GENTLEMAN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3584
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3585
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3588
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3589
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3592
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 3593
        .trainerName = _("EDWARD"),
#line 3594
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3595
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3597
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3598
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_GENTLEMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3601
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3602
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3605
    [DIFFICULTY_NORMAL][TRAINER_GREGORY] =
    {
#line 3606
        .trainerName = _("GREGORY"),
#line 3607
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3608
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3610
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3611
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_GENTLEMAN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3614
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3615
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3618
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3619
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3622
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 3623
        .trainerName = _("VIRGIL"),
#line 3624
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3625
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3627
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3628
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_GENTLEMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3631
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3632
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3635
    [DIFFICULTY_NORMAL][TRAINER_ALFRED] =
    {
#line 3636
        .trainerName = _("ALFRED"),
#line 3637
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3638
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3640
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3641
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3644
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3645
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3648
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE] =
    {
#line 3649
        .trainerName = _("ROXANNE"),
#line 3650
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3651
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3653
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3654
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3657
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3658
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3661
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 3662
        .trainerName = _("CLARISSA"),
#line 3663
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3664
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3666
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3667
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3670
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3671
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3674
    [DIFFICULTY_NORMAL][TRAINER_COLETTE] =
    {
#line 3675
        .trainerName = _("Colette"),
#line 3676
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3677
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3679
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3680
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3683
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3683
            .heldItem = ITEM_MUSCLE_BAND,
#line 3687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3684
            .ability = ABILITY_ARENA_TRAP,
#line 3685
            .lvl = 36,
#line 3686
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3687
                MOVE_STOMPING_TANTRUM,
                MOVE_AERIAL_ACE,
                MOVE_SUCKER_PUNCH,
                MOVE_POISON_JAB,
            },
            },
            {
#line 3692
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .heldItem = ITEM_LUM_BERRY,
#line 3696
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3693
            .ability = ABILITY_SOUNDPROOF,
#line 3694
            .lvl = 37,
#line 3695
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3696
                MOVE_TAKE_DOWN,
                MOVE_ICE_FANG,
                MOVE_FIRE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 3701
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3701
            .heldItem = ITEM_OCCA_BERRY,
#line 3705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3702
            .ability = ABILITY_SLUSH_RUSH,
#line 3703
            .lvl = 36,
#line 3704
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3705
                MOVE_AVALANCHE,
                MOVE_BRICK_BREAK,
                MOVE_AQUA_JET,
                MOVE_BULK_UP,
            },
            },
            {
#line 3710
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3710
            .heldItem = ITEM_FOCUS_SASH,
#line 3714
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3711
            .ability = ABILITY_SWARM,
#line 3712
            .lvl = 38,
#line 3713
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3714
                MOVE_FURY_CUTTER,
            },
            },
        },
    },
#line 3716
    [DIFFICULTY_NORMAL][TRAINER_HILLARY] =
    {
#line 3717
        .trainerName = _("Hillary"),
#line 3718
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3719
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3721
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3722
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3725
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3725
            .heldItem = ITEM_RINDO_BERRY,
#line 3729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3726
            .ability = ABILITY_SUCTION_CUPS,
#line 3727
            .lvl = 35,
#line 3728
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3729
                MOVE_WATER_PULSE,
                MOVE_PSYBEAM,
                MOVE_SIGNAL_BEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 3734
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .heldItem = ITEM_FLYING_GEM,
#line 3738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3735
            .ability = ABILITY_MOTOR_DRIVE,
#line 3736
            .lvl = 39,
#line 3737
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3738
                MOVE_ACROBATICS,
                MOVE_DISCHARGE,
                MOVE_ENERGY_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3743
            .species = SPECIES_BEWEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .heldItem = ITEM_ASSAULT_VEST,
#line 3747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3744
            .ability = ABILITY_FLUFFY,
#line 3745
            .lvl = 37,
#line 3746
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3747
                MOVE_POWER_UP_PUNCH,
                MOVE_PAYBACK,
                MOVE_FLAIL,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3752
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3752
            .heldItem = ITEM_LEFTOVERS,
#line 3756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3753
            .ability = ABILITY_SHELL_ARMOR,
#line 3754
            .lvl = 36,
#line 3755
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3756
                MOVE_FIRE_SPIN,
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3761
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 3762
        .trainerName = _("SHIRLEY"),
#line 3763
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3764
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3766
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 3767
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3770
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3771
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3774
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3775
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3778
    [DIFFICULTY_NORMAL][TRAINER_DON] =
    {
#line 3779
        .trainerName = _("Don"),
#line 3780
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3781
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3783
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3787
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3787
            .heldItem = ITEM_ORAN_BERRY,
#line 3791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3788
            .ability = ABILITY_INNER_FOCUS,
#line 3789
            .lvl = 11,
#line 3790
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3791
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 3796
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3796
            .heldItem = ITEM_LUM_BERRY,
#line 3800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3797
            .ability = ABILITY_STURDY,
#line 3798
            .lvl = 11,
#line 3799
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3800
                MOVE_LOW_KICK,
                MOVE_ROCK_TOMB,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
            {
#line 3805
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .heldItem = ITEM_BERRY_JUICE,
#line 3809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3806
            .ability = ABILITY_BLAZE,
#line 3807
            .lvl = 12,
#line 3808
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3809
                MOVE_FLAME_CHARGE,
                MOVE_ASSURANCE,
                MOVE_DIG,
                MOVE_CURSE,
            },
            },
            {
#line 3814
            .species = SPECIES_NOIBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3814
            .heldItem = ITEM_EXPERT_BELT,
#line 3818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3815
            .ability = ABILITY_INFILTRATOR,
#line 3816
            .lvl = 13,
#line 3817
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3818
                MOVE_AIR_CUTTER,
                MOVE_SUPER_FANG,
                MOVE_MEGA_DRAIN,
                MOVE_BREAKING_SWIPE,
            },
            },
        },
    },
#line 3823
    [DIFFICULTY_NORMAL][TRAINER_ROB] =
    {
#line 3824
        .trainerName = _("ROB"),
#line 3825
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3826
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3828
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3829
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3832
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3833
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3836
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3837
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3840
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 3841
        .trainerName = _("ED"),
#line 3842
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3843
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3845
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3846
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3849
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3850
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3853
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3854
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3857
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3858
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3861
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 3862
        .trainerName = _("Wade"),
#line 3863
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3864
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3866
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3867
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3870
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3871
            .ability = ABILITY_TINTED_LENS,
#line 3872
            .lvl = 11,
#line 3873
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3874
                MOVE_BUG_BITE,
                MOVE_CONFUSION,
                MOVE_TOXIC,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 3879
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .heldItem = ITEM_FOCUS_SASH,
#line 3883
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3880
            .ability = ABILITY_WEAK_ARMOR,
#line 3881
            .lvl = 11,
#line 3882
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3883
                MOVE_FLAIL,
                MOVE_BUG_BITE,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3887
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3887
            .heldItem = ITEM_MYSTIC_WATER,
#line 3891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3888
            .ability = ABILITY_SWIFT_SWIM,
#line 3889
            .lvl = 11,
#line 3890
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3891
                MOVE_BUBBLE_BEAM,
                MOVE_STRUGGLE_BUG,
                MOVE_MUD_SHOT,
            },
            },
        },
    },
#line 3895
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 3896
        .trainerName = _("BENNY"),
#line 3897
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3898
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3900
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3901
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3904
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3905
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3908
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3909
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3912
    [DIFFICULTY_NORMAL][TRAINER_AL] =
    {
#line 3913
        .trainerName = _("AL"),
#line 3914
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3915
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3917
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3918
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3921
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3922
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3925
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3926
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3929
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 3930
        .trainerName = _("JOSH"),
#line 3931
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3932
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3934
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3938
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3939
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3942
    [DIFFICULTY_NORMAL][TRAINER_ARNIE] =
    {
#line 3943
        .trainerName = _("Arnie"),
#line 3944
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3945
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3947
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3948
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3951
            .species = SPECIES_WORMADAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3951
            .heldItem = ITEM_FOCUS_SASH,
#line 3955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3952
            .ability = ABILITY_OVERCOAT,
#line 3953
            .lvl = 46,
#line 3954
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3955
                MOVE_INFESTATION,
                MOVE_BUG_BUZZ,
                MOVE_LEAF_STORM,
                MOVE_SWAGGER,
            },
            },
            {
#line 3960
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .heldItem = ITEM_SCOPE_LENS,
#line 3964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3961
            .ability = ABILITY_SHARPNESS,
#line 3962
            .lvl = 45,
#line 3963
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3964
                MOVE_AQUA_CUTTER,
                MOVE_STONE_AXE,
                MOVE_X_SCISSOR,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 3969
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3969
            .heldItem = ITEM_TOXIC_ORB,
#line 3973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3970
            .ability = ABILITY_POISON_HEAL,
#line 3971
            .lvl = 45,
#line 3972
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3973
                MOVE_ROOST,
                MOVE_EARTHQUAKE,
                MOVE_DUAL_WINGBEAT,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3978
            .species = SPECIES_HOUNDSTONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .heldItem = ITEM_SPELL_TAG,
#line 3982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3979
            .ability = ABILITY_SAND_RUSH,
#line 3980
            .lvl = 44,
#line 3981
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3982
                MOVE_LAST_RESPECTS,
                MOVE_STOMPING_TANTRUM,
                MOVE_THUNDER_FANG,
                MOVE_PLAY_ROUGH,
            },
            },
        },
    },
#line 3987
    [DIFFICULTY_NORMAL][TRAINER_KEN] =
    {
#line 3988
        .trainerName = _("KEN"),
#line 3989
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 3990
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 3992
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 3993
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3996
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3997
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4000
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4001
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4004
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 4005
        .trainerName = _("DOUG"),
#line 4006
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4007
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4009
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 4010
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4013
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4014
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4017
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 4018
        .trainerName = _("WAYNE"),
#line 4019
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 4020
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 4022
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 4023
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BUG_CATCHER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4026
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4027
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4030
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4031
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4034
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_34] =
    {
#line 4035
        .trainerName = _("Grunt"),
#line 4036
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 4037
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 4039
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 4040
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4043
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4043
            .heldItem = ITEM_COBA_BERRY,
#line 4047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4044
            .ability = ABILITY_THICK_FAT,
#line 4045
            .lvl = 25,
#line 4046
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4047
                MOVE_AVALANCHE,
                MOVE_NEEDLE_ARM,
                MOVE_ICE_SHARD,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 4052
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4052
            .heldItem = ITEM_ROWAP_BERRY,
#line 4056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4053
            .ability = ABILITY_ROUGH_SKIN,
#line 4054
            .lvl = 23,
#line 4055
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4056
                MOVE_SCORCHING_SANDS,
                MOVE_AERIAL_ACE,
                MOVE_FIRE_PUNCH,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4061
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4061
            .heldItem = ITEM_MUSCLE_BAND,
#line 4065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4062
            .ability = ABILITY_FLUFFY,
#line 4063
            .lvl = 24,
#line 4064
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4065
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_SUBSTITUTE,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 4070
    [DIFFICULTY_NORMAL][TRAINER_RALPH] =
    {
#line 4071
        .trainerName = _("RALPH"),
#line 4072
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4073
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4075
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4076
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4079
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4080
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4083
    [DIFFICULTY_NORMAL][TRAINER_ARNOLD] =
    {
#line 4084
        .trainerName = _("ARNOLD"),
#line 4085
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4086
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4088
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4089
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4093
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4096
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4097
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4100
    [DIFFICULTY_NORMAL][TRAINER_KYLE] =
    {
#line 4101
        .trainerName = _("KYLE"),
#line 4102
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4103
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4105
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4109
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4110
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4113
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4114
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4117
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4118
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4121
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 4122
        .trainerName = _("HENRY"),
#line 4123
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4124
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4126
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4127
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4130
            .species = SPECIES_WIMPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4130
            .heldItem = ITEM_FOCUS_SASH,
#line 4134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4131
            .ability = ABILITY_WIMP_OUT,
#line 4132
            .lvl = 25,
#line 4133
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4134
                MOVE_FIRST_IMPRESSION,
                MOVE_AQUA_JET,
            },
            },
            {
#line 4137
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .heldItem = ITEM_ELECTRIC_GEM,
#line 4141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4138
            .ability = ABILITY_COMPOUND_EYES,
#line 4139
            .lvl = 25,
#line 4140
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4141
                MOVE_VOLT_SWITCH,
                MOVE_ELECTROWEB,
                MOVE_POUNCE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 4146
            .species = SPECIES_MEOWTH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4146
            .heldItem = ITEM_LUM_BERRY,
#line 4150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4147
            .ability = ABILITY_TECHNICIAN,
#line 4148
            .lvl = 25,
#line 4149
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4150
                MOVE_FAKE_OUT,
                MOVE_SHADOW_SNEAK,
                MOVE_QUICK_ATTACK,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 4155
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4155
            .heldItem = ITEM_EJECT_BUTTON,
#line 4159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4156
            .ability = ABILITY_WATER_ABSORB,
#line 4157
            .lvl = 25,
#line 4158
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4159
                MOVE_HYPNOSIS,
                MOVE_BODY_SLAM,
                MOVE_WATER_PULSE,
                MOVE_ENDURE,
            },
            },
            {
#line 4164
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4164
            .heldItem = ITEM_ROCK_GEM,
#line 4168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4165
            .ability = ABILITY_ARENA_TRAP,
#line 4166
            .lvl = 23,
#line 4167
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4168
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_BITE,
            },
            },
        },
    },
#line 4172
    [DIFFICULTY_NORMAL][TRAINER_MARVIN] =
    {
#line 4173
        .trainerName = _("MARVIN"),
#line 4174
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4175
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4177
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4178
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4181
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4182
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4185
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4186
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4189
    [DIFFICULTY_NORMAL][TRAINER_TULLY] =
    {
#line 4190
        .trainerName = _("TULLY"),
#line 4191
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4192
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4194
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4195
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4198
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4199
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4202
    [DIFFICULTY_NORMAL][TRAINER_ANDRE] =
    {
#line 4203
        .trainerName = _("ANDRE"),
#line 4204
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4205
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4207
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4208
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4211
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4212
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4215
    [DIFFICULTY_NORMAL][TRAINER_RAYMOND] =
    {
#line 4216
        .trainerName = _("RAYMOND"),
#line 4217
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4218
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4220
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4221
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4225
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4228
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 4229
        .trainerName = _("WILTON"),
#line 4230
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4231
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4233
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4234
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4237
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4238
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4241
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4242
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4245
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4246
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4249
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 4250
        .trainerName = _("EDGAR"),
#line 4251
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4252
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4254
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4255
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4258
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4259
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4262
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4263
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4266
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4267
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4270
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 4271
        .trainerName = _("JONAH"),
#line 4272
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4273
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4275
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4276
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4279
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4280
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4283
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4284
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4287
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4288
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4291
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4292
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4295
    [DIFFICULTY_NORMAL][TRAINER_MARTIN] =
    {
#line 4296
        .trainerName = _("MARTIN"),
#line 4297
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4298
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4300
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4301
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4304
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4305
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4308
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4309
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4312
    [DIFFICULTY_NORMAL][TRAINER_STEPHEN] =
    {
#line 4313
        .trainerName = _("STEPHEN"),
#line 4314
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4315
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4317
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4318
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4321
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4322
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4325
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4326
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4329
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4330
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4333
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4334
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4337
    [DIFFICULTY_NORMAL][TRAINER_BARNEY] =
    {
#line 4338
        .trainerName = _("BARNEY"),
#line 4339
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4340
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4342
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4343
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4346
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4347
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4350
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4351
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4354
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4355
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4358
    [DIFFICULTY_NORMAL][TRAINER_SCOTT] =
    {
#line 4359
        .trainerName = _("SCOTT"),
#line 4360
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4361
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4363
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4364
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FISHERMAN,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4367
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4368
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4371
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4372
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4375
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4376
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4379
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4380
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4383
    [DIFFICULTY_NORMAL][TRAINER_HAROLD] =
    {
#line 4384
        .trainerName = _("HAROLD"),
#line 4385
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4386
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4388
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4389
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4392
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4393
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4396
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4397
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4400
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 4401
        .trainerName = _("SIMON"),
#line 4402
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4403
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4405
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4406
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4409
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4410
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4413
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4414
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4417
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 4418
        .trainerName = _("RANDALL"),
#line 4419
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4420
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4422
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4423
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4426
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4427
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4430
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4431
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4434
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 4435
        .trainerName = _("CHARLIE"),
#line 4436
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4437
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4439
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4440
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4443
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4444
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4447
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4448
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4451
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 4452
        .trainerName = _("GEORGE"),
#line 4453
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4454
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4456
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4457
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4460
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4461
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4464
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4465
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4468
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4469
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4472
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 4473
        .trainerName = _("BERKE"),
#line 4474
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4475
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4477
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4478
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4481
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4482
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4485
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 4486
        .trainerName = _("KIRK"),
#line 4487
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4488
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4490
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4491
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4494
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4495
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4498
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4499
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4502
    [DIFFICULTY_NORMAL][TRAINER_MATHEW] =
    {
#line 4503
        .trainerName = _("MATHEW"),
#line 4504
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4505
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4507
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4508
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4511
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4512
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4515
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4516
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4519
    [DIFFICULTY_NORMAL][TRAINER_HAL] =
    {
#line 4520
        .trainerName = _("HAL"),
#line 4521
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4522
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4524
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4525
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4528
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4529
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4532
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4533
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4536
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4537
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4540
    [DIFFICULTY_NORMAL][TRAINER_PATON] =
    {
#line 4541
        .trainerName = _("PATON"),
#line 4542
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4543
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4545
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4546
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4549
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4550
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4553
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4554
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4557
    [DIFFICULTY_NORMAL][TRAINER_DARYL] =
    {
#line 4558
        .trainerName = _("DARYL"),
#line 4559
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4560
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4562
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4563
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4566
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4567
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4570
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4571
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4574
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4575
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4578
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 4579
        .trainerName = _("WALTER"),
#line 4580
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4581
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4583
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4584
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4587
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4588
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4591
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4592
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4595
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4596
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4599
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 4600
        .trainerName = _("TONY"),
#line 4601
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4602
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4604
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4605
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4608
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4609
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4612
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4613
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4616
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4617
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4620
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 4621
        .trainerName = _("JEROME"),
#line 4622
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4623
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4625
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4626
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4629
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4630
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4633
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4634
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4637
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4638
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4641
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 4642
        .trainerName = _("TUCKER"),
#line 4643
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4644
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4646
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4647
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4650
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4651
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4654
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4655
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4658
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 4659
        .trainerName = _("RICK"),
#line 4660
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4661
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4663
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4664
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4667
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4668
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4671
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4672
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4675
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4676
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4679
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 4680
        .trainerName = _("CAMERON"),
#line 4681
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4682
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4684
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4685
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4688
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4689
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4692
    [DIFFICULTY_NORMAL][TRAINER_SETH] =
    {
#line 4693
        .trainerName = _("SETH"),
#line 4694
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4695
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4697
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4698
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4701
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4702
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4705
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4706
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4709
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4710
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4713
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 4714
        .trainerName = _("JAMES"),
#line 4715
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4716
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4718
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4719
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4722
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4723
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4726
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4727
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4730
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4731
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4734
    [DIFFICULTY_NORMAL][TRAINER_LEWIS] =
    {
#line 4735
        .trainerName = _("LEWIS"),
#line 4736
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4737
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4739
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4740
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4743
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4744
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4747
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4748
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4751
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4752
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4755
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 4756
        .trainerName = _("Parker"),
#line 4757
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 4758
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 4760
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 4761
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_M,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4764
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4764
            .heldItem = ITEM_SITRUS_BERRY,
#line 4768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4765
            .ability = ABILITY_TORRENT,
#line 4766
            .lvl = 30,
#line 4767
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4768
                MOVE_SCALD,
                MOVE_ICY_WIND,
                MOVE_GRASS_KNOT,
                MOVE_ACROBATICS,
            },
            },
            {
#line 4773
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4773
            .heldItem = ITEM_CHOICE_SCARF,
#line 4777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4774
            .ability = ABILITY_DRIZZLE,
#line 4775
            .lvl = 32,
#line 4776
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4777
                MOVE_FLIP_TURN,
            },
            },
            {
#line 4779
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .heldItem = ITEM_PASSHO_BERRY,
#line 4783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4780
            .ability = ABILITY_BLAZE,
#line 4781
            .lvl = 30,
#line 4782
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4783
                MOVE_FLAMETHROWER,
                MOVE_THUNDER_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 4788
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .heldItem = ITEM_EVIOLITE,
#line 4792
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4789
            .ability = ABILITY_CLEAR_BODY,
#line 4790
            .lvl = 30,
#line 4791
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4792
                MOVE_METAL_CLAW,
                MOVE_PSYSHIELD_BASH,
                MOVE_BODY_PRESS,
                MOVE_MAGNET_RISE,
            },
            },
            {
#line 4797
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4797
            .heldItem = ITEM_LIFE_ORB,
#line 4801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4798
            .ability = ABILITY_SHEER_FORCE,
#line 4799
            .lvl = 30,
#line 4800
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4801
                MOVE_RAZOR_SHELL,
                MOVE_ROCK_SLIDE,
                MOVE_KNOCK_OFF,
                MOVE_AQUA_JET,
            },
            },
            {
#line 4806
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .heldItem = ITEM_WISE_GLASSES,
#line 4810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4807
            .ability = ABILITY_SWIFT_SWIM,
#line 4808
            .lvl = 32,
#line 4809
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4810
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 4813
    [DIFFICULTY_NORMAL][TRAINER_ELAINE] =
    {
#line 4814
        .trainerName = _("ELAINE"),
#line 4815
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4816
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4818
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4819
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4822
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4823
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4826
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 4827
        .trainerName = _("PAULA"),
#line 4828
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4829
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4831
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4832
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4835
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4836
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4839
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4840
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4843
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 4844
        .trainerName = _("KAYLEE"),
#line 4845
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4846
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4848
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4849
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4852
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4853
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4856
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4857
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4860
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4861
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4864
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 4865
        .trainerName = _("SUSIE"),
#line 4866
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4867
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4869
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4870
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4873
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4874
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4877
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4878
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4881
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 4882
        .trainerName = _("DENISE"),
#line 4883
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4884
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4886
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4887
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4890
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4891
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4894
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 4895
        .trainerName = _("KARA"),
#line 4896
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4897
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4899
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4900
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4903
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4904
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4907
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4908
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4911
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 4912
        .trainerName = _("WENDY"),
#line 4913
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4914
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4916
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4917
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4920
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4921
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4924
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4925
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4928
    [DIFFICULTY_NORMAL][TRAINER_LISA] =
    {
#line 4929
        .trainerName = _("LISA"),
#line 4930
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4931
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4933
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4934
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4937
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4938
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4941
    [DIFFICULTY_NORMAL][TRAINER_JILL] =
    {
#line 4942
        .trainerName = _("JILL"),
#line 4943
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4944
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4946
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4947
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4950
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4951
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4954
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 4955
        .trainerName = _("MARY"),
#line 4956
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4957
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4959
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4960
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4963
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4964
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4967
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 4968
        .trainerName = _("KATIE"),
#line 4969
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4970
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4972
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4973
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4976
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4977
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4980
    [DIFFICULTY_NORMAL][TRAINER_DAWN] =
    {
#line 4981
        .trainerName = _("DAWN"),
#line 4982
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4983
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4985
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4986
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4989
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4990
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4993
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 4994
        .trainerName = _("TARA"),
#line 4995
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 4996
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 4998
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 4999
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5002
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5003
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5006
    [DIFFICULTY_NORMAL][TRAINER_NICOLE] =
    {
#line 5007
        .trainerName = _("NICOLE"),
#line 5008
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5009
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5011
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 5012
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5015
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5016
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5019
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5020
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5023
    [DIFFICULTY_NORMAL][TRAINER_LORI] =
    {
#line 5024
        .trainerName = _("LORI"),
#line 5025
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5026
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5028
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 5029
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5033
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5036
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5037
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5040
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 5041
        .trainerName = _("JODY"),
#line 5042
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5043
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5045
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 5046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5049
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5050
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5053
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5054
        .trainerName = _("NIKKI"),
#line 5055
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5056
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5058
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 5059
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5062
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5063
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5066
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5067
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5070
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5071
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5074
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5075
        .trainerName = _("Diana"),
#line 5076
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5077
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5079
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 5080
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5083
            .species = SPECIES_DRAGALGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5083
            .heldItem = ITEM_BLACK_SLUDGE,
#line 5087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5084
            .ability = ABILITY_POISON_POINT,
#line 5085
            .lvl = 30,
#line 5086
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5087
                MOVE_TOXIC,
                MOVE_MUD_SHOT,
                MOVE_ACID_SPRAY,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 5092
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5092
            .heldItem = ITEM_RINDO_BERRY,
#line 5096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5093
            .ability = ABILITY_WATER_ABSORB,
#line 5094
            .lvl = 30,
#line 5095
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5096
                MOVE_MUD_BOMB,
                MOVE_WATER_PULSE,
                MOVE_ACID_SPRAY,
                MOVE_AMNESIA,
            },
            },
            {
#line 5101
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5101
            .heldItem = ITEM_ROCKY_HELMET,
#line 5105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5102
            .ability = ABILITY_WATER_ABSORB,
#line 5103
            .lvl = 30,
#line 5104
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5105
                MOVE_TAILWIND,
                MOVE_AIR_CUTTER,
                MOVE_BUBBLE_BEAM,
                MOVE_FAKE_TEARS,
            },
            },
            {
#line 5110
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .heldItem = ITEM_IAPAPA_BERRY,
#line 5114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5111
            .ability = ABILITY_THICK_FAT,
#line 5112
            .lvl = 31,
#line 5113
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5114
                MOVE_WATER_SPOUT,
            },
            },
        },
    },
#line 5116
    [DIFFICULTY_NORMAL][TRAINER_BRIANA] =
    {
#line 5117
        .trainerName = _("Briana"),
#line 5118
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5119
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5121
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 5122
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SWIMMER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5125
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5125
            .heldItem = ITEM_SALAC_BERRY,
#line 5129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5126
            .ability = ABILITY_VOLT_ABSORB,
#line 5127
            .lvl = 30,
#line 5128
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5129
                MOVE_THUNDER_WAVE,
                MOVE_ELECTRO_BALL,
                MOVE_BUBBLE_BEAM,
                MOVE_ICY_WIND,
            },
            },
            {
#line 5134
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .heldItem = ITEM_LOADED_DICE,
#line 5138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5135
            .ability = ABILITY_RATTLED,
#line 5136
            .lvl = 28,
#line 5137
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5138
                MOVE_ROCK_BLAST,
                MOVE_BULLET_SEED,
                MOVE_SUCKER_PUNCH,
                MOVE_ROCK_POLISH,
            },
            },
            {
#line 5143
            .species = SPECIES_SLOWKING_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5143
            .heldItem = ITEM_POISON_BARB,
#line 5147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5144
            .ability = ABILITY_OWN_TEMPO,
#line 5145
            .lvl = 29,
#line 5146
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5147
                MOVE_POISON_JAB,
                MOVE_ZEN_HEADBUTT,
                MOVE_DRAIN_PUNCH,
                MOVE_YAWN,
            },
            },
            {
#line 5152
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5152
            .heldItem = ITEM_SILK_SCARF,
#line 5156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5153
            .ability = ABILITY_SIMPLE,
#line 5154
            .lvl = 30,
#line 5155
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5156
                MOVE_FAKE_OUT,
                MOVE_SWORDS_DANCE,
                MOVE_LAST_RESORT,
            },
            },
            {
#line 5160
            .species = SPECIES_BRIONNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5160
            .heldItem = ITEM_THROAT_SPRAY,
#line 5164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5161
            .ability = ABILITY_LIQUID_VOICE,
#line 5162
            .lvl = 30,
#line 5163
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5164
                MOVE_HYPER_VOICE,
                MOVE_MOONBLAST,
                MOVE_ACROBATICS,
                MOVE_LIFE_DEW,
            },
            },
        },
    },
#line 5169
    [DIFFICULTY_NORMAL][TRAINER_EUGENE] =
    {
#line 5170
        .trainerName = _("EUGENE"),
#line 5171
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5172
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5174
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5175
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5178
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5179
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5182
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5183
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5186
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5187
        .trainerName = _("HUEY"),
#line 5188
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5189
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5191
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5195
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5196
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5199
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5200
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5203
    [DIFFICULTY_NORMAL][TRAINER_TERRELL] =
    {
#line 5204
        .trainerName = _("TERRELL"),
#line 5205
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5206
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5208
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5209
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5212
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5213
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5216
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 5217
        .trainerName = _("KENT"),
#line 5218
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5219
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5221
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5222
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5225
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5226
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5229
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5230
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5233
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5234
        .trainerName = _("ERNEST"),
#line 5235
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5236
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5238
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5239
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5242
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5243
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5246
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5247
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5250
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5251
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5254
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 5255
        .trainerName = _("JEFF"),
#line 5256
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5257
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5259
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5260
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5263
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5264
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5267
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5268
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5271
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 5272
        .trainerName = _("GARRETT"),
#line 5273
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5274
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5276
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5277
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5280
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5281
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5284
    [DIFFICULTY_NORMAL][TRAINER_KENNETH] =
    {
#line 5285
        .trainerName = _("KENNETH"),
#line 5286
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5287
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5289
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5290
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5291
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5293
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5294
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5297
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5298
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5301
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5302
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5305
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5306
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5309
    [DIFFICULTY_NORMAL][TRAINER_STANLY] =
    {
#line 5310
        .trainerName = _("STANLY"),
#line 5311
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5312
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5314
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5315
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5318
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5319
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5322
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5323
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5326
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5327
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5330
    [DIFFICULTY_NORMAL][TRAINER_HARRY] =
    {
#line 5331
        .trainerName = _("Harry"),
#line 5332
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5333
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5335
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5336
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAILOR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5339
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5339
            .heldItem = ITEM_FLAME_ORB,
#line 5343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5340
            .ability = ABILITY_MARVEL_SCALE,
#line 5341
            .lvl = 53,
#line 5342
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5343
                MOVE_BOUNCY_BUBBLE,
                MOVE_ICY_WIND,
                MOVE_MIRROR_COAT,
                MOVE_RECOVER,
            },
            },
            {
#line 5348
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5348
            .heldItem = ITEM_TOXIC_ORB,
#line 5352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5349
            .ability = ABILITY_QUICK_FEET,
#line 5350
            .lvl = 54,
#line 5351
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5352
                MOVE_FLARE_BLITZ,
                MOVE_FACADE,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 5357
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 5358
        .trainerName = _("STAN"),
#line 5359
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5360
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5362
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5363
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5366
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5367
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5370
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 5371
        .trainerName = _("ERIC"),
#line 5372
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5373
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5375
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5376
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5379
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5380
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5383
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5384
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5387
    [DIFFICULTY_NORMAL][TRAINER_GREGG] =
    {
#line 5388
        .trainerName = _("GREGG"),
#line 5389
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5390
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5392
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5393
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5396
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5397
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5400
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5401
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5404
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5405
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5408
    [DIFFICULTY_NORMAL][TRAINER_JAY] =
    {
#line 5409
        .trainerName = _("JAY"),
#line 5410
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5411
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5413
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5414
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5417
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5418
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5421
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5422
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5425
    [DIFFICULTY_NORMAL][TRAINER_DAVE] =
    {
#line 5426
        .trainerName = _("DAVE"),
#line 5427
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5428
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5430
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5431
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5434
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5435
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5438
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 5439
        .trainerName = _("SAM"),
#line 5440
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5441
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5443
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5444
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5447
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5448
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5451
    [DIFFICULTY_NORMAL][TRAINER_TOM] =
    {
#line 5452
        .trainerName = _("TOM"),
#line 5453
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5454
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5456
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5457
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5460
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5461
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5464
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5465
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5468
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5469
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5472
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 5473
        .trainerName = _("PAT"),
#line 5474
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5475
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5477
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5478
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5481
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5482
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5485
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5486
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5489
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5490
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5493
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 5494
        .trainerName = _("SHAWN"),
#line 5495
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5496
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5498
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5499
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5502
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5506
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5507
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5510
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5511
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5514
    [DIFFICULTY_NORMAL][TRAINER_TERU] =
    {
#line 5515
        .trainerName = _("TERU"),
#line 5516
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5517
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5519
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5520
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5523
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5524
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5527
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5528
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5531
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5532
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5535
    [DIFFICULTY_NORMAL][TRAINER_RUSS] =
    {
#line 5536
        .trainerName = _("RUSS"),
#line 5537
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5538
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5540
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5541
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5544
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5545
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5548
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5549
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5552
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5553
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5556
    [DIFFICULTY_NORMAL][TRAINER_NORTON] =
    {
#line 5557
        .trainerName = _("NORTON"),
#line 5558
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5559
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5561
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5565
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5566
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5569
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5570
        .trainerName = _("HUGH"),
#line 5571
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5572
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5574
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5575
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5578
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5579
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5582
    [DIFFICULTY_NORMAL][TRAINER_MARKUS] =
    {
#line 5583
        .trainerName = _("MARKUS"),
#line 5584
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
#line 5585
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .encounterMusic_gender =
#line 5587
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 5588
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SUPER_NERD,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5591
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5592
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5595
    [DIFFICULTY_NORMAL][TRAINER_CLYDE] =
    {
#line 5596
        .trainerName = _("CLYDE"),
#line 5597
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 5598
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 5600
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_GUITARIST,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5604
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5605
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5608
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 5609
        .trainerName = _("VINCENT"),
#line 5610
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5611
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5613
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5614
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5618
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5621
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5622
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5625
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5626
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5629
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5630
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5633
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_35] =
    {
#line 5634
        .trainerName = _("Grunt"),
#line 5635
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
#line 5636
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .encounterMusic_gender =
#line 5638
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 5639
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5642
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5642
            .heldItem = ITEM_SOFT_SAND,
#line 5646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5643
            .ability = ABILITY_ARENA_TRAP,
#line 5644
            .lvl = 25,
#line 5645
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5646
                MOVE_BULLDOZE,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 5649
            .species = SPECIES_SALANDIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5649
            .heldItem = ITEM_FOCUS_SASH,
#line 5653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5650
            .ability = ABILITY_CORROSION,
#line 5651
            .lvl = 24,
#line 5652
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5653
                MOVE_INCINERATE,
                MOVE_SMOG,
                MOVE_VENOSHOCK,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 5658
            .species = SPECIES_FLORAGATO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5658
            .heldItem = ITEM_PROTECTIVE_PADS,
#line 5662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5659
            .ability = ABILITY_PROTEAN,
#line 5660
            .lvl = 23,
#line 5661
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5662
                MOVE_TRAILBLAZE,
                MOVE_AERIAL_ACE,
                MOVE_LOW_KICK,
                MOVE_THUNDER_PUNCH,
            },
            },
        },
    },
#line 5667
    [DIFFICULTY_NORMAL][TRAINER_RUSSELL] =
    {
#line 5668
        .trainerName = _("RUSSELL"),
#line 5669
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5670
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5672
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5673
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5676
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5676
            .heldItem = ITEM_LUM_BERRY,
#line 5680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5677
            .ability = ABILITY_STURDY,
#line 5678
            .lvl = 25,
#line 5679
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5680
                MOVE_STEALTH_ROCK,
                MOVE_SPIKES,
                MOVE_TOXIC_SPIKES,
                MOVE_ROLLOUT,
            },
            },
            {
#line 5685
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .heldItem = ITEM_SOFT_SAND,
#line 5689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5686
            .ability = ABILITY_WEAK_ARMOR,
#line 5687
            .lvl = 25,
#line 5688
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5689
                MOVE_ROCK_TOMB,
                MOVE_DIG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5693
            .species = SPECIES_DRAKLOAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5693
            .heldItem = ITEM_EVIOLITE,
#line 5697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5694
            .ability = ABILITY_CURSED_BODY,
#line 5695
            .lvl = 24,
#line 5696
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5697
                MOVE_DRAGON_TAIL,
                MOVE_HEX,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 5701
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5701
            .heldItem = ITEM_LEFTOVERS,
#line 5705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5702
            .ability = ABILITY_SERENE_GRACE,
#line 5703
            .lvl = 23,
#line 5704
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5705
                MOVE_HEADBUTT,
                MOVE_BITE,
                MOVE_ROCK_SLIDE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 5710
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5711
        .trainerName = _("PHILLIP"),
#line 5712
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5713
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5715
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5716
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5719
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5720
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5723
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5724
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5727
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5728
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5731
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5732
        .trainerName = _("LEONARD"),
#line 5733
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5734
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5736
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5740
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5741
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5744
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5745
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5748
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 5749
        .trainerName = _("BENJAMIN"),
#line 5750
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5751
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5753
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5757
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5758
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5761
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5762
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5765
    [DIFFICULTY_NORMAL][TRAINER_ERIK] =
    {
#line 5766
        .trainerName = _("ERIK"),
#line 5767
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5768
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5770
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5771
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5774
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5775
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5778
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5779
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5782
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5783
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5786
    [DIFFICULTY_NORMAL][TRAINER_MICHAEL] =
    {
#line 5787
        .trainerName = _("MICHAEL"),
#line 5788
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5789
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5791
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5792
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5795
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5796
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5799
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5800
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5803
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5804
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5807
    [DIFFICULTY_NORMAL][TRAINER_PARRY] =
    {
#line 5808
        .trainerName = _("PARRY"),
#line 5809
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5810
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5812
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5813
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5816
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5817
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5820
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5821
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5824
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5825
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5828
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 5829
        .trainerName = _("TIMOTHY"),
#line 5830
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5831
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5833
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5834
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5837
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5838
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5841
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5842
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5845
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5846
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5849
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5850
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5853
    [DIFFICULTY_NORMAL][TRAINER_BAILEY] =
    {
#line 5854
        .trainerName = _("BAILEY"),
#line 5855
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5856
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5858
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5859
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 5862
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5863
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5866
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5867
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5870
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5871
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5874
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5875
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5878
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5879
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5882
    [DIFFICULTY_NORMAL][TRAINER_TIM] =
    {
#line 5883
        .trainerName = _("TIM"),
#line 5884
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5885
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5887
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5888
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5891
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5892
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5895
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5896
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5899
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5900
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5903
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 5904
        .trainerName = _("NOLAND"),
#line 5905
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5906
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5908
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5909
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5912
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5913
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5916
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5917
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5920
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 5921
        .trainerName = _("SIDNEY"),
#line 5922
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5923
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5925
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5926
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5929
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5930
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5933
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5934
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5937
    [DIFFICULTY_NORMAL][TRAINER_KENNY] =
    {
#line 5938
        .trainerName = _("KENNY"),
#line 5939
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5940
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5942
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5943
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5946
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5947
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5950
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5951
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5954
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5955
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5958
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5959
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5962
    [DIFFICULTY_NORMAL][TRAINER_JIM] =
    {
#line 5963
        .trainerName = _("JIM"),
#line 5964
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5965
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5967
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5971
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5972
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5975
    [DIFFICULTY_NORMAL][TRAINER_DEVIN] =
    {
#line 5976
        .trainerName = _("DEVIN"),
#line 5977
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5978
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5980
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 5981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5984
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5985
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5988
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5989
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5992
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5993
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5996
    [DIFFICULTY_NORMAL][TRAINER_DANIEL] =
    {
#line 5997
        .trainerName = _("DANIEL"),
#line 5998
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5999
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6001
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6002
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_HIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6005
            .species = SPECIES_TYRUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6005
            .heldItem = ITEM_LIFE_ORB,
#line 6009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6006
            .ability = ABILITY_STURDY,
#line 6007
            .lvl = 23,
#line 6008
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6009
                MOVE_SMACK_DOWN,
                MOVE_FIRE_FANG,
                MOVE_ICE_FANG,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 6014
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6014
            .heldItem = ITEM_LEFTOVERS,
#line 6018
            .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 31, 31),
#line 6015
            .ability = ABILITY_IMPOSTER,
#line 6016
            .lvl = 24,
#line 6017
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6019
                MOVE_TRANSFORM,
            },
            },
            {
#line 6021
            .species = SPECIES_BERGMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6021
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 6025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6022
            .ability = ABILITY_STURDY,
#line 6023
            .lvl = 25,
#line 6024
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6025
                MOVE_AVALANCHE,
                MOVE_MIRROR_COAT,
                MOVE_BODY_PRESS,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 6030
    [DIFFICULTY_NORMAL][TRAINER_KAZU] =
    {
#line 6031
        .trainerName = _("KAZU"),
#line 6032
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6033
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6035
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6036
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6039
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6040
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6043
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6044
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6047
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6048
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6051
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6052
        .trainerName = _("DWAYNE"),
#line 6053
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6054
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6056
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6057
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6060
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6061
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6064
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6065
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6068
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6069
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6072
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6073
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6076
    [DIFFICULTY_NORMAL][TRAINER_HARRIS] =
    {
#line 6077
        .trainerName = _("HARRIS"),
#line 6078
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6079
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6081
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6082
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6085
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6086
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6089
    [DIFFICULTY_NORMAL][TRAINER_ZEKE] =
    {
#line 6090
        .trainerName = _("ZEKE"),
#line 6091
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6092
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6094
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6095
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6098
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6099
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6102
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6103
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6106
    [DIFFICULTY_NORMAL][TRAINER_CHARLES] =
    {
#line 6107
        .trainerName = _("CHARLES"),
#line 6108
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6109
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6111
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6112
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6115
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6116
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6119
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6120
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6123
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6124
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6127
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 6128
        .trainerName = _("RILEY"),
#line 6129
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6130
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6132
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6133
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6136
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6137
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6140
    [DIFFICULTY_NORMAL][TRAINER_JOEL] =
    {
#line 6141
        .trainerName = _("JOEL"),
#line 6142
        .trainerClass = TRAINER_CLASS_BIKER,
#line 6143
        .trainerPic = TRAINER_PIC_BIKER,
        .encounterMusic_gender =
#line 6145
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6146
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BIKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6149
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6150
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6153
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6154
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6157
    [DIFFICULTY_NORMAL][TRAINER_GLENN] =
    {
#line 6158
        .trainerName = _("GLENN"),
#line 6159
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 6160
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 6162
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6163
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BURGLAR,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6166
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6167
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6170
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6171
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6174
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6175
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6178
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6179
        .trainerName = _("DUNCAN"),
#line 6180
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 6181
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 6183
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6184
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BURGLAR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6187
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6188
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6191
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6192
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6195
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 6196
        .trainerName = _("EDDIE"),
#line 6197
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 6198
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 6200
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6201
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BURGLAR,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6204
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6205
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6208
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6209
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6212
    [DIFFICULTY_NORMAL][TRAINER_RICHARDO] =
    {
#line 6213
        .trainerName = _("Richardo"),
#line 6214
        .trainerClass = TRAINER_CLASS_BURGLAR,
#line 6215
        .trainerPic = TRAINER_PIC_BURGLAR,
        .encounterMusic_gender =
#line 6217
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6218
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_BURGLAR,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6221
            .species = SPECIES_INCINEROAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6221
            .heldItem = ITEM_ASSAULT_VEST,
#line 6225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6222
            .ability = ABILITY_INTIMIDATE,
#line 6223
            .lvl = 44,
#line 6224
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6225
                MOVE_FIRE_SPIN,
                MOVE_KNOCK_OFF,
                MOVE_CLOSE_COMBAT,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 6230
            .species = SPECIES_DRAGAPULT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6230
            .heldItem = ITEM_POWER_HERB,
#line 6234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6231
            .ability = ABILITY_CLEAR_BODY,
#line 6232
            .lvl = 43,
#line 6233
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6234
                MOVE_INFESTATION,
                MOVE_DRAGON_BREATH,
                MOVE_PHANTOM_FORCE,
                MOVE_CURSE,
            },
            },
            {
#line 6239
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6239
            .heldItem = ITEM_SITRUS_BERRY,
#line 6243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6240
            .ability = ABILITY_THICK_FAT,
#line 6241
            .lvl = 45,
#line 6242
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6243
                MOVE_WATER_SPOUT,
                MOVE_WHIRLPOOL,
                MOVE_BULLDOZE,
                MOVE_PROTECT,
            },
            },
            {
#line 6248
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6248
            .heldItem = ITEM_LEFTOVERS,
#line 6252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6249
            .ability = ABILITY_SAND_FORCE,
#line 6250
            .lvl = 45,
#line 6251
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6252
                MOVE_SAND_TOMB,
                MOVE_SLACK_OFF,
                MOVE_YAWN,
                MOVE_STONE_EDGE,
            },
            },
            {
#line 6257
            .species = SPECIES_CARNIVINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6257
            .heldItem = ITEM_FOCUS_SASH,
#line 6261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6258
            .ability = ABILITY_LEVITATE,
#line 6259
            .lvl = 46,
#line 6260
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6261
                MOVE_SNAP_TRAP,
                MOVE_SUCKER_PUNCH,
                MOVE_SPIKY_SHIELD,
                MOVE_LEAF_TORNADO,
            },
            },
        },
    },
#line 6266
    [DIFFICULTY_NORMAL][TRAINER_NARD] =
    {
#line 6267
        .trainerName = _("Nard"),
#line 6268
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6269
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6271
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6275
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6275
            .heldItem = ITEM_DARK_GEM,
#line 6279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6276
            .ability = ABILITY_PRANKSTER,
#line 6277
            .lvl = 46,
#line 6278
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6279
                MOVE_KNOCK_OFF,
                MOVE_ALLURING_VOICE,
                MOVE_FAKE_TEARS,
                MOVE_SCREECH,
            },
            },
            {
#line 6284
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6284
            .heldItem = ITEM_ENIGMA_BERRY,
#line 6288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6285
            .ability = ABILITY_SOLID_ROCK,
#line 6286
            .lvl = 46,
#line 6287
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6288
                MOVE_STEALTH_ROCK,
                MOVE_STONE_EDGE,
                MOVE_EARTHQUAKE,
                MOVE_MEGAHORN,
            },
            },
            {
#line 6293
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6293
            .heldItem = ITEM_WISE_GLASSES,
#line 6297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6294
            .ability = ABILITY_STEADFAST,
#line 6295
            .lvl = 46,
#line 6296
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6297
                MOVE_NASTY_PLOT,
                MOVE_FLASH_CANNON,
                MOVE_VACUUM_WAVE,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6302
            .species = SPECIES_CINDERACE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6302
            .heldItem = ITEM_WIDE_LENS,
#line 6306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6303
            .ability = ABILITY_LIBERO,
#line 6304
            .lvl = 45,
#line 6305
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6306
                MOVE_PYRO_BALL,
                MOVE_GUNK_SHOT,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6311
    [DIFFICULTY_NORMAL][TRAINER_COREY] =
    {
#line 6312
        .trainerName = _("COREY"),
#line 6313
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6314
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6316
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6317
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6320
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6321
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6324
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6325
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6328
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6329
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6332
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6333
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6336
    [DIFFICULTY_NORMAL][TRAINER_OTIS] =
    {
#line 6337
        .trainerName = _("OTIS"),
#line 6338
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6339
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6341
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6342
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6345
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6346
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6349
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6350
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6353
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6354
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6357
    [DIFFICULTY_NORMAL][TRAINER_DICK] =
    {
#line 6358
        .trainerName = _("DICK"),
#line 6359
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6360
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6362
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6363
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6366
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6367
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6370
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 6371
        .trainerName = _("NED"),
#line 6372
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6373
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6375
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6376
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6379
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6380
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6383
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6384
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6387
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6388
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6391
    [DIFFICULTY_NORMAL][TRAINER_BURT] =
    {
#line 6392
        .trainerName = _("BURT"),
#line 6393
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6394
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6396
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6397
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6400
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6401
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6404
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6405
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6408
    [DIFFICULTY_NORMAL][TRAINER_BILL] =
    {
#line 6409
        .trainerName = _("BILL"),
#line 6410
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6411
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6413
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6414
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6417
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6418
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6421
    [DIFFICULTY_NORMAL][TRAINER_WALT] =
    {
#line 6422
        .trainerName = _("Walt"),
#line 6423
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6424
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6426
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6430
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6430
            .heldItem = ITEM_EVIOLITE,
#line 6434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6431
            .ability = ABILITY_FLAME_BODY,
#line 6432
            .lvl = 38,
#line 6433
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6434
                MOVE_FLAMETHROWER,
                MOVE_HEAT_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FOCUS_BLAST,
            },
            },
        },
    },
#line 6439
    [DIFFICULTY_NORMAL][TRAINER_RAY] =
    {
#line 6440
        .trainerName = _("RAY"),
#line 6441
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6442
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6444
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6445
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6448
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6448
            .heldItem = ITEM_COVERT_CLOAK,
#line 6452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6449
            .ability = ABILITY_PURE_POWER,
#line 6450
            .lvl = 24,
#line 6451
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6452
                MOVE_FAKE_OUT,
                MOVE_ROCK_TOMB,
                MOVE_LOW_SWEEP,
                MOVE_PSYBEAM,
            },
            },
            {
#line 6457
            .species = SPECIES_GROWLITHE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6457
            .heldItem = ITEM_CHARCOAL,
#line 6461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6458
            .ability = ABILITY_INTIMIDATE,
#line 6459
            .lvl = 24,
#line 6460
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6461
                MOVE_AGILITY,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_WILD_CHARGE,
            },
            },
            {
#line 6466
            .species = SPECIES_COMFEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6466
            .heldItem = ITEM_METRONOME,
#line 6470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6467
            .ability = ABILITY_TRIAGE,
#line 6468
            .lvl = 22,
#line 6469
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6470
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 6472
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6472
            .heldItem = ITEM_BERRY_JUICE,
#line 6476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6473
            .ability = ABILITY_ANALYTIC,
#line 6474
            .lvl = 25,
#line 6475
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6476
                MOVE_CHARGE_BEAM,
                MOVE_MAGNET_BOMB,
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 6481
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6481
            .heldItem = ITEM_LEFTOVERS,
#line 6485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6482
            .ability = ABILITY_THICK_FAT,
#line 6483
            .lvl = 23,
#line 6484
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6485
                MOVE_FREEZE_DRY,
                MOVE_BUBBLE_BEAM,
                MOVE_BODY_SLAM,
                MOVE_YAWN,
            },
            },
        },
    },
#line 6490
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 6491
        .trainerName = _("LYLE"),
#line 6492
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
#line 6493
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .encounterMusic_gender =
#line 6495
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6496
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_FIREBREATHER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6499
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6500
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6503
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6504
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6507
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6508
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6511
    [DIFFICULTY_NORMAL][TRAINER_IRWIN] =
    {
#line 6512
        .trainerName = _("Irwin"),
#line 6513
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 6514
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 6516
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 6517
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING,
#line 0
        .trainerBackPic = TRAINER_PIC_JUGGLER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6520
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6520
            .heldItem = ITEM_SITRUS_BERRY,
#line 6524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6521
            .ability = ABILITY_FILTER,
#line 6522
            .lvl = 37,
#line 6523
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6524
                MOVE_PSYCHIC,
                MOVE_FREEZE_DRY,
                MOVE_THUNDERBOLT,
                MOVE_FOLLOW_ME,
            },
            },
            {
#line 6529
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6529
            .heldItem = ITEM_NORMAL_GEM,
#line 6533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6530
            .ability = ABILITY_AFTERMATH,
#line 6531
            .lvl = 39,
#line 6532
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6533
                MOVE_THUNDERBOLT,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6536
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6536
            .heldItem = ITEM_MUSCLE_BAND,
#line 6540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6537
            .ability = ABILITY_LIMBER,
#line 6538
            .lvl = 36,
#line 6539
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6540
                MOVE_FAKE_OUT,
                MOVE_BRICK_BREAK,
                MOVE_BLAZE_KICK,
                MOVE_STONE_EDGE,
            },
            },
        },
    },
#line 6545
    [DIFFICULTY_NORMAL][TRAINER_FRITZ] =
    {
#line 6546
        .trainerName = _("FRITZ"),
#line 6547
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 6548
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 6550
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 6551
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_JUGGLER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6555
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6558
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6559
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6562
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6563
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6566
    [DIFFICULTY_NORMAL][TRAINER_HORTON] =
    {
#line 6567
        .trainerName = _("HORTON"),
#line 6568
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 6569
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 6571
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 6572
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_JUGGLER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6575
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6576
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6579
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6580
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6583
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6584
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6587
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6588
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6591
    [DIFFICULTY_NORMAL][TRAINER_KENJI] =
    {
#line 6592
        .trainerName = _("KENJI"),
#line 6593
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6594
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6596
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6597
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6600
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6601
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6604
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6605
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6608
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6609
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6612
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6613
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6616
    [DIFFICULTY_NORMAL][TRAINER_YOSHI] =
    {
#line 6617
        .trainerName = _("YOSHI"),
#line 6618
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6619
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6621
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6625
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6626
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6629
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 6630
        .trainerName = _("LAO"),
#line 6631
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6632
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6634
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6635
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6638
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6639
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6642
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 6643
        .trainerName = _("NOB"),
#line 6644
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6645
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6647
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6648
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6651
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6652
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6655
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6656
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6659
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 6660
        .trainerName = _("KIYO"),
#line 6661
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6662
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6664
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6665
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6668
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6669
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6672
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6673
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6676
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 6677
        .trainerName = _("LUNG"),
#line 6678
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6679
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6681
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6685
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6686
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6689
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6690
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6693
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6694
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6697
    [DIFFICULTY_NORMAL][TRAINER_WAI] =
    {
#line 6698
        .trainerName = _("WAI"),
#line 6699
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6700
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6702
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 6703
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BLACK_BELT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6706
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6707
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6710
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6711
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6714
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6715
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6718
    [DIFFICULTY_NORMAL][TRAINER_NATHAN] =
    {
#line 6719
        .trainerName = _("NATHAN"),
#line 6720
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6721
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6723
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6727
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6728
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6731
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 6732
        .trainerName = _("FRANKLIN"),
#line 6733
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6734
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6736
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6740
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6741
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6744
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 6745
        .trainerName = _("HERMAN"),
#line 6746
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6747
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6749
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6750
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6753
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6754
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6757
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6758
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6761
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6762
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6765
    [DIFFICULTY_NORMAL][TRAINER_FIDEL] =
    {
#line 6766
        .trainerName = _("FIDEL"),
#line 6767
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6768
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6770
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6771
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6774
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6775
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6778
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 6779
        .trainerName = _("Greg"),
#line 6780
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6781
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6783
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6787
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6787
            .heldItem = ITEM_LEFTOVERS,
#line 6791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6788
            .ability = ABILITY_ROCK_HEAD,
#line 6789
            .lvl = 44,
#line 6790
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6791
                MOVE_STEALTH_ROCK,
                MOVE_WOOD_HAMMER,
                MOVE_HEADLONG_RUSH,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 6796
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .heldItem = ITEM_POWER_HERB,
#line 6800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6797
            .ability = ABILITY_STURDY,
#line 6798
            .lvl = 45,
#line 6799
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6800
                MOVE_STEEL_BEAM,
                MOVE_METEOR_BEAM,
                MOVE_BODY_PRESS,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6805
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6805
            .heldItem = ITEM_ZOOM_LENS,
#line 6809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6806
            .ability = ABILITY_SAND_FORCE,
#line 6807
            .lvl = 45,
#line 6808
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6809
                MOVE_STONE_EDGE,
                MOVE_EARTHQUAKE,
                MOVE_HEAVY_SLAM,
                MOVE_EXPLOSION,
            },
            },
            {
#line 6814
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6814
            .heldItem = ITEM_IAPAPA_BERRY,
#line 6818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6815
            .ability = ABILITY_MAGIC_GUARD,
#line 6816
            .lvl = 46,
#line 6817
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6818
                MOVE_MOONBLAST,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
                MOVE_AMNESIA,
            },
            },
        },
    },
#line 6823
    [DIFFICULTY_NORMAL][TRAINER_NORMAN] =
    {
#line 6824
        .trainerName = _("NORMAN"),
#line 6825
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6826
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6828
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6829
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6832
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6833
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6836
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6837
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6840
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 6841
        .trainerName = _("Mark"),
#line 6842
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6843
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6845
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6846
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6849
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6849
            .heldItem = ITEM_SILVER_POWDER,
#line 6853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6850
            .ability = ABILITY_PROTEAN,
#line 6851
            .lvl = 45,
#line 6852
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6853
                MOVE_BUG_BUZZ,
                MOVE_ACID_SPRAY,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6858
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6858
            .heldItem = ITEM_COLBUR_BERRY,
#line 6862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6859
            .ability = ABILITY_DRY_SKIN,
#line 6860
            .lvl = 45,
#line 6861
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6862
                MOVE_ICE_BEAM,
                MOVE_EXTRASENSORY,
                MOVE_ENERGY_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 6867
            .species = SPECIES_COALOSSAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6867
            .heldItem = ITEM_FIRE_GEM,
#line 6871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6868
            .ability = ABILITY_STEAM_ENGINE,
#line 6869
            .lvl = 46,
#line 6870
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6871
                MOVE_TAR_SHOT,
                MOVE_OVERHEAT,
                MOVE_ROCK_SLIDE,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 6876
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .heldItem = ITEM_STARF_BERRY,
#line 6880
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6877
            .ability = ABILITY_GLUTTONY,
#line 6878
            .lvl = 44,
#line 6879
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6880
                MOVE_CHLOROBLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_HIDDEN_POWER,
                MOVE_SUCKER_PUNCH,
            },
            },
        },
    },
#line 6885
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 6886
        .trainerName = _("PHIL"),
#line 6887
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6888
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6890
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6891
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6894
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6895
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6898
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6899
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6902
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6903
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6906
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 6907
        .trainerName = _("RICHARD"),
#line 6908
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6909
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6911
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6912
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6915
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6916
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6919
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6920
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6923
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6924
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6927
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 6928
        .trainerName = _("GILBERT"),
#line 6929
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6930
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6932
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6933
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6936
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6937
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6940
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6941
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6944
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6945
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6948
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 6949
        .trainerName = _("JARED"),
#line 6950
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6951
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6953
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6957
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6958
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6961
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6962
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6965
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6966
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6969
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 6970
        .trainerName = _("RODNEY"),
#line 6971
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
#line 6972
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6974
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 6975
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6978
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6979
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6982
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6983
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6986
    [DIFFICULTY_NORMAL][TRAINER_LIZ] =
    {
#line 6987
        .trainerName = _("LIZ"),
#line 6988
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6989
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6991
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 6992
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6995
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6995
            .heldItem = ITEM_BLACK_GLASSES,
#line 6999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6996
            .ability = ABILITY_TORRENT,
#line 6997
            .lvl = 21,
#line 6998
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6999
                MOVE_BITE,
                MOVE_AQUA_JET,
                MOVE_ICY_WIND,
                MOVE_SEISMIC_TOSS,
            },
            },
            {
#line 7004
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7004
            .heldItem = ITEM_ORAN_BERRY,
#line 7008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7005
            .ability = ABILITY_ROUGH_SKIN,
#line 7006
            .lvl = 20,
#line 7007
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7008
                MOVE_SAND_TOMB,
                MOVE_METAL_CLAW,
                MOVE_THIEF,
                MOVE_SPIKY_SHIELD,
            },
            },
            {
#line 7013
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .heldItem = ITEM_DESTINY_KNOT,
#line 7017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7014
            .ability = ABILITY_OWN_TEMPO,
#line 7015
            .lvl = 22,
#line 7016
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7017
                MOVE_FAKE_OUT,
                MOVE_FACADE,
                MOVE_SUCKER_PUNCH,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 7022
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7022
            .heldItem = ITEM_SHELL_BELL,
#line 7026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7023
            .ability = ABILITY_NIGHT_OWL,
#line 7024
            .lvl = 21,
#line 7025
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7026
                MOVE_UPROAR,
                MOVE_AIR_CUTTER,
                MOVE_SILVER_WIND,
                MOVE_STORED_POWER,
            },
            },
        },
    },
#line 7031
    [DIFFICULTY_NORMAL][TRAINER_GINA] =
    {
#line 7032
        .trainerName = _("GINA"),
#line 7033
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7034
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7036
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 7037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7040
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7040
            .heldItem = ITEM_CHOPLE_BERRY,
#line 7044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7041
            .ability = ABILITY_OWN_TEMPO,
#line 7042
            .lvl = 32,
#line 7043
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7044
                MOVE_ROCK_CLIMB,
                MOVE_LICK,
                MOVE_EARTHQUAKE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 7049
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7049
            .heldItem = ITEM_LIFE_ORB,
#line 7053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7050
            .ability = ABILITY_SPEED_BOOST,
#line 7051
            .lvl = 31,
#line 7052
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7053
                MOVE_AIR_SLASH,
                MOVE_BUG_BUZZ,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 7058
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7058
            .heldItem = ITEM_ROWAP_BERRY,
#line 7062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7059
            .ability = ABILITY_INNER_FOCUS,
#line 7060
            .lvl = 32,
#line 7061
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7062
                MOVE_DRAIN_PUNCH,
                MOVE_PAYBACK,
                MOVE_ICE_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 7067
            .species = SPECIES_MORPEKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7067
            .heldItem = ITEM_SALAC_BERRY,
#line 7071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7068
            .ability = ABILITY_HUNGER_SWITCH,
#line 7069
            .lvl = 32,
#line 7070
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7071
                MOVE_AURA_WHEEL,
                MOVE_REVERSAL,
                MOVE_OUTRAGE,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 7076
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7076
            .heldItem = ITEM_CHOICE_SCARF,
#line 7080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7077
            .ability = ABILITY_TECHNICIAN,
#line 7078
            .lvl = 33,
#line 7079
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7080
                MOVE_HIDDEN_POWER_PSYCHIC_2,
                MOVE_HIDDEN_POWER_FLYING_2,
                MOVE_HIDDEN_POWER_ICE_2,
                MOVE_HIDDEN_POWER_GRASS_2,
            },
            },
        },
    },
#line 7085
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 7086
        .trainerName = _("Brooke"),
#line 7087
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7088
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7090
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7091
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7094
            .species = SPECIES_KOMMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7094
            .heldItem = ITEM_KEE_BERRY,
#line 7098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7095
            .ability = ABILITY_OVERCOAT,
#line 7096
            .lvl = 45,
#line 7097
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7098
                MOVE_STEALTH_ROCK,
                MOVE_CLANGING_SCALES,
                MOVE_BODY_PRESS,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 7103
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7103
            .heldItem = ITEM_BRIGHT_POWDER,
#line 7107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7104
            .ability = ABILITY_SAND_VEIL,
#line 7105
            .lvl = 46,
#line 7106
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7107
                MOVE_PARABOLIC_CHARGE,
                MOVE_MUDDY_WATER,
                MOVE_MUD_BOMB,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 7112
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .heldItem = ITEM_COLBUR_BERRY,
#line 7116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7113
            .ability = ABILITY_MAGIC_GUARD,
#line 7114
            .lvl = 45,
#line 7115
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7116
                MOVE_FUTURE_SIGHT,
                MOVE_SILVER_WIND,
                MOVE_SHADOW_BALL,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 7121
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7121
            .heldItem = ITEM_FOCUS_SASH,
#line 7125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7122
            .ability = ABILITY_DEFIANT,
#line 7123
            .lvl = 44,
#line 7124
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7125
                MOVE_PURSUIT,
                MOVE_SUCKER_PUNCH,
                MOVE_IRON_HEAD,
                MOVE_METAL_BURST,
            },
            },
        },
    },
#line 7130
    [DIFFICULTY_NORMAL][TRAINER_KIM] =
    {
#line 7131
        .trainerName = _("Kim"),
#line 7132
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7133
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7135
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 7136
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_F,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7139
            .species = SPECIES_WORMADAM_TRASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7139
            .heldItem = ITEM_SITRUS_BERRY,
#line 7143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7140
            .ability = ABILITY_OVERCOAT,
#line 7141
            .lvl = 36,
#line 7142
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7143
                MOVE_STEEL_BEAM,
                MOVE_BUG_BUZZ,
                MOVE_SUCKER_PUNCH,
                MOVE_METAL_BURST,
            },
            },
            {
#line 7148
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7148
            .heldItem = ITEM_COVERT_CLOAK,
#line 7152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7149
            .ability = ABILITY_STURDY,
#line 7150
            .lvl = 37,
#line 7151
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7152
                MOVE_STEALTH_ROCK,
                MOVE_STOMPING_TANTRUM,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
            {
#line 7157
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7157
            .heldItem = ITEM_BLUNDER_POLICY,
#line 7161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7158
            .ability = ABILITY_IRON_FIST,
#line 7159
            .lvl = 39,
#line 7160
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7161
                MOVE_THUNDER_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_DYNAMIC_PUNCH,
                MOVE_BATON_PASS,
            },
            },
            {
#line 7166
            .species = SPECIES_ALCREMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7166
            .heldItem = ITEM_LEFTOVERS,
#line 7170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7167
            .ability = ABILITY_SWEET_VEIL,
#line 7168
            .lvl = 35,
#line 7169
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7170
                MOVE_ACID_ARMOR,
                MOVE_CALM_MIND,
                MOVE_GIGA_DRAIN,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 7175
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7175
            .heldItem = ITEM_POWER_HERB,
#line 7179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7176
            .ability = ABILITY_BLAZE,
#line 7177
            .lvl = 36,
#line 7178
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7179
                MOVE_BLAZE_KICK,
                MOVE_SOLAR_BEAM,
                MOVE_IRON_TAIL,
                MOVE_EMBER,
            },
            },
            {
#line 7184
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .heldItem = ITEM_SNOWBALL,
#line 7188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7185
            .ability = ABILITY_OVERCOAT,
#line 7186
            .lvl = 37,
#line 7187
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7188
                MOVE_THRASH,
                MOVE_CRUNCH,
                MOVE_SCARY_FACE,
                MOVE_AMNESIA,
            },
            },
        },
    },
#line 7193
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 7194
        .trainerName = _("CINDY"),
#line 7195
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7196
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7198
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7199
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7203
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7206
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7207
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7210
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 7211
        .trainerName = _("Hope"),
#line 7212
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7213
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7215
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7216
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7219
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7219
            .heldItem = ITEM_EXPERT_BELT,
#line 7223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7220
            .ability = ABILITY_ADAPTABILITY,
#line 7221
            .lvl = 50,
#line 7222
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7223
                MOVE_FLAMETHROWER,
                MOVE_GIGA_DRAIN,
                MOVE_SCORCHING_SANDS,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 7228
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7228
            .heldItem = ITEM_CUSTAP_BERRY,
#line 7232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7229
            .ability = ABILITY_STURDY,
#line 7230
            .lvl = 51,
#line 7231
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7232
                MOVE_STONE_EDGE,
                MOVE_EARTHQUAKE,
                MOVE_FLAIL,
                MOVE_HAMMER_ARM,
            },
            },
            {
#line 7237
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .heldItem = ITEM_KEBIA_BERRY,
#line 7241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7238
            .ability = ABILITY_PRANKSTER,
#line 7239
            .lvl = 50,
#line 7240
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7241
                MOVE_GRASS_WHISTLE,
                MOVE_FAKE_TEARS,
                MOVE_ENERGY_BALL,
                MOVE_MOONBLAST,
            },
            },
            {
#line 7246
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7246
            .heldItem = ITEM_LUM_BERRY,
#line 7250
            .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
#line 7247
            .ability = ABILITY_CONTRARY,
#line 7248
            .lvl = 48,
#line 7249
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7251
                MOVE_LEAF_STORM,
                MOVE_DRAGON_PULSE,
                MOVE_HIDDEN_POWER,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 7256
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7256
            .heldItem = ITEM_EVIOLITE,
#line 7260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7257
            .ability = ABILITY_SOLID_ROCK,
#line 7258
            .lvl = 51,
#line 7259
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7260
                MOVE_ANCIENT_POWER,
                MOVE_BRINE,
                MOVE_GIGA_DRAIN,
                MOVE_RECOVER,
            },
            },
        },
    },
#line 7265
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 7266
        .trainerName = _("Sharon"),
#line 7267
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7268
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7270
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7271
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7274
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7274
            .heldItem = ITEM_FOCUS_SASH,
#line 7278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7275
            .ability = ABILITY_SHIELD_DUST,
#line 7276
            .lvl = 50,
#line 7277
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7278
                MOVE_TAILWIND,
                MOVE_U_TURN,
                MOVE_HURRICANE,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 7283
            .species = SPECIES_BRAMBLEGHAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7283
            .heldItem = ITEM_MIRACLE_SEED,
#line 7287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7284
            .ability = ABILITY_WIND_RIDER,
#line 7285
            .lvl = 50,
#line 7286
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7287
                MOVE_SEED_BOMB,
                MOVE_POLTERGEIST,
                MOVE_SKITTER_SMACK,
                MOVE_SHADOW_SNEAK,
            },
            },
            {
#line 7292
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7292
            .heldItem = ITEM_KEE_BERRY,
#line 7296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7293
            .ability = ABILITY_SERENE_GRACE,
#line 7294
            .lvl = 48,
#line 7295
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7296
                MOVE_TAILWIND,
                MOVE_HEADBUTT,
                MOVE_BODY_PRESS,
                MOVE_THROAT_CHOP,
            },
            },
            {
#line 7301
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7301
            .heldItem = ITEM_MIRROR_HERB,
#line 7305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7302
            .ability = ABILITY_WIND_RIDER,
#line 7303
            .lvl = 50,
#line 7304
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7305
                MOVE_SWAGGER,
                MOVE_SUCKER_PUNCH,
                MOVE_LEAF_BLADE,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 7310
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7310
            .heldItem = ITEM_EXPERT_BELT,
#line 7314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7311
            .ability = ABILITY_ROCK_HEAD,
#line 7312
            .lvl = 49,
#line 7313
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7314
                MOVE_ROCK_SLIDE,
                MOVE_WILD_CHARGE,
                MOVE_HIGH_HORSEPOWER,
                MOVE_FLAME_CHARGE,
            },
            },
        },
    },
#line 7319
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 7320
        .trainerName = _("DEBRA"),
#line 7321
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7322
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7324
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7325
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7328
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7329
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7332
    [DIFFICULTY_NORMAL][TRAINER_ERIN] =
    {
#line 7333
        .trainerName = _("ERIN"),
#line 7334
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7335
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7337
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7338
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7341
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7342
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7345
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7346
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7349
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7350
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7353
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7354
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7357
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 7358
        .trainerName = _("HEIDI"),
#line 7359
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7360
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7362
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7363
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7366
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7367
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7370
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7371
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7374
    [DIFFICULTY_NORMAL][TRAINER_EDNA] =
    {
#line 7375
        .trainerName = _("EDNA"),
#line 7376
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7377
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7379
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7380
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7383
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7384
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7387
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7388
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7391
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 7392
        .trainerName = _("TIFFANY"),
#line 7393
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7394
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7396
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7397
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7400
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7401
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7404
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7405
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7408
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 7409
        .trainerName = _("Tanya"),
#line 7410
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7411
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7413
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 7414
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_PICNICKER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7417
            .species = SPECIES_ZEBSTRIKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7417
            .heldItem = ITEM_COVERT_CLOAK,
#line 7421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7418
            .ability = ABILITY_SAP_SIPPER,
#line 7419
            .lvl = 50,
#line 7420
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7421
                MOVE_SKILL_SWAP,
                MOVE_HELPING_HAND,
                MOVE_SUPERCELL_SLAM,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 7426
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .heldItem = ITEM_SILK_SCARF,
#line 7430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7427
            .ability = ABILITY_SAP_SIPPER,
#line 7428
            .lvl = 50,
#line 7429
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7430
                MOVE_SKILL_SWAP,
                MOVE_TWIN_BEAM,
                MOVE_HYPER_VOICE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 7435
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 7436
        .trainerName = _("ROLAND"),
#line 7437
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7438
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7440
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7441
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7444
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7445
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7448
    [DIFFICULTY_NORMAL][TRAINER_TODD] =
    {
#line 7449
        .trainerName = _("Todd"),
#line 7450
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7451
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7453
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7454
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7457
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7457
            .heldItem = ITEM_FOCUS_SASH,
#line 7461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7458
            .ability = ABILITY_UNAWARE,
#line 7459
            .lvl = 35,
#line 7460
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7461
                MOVE_FUTURE_SIGHT,
                MOVE_FLY,
            },
            },
            {
#line 7464
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7464
            .heldItem = ITEM_SITRUS_BERRY,
#line 7468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7465
            .ability = ABILITY_MOLD_BREAKER,
#line 7466
            .lvl = 34,
#line 7467
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7468
                MOVE_POUNCE,
                MOVE_KARATE_CHOP,
                MOVE_ROCK_TOMB,
                MOVE_SEISMIC_TOSS,
            },
            },
            {
#line 7473
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7473
            .heldItem = ITEM_WISE_GLASSES,
#line 7477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7474
            .ability = ABILITY_LEVITATE,
#line 7475
            .lvl = 35,
#line 7476
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7477
                MOVE_SHADOW_BALL,
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
            },
            },
            {
#line 7482
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .heldItem = ITEM_BLACK_BELT,
#line 7486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7483
            .ability = ABILITY_INTIMIDATE,
#line 7484
            .lvl = 33,
#line 7485
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7486
                MOVE_PLAY_ROUGH,
                MOVE_BRICK_BREAK,
                MOVE_BULLDOZE,
                MOVE_SUPER_FANG,
            },
            },
        },
    },
#line 7491
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 7492
        .trainerName = _("Ivan"),
#line 7493
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7494
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7496
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7500
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .heldItem = ITEM_SOFT_SAND,
#line 7504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7501
            .ability = ABILITY_LEVITATE,
#line 7502
            .lvl = 45,
#line 7503
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7504
                MOVE_U_TURN,
                MOVE_DRAGON_CLAW,
                MOVE_STOMPING_TANTRUM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7509
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .heldItem = ITEM_CHARCOAL,
#line 7513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7510
            .ability = ABILITY_DROUGHT,
#line 7511
            .lvl = 43,
#line 7512
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7513
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_WILL_O_WISP,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 7518
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7518
            .heldItem = ITEM_MYSTIC_WATER,
#line 7522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7519
            .ability = ABILITY_DRIZZLE,
#line 7520
            .lvl = 43,
#line 7521
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7522
                MOVE_SCALD,
                MOVE_ICE_BEAM,
                MOVE_FOCUS_BLAST,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 7527
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7527
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7528
            .ability = ABILITY_SNOW_WARNING,
#line 7529
            .lvl = 43,
#line 7530
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7531
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_BLIZZARD,
                MOVE_ICY_WIND,
            },
            },
            {
#line 7536
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7536
            .heldItem = ITEM_CHOICE_SCARF,
#line 7540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7537
            .ability = ABILITY_FORECAST,
#line 7538
            .lvl = 50,
#line 7539
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7540
                MOVE_WEATHER_BALL,
            },
            },
        },
    },
#line 7543
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 7544
        .trainerName = _("Elliot"),
#line 7545
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7546
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7548
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7549
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7552
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7552
            .heldItem = ITEM_FOCUS_SASH,
#line 7556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7553
            .ability = ABILITY_WONDER_GUARD,
#line 7554
            .lvl = 38,
#line 7555
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7556
                MOVE_DESTINY_BOND,
                MOVE_SHADOW_CLAW,
                MOVE_SHADOW_SNEAK,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 7561
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7561
            .heldItem = ITEM_OCCA_BERRY,
#line 7565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7562
            .ability = ABILITY_IRON_BARBS,
#line 7563
            .lvl = 37,
#line 7564
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7565
                MOVE_AGILITY,
                MOVE_IRON_HEAD,
                MOVE_ICE_PUNCH,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 7570
            .species = SPECIES_SLIGGOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7570
            .heldItem = ITEM_DRAGON_FANG,
#line 7574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7571
            .ability = ABILITY_GOOEY,
#line 7572
            .lvl = 36,
#line 7573
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7574
                MOVE_DRAGON_PULSE,
                MOVE_FIRE_BLAST,
                MOVE_BLIZZARD,
                MOVE_THUNDER,
            },
            },
            {
#line 7579
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7579
            .heldItem = ITEM_MYSTIC_WATER,
#line 7583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7580
            .ability = ABILITY_LIQUID_VOICE,
#line 7581
            .lvl = 36,
#line 7582
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7583
                MOVE_UPROAR,
                MOVE_EARTH_POWER,
                MOVE_ICY_WIND,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 7588
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 7589
        .trainerName = _("BARRY"),
#line 7590
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7591
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7593
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7594
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7597
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7598
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7601
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7602
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7605
    [DIFFICULTY_NORMAL][TRAINER_LLOYD] =
    {
#line 7606
        .trainerName = _("LLOYD"),
#line 7607
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7608
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7610
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7611
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7614
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7615
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7618
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 7619
        .trainerName = _("DEAN"),
#line 7620
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7621
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7623
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7624
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7627
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7628
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7631
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7632
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7635
    [DIFFICULTY_NORMAL][TRAINER_SID] =
    {
#line 7636
        .trainerName = _("SID"),
#line 7637
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7638
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7640
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7641
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7644
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7645
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7648
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7649
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7652
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7653
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7656
    [DIFFICULTY_NORMAL][TRAINER_HARVEY] =
    {
#line 7657
        .trainerName = _("HARVEY"),
#line 7658
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7659
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7661
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7662
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7665
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7666
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7669
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 7670
        .trainerName = _("DALE"),
#line 7671
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7672
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7674
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7675
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7678
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7679
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7682
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 7683
        .trainerName = _("TED"),
#line 7684
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7685
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7687
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7688
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7691
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7692
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7695
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7696
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7699
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7700
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7703
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 7704
        .trainerName = _("THOMAS"),
#line 7705
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7706
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7708
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7709
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7712
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7713
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7716
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7717
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7720
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7721
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7724
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7725
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7728
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 7729
        .trainerName = _("LEROY"),
#line 7730
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7731
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7733
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7734
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7737
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7738
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7741
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7742
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7745
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7746
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7749
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7750
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7753
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 7754
        .trainerName = _("DAVID"),
#line 7755
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7756
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7758
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7759
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7762
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7763
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7766
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7767
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7770
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7771
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7774
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7775
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7778
    [DIFFICULTY_NORMAL][TRAINER_JOHN] =
    {
#line 7779
        .trainerName = _("JOHN"),
#line 7780
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7781
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7783
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7787
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7788
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7791
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7792
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7795
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7796
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7799
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7800
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7803
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 7804
        .trainerName = _("JERRY"),
#line 7805
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7806
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7808
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7809
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7812
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7813
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7816
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7817
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7820
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7821
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7824
    [DIFFICULTY_NORMAL][TRAINER_GRANT] =
    {
#line 7825
        .trainerName = _("GRANT"),
#line 7826
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7827
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7829
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7830
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7833
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7834
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7837
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7838
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7841
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 7842
        .trainerName = _("SPENCER"),
#line 7843
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7844
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7846
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7847
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7850
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7851
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7854
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7855
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7858
    [DIFFICULTY_NORMAL][TRAINER_QUENTIN] =
    {
#line 7859
        .trainerName = _("QUENTIN"),
#line 7860
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7861
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7863
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
#line 7864
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_CAMPER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7867
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7868
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7871
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7872
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7875
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7876
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7879
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7880
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7883
    [DIFFICULTY_NORMAL][TRAINER_CHOW] =
    {
#line 7884
        .trainerName = _("Chow"),
#line 7885
        .trainerClass = TRAINER_CLASS_SAGE,
#line 7886
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 7888
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 7889
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7892
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .heldItem = ITEM_COBA_BERRY,
#line 7896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7893
            .ability = ABILITY_GUTS,
#line 7894
            .lvl = 13,
#line 7895
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7896
                MOVE_LOW_KICK,
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LEER,
            },
            },
            {
#line 7901
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7901
            .heldItem = ITEM_BLACK_GLASSES,
#line 7905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7902
            .ability = ABILITY_ILLUSION,
#line 7903
            .lvl = 13,
#line 7904
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7905
                MOVE_KNOCK_OFF,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 7908
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .heldItem = ITEM_DESTINY_KNOT,
#line 7912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7909
            .ability = ABILITY_NORMALIZE,
#line 7910
            .lvl = 13,
#line 7911
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7912
                MOVE_FAKE_OUT,
                MOVE_ASSIST,
            },
            },
            {
#line 7915
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7915
            .heldItem = ITEM_BLACK_BELT,
#line 7919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7916
            .ability = ABILITY_POISON_TOUCH,
#line 7917
            .lvl = 13,
#line 7918
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7919
                MOVE_FAKE_OUT,
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SMASH,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 7924
    [DIFFICULTY_NORMAL][TRAINER_NICO] =
    {
#line 7925
        .trainerName = _("NICO"),
#line 7926
        .trainerClass = TRAINER_CLASS_SAGE,
#line 7927
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 7929
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 7930
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7933
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7933
            .heldItem = ITEM_SOFT_SAND,
#line 7937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7934
            .ability = ABILITY_HYPER_CUTTER,
#line 7935
            .lvl = 12,
#line 7936
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7937
                MOVE_AERIAL_ACE,
                MOVE_DIG,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 7941
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7941
            .heldItem = ITEM_LUM_BERRY,
#line 7945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7942
            .ability = ABILITY_INTIMIDATE,
#line 7943
            .lvl = 12,
#line 7944
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7945
                MOVE_DOUBLE_KICK,
                MOVE_FIRE_FANG,
                MOVE_EMBER,
                MOVE_MORNING_SUN,
            },
            },
            {
#line 7950
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7950
            .heldItem = ITEM_ORAN_BERRY,
#line 7954
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7951
            .ability = ABILITY_ANALYTIC,
#line 7952
            .lvl = 12,
#line 7953
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7955
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_SHOCK_WAVE,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 7960
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7960
            .heldItem = ITEM_LIECHI_BERRY,
#line 7964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7961
            .ability = ABILITY_SIMPLE,
#line 7962
            .lvl = 10,
#line 7963
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7964
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_YAWN,
                MOVE_SKULL_BASH,
            },
            },
        },
    },
#line 7969
    [DIFFICULTY_NORMAL][TRAINER_JIN] =
    {
#line 7970
        .trainerName = _("JIN"),
#line 7971
        .trainerClass = TRAINER_CLASS_SAGE,
#line 7972
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 7974
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 7975
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7978
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7978
            .heldItem = ITEM_SITRUS_BERRY,
#line 7983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7979
            .ability = ABILITY_PICKUP,
#line 7980
            .lvl = 13,
#line 7982
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 7981
            .teraType = TYPE_ELECTRIC,
            .moves = {
#line 7983
                MOVE_NUZZLE,
                MOVE_SUPER_FANG,
                MOVE_QUICK_ATTACK,
                MOVE_COVET,
            },
            },
            {
#line 7988
            .species = SPECIES_PUMPKABOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7988
            .heldItem = ITEM_SITRUS_BERRY,
#line 7993
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7989
            .ability = ABILITY_PICKUP,
#line 7990
            .lvl = 13,
#line 7992
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 7991
            .teraType = TYPE_GHOST,
            .moves = {
#line 7994
                MOVE_FIRE_SPIN,
                MOVE_PROTECT,
                MOVE_MEGA_DRAIN,
            },
            },
        },
    },
#line 7998
    [DIFFICULTY_NORMAL][TRAINER_TROY] =
    {
#line 7999
        .trainerName = _("TROY"),
#line 8000
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8001
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8003
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8004
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8007
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8008
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8011
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8012
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8015
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 8016
        .trainerName = _("JEFFREY"),
#line 8017
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8018
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8020
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8021
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8024
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8025
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8028
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8029
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8032
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8033
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8036
    [DIFFICULTY_NORMAL][TRAINER_PING] =
    {
#line 8037
        .trainerName = _("PING"),
#line 8038
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8039
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8041
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8042
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8045
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8046
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8049
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 8050
        .trainerName = _("EDMOND"),
#line 8051
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8052
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8054
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8055
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8058
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8059
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8062
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8063
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8066
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8067
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8070
    [DIFFICULTY_NORMAL][TRAINER_NEAL] =
    {
#line 8071
        .trainerName = _("NEAL"),
#line 8072
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8073
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8075
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8076
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_TARGETING | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8079
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8079
            .heldItem = ITEM_SITRUS_BERRY,
#line 8083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8080
            .ability = ABILITY_FRIEND_GUARD,
#line 8081
            .lvl = 13,
#line 8082
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8083
                MOVE_DRAINING_KISS,
                MOVE_FOLLOW_ME,
                MOVE_HEAL_PULSE,
            },
            },
            {
#line 8087
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8087
            .heldItem = ITEM_SALAC_BERRY,
#line 8091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8088
            .ability = ABILITY_CHEEK_POUCH,
#line 8089
            .lvl = 13,
#line 8090
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8091
                MOVE_BODY_PRESS,
                MOVE_COUNTER,
                MOVE_SUPER_FANG,
                MOVE_STUFF_CHEEKS,
            },
            },
        },
    },
#line 8096
    [DIFFICULTY_NORMAL][TRAINER_LI] =
    {
#line 8097
        .trainerName = _("LI"),
#line 8098
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8099
        .trainerPic = TRAINER_PIC_MR_FUJI,
        .encounterMusic_gender =
#line 8101
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_MR_FUJI,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8105
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8105
            .heldItem = ITEM_WIKI_BERRY,
#line 8109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8106
            .ability = ABILITY_GLUTTONY,
#line 8107
            .lvl = 13,
#line 8108
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8109
                MOVE_BUG_BITE,
                MOVE_WRAP,
                MOVE_TICKLE,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 8114
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8114
            .heldItem = ITEM_SILVER_POWDER,
#line 8118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8115
            .ability = ABILITY_SWARM,
#line 8116
            .lvl = 15,
#line 8117
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8118
                MOVE_U_TURN,
                MOVE_GIGA_DRAIN,
                MOVE_REFLECT,
                MOVE_COUNTER,
            },
            },
            {
#line 8123
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8123
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 8127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8124
            .ability = ABILITY_DRY_SKIN,
#line 8125
            .lvl = 15,
#line 8126
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8127
                MOVE_FAKE_OUT,
                MOVE_ICY_WIND,
                MOVE_CONFUSION,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 8132
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .heldItem = ITEM_SALAC_BERRY,
#line 8136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8133
            .ability = ABILITY_STATIC,
#line 8134
            .lvl = 15,
#line 8135
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8136
                MOVE_ELECTRO_BALL,
                MOVE_TRAILBLAZE,
                MOVE_LOW_SWEEP,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 8141
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .heldItem = ITEM_METRONOME,
#line 8145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8142
            .ability = ABILITY_TINTED_LENS,
#line 8143
            .lvl = 14,
#line 8144
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8145
                MOVE_ECHOED_VOICE,
            },
            },
        },
    },
#line 8147
    [DIFFICULTY_NORMAL][TRAINER_GAKU] =
    {
#line 8148
        .trainerName = _("GAKU"),
#line 8149
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8150
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8152
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8153
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8156
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8157
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8160
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8161
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8164
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8165
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8168
    [DIFFICULTY_NORMAL][TRAINER_MASA] =
    {
#line 8169
        .trainerName = _("MASA"),
#line 8170
        .trainerClass = TRAINER_CLASS_SAGE,
#line 8171
        .trainerPic = TRAINER_PIC_SAGE,
        .encounterMusic_gender =
#line 8173
            TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
#line 8174
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_SAGE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8177
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8178
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8181
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8182
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8185
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8186
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8190
        .trainerName = _("KOJI"),
#line 8191
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8192
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8194
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8195
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8198
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8199
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8202
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8203
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8206
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8207
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8210
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 8211
        .trainerName = _("MARTHA"),
#line 8212
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8213
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8215
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8216
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8219
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8220
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8223
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8224
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8227
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 8228
        .trainerName = _("GRACE"),
#line 8229
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8230
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8232
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8233
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8236
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8237
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8240
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8241
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8244
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 8245
        .trainerName = _("BETHANY"),
#line 8246
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8247
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8249
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8250
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8253
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8254
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8257
    [DIFFICULTY_NORMAL][TRAINER_MARGRET] =
    {
#line 8258
        .trainerName = _("MARGRET"),
#line 8259
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8260
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8262
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8263
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8266
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8267
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8270
    [DIFFICULTY_NORMAL][TRAINER_ETHEL] =
    {
#line 8271
        .trainerName = _("ETHEL"),
#line 8272
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8273
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8275
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8276
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8279
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8280
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8283
    [DIFFICULTY_NORMAL][TRAINER_REBECCA] =
    {
#line 8284
        .trainerName = _("REBECCA"),
#line 8285
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8286
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8288
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8289
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_HEX_MANIAC,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8292
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8293
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8296
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8297
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8300
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8301
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8304
    [DIFFICULTY_NORMAL][TRAINER_DORIS] =
    {
#line 8305
        .trainerName = _("DORIS"),
#line 8306
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8307
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 8309
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8310
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PSYCHIC_F,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8313
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8314
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8317
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8318
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8321
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8322
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8325
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 8326
        .trainerName = _("RONALD"),
#line 8327
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8328
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 8330
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8331
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8334
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8335
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8338
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8339
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8342
    [DIFFICULTY_NORMAL][TRAINER_BRAD] =
    {
#line 8343
        .trainerName = _("BRAD"),
#line 8344
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8345
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 8347
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8348
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8351
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8352
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8355
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8356
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8359
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 8360
        .trainerName = _("DOUGLAS"),
#line 8361
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8362
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 8364
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8365
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_EXPERT_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8368
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8369
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8372
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8373
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8376
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8377
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8380
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 8381
        .trainerName = _("William"),
#line 8382
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8385
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8386
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_COOLTRAINER_M,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8389
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .heldItem = ITEM_BLACK_BELT,
#line 8393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8390
            .ability = ABILITY_POISON_TOUCH,
#line 8391
            .lvl = 45,
#line 8392
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8393
                MOVE_FAKE_OUT,
                MOVE_VACUUM_WAVE,
                MOVE_AURA_SPHERE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 8398
            .species = SPECIES_MABOSSTIFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8398
            .heldItem = ITEM_LUM_BERRY,
#line 8402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8399
            .ability = ABILITY_STAKEOUT,
#line 8400
            .lvl = 43,
#line 8401
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8402
                MOVE_CRUNCH,
                MOVE_WILD_CHARGE,
                MOVE_DIG,
                MOVE_RETALIATE,
            },
            },
            {
#line 8407
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8407
            .heldItem = ITEM_EVIOLITE,
#line 8411
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 31, 30),
#line 8408
            .ability = ABILITY_INNER_FOCUS,
#line 8409
            .lvl = 46,
#line 8410
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8412
                MOVE_TOXIC,
                MOVE_CHATTER,
                MOVE_SLUDGE_BOMB,
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 8417
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8417
            .heldItem = ITEM_PASSHO_BERRY,
#line 8421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8418
            .ability = ABILITY_SHEER_FORCE,
#line 8419
            .lvl = 45,
#line 8420
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8421
                MOVE_LAVA_PLUME,
                MOVE_SCORCHING_SANDS,
                MOVE_FLASH_CANNON,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 8426
            .species = SPECIES_GUMSHOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .heldItem = ITEM_LUM_BERRY,
#line 8430
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8427
            .ability = ABILITY_STAKEOUT,
#line 8428
            .lvl = 43,
#line 8429
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8430
                MOVE_RETALIATE,
                MOVE_FOCUS_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 8435
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 8436
        .trainerName = _("DEREK"),
#line 8437
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8438
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8440
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8441
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8444
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8445
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8448
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8449
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8452
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 8453
        .trainerName = _("ROBERT"),
#line 8454
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8455
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8457
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8458
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8461
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8462
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8465
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 8466
        .trainerName = _("JOSHUA"),
#line 8467
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8468
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8470
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8471
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8474
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8475
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8478
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8479
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8482
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8483
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8486
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 8487
        .trainerName = _("CARTER"),
#line 8488
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8489
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8491
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8492
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8495
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8496
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8499
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8500
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8503
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8504
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8507
    [DIFFICULTY_NORMAL][TRAINER_TREVOR] =
    {
#line 8508
        .trainerName = _("TREVOR"),
#line 8509
        .trainerClass = TRAINER_CLASS_JUGGLER,
#line 8510
        .trainerPic = TRAINER_PIC_JUGGLER,
        .encounterMusic_gender =
#line 8512
            TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
#line 8513
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_JUGGLER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8516
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8517
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8520
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 8521
        .trainerName = _("Brandon"),
#line 8522
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8523
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8525
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8526
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8529
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8529
            .heldItem = ITEM_SITRUS_BERRY,
#line 8533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8530
            .ability = ABILITY_PRANKSTER,
#line 8531
            .lvl = 34,
#line 8532
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8533
                MOVE_KNOCK_OFF,
                MOVE_NIGHT_SHADE,
                MOVE_GRUDGE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 8538
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8538
            .heldItem = ITEM_WISE_GLASSES,
#line 8542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8539
            .ability = ABILITY_TRACE,
#line 8540
            .lvl = 32,
#line 8541
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8542
                MOVE_EXPANDING_FORCE,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
                MOVE_MYSTICAL_FIRE,
            },
            },
            {
#line 8547
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8547
            .heldItem = ITEM_COVERT_CLOAK,
#line 8551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8548
            .ability = ABILITY_STURDY,
#line 8549
            .lvl = 35,
#line 8550
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8551
                MOVE_ANCIENT_POWER,
                MOVE_ZAP_CANNON,
                MOVE_BODY_PRESS,
                MOVE_BLOCK,
            },
            },
        },
    },
#line 8556
    [DIFFICULTY_NORMAL][TRAINER_JEREMY] =
    {
#line 8557
        .trainerName = _("JEREMY"),
#line 8558
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8559
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8561
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8565
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8566
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8569
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8570
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8573
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8574
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8577
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 8578
        .trainerName = _("COLIN"),
#line 8579
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8580
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8582
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8583
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8587
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8590
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 8591
        .trainerName = _("ALEX"),
#line 8592
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8593
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8595
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 8596
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_BATTLE_GIRL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8599
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8600
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8603
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8604
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8607
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8608
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8611
    [DIFFICULTY_NORMAL][TRAINER_REX] =
    {
#line 8612
        .trainerName = _("REX"),
#line 8613
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8614
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8616
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8617
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8620
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8621
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8624
    [DIFFICULTY_NORMAL][TRAINER_ALLAN] =
    {
#line 8625
        .trainerName = _("ALLAN"),
#line 8626
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8627
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 8629
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8630
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POKEFAN_M,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8633
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8634
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8637
    [DIFFICULTY_NORMAL][TRAINER_NAOKO] =
    {
#line 8638
        .trainerName = _("NAOKO"),
#line 8639
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 8640
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 8642
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8643
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8645
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_KIMONO_GIRL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8648
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8650
                MOVE_PSYCHIC,
                MOVE_PSYCH_UP,
                MOVE_SWIFT,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8655
    [DIFFICULTY_NORMAL][TRAINER_SAYO] =
    {
#line 8656
        .trainerName = _("SAYO"),
#line 8657
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 8658
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 8660
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8661
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8663
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_KIMONO_GIRL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8665
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8666
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8668
                MOVE_THUNDERBOLT,
                MOVE_DOUBLE_TEAM,
                MOVE_THUNDER_WAVE,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8673
    [DIFFICULTY_NORMAL][TRAINER_ZUKI] =
    {
#line 8674
        .trainerName = _("ZUKI"),
#line 8675
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 8676
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 8678
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8679
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8681
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_KIMONO_GIRL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8683
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8684
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8686
                MOVE_DARK_PULSE,
                MOVE_CONFUSE_RAY,
                MOVE_SHADOW_BALL,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8691
    [DIFFICULTY_NORMAL][TRAINER_KUNI] =
    {
#line 8692
        .trainerName = _("KUNI"),
#line 8693
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 8694
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 8696
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8697
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8699
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_KIMONO_GIRL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8701
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8702
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8704
                MOVE_SURF,
                MOVE_QUICK_ATTACK,
                MOVE_AURORA_BEAM,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8709
    [DIFFICULTY_NORMAL][TRAINER_MIKI] =
    {
#line 8710
        .trainerName = _("MIKI"),
#line 8711
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
#line 8712
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .encounterMusic_gender =
#line 8714
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8715
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 8717
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_KIMONO_GIRL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8719
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8720
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8722
                MOVE_FIRE_BLAST,
                MOVE_QUICK_ATTACK,
                MOVE_WILL_O_WISP,
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8727
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_MAY] =
    {
#line 8728
        .trainerName = _("AMY&MAY"),
#line 8729
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8730
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8732
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 8733
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_TWINS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8736
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8737
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8740
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8741
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8744
    [DIFFICULTY_NORMAL][TRAINER_ANN_AND_ANNE] =
    {
#line 8745
        .trainerName = _("ANN&ANNE"),
#line 8746
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8747
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8749
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 8750
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_TWINS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8753
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8754
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8757
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8758
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8761
    [DIFFICULTY_NORMAL][TRAINER_JO_AND_ZOE] =
    {
#line 8762
        .trainerName = _("JO&ZOE"),
#line 8763
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8764
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8766
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 8767
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_TWINS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8770
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8771
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8774
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8775
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8778
    [DIFFICULTY_NORMAL][TRAINER_MEG_AND_PEG] =
    {
#line 8779
        .trainerName = _("MEG&PEG"),
#line 8780
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8781
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8783
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 8784
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_TWINS,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8787
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8788
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8791
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8792
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8795
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_PIA] =
    {
#line 8796
        .trainerName = _("LEA&PIA"),
#line 8797
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8798
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8800
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
#line 8801
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_TWINS,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8804
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8805
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8808
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8809
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8812
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8813
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8816
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8817
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8820
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 8821
        .trainerName = _("Beverly"),
#line 8822
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 8823
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 8825
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 8826
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING,
#line 0
        .trainerBackPic = TRAINER_PIC_PARASOL_LADY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8829
            .species = SPECIES_MALAMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8829
            .heldItem = ITEM_PSYCHIC_GEM,
#line 8833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8830
            .ability = ABILITY_CONTRARY,
#line 8831
            .lvl = 44,
#line 8832
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8833
                MOVE_TOPSY_TURVY,
                MOVE_SUPERPOWER,
                MOVE_EXPANDING_FORCE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 8838
            .species = SPECIES_GRAPPLOCT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8838
            .heldItem = ITEM_SITRUS_BERRY,
#line 8842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8839
            .ability = ABILITY_TECHNICIAN,
#line 8840
            .lvl = 45,
#line 8841
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8842
                MOVE_TOPSY_TURVY,
                MOVE_CIRCLE_THROW,
                MOVE_PAYBACK,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
#line 8847
    [DIFFICULTY_NORMAL][TRAINER_RUTH] =
    {
#line 8848
        .trainerName = _("RUTH"),
#line 8849
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 8850
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 8852
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 8853
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PARASOL_LADY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8856
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8857
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8860
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 8861
        .trainerName = _("GEORGIA"),
#line 8862
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 8863
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 8865
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 8866
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PARASOL_LADY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8869
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8870
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8873
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8874
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8877
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8878
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8881
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8882
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8885
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8886
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8889
    [DIFFICULTY_NORMAL][TRAINER_JAMIE] =
    {
#line 8890
        .trainerName = _("JAIME"),
#line 8891
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 8892
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 8894
            TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
#line 8895
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_PARASOL_LADY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8898
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8899
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8902
    [DIFFICULTY_NORMAL][TRAINER_KEITH] =
    {
#line 8903
        .trainerName = _("KEITH"),
#line 8904
        .trainerClass = TRAINER_CLASS_POLICEMAN,
#line 8905
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .encounterMusic_gender =
#line 8907
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8908
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_POLICEMAN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8911
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8912
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [DIFFICULTY_NORMAL][TRAINER_DIRK] =
    {
#line 8916
        .trainerName = _("Dirk"),
#line 8917
        .trainerClass = TRAINER_CLASS_POLICEMAN,
#line 8918
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .encounterMusic_gender =
#line 8920
            TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
#line 8921
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_POLICEMAN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8924
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8924
            .heldItem = ITEM_FOCUS_SASH,
#line 8928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8925
            .ability = ABILITY_RECKLESS,
#line 8926
            .lvl = 54,
#line 8927
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8928
                MOVE_BRAVE_BIRD,
                MOVE_DOUBLE_EDGE,
                MOVE_DRILL_RUN,
                MOVE_JUMP_KICK,
            },
            },
            {
#line 8933
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .heldItem = ITEM_IAPAPA_BERRY,
#line 8937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8934
            .ability = ABILITY_TORRENT,
#line 8935
            .lvl = 52,
#line 8936
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8937
                MOVE_MUDDY_WATER,
                MOVE_EARTH_POWER,
                MOVE_ICE_BEAM,
                MOVE_YAWN,
            },
            },
            {
#line 8942
            .species = SPECIES_FALINKS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8942
            .heldItem = ITEM_CLEAR_AMULET,
#line 8946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8943
            .ability = ABILITY_BATTLE_ARMOR,
#line 8944
            .lvl = 52,
#line 8945
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8946
                MOVE_NO_RETREAT,
                MOVE_FIRST_IMPRESSION,
                MOVE_CLOSE_COMBAT,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 8951
    [DIFFICULTY_NORMAL][TRAINER_THOM_AND_KAE] =
    {
#line 8952
        .trainerName = _("THOM & KAE"),
#line 8953
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8954
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8956
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8957
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNG_COUPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8960
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8961
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8964
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8965
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8968
    [DIFFICULTY_NORMAL][TRAINER_DUFF_AND_EDA] =
    {
#line 8969
        .trainerName = _("DUFF & EDA"),
#line 8970
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8971
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8973
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8974
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
#line 0
        .trainerBackPic = TRAINER_PIC_YOUNG_COUPLE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8977
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8978
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8981
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8982
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8985
    [DIFFICULTY_NORMAL][TRAINER_FALKNER_1] =
    {
#line 8986
        .trainerName = _("FALKNER"),
#line 8987
        .trainerClass = TRAINER_CLASS_LEADER,
#line 8988
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .encounterMusic_gender =
#line 8990
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8991
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 8993
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_FALKNER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8995
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8995
            .heldItem = ITEM_FOCUS_SASH,
#line 8999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8996
            .ability = ABILITY_LEAF_GUARD,
#line 8997
            .lvl = 18,
#line 8998
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8999
                MOVE_ENDEAVOR,
                MOVE_GIGA_DRAIN,
                MOVE_ACROBATICS,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 9004
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9004
            .heldItem = ITEM_POWER_HERB,
#line 9008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9005
            .ability = ABILITY_LEVITATE,
#line 9006
            .lvl = 18,
#line 9007
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9008
                MOVE_FLY,
                MOVE_DIG,
                MOVE_BUG_BITE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 9013
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9013
            .heldItem = ITEM_FLAME_ORB,
#line 9017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9014
            .ability = ABILITY_FLARE_BOOST,
#line 9015
            .lvl = 18,
#line 9016
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9017
                MOVE_TRICK,
                MOVE_HEX,
                MOVE_FACADE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 9022
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9022
            .heldItem = ITEM_EVIOLITE,
#line 9026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9023
            .ability = ABILITY_WEAK_ARMOR,
#line 9024
            .lvl = 17,
#line 9025
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9026
                MOVE_SNARL,
                MOVE_BODY_PRESS,
                MOVE_KNOCK_OFF,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 9031
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .heldItem = ITEM_BERRY_JUICE,
#line 9035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9032
            .ability = ABILITY_TORRENT,
#line 9033
            .lvl = 18,
#line 9034
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9035
                MOVE_CHILLING_WATER,
                MOVE_LIFE_DEW,
                MOVE_AIR_CUTTER,
                MOVE_YAWN,
            },
            },
            {
#line 9040
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9040
            .heldItem = ITEM_NORMAL_GEM,
#line 9044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9041
            .ability = ABILITY_REFRIGERATE,
#line 9042
            .lvl = 19,
#line 9043
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9044
                MOVE_FAKE_OUT,
                MOVE_COVET,
                MOVE_DRILL_RUN,
                MOVE_ACROBATICS,
            },
            },
        },
    },
#line 9049
    [DIFFICULTY_NORMAL][TRAINER_FALKNER_2] =
    {
#line 9050
        .trainerName = _("FALKNER"),
#line 9051
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9052
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .encounterMusic_gender =
#line 9054
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9055
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9056
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9058
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_FALKNER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9060
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9060
            .heldItem = ITEM_SITRUS_BERRY,
#line 9062
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9061
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9063
                MOVE_PSYCHIC,
                MOVE_WING_ATTACK,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 9068
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9070
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9069
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9071
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_MUD_SLAP,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9076
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9076
            .heldItem = ITEM_FOCUS_BAND,
#line 9078
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9077
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9079
                MOVE_ENDURE,
                MOVE_FLAIL,
                MOVE_DRILL_PECK,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9084
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9085
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9087
                MOVE_DRILL_PECK,
                MOVE_FAINT_ATTACK,
                MOVE_HAZE,
                MOVE_ICY_WIND,
            },
            },
            {
#line 9092
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9094
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9093
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9095
                MOVE_SKY_ATTACK,
                MOVE_EXTREME_SPEED,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9100
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9101
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9103
                MOVE_AERIAL_ACE,
                MOVE_SURF,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
        },
    },
#line 9108
    [DIFFICULTY_NORMAL][TRAINER_BUGSY_1] =
    {
#line 9109
        .trainerName = _("BUGSY"),
#line 9110
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9111
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .encounterMusic_gender =
#line 9113
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9114
        .items = { ITEM_POTION, ITEM_POTION },
#line 9115
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9117
        .mugshotColor = MUGSHOT_COLOR_GREEN,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_BUGSY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9119
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9121
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9120
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9122
                MOVE_PIN_MISSILE,
                MOVE_HEADBUTT,
                MOVE_BULLET_SEED,
                MOVE_HARDEN,
            },
            },
            {
#line 9127
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9129
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9128
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9130
                MOVE_BULLET_SEED,
                MOVE_COMET_PUNCH,
                MOVE_SUPERSONIC,
                MOVE_REFLECT,
            },
            },
            {
#line 9135
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9135
            .heldItem = ITEM_BERRY_JUICE,
#line 9137
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9136
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9138
                MOVE_QUICK_ATTACK,
                MOVE_FURY_CUTTER,
                MOVE_BULLET_SEED,
                MOVE_PURSUIT,
            },
            },
        },
    },
#line 9143
    [DIFFICULTY_NORMAL][TRAINER_BUGSY_2] =
    {
#line 9144
        .trainerName = _("BUGSY"),
#line 9145
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9146
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .encounterMusic_gender =
#line 9148
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9149
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9150
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9152
        .mugshotColor = MUGSHOT_COLOR_GREEN,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_BUGSY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9154
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9154
            .heldItem = ITEM_FOCUS_BAND,
#line 9156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9155
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9157
                MOVE_GIGA_DRAIN,
                MOVE_AGILITY,
                MOVE_BATON_PASS,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 9162
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9163
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9165
                MOVE_CURSE,
                MOVE_EXPLOSION,
                MOVE_PIN_MISSILE,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 9170
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9170
            .heldItem = ITEM_BERRY_JUICE,
#line 9172
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9171
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9173
                MOVE_AERIAL_ACE,
                MOVE_HYPNOSIS,
                MOVE_ANCIENT_POWER,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 9178
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9180
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9179
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9181
                MOVE_METAL_CLAW,
                MOVE_TWINEEDLE,
                MOVE_AGILITY,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 9186
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9188
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9187
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9189
                MOVE_SHADOW_CLAW,
                MOVE_BUG_BUZZ,
                MOVE_GRUDGE,
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 9194
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .heldItem = ITEM_SCOPE_LENS,
#line 9196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9195
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9197
                MOVE_SLASH,
                MOVE_CUT,
                MOVE_WING_ATTACK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 9202
    [DIFFICULTY_NORMAL][TRAINER_WHITNEY_1] =
    {
#line 9203
        .trainerName = _("Whitney"),
#line 9204
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9205
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .encounterMusic_gender =
#line 9207
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9208
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 9210
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_WHITNEY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9212
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9212
            .heldItem = ITEM_SILK_SCARF,
#line 9216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9213
            .ability = ABILITY_SCRAPPY,
#line 9214
            .lvl = 39,
#line 9215
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9216
                MOVE_FAKE_OUT,
                MOVE_DOUBLE_EDGE,
                MOVE_SUCKER_PUNCH,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 9221
            .species = SPECIES_DITTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9221
            .heldItem = ITEM_LEFTOVERS,
#line 9225
            .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 31, 31),
#line 9222
            .ability = ABILITY_IMPOSTER,
#line 9223
            .lvl = 45,
#line 9224
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9226
                MOVE_TRANSFORM,
            },
            },
            {
#line 9228
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .heldItem = ITEM_LIFE_ORB,
#line 9232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9229
            .ability = ABILITY_MAGIC_GUARD,
#line 9230
            .lvl = 38,
#line 9231
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9232
                MOVE_PSYCHIC,
                MOVE_DAZZLING_GLEAM,
                MOVE_ENERGY_BALL,
                MOVE_CALM_MIND,
            },
            },
            {
#line 9237
            .species = SPECIES_MIMIKYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9237
            .heldItem = ITEM_SITRUS_BERRY,
#line 9241
            .iv = TRAINER_PARTY_IVS(29, 31, 31, 31, 31, 31),
#line 9238
            .ability = ABILITY_DISGUISE,
#line 9239
            .lvl = 38,
#line 9240
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9242
                MOVE_SPIRIT_BREAK,
                MOVE_SHADOW_CLAW,
                MOVE_CURSE,
                MOVE_NIGHT_SHADE,
            },
            },
            {
#line 9247
            .species = SPECIES_CYCLIZAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9247
            .heldItem = ITEM_EJECT_PACK,
#line 9251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9248
            .ability = ABILITY_REGENERATOR,
#line 9249
            .lvl = 39,
#line 9250
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9251
                MOVE_SHED_TAIL,
                MOVE_RETALIATE,
                MOVE_OVERHEAT,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 9256
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9256
            .heldItem = ITEM_ASSAULT_VEST,
#line 9260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9257
            .ability = ABILITY_MINDS_EYE,
#line 9258
            .lvl = 40,
#line 9259
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9260
                MOVE_BLOOD_MOON,
                MOVE_EARTH_POWER,
                MOVE_FOCUS_BLAST,
                MOVE_VACUUM_WAVE,
            },
            },
        },
    },
#line 9265
    [DIFFICULTY_NORMAL][TRAINER_WHITNEY_2] =
    {
#line 9266
        .trainerName = _("WHITNEY"),
#line 9267
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9268
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .encounterMusic_gender =
#line 9270
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9271
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9274
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_WHITNEY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9276
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9278
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9277
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9279
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_ENCORE,
            },
            },
            {
#line 9284
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .heldItem = ITEM_CHESTO_BERRY,
#line 9286
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9285
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9287
                MOVE_YAWN,
                MOVE_ATTRACT,
                MOVE_FAKE_OUT,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 9292
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9294
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9293
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9295
                MOVE_EGG_BOMB,
                MOVE_ATTRACT,
                MOVE_SOFT_BOILED,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 9300
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9301
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9303
                MOVE_THRASH,
                MOVE_EARTHQUAKE,
                MOVE_RAGE,
                MOVE_PURSUIT,
            },
            },
            {
#line 9308
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9308
            .heldItem = ITEM_SILK_SCARF,
#line 9310
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9309
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9311
                MOVE_IRON_TAIL,
                MOVE_ATTRACT,
                MOVE_BODY_SLAM,
                MOVE_MILK_DRINK,
            },
            },
            {
#line 9316
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .heldItem = ITEM_SILK_SCARF,
#line 9318
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9317
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9319
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_FOCUS_BLAST,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 9324
    [DIFFICULTY_NORMAL][TRAINER_MORTY_1] =
    {
#line 9325
        .trainerName = _("Morty"),
#line 9326
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9327
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .encounterMusic_gender =
#line 9329
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9330
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 9332
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_MORTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9334
            .species = SPECIES_MR_RIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9334
            .heldItem = ITEM_QUICK_CLAW,
#line 9338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9335
            .ability = ABILITY_TANGLED_FEET,
#line 9336
            .lvl = 47,
#line 9337
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9338
                MOVE_FREEZE_DRY,
                MOVE_DAZZLING_GLEAM,
                MOVE_NASTY_PLOT,
                MOVE_BATON_PASS,
            },
            },
            {
#line 9343
            .species = SPECIES_NOIVERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9343
            .heldItem = ITEM_CHOICE_SCARF,
#line 9347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9344
            .ability = ABILITY_INFILTRATOR,
#line 9345
            .lvl = 45,
#line 9346
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9347
                MOVE_AIR_SLASH,
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_PULSE,
                MOVE_SUPER_FANG,
            },
            },
            {
#line 9352
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9352
            .heldItem = ITEM_AIR_BALLOON,
#line 9356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9353
            .ability = ABILITY_SHADOW_TAG,
#line 9354
            .lvl = 48,
#line 9355
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9356
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_BOMB,
                MOVE_AURA_SPHERE,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
#line 9361
    [DIFFICULTY_NORMAL][TRAINER_MORTY_2] =
    {
#line 9362
        .trainerName = _("MORTY"),
#line 9363
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9364
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .encounterMusic_gender =
#line 9366
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9367
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9368
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9370
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_MORTY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9372
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9373
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9375
                MOVE_SHADOW_CLAW,
                MOVE_POWER_GEM,
                MOVE_MEAN_LOOK,
                MOVE_DETECT,
            },
            },
            {
#line 9380
            .species = SPECIES_WYRDEER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9380
            .heldItem = ITEM_SILK_SCARF,
#line 9382
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9381
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9383
                MOVE_JUMP_KICK,
                MOVE_HEADBUTT,
                MOVE_HYPNOSIS,
                MOVE_PSYCHO_CUT,
            },
            },
            {
#line 9388
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9388
            .heldItem = ITEM_SPELL_TAG,
#line 9390
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9389
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9391
                MOVE_SHADOW_BALL,
                MOVE_GIGA_DRAIN,
                MOVE_SLUDGE_BOMB,
                MOVE_PSYCHIC,
            },
            },
            {
#line 9396
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9398
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9397
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9399
                MOVE_SHADOW_BALL,
                MOVE_MEAN_LOOK,
                MOVE_PAIN_SPLIT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 9404
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9404
            .heldItem = ITEM_SITRUS_BERRY,
#line 9406
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9405
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9407
                MOVE_SHADOW_BALL,
                MOVE_HYPNOSIS,
                MOVE_THUNDERBOLT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 9412
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9414
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9413
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9415
                MOVE_SHADOW_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_WILL_O_WISP,
                MOVE_DARK_PULSE,
            },
            },
        },
    },
#line 9420
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1] =
    {
#line 9421
        .trainerName = _("PRYCE"),
#line 9422
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9423
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 9425
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9426
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 9427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9429
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_PRYCE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9431
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9433
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9432
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9434
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
                MOVE_REST,
            },
            },
            {
#line 9439
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9440
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9442
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_ICY_WIND,
            },
            },
            {
#line 9447
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9448
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9450
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_RAIN_DANCE,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 9455
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9455
            .heldItem = ITEM_SITRUS_BERRY,
#line 9457
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9456
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9458
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 9463
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_2] =
    {
#line 9464
        .trainerName = _("PRYCE"),
#line 9465
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9466
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 9468
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9469
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9472
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_PRYCE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9475
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9477
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_BEAT_UP,
                MOVE_BLIZZARD,
            },
            },
            {
#line 9482
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9482
            .heldItem = ITEM_SITRUS_BERRY,
#line 9484
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9483
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9485
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_REST,
                MOVE_ENCORE,
            },
            },
            {
#line 9490
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9491
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9493
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 9498
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9500
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9499
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9501
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_WILL_O_WISP,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 9506
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .heldItem = ITEM_SOFT_SAND,
#line 9508
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9507
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9509
                MOVE_STRENGTH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
            {
#line 9514
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9516
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9515
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9517
                MOVE_SHEER_COLD,
                MOVE_CRUNCH,
                MOVE_DARK_PULSE,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 9522
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1_2] =
    {
#line 9523
        .trainerName = _("PRYCE"),
#line 9524
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9525
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 9527
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9528
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9529
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9531
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_PRYCE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9533
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9535
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9534
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9536
                MOVE_SURF,
                MOVE_SPIKES,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 9541
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9543
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9542
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9544
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9549
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9551
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9550
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9552
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_RAIN_DANCE,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 9557
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9558
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9560
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 9565
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .heldItem = ITEM_SITRUS_BERRY,
#line 9567
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9566
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9568
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 9573
    [DIFFICULTY_NORMAL][TRAINER_PRYCE_1_3] =
    {
#line 9574
        .trainerName = _("PRYCE"),
#line 9575
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9576
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .encounterMusic_gender =
#line 9578
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9579
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9580
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9582
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_PRYCE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9584
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9586
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9585
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9587
                MOVE_SURF,
                MOVE_SPIKES,
                MOVE_AURORA_BEAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 9592
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9594
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9593
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9595
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_REFLECT,
                MOVE_BLIZZARD,
            },
            },
            {
#line 9600
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9602
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9601
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9603
                MOVE_ICE_PUNCH,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_LOVELY_KISS,
            },
            },
            {
#line 9608
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9610
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9609
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9611
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 9616
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .heldItem = ITEM_SITRUS_BERRY,
#line 9618
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9617
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9619
                MOVE_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
                MOVE_BLIZZARD,
            },
            },
        },
    },
#line 9624
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1] =
    {
#line 9625
        .trainerName = _("JASMINE"),
#line 9626
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9627
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 9629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9630
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 9631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9633
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_JASMINE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9635
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9636
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9638
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9643
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9645
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9644
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9646
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 9651
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9652
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9654
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 9659
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9659
            .heldItem = ITEM_FOCUS_BAND,
#line 9661
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9660
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9662
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 9667
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .heldItem = ITEM_QUICK_CLAW,
#line 9669
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9668
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9670
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 9675
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_2] =
    {
#line 9676
        .trainerName = _("JASMINE"),
#line 9677
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9678
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 9680
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9681
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9682
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9684
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_JASMINE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9686
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9688
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9687
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9689
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9694
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9696
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9695
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9697
                MOVE_FLASH_CANNON,
                MOVE_IRON_DEFENSE,
                MOVE_BATON_PASS,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 9702
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9704
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9703
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9705
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 9710
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9712
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9711
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9713
                MOVE_DOUBLE_EDGE,
                MOVE_SUBSTITUTE,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 9718
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9718
            .heldItem = ITEM_HARD_STONE,
#line 9720
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9719
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9721
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
                MOVE_SWORDS_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9726
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9726
            .heldItem = ITEM_QUICK_CLAW,
#line 9728
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9727
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9729
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 9734
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1_2] =
    {
#line 9735
        .trainerName = _("JASMINE"),
#line 9736
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9737
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 9739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9740
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9741
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9743
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_JASMINE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9745
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9747
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9746
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9748
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9753
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9754
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9756
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 9761
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9762
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9764
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 9769
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9769
            .heldItem = ITEM_FOCUS_BAND,
#line 9771
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9770
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9772
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 9777
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9777
            .heldItem = ITEM_QUICK_CLAW,
#line 9779
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9778
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9780
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 9785
    [DIFFICULTY_NORMAL][TRAINER_JASMINE_1_3] =
    {
#line 9786
        .trainerName = _("JASMINE"),
#line 9787
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9788
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .encounterMusic_gender =
#line 9790
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9791
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9792
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9794
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_JASMINE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9796
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9798
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9797
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9799
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_SWAGGER,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9804
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9806
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9805
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9807
                MOVE_RAIN_DANCE,
                MOVE_SURF,
                MOVE_RECOVER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 9812
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9814
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9813
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9815
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 9820
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .heldItem = ITEM_FOCUS_BAND,
#line 9822
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9821
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9823
                MOVE_TWINEEDLE,
                MOVE_METAL_CLAW,
                MOVE_AGILITY,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 9828
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .heldItem = ITEM_QUICK_CLAW,
#line 9830
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9829
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9831
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1] =
    {
#line 9837
        .trainerName = _("CHUCK"),
#line 9838
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9839
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 9841
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9842
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 9843
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9845
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_CHUCK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9847
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9849
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9848
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9850
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 9855
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9857
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9856
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9858
                MOVE_LOW_KICK,
                MOVE_KARATE_CHOP,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 9863
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9865
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9864
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9866
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 9871
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9871
            .heldItem = ITEM_BLACK_BELT,
#line 9873
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9872
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9874
                MOVE_HYPNOSIS,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 9879
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_2] =
    {
#line 9880
        .trainerName = _("CHUCK"),
#line 9881
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9882
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 9884
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9885
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9886
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9888
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_CHUCK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9890
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9890
            .heldItem = ITEM_SCOPE_LENS,
#line 9892
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9891
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9893
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_MACH_PUNCH,
            },
            },
            {
#line 9898
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9900
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9899
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9901
                MOVE_DETECT,
                MOVE_HI_JUMP_KICK,
                MOVE_PSYCH_UP,
                MOVE_REVERSAL,
            },
            },
            {
#line 9906
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9908
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9907
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9909
                MOVE_CROSS_CHOP,
                MOVE_SHADOW_PUNCH,
                MOVE_ROCK_SLIDE,
                MOVE_MEDITATE,
            },
            },
            {
#line 9914
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9916
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9915
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9917
                MOVE_MEGA_KICK,
                MOVE_BLAZE_KICK,
                MOVE_HI_JUMP_KICK,
                MOVE_ROLLING_KICK,
            },
            },
            {
#line 9922
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9924
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9923
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9925
                MOVE_MACH_PUNCH,
                MOVE_BULLET_SEED,
                MOVE_SKY_UPPERCUT,
                MOVE_DYNAMIC_PUNCH,
            },
            },
            {
#line 9930
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9930
            .heldItem = ITEM_SITRUS_BERRY,
#line 9932
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 9931
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9933
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 9938
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1_2] =
    {
#line 9939
        .trainerName = _("CHUCK"),
#line 9940
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9941
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 9943
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9944
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9945
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9947
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_CHUCK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9949
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9951
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9950
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9952
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 9957
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9958
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9960
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 9965
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9967
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9966
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9968
                MOVE_LOW_KICK,
                MOVE_KARATE_CHOP,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 9973
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9975
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9974
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9976
                MOVE_ROCK_SMASH,
                MOVE_TWINEEDLE,
                MOVE_VICE_GRIP,
                MOVE_HARDEN,
            },
            },
            {
#line 9981
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9981
            .heldItem = ITEM_BLACK_BELT,
#line 9983
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9982
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9984
                MOVE_HYPNOSIS,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 9989
    [DIFFICULTY_NORMAL][TRAINER_CHUCK_1_3] =
    {
#line 9990
        .trainerName = _("CHUCK"),
#line 9991
        .trainerClass = TRAINER_CLASS_LEADER,
#line 9992
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .encounterMusic_gender =
#line 9994
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9995
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9996
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 9998
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_CHUCK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10000
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10002
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10001
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10003
                MOVE_TRIPLE_KICK,
                MOVE_ROLLING_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 10008
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10010
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10009
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10011
                MOVE_ROCK_SLIDE,
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_FAINT_ATTACK,
            },
            },
            {
#line 10016
            .species = SPECIES_ANNIHILAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10018
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10017
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10019
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_ICE_PUNCH,
                MOVE_RAGE,
            },
            },
            {
#line 10024
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10026
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10025
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10027
                MOVE_SUBMISSION,
                MOVE_TWINEEDLE,
                MOVE_STRENGTH,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 10032
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10032
            .heldItem = ITEM_BLACK_BELT,
#line 10034
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10033
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10035
                MOVE_ICE_PUNCH,
                MOVE_MIND_READER,
                MOVE_SURF,
                MOVE_DYNAMIC_PUNCH,
            },
            },
        },
    },
#line 10040
    [DIFFICULTY_NORMAL][TRAINER_CLAIR_1] =
    {
#line 10041
        .trainerName = _("CLAIR"),
#line 10042
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10043
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .encounterMusic_gender =
#line 10045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10046
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10047
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10049
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_CLAIR,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10051
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10053
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10052
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10054
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 10059
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10059
            .heldItem = ITEM_FOCUS_BAND,
#line 10061
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10060
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10062
                MOVE_BITE,
                MOVE_WATERFALL,
                MOVE_FLY,
                MOVE_TWISTER,
            },
            },
            {
#line 10067
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .heldItem = ITEM_CHESTO_BERRY,
#line 10069
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10068
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10070
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 10075
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .heldItem = ITEM_SITRUS_BERRY,
#line 10077
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10076
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10078
                MOVE_GLARE,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
                MOVE_POISON_JAB,
            },
            },
            {
#line 10083
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .heldItem = ITEM_LEFTOVERS,
#line 10085
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10084
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10086
                MOVE_SMOKESCREEN,
                MOVE_SURF,
                MOVE_HYPER_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 10091
    [DIFFICULTY_NORMAL][TRAINER_CLAIR_2] =
    {
#line 10092
        .trainerName = _("CLAIR"),
#line 10093
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10094
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .encounterMusic_gender =
#line 10096
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10097
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10098
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10100
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_CLAIR,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10102
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10102
            .heldItem = ITEM_METAL_COAT,
#line 10104
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10103
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10105
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 10110
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10110
            .heldItem = ITEM_FOCUS_BAND,
#line 10112
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10111
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10113
                MOVE_BITE,
                MOVE_SURF,
                MOVE_FLY,
                MOVE_TWISTER,
            },
            },
            {
#line 10118
            .species = SPECIES_DUDUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10120
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10119
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10121
                MOVE_REST,
                MOVE_GLARE,
                MOVE_POISON_JAB,
                MOVE_SKULL_BASH,
            },
            },
            {
#line 10126
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10126
            .heldItem = ITEM_SITRUS_BERRY,
#line 10128
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10127
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10129
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
            {
#line 10134
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10136
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10135
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10137
                MOVE_AGILITY,
                MOVE_THUNDER,
                MOVE_DRAGON_PULSE,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 10142
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10142
            .heldItem = ITEM_LEFTOVERS,
#line 10144
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10143
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10145
                MOVE_AGILITY,
                MOVE_HYDRO_PUMP,
                MOVE_ICE_BEAM,
                MOVE_DRAGON_BREATH,
            },
            },
        },
    },
#line 10150
    [DIFFICULTY_NORMAL][TRAINER_BROCK] =
    {
#line 10151
        .trainerName = _("BROCK"),
#line 10152
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10153
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        .encounterMusic_gender =
#line 10155
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10156
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10157
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10159
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_BROCK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10161
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10161
            .heldItem = ITEM_QUICK_CLAW,
#line 10163
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10162
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10164
                MOVE_CURSE,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10169
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10169
            .heldItem = ITEM_HARD_STONE,
#line 10171
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10170
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10172
                MOVE_ANCIENT_POWER,
                MOVE_SKY_ATTACK,
                MOVE_EARTHQUAKE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 10177
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10177
            .heldItem = ITEM_SCOPE_LENS,
#line 10179
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10178
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10180
                MOVE_SURF,
                MOVE_ANCIENT_POWER,
                MOVE_CUT,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 10185
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10185
            .heldItem = ITEM_FOCUS_BAND,
#line 10187
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10186
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10188
                MOVE_ANCIENT_POWER,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_TOXIC,
            },
            },
            {
#line 10193
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10193
            .heldItem = ITEM_HARD_STONE,
#line 10195
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10194
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10196
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 10201
            .species = SPECIES_KLEAVOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .heldItem = ITEM_QUICK_CLAW,
#line 10203
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10202
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10204
                MOVE_SWORDS_DANCE,
                MOVE_ROCK_SLIDE,
                MOVE_TWINEEDLE,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 10209
    [DIFFICULTY_NORMAL][TRAINER_MISTY] =
    {
#line 10210
        .trainerName = _("Misty"),
#line 10211
        .trainerClass = TRAINER_CLASS_LEADER_KANTO,
#line 10212
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .encounterMusic_gender =
#line 10214
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10215
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 10217
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_MISTY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10219
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10219
            .heldItem = ITEM_LIFE_ORB,
#line 10223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10220
            .ability = ABILITY_SWIFT_SWIM,
#line 10221
            .lvl = 31,
#line 10222
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10223
                MOVE_FAKE_OUT,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 10226
            .species = SPECIES_GOLISOPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10226
            .heldItem = ITEM_ASSAULT_VEST,
#line 10230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10227
            .ability = ABILITY_EMERGENCY_EXIT,
#line 10228
            .lvl = 30,
#line 10229
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10230
                MOVE_JET_PUNCH,
                MOVE_SUCKER_PUNCH,
                MOVE_LAST_RESORT,
            },
            },
            {
#line 10234
            .species = SPECIES_CLODSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10234
            .heldItem = ITEM_SITRUS_BERRY,
#line 10238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10235
            .ability = ABILITY_WATER_ABSORB,
#line 10236
            .lvl = 32,
#line 10237
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10238
                MOVE_STOMPING_TANTRUM,
                MOVE_VENOSHOCK,
                MOVE_SMACK_DOWN,
                MOVE_BANEFUL_BUNKER,
            },
            },
            {
#line 10243
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10243
            .heldItem = ITEM_LEFTOVERS,
#line 10247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10244
            .ability = ABILITY_THICK_FAT,
#line 10245
            .lvl = 29,
#line 10246
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10247
                MOVE_AVALANCHE,
                MOVE_GIGA_DRAIN,
                MOVE_REVENGE,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 10252
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10252
            .heldItem = ITEM_SALAC_BERRY,
#line 10256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10253
            .ability = ABILITY_STURDY,
#line 10254
            .lvl = 32,
#line 10255
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10256
                MOVE_DIVE,
                MOVE_ROCK_TOMB,
                MOVE_BODY_PRESS,
                MOVE_FLAIL,
            },
            },
            {
#line 10261
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10261
            .heldItem = ITEM_EXPERT_BELT,
#line 10265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10262
            .ability = ABILITY_ANALYTIC,
#line 10263
            .lvl = 32,
#line 10264
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10265
                MOVE_BRINE,
                MOVE_PSYBEAM,
                MOVE_SHOCK_WAVE,
                MOVE_AURORA_BEAM,
            },
            },
        },
    },
#line 10270
    [DIFFICULTY_NORMAL][TRAINER_LTSURGE] =
    {
#line 10271
        .trainerName = _("LTSURGE"),
#line 10272
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10273
        .trainerPic = TRAINER_PIC_LEADER_SURGE,
        .encounterMusic_gender =
#line 10275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10276
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10277
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_SURGE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10280
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10280
            .heldItem = ITEM_FOCUS_BAND,
#line 10282
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10281
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10283
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 10288
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10290
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10289
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10291
                MOVE_THUNDER,
                MOVE_REFLECT,
                MOVE_RAIN_DANCE,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 10296
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10296
            .heldItem = ITEM_LEFTOVERS,
#line 10298
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10297
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10299
                MOVE_SURF,
                MOVE_THUNDERBOLT,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10304
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10306
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10305
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10307
                MOVE_CHARGE,
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_CRUNCH,
            },
            },
            {
#line 10312
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10312
            .heldItem = ITEM_SCOPE_LENS,
#line 10314
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10313
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10315
                MOVE_THUNDERBOLT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
                MOVE_SUBMISSION,
            },
            },
            {
#line 10320
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10320
            .heldItem = ITEM_MAGNET,
#line 10322
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10321
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10323
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
                MOVE_BODY_SLAM,
                MOVE_SURF,
            },
            },
        },
    },
#line 10328
    [DIFFICULTY_NORMAL][TRAINER_ERIKA] =
    {
#line 10329
        .trainerName = _("Erika"),
#line 10330
        .trainerClass = TRAINER_CLASS_LEADER_KANTO,
#line 10331
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        .encounterMusic_gender =
#line 10333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 10336
        .mugshotColor = MUGSHOT_COLOR_GREEN,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_ERIKA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10338
            .species = SPECIES_TAPU_BULU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10338
            .heldItem = ITEM_KEBIA_BERRY,
#line 10342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10339
            .ability = ABILITY_GRASSY_SURGE,
#line 10340
            .lvl = 50,
#line 10341
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10342
                MOVE_DRUM_BEATING,
                MOVE_ZEN_HEADBUTT,
                MOVE_NATURES_MADNESS,
                MOVE_WHIRLWIND,
            },
            },
            {
#line 10347
            .species = SPECIES_VIKAVOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10347
            .heldItem = ITEM_FOCUS_SASH,
#line 10351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10348
            .ability = ABILITY_LEVITATE,
#line 10349
            .lvl = 51,
#line 10350
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10351
                MOVE_STICKY_WEB,
                MOVE_ENERGY_BALL,
                MOVE_BUG_BUZZ,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 10356
            .species = SPECIES_GLIMMORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10356
            .heldItem = ITEM_ASSAULT_VEST,
#line 10360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10357
            .ability = ABILITY_TOXIC_DEBRIS,
#line 10358
            .lvl = 50,
#line 10359
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10360
                MOVE_SLUDGE_BOMB,
                MOVE_ACID_SPRAY,
                MOVE_POWER_GEM,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 10365
            .species = SPECIES_CELEBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10365
            .heldItem = ITEM_GRASSY_SEED,
#line 10369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10366
            .ability = ABILITY_SERENE_GRACE,
#line 10367
            .lvl = 52,
#line 10368
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10369
                MOVE_LEAF_STORM,
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_POWER_SWAP,
            },
            },
            {
#line 10374
            .species = SPECIES_TURTONATOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10374
            .heldItem = ITEM_LEFTOVERS,
#line 10378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10375
            .ability = ABILITY_SHELL_ARMOR,
#line 10376
            .lvl = 51,
#line 10377
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10378
                MOVE_ERUPTION,
                MOVE_FIRE_SPIN,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
            {
#line 10383
            .species = SPECIES_MEOWSCARADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10383
            .heldItem = ITEM_FLYING_GEM,
#line 10387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10384
            .ability = ABILITY_PROTEAN,
#line 10385
            .lvl = 52,
#line 10386
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10387
                MOVE_FLOWER_TRICK,
                MOVE_KNOCK_OFF,
                MOVE_TRIPLE_AXEL,
                MOVE_ACROBATICS,
            },
            },
        },
    },
#line 10392
    [DIFFICULTY_NORMAL][TRAINER_SABRINA] =
    {
#line 10393
        .trainerName = _("SABRINA"),
#line 10394
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10395
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        .encounterMusic_gender =
#line 10397
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10398
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10399
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10401
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_SABRINA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10403
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10403
            .heldItem = ITEM_QUICK_CLAW,
#line 10405
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10404
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10406
                MOVE_PSYCHIC,
                MOVE_THUNDER_WAVE,
                MOVE_ENCORE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10411
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10413
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10412
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10414
                MOVE_PSYCHIC,
                MOVE_ICE_BEAM,
                MOVE_LOVELY_KISS,
                MOVE_BUBBLE_BEAM,
            },
            },
            {
#line 10419
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10419
            .heldItem = ITEM_CHESTO_BERRY,
#line 10421
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10420
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10422
                MOVE_REST,
                MOVE_SLEEP_TALK,
                MOVE_SUBMISSION,
                MOVE_SURF,
            },
            },
            {
#line 10427
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10427
            .heldItem = ITEM_LEFTOVERS,
#line 10429
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10428
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10430
                MOVE_MIRROR_COAT,
                MOVE_COUNTER,
                MOVE_SAFEGUARD,
                MOVE_DESTINY_BOND,
            },
            },
            {
#line 10435
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10437
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10436
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10438
                MOVE_PSYCHIC,
                MOVE_MORNING_SUN,
                MOVE_FUTURE_SIGHT,
                MOVE_POWER_GEM,
            },
            },
            {
#line 10443
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10443
            .heldItem = ITEM_TWISTED_SPOON,
#line 10445
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10444
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10446
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_RECOVER,
                MOVE_THUNDER_PUNCH,
            },
            },
        },
    },
#line 10451
    [DIFFICULTY_NORMAL][TRAINER_JANINE] =
    {
#line 10452
        .trainerName = _("JANINE"),
#line 10453
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10454
        .trainerPic = TRAINER_PIC_LEADER_JANINE,
        .encounterMusic_gender =
#line 10456
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10457
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10458
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10460
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_JANINE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10462
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10462
            .heldItem = ITEM_LEFTOVERS,
#line 10464
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10463
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10465
                MOVE_SLUDGE_BOMB,
                MOVE_FIRE_BLAST,
                MOVE_DESTINY_BOND,
                MOVE_AMNESIA,
            },
            },
            {
#line 10470
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10472
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10471
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10473
                MOVE_MINIMIZE,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_ACID_ARMOR,
            },
            },
            {
#line 10478
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10480
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10479
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10481
                MOVE_SWALLOW,
                MOVE_STOCKPILE,
                MOVE_AMNESIA,
                MOVE_SPIT_UP,
            },
            },
            {
#line 10486
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10486
            .heldItem = ITEM_QUICK_CLAW,
#line 10488
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10487
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10489
                MOVE_EARTHQUAKE,
                MOVE_SLUDGE_BOMB,
                MOVE_THUNDERBOLT,
                MOVE_SUBMISSION,
            },
            },
            {
#line 10494
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10496
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10495
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10497
                MOVE_PURSUIT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10502
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10502
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10504
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10503
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10505
                MOVE_GIGA_DRAIN,
                MOVE_PSYCHIC,
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 10510
    [DIFFICULTY_NORMAL][TRAINER_BLAINE] =
    {
#line 10511
        .trainerName = _("BLAINE"),
#line 10512
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10513
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .encounterMusic_gender =
#line 10515
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10516
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10517
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10519
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_BLAINE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10521
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10521
            .heldItem = ITEM_QUICK_CLAW,
#line 10523
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10522
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10524
                MOVE_DOUBLE_EDGE,
                MOVE_SUNNY_DAY,
                MOVE_FIRE_BLAST,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 10529
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10529
            .heldItem = ITEM_SITRUS_BERRY,
#line 10531
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10530
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10532
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_BLAST,
                MOVE_PSYCHIC,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10537
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10537
            .heldItem = ITEM_MIRACLE_SEED,
#line 10539
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10538
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10540
                MOVE_FIRE_BLAST,
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_CRUNCH,
            },
            },
            {
#line 10545
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10545
            .heldItem = ITEM_LEFTOVERS,
#line 10547
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10546
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10548
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_SUNNY_DAY,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10553
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10553
            .heldItem = ITEM_WHITE_HERB,
#line 10555
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10554
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10556
                MOVE_CURSE,
                MOVE_IRON_DEFENSE,
                MOVE_WITHDRAW,
                MOVE_HEAT_WAVE,
            },
            },
            {
#line 10561
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10561
            .heldItem = ITEM_CHARCOAL,
#line 10563
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10562
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10564
                MOVE_EARTH_POWER,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_AMNESIA,
            },
            },
        },
    },
#line 10569
    [DIFFICULTY_NORMAL][TRAINER_BLUE] =
    {
#line 10570
        .trainerName = _("BLUE"),
#line 10571
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10572
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .encounterMusic_gender =
#line 10574
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10575
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10576
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10578
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10580
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10580
            .heldItem = ITEM_SITRUS_BERRY,
#line 10582
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10581
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10583
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_REST,
                MOVE_TOXIC,
            },
            },
            {
#line 10588
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10588
            .heldItem = ITEM_SHARP_BEAK,
#line 10590
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10589
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10591
                MOVE_SKY_ATTACK,
                MOVE_SAND_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_FEATHER_DANCE,
            },
            },
            {
#line 10596
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10596
            .heldItem = ITEM_SCOPE_LENS,
#line 10598
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10597
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10599
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 10604
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10604
            .heldItem = ITEM_LEFTOVERS,
#line 10606
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10605
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10607
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 10612
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10612
            .heldItem = ITEM_FOCUS_BAND,
#line 10614
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10613
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10615
                MOVE_DRAGON_PULSE,
                MOVE_DARK_PULSE,
                MOVE_FOCUS_BLAST,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 10620
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10620
            .heldItem = ITEM_SILK_SCARF,
#line 10622
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10621
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10623
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_CRUNCH,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 10628
    [DIFFICULTY_NORMAL][TRAINER_BLUE_2] =
    {
#line 10629
        .trainerName = _("BLUE"),
#line 10630
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10631
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .encounterMusic_gender =
#line 10633
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10634
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10635
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10637
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_LEADER_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10639
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10639
            .heldItem = ITEM_SITRUS_BERRY,
#line 10641
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10640
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10642
                MOVE_ICE_BEAM,
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_TOXIC,
            },
            },
            {
#line 10647
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10647
            .heldItem = ITEM_TWISTED_SPOON,
#line 10649
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10648
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10650
                MOVE_THUNDERBOLT,
                MOVE_RECOVER,
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 10655
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10655
            .heldItem = ITEM_QUICK_CLAW,
#line 10657
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10656
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10658
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
            },
            },
            {
#line 10663
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10663
            .heldItem = ITEM_LEFTOVERS,
#line 10665
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10664
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10666
                MOVE_LEECH_SEED,
                MOVE_SLEEP_POWDER,
                MOVE_PSYCHIC,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 10671
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10671
            .heldItem = ITEM_FOCUS_BAND,
#line 10673
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10672
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10674
                MOVE_HYDRO_PUMP,
                MOVE_DOUBLE_TEAM,
                MOVE_BODY_SLAM,
                MOVE_REVERSAL,
            },
            },
            {
#line 10679
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10679
            .heldItem = ITEM_SILK_SCARF,
#line 10681
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 10680
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10682
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_CRUNCH,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 10687
    [DIFFICULTY_NORMAL][TRAINER_WILL_1] =
    {
#line 10688
        .trainerName = _("WILL"),
#line 10689
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 10690
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .encounterMusic_gender =
#line 10692
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 10693
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10694
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10696
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10698
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10699
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10701
                MOVE_PSYCHIC,
                MOVE_ROCK_SMASH,
                MOVE_AGILITY,
                MOVE_BATON_PASS,
            },
            },
            {
#line 10706
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10707
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10709
                MOVE_AMNESIA,
                MOVE_FLAMETHROWER,
                MOVE_SURF,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10714
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10715
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10717
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_REFLECT,
                MOVE_HEADBUTT,
            },
            },
            {
#line 10722
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10722
            .heldItem = ITEM_QUICK_CLAW,
#line 10724
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10723
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10725
                MOVE_CURSE,
                MOVE_ROCK_SMASH,
                MOVE_BODY_SLAM,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10730
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10730
            .heldItem = ITEM_TWISTED_SPOON,
#line 10732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10731
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10733
                MOVE_DRILL_PECK,
                MOVE_RECOVER,
                MOVE_CONFUSE_RAY,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 10738
    [DIFFICULTY_NORMAL][TRAINER_WILL_2] =
    {
#line 10739
        .trainerName = _("WILL"),
#line 10740
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 10741
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .encounterMusic_gender =
#line 10743
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 10744
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10745
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10747
        .mugshotColor = MUGSHOT_COLOR_PINK,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10749
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10751
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10750
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10752
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_MOONBLAST,
                MOVE_REFLECT,
            },
            },
            {
#line 10757
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10758
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10760
                MOVE_BLIZZARD,
                MOVE_PSYCHIC,
                MOVE_PERISH_SONG,
                MOVE_SING,
            },
            },
            {
#line 10765
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10765
            .heldItem = ITEM_SITRUS_BERRY,
#line 10767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10766
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10768
                MOVE_ANCIENT_POWER,
                MOVE_SLEEP_POWDER,
                MOVE_DREAM_EATER,
                MOVE_SOFT_BOILED,
            },
            },
            {
#line 10773
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10774
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10776
                MOVE_TEETER_DANCE,
                MOVE_POWER_GEM,
                MOVE_SNORE,
                MOVE_REST,
            },
            },
            {
#line 10781
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10781
            .heldItem = ITEM_QUICK_CLAW,
#line 10783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10782
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10784
                MOVE_FLAMETHROWER,
                MOVE_CURSE,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10789
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10789
            .heldItem = ITEM_LEFTOVERS,
#line 10791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10790
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10792
                MOVE_FUTURE_SIGHT,
                MOVE_FLY,
                MOVE_CONFUSE_RAY,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 10797
    [DIFFICULTY_NORMAL][TRAINER_BRUNO_1] =
    {
#line 10798
        .trainerName = _("BRUNO"),
#line 10799
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 10800
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .encounterMusic_gender =
#line 10802
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 10803
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10804
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10806
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10808
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10808
            .heldItem = ITEM_SCOPE_LENS,
#line 10810
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10809
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10811
                MOVE_MACH_PUNCH,
                MOVE_PURSUIT,
                MOVE_DIZZY_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10816
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10818
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10817
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10819
                MOVE_CROSS_CHOP,
                MOVE_MEGAHORN,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10824
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10824
            .heldItem = ITEM_SILK_SCARF,
#line 10826
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10825
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10827
                MOVE_BODY_SLAM,
                MOVE_MEDITATE,
                MOVE_REVERSAL,
                MOVE_HI_JUMP_KICK,
            },
            },
            {
#line 10832
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10834
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10833
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10835
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 10840
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10840
            .heldItem = ITEM_BLACK_BELT,
#line 10842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10841
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10843
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
                MOVE_VITAL_THROW,
                MOVE_CROSS_CHOP,
            },
            },
        },
    },
#line 10848
    [DIFFICULTY_NORMAL][TRAINER_BRUNO_2] =
    {
#line 10849
        .trainerName = _("BRUNO"),
#line 10850
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 10851
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .encounterMusic_gender =
#line 10853
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 10854
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10855
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10857
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10859
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10859
            .heldItem = ITEM_QUICK_CLAW,
#line 10861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10860
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10862
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 10867
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10867
            .heldItem = ITEM_SCOPE_LENS,
#line 10869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10868
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10870
                MOVE_SUBMISSION,
                MOVE_BLIZZARD,
                MOVE_HYDRO_PUMP,
                MOVE_PSYCHIC,
            },
            },
            {
#line 10875
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10875
            .heldItem = ITEM_QUICK_CLAW,
#line 10877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10876
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10878
                MOVE_CROSS_CHOP,
                MOVE_MEGAHORN,
                MOVE_REVERSAL,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10883
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10884
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10886
                MOVE_BELLY_DRUM,
                MOVE_SMELLING_SALTS,
                MOVE_FOCUS_PUNCH,
                MOVE_SEISMIC_TOSS,
            },
            },
            {
#line 10891
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10891
            .heldItem = ITEM_SCOPE_LENS,
#line 10893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10892
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10894
                MOVE_TRIPLE_KICK,
                MOVE_DOUBLE_KICK,
                MOVE_DIG,
                MOVE_PURSUIT,
            },
            },
            {
#line 10899
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10899
            .heldItem = ITEM_LEFTOVERS,
#line 10901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10900
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10902
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_BODY_SLAM,
                MOVE_CROSS_CHOP,
            },
            },
        },
    },
#line 10907
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 10908
        .trainerName = _("KAREN"),
#line 10909
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 10910
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .encounterMusic_gender =
#line 10912
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 10913
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10914
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10916
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10918
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10918
            .heldItem = ITEM_SITRUS_BERRY,
#line 10920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10919
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10921
                MOVE_FAINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_BATON_PASS,
                MOVE_MOONLIGHT,
            },
            },
            {
#line 10926
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10927
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10929
                MOVE_SHADOW_BALL,
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10934
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10934
            .heldItem = ITEM_LEFTOVERS,
#line 10936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10935
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10937
                MOVE_SLEEP_POWDER,
                MOVE_GIGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 10942
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10942
            .heldItem = ITEM_SHARP_BEAK,
#line 10944
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10943
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10945
                MOVE_DRILL_PECK,
                MOVE_FAINT_ATTACK,
                MOVE_STEEL_WING,
                MOVE_HAZE,
            },
            },
            {
#line 10950
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10950
            .heldItem = ITEM_BLACK_GLASSES,
#line 10952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10951
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10953
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_IRON_TAIL,
                MOVE_REVERSAL,
            },
            },
        },
    },
#line 10958
    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
#line 10959
        .trainerName = _("KAREN"),
#line 10960
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 10961
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .encounterMusic_gender =
#line 10963
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 10964
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10965
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 10967
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10969
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10969
            .heldItem = ITEM_SITRUS_BERRY,
#line 10971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10970
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10972
                MOVE_GROWTH,
                MOVE_SHADOW_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_BATON_PASS,
            },
            },
            {
#line 10977
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10978
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10980
                MOVE_FAINT_ATTACK,
                MOVE_METAL_CLAW,
                MOVE_BEAT_UP,
                MOVE_BLIZZARD,
            },
            },
            {
#line 10985
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10985
            .heldItem = ITEM_SCOPE_LENS,
#line 10987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10986
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10988
                MOVE_SLASH,
                MOVE_CUT,
                MOVE_IRON_TAIL,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 10993
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10993
            .heldItem = ITEM_SHARP_BEAK,
#line 10995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10994
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10996
                MOVE_SKY_ATTACK,
                MOVE_PURSUIT,
                MOVE_SWAGGER,
                MOVE_PSYCH_UP,
            },
            },
            {
#line 11001
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11001
            .heldItem = ITEM_LEFTOVERS,
#line 11003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11002
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11004
                MOVE_PSYCHO_CUT,
                MOVE_SHADOW_CLAW,
                MOVE_PERISH_SONG,
                MOVE_SLASH,
            },
            },
            {
#line 11009
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11009
            .heldItem = ITEM_CHARCOAL,
#line 11011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11010
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11012
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_IRON_TAIL,
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 11017
    [DIFFICULTY_NORMAL][TRAINER_KOGA_1] =
    {
#line 11018
        .trainerName = _("KOGA"),
#line 11019
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 11020
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .encounterMusic_gender =
#line 11022
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 11023
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11024
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11026
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11028
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11028
            .heldItem = ITEM_KINGS_ROCK,
#line 11030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11029
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11031
                MOVE_MEGAHORN,
                MOVE_GIGA_DRAIN,
                MOVE_DOUBLE_TEAM,
                MOVE_TOXIC,
            },
            },
            {
#line 11036
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11037
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11039
                MOVE_SURF,
                MOVE_TOXIC,
                MOVE_PROTECT,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 11044
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11044
            .heldItem = ITEM_LEFTOVERS,
#line 11046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11045
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11047
                MOVE_MINIMIZE,
                MOVE_FIRE_BLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
            },
            },
            {
#line 11052
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11053
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11055
                MOVE_LEECH_LIFE,
                MOVE_PSYCHIC,
                MOVE_SLUDGE_BOMB,
                MOVE_SLEEP_POWDER,
            },
            },
            {
#line 11060
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11060
            .heldItem = ITEM_BRIGHT_POWDER,
#line 11062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11061
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11063
                MOVE_DOUBLE_TEAM,
                MOVE_TOXIC,
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11068
    [DIFFICULTY_NORMAL][TRAINER_KOGA_2] =
    {
#line 11069
        .trainerName = _("KOGA"),
#line 11070
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 11071
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .encounterMusic_gender =
#line 11073
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 11074
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11075
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11077
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 0
        .trainerBackPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11079
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11079
            .heldItem = ITEM_CHESTO_BERRY,
#line 11081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11080
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11082
                MOVE_WATERFALL,
                MOVE_BLIZZARD,
                MOVE_GIGA_DRAIN,
                MOVE_REST,
            },
            },
            {
#line 11087
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11087
            .heldItem = ITEM_LEFTOVERS,
#line 11089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11088
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11090
                MOVE_MINIMIZE,
                MOVE_FIRE_BLAST,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
            },
            },
            {
#line 11095
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11096
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11098
                MOVE_SWALLOW,
                MOVE_STOCKPILE,
                MOVE_AMNESIA,
                MOVE_SPIT_UP,
            },
            },
            {
#line 11103
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11103
            .heldItem = ITEM_QUICK_CLAW,
#line 11105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11104
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11106
                MOVE_LOVELY_KISS,
                MOVE_FIRE_BLAST,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11111
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11111
            .heldItem = ITEM_BRIGHT_POWDER,
#line 11113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11112
            .lvl = 67,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11114
                MOVE_SILVER_WIND,
                MOVE_SIGNAL_BEAM,
                MOVE_PSYCHIC,
                MOVE_SUPERSONIC,
            },
            },
            {
#line 11119
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11119
            .heldItem = ITEM_LEFTOVERS,
#line 11121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11120
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11122
                MOVE_PROTECT,
                MOVE_FLY,
                MOVE_TOXIC,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11127
    [DIFFICULTY_NORMAL][TRAINER_LANCE_1] =
    {
#line 11128
        .trainerName = _("LANCE"),
#line 11129
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 11130
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 11132
            TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
#line 11133
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11134
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11136
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_CHAMPION_LANCE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11138
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11138
            .heldItem = ITEM_LEFTOVERS,
#line 11140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11139
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11141
                MOVE_SURF,
                MOVE_RAIN_DANCE,
                MOVE_HYPER_BEAM,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 11146
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11146
            .heldItem = ITEM_SITRUS_BERRY,
#line 11148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11147
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11149
                MOVE_BLIZZARD,
                MOVE_FIRE_BLAST,
                MOVE_THUNDER,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 11154
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11154
            .heldItem = ITEM_CHARCOAL,
#line 11156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11155
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11157
                MOVE_FLAMETHROWER,
                MOVE_WING_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11162
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11163
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11165
                MOVE_BOUNCE,
                MOVE_DRAGON_CLAW,
                MOVE_WATERFALL,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 11170
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11170
            .heldItem = ITEM_SILK_SCARF,
#line 11172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11171
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11173
                MOVE_WING_ATTACK,
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11178
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11178
            .heldItem = ITEM_SITRUS_BERRY,
#line 11180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11179
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11181
                MOVE_THUNDER,
                MOVE_SAFEGUARD,
                MOVE_OUTRAGE,
                MOVE_HYPER_BEAM,
            },
            },
        },
    },
#line 11186
    [DIFFICULTY_NORMAL][TRAINER_LANCE_2] =
    {
#line 11187
        .trainerName = _("LANCE"),
#line 11188
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 11189
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 11191
            TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
#line 11192
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11193
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11195
        .mugshotColor = MUGSHOT_COLOR_BLUE,
#line 0
        .trainerBackPic = TRAINER_PIC_CHAMPION_LANCE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11197
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11198
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11200
                MOVE_DRAGON_CLAW,
                MOVE_AIR_SLASH,
                MOVE_DOUBLE_EDGE,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 11205
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11205
            .heldItem = ITEM_SITRUS_BERRY,
#line 11207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11206
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11208
                MOVE_BLIZZARD,
                MOVE_EXTREME_SPEED,
                MOVE_THUNDER,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11213
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11213
            .heldItem = ITEM_QUICK_CLAW,
#line 11215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11214
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11216
                MOVE_HIDDEN_POWER,
                MOVE_HYPER_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 11221
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11221
            .heldItem = ITEM_LEFTOVERS,
#line 11223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11222
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11224
                MOVE_FIRE_BLAST,
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
            },
            },
            {
#line 11229
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11229
            .heldItem = ITEM_SCOPE_LENS,
#line 11231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11230
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11232
                MOVE_SKY_ATTACK,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 11237
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11237
            .heldItem = ITEM_SILK_SCARF,
#line 11239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11238
            .lvl = 70,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11240
                MOVE_DRAGON_DANCE,
                MOVE_PLAY_ROUGH,
                MOVE_SAFEGUARD,
                MOVE_SKY_ATTACK,
            },
            },
        },
    },
#line 11245
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_1] =
    {
#line 11246
        .trainerName = _("???"),
#line 11247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11248
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11250
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11251
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11254
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11255
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11258
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_2] =
    {
#line 11259
        .trainerName = _("SILVER"),
#line 11260
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11261
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11263
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11264
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11266
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11268
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11268
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 11272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11269
            .ability = ABILITY_MAGIC_BOUNCE,
#line 11270
            .lvl = 34,
#line 11271
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11272
                MOVE_MYSTICAL_FIRE,
                MOVE_SIGNAL_BEAM,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
            },
            },
            {
#line 11277
            .species = SPECIES_CHESNAUGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11277
            .heldItem = ITEM_COBA_BERRY,
#line 11281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11278
            .ability = ABILITY_SHELL_ARMOR,
#line 11279
            .lvl = 36,
#line 11280
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11281
                MOVE_DRAIN_PUNCH,
                MOVE_DRUM_BEATING,
                MOVE_ROCK_TOMB,
                MOVE_BULK_UP,
            },
            },
            {
#line 11286
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11286
            .heldItem = ITEM_LEFTOVERS,
#line 11290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11287
            .ability = ABILITY_LEVITATE,
#line 11288
            .lvl = 34,
#line 11289
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11290
                MOVE_LIGHT_SCREEN,
                MOVE_DISCHARGE,
                MOVE_LAVA_PLUME,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 11295
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11295
            .heldItem = ITEM_IAPAPA_BERRY,
#line 11299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11296
            .ability = ABILITY_CURSED_BODY,
#line 11297
            .lvl = 35,
#line 11298
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11299
                MOVE_DESTINY_BOND,
                MOVE_WHIRLPOOL,
                MOVE_ICY_WIND,
                MOVE_STRENGTH_SAP,
            },
            },
            {
#line 11304
            .species = SPECIES_BRAVIARY_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11304
            .heldItem = ITEM_TWISTED_SPOON,
#line 11308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11305
            .ability = ABILITY_KEEN_EYE,
#line 11306
            .lvl = 34,
#line 11307
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11308
                MOVE_ESPER_WING,
                MOVE_DUAL_WINGBEAT,
                MOVE_CLOSE_COMBAT,
                MOVE_ROOST,
            },
            },
            {
#line 11313
            .species = SPECIES_LYCANROC_MIDNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11313
            .heldItem = ITEM_LUM_BERRY,
#line 11317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11314
            .ability = ABILITY_NO_GUARD,
#line 11315
            .lvl = 35,
#line 11316
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11317
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
                MOVE_ACCELEROCK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 11322
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_3] =
    {
#line 11323
        .trainerName = _("SILVER"),
#line 11324
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11325
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11327
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11328
        .items = { ITEM_SUPER_POTION },
#line 11329
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11331
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11333
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11334
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11336
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 11340
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11341
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11343
                MOVE_BUBBLE_BEAM,
                MOVE_AURORA_BEAM,
                MOVE_PSYBEAM,
                MOVE_LOCK_ON,
            },
            },
            {
#line 11348
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11349
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11351
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_POISON_STING,
                MOVE_GUST,
            },
            },
            {
#line 11356
            .species = SPECIES_BAYLEEF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11357
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11359
                MOVE_MEGA_DRAIN,
                MOVE_RAZOR_LEAF,
                MOVE_TACKLE,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 11364
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_4] =
    {
#line 11365
        .trainerName = _("SILVER"),
#line 11366
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11367
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11369
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11370
        .items = { ITEM_HYPER_POTION },
#line 11371
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11373
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11375
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11377
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11376
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11378
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 11383
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11385
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11384
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11386
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_BITE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11391
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11393
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11392
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11394
                MOVE_OCTAZOOKA,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 11398
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11400
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11399
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11401
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 11406
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11408
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11407
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11409
                MOVE_SYNTHESIS,
                MOVE_RAZOR_LEAF,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 11414
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_5] =
    {
#line 11415
        .trainerName = _("SILVER"),
#line 11416
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11417
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11419
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11420
        .items = { ITEM_HYPER_POTION },
#line 11421
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11423
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11425
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11425
            .heldItem = ITEM_CHESTO_BERRY,
#line 11427
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11426
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11428
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 11433
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11435
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11434
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11436
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 11441
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11441
            .heldItem = ITEM_QUICK_CLAW,
#line 11443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11442
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11444
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11449
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11451
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11450
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11452
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 11457
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11457
            .heldItem = ITEM_MIRACLE_SEED,
#line 11459
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11458
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11460
                MOVE_SUNNY_DAY,
                MOVE_GIGA_DRAIN,
                MOVE_BODY_SLAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 11465
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11467
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11466
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11468
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 11473
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_6] =
    {
#line 11474
        .trainerName = _("SILVER"),
#line 11475
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11476
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11478
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11479
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11480
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11482
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11484
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11484
            .heldItem = ITEM_CHESTO_BERRY,
#line 11486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11485
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11487
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 11492
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11492
            .heldItem = ITEM_LEFTOVERS,
#line 11494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11493
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11495
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 11500
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11500
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 11502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11501
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11503
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11508
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11508
            .heldItem = ITEM_CHARCOAL,
#line 11510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11509
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11511
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 11516
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11516
            .heldItem = ITEM_MIRACLE_SEED,
#line 11518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11517
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11519
                MOVE_REFLECT,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 11524
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11524
            .heldItem = ITEM_QUICK_CLAW,
#line 11526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11525
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11527
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 11532
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CHIKORITA_7] =
    {
#line 11533
        .trainerName = _("SILVER"),
#line 11534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11535
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11537
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11538
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11539
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11541
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11543
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11543
            .heldItem = ITEM_CHESTO_BERRY,
#line 11545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11544
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11546
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 11551
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11551
            .heldItem = ITEM_LEFTOVERS,
#line 11553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11552
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11554
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 11559
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11559
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 11561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11560
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11562
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11567
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11567
            .heldItem = ITEM_CHARCOAL,
#line 11569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11568
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11570
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 11575
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11575
            .heldItem = ITEM_MIRACLE_SEED,
#line 11577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11576
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11578
                MOVE_REFLECT,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 11583
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11583
            .heldItem = ITEM_QUICK_CLAW,
#line 11585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11584
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11586
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 11591
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_1] =
    {
#line 11592
        .trainerName = _("???"),
#line 11593
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11594
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11596
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11597
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11600
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11601
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11604
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_2] =
    {
#line 11605
        .trainerName = _("Silver"),
#line 11606
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11607
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11609
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11610
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11612
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11614
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11614
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 11618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11615
            .ability = ABILITY_MAGIC_BOUNCE,
#line 11616
            .lvl = 34,
#line 11617
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11618
                MOVE_MYSTICAL_FIRE,
                MOVE_SIGNAL_BEAM,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
            },
            },
            {
#line 11623
            .species = SPECIES_DELPHOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11623
            .heldItem = ITEM_PSYCHIC_GEM,
#line 11627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11624
            .ability = ABILITY_MAGICIAN,
#line 11625
            .lvl = 36,
#line 11626
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11627
                MOVE_PSYCHIC_NOISE,
                MOVE_MIND_FLARE,
                MOVE_GRASS_KNOT,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11632
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11632
            .heldItem = ITEM_LEFTOVERS,
#line 11636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11633
            .ability = ABILITY_LEVITATE,
#line 11634
            .lvl = 34,
#line 11635
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11636
                MOVE_LIGHT_SCREEN,
                MOVE_DISCHARGE,
                MOVE_SCALD,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 11641
            .species = SPECIES_TREVENANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11641
            .heldItem = ITEM_BLUNDER_POLICY,
#line 11645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11642
            .ability = ABILITY_CURSED_BODY,
#line 11643
            .lvl = 35,
#line 11644
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11645
                MOVE_WOOD_HAMMER,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 11650
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11650
            .heldItem = ITEM_FOCUS_SASH,
#line 11654
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 11651
            .ability = ABILITY_SUPER_LUCK,
#line 11652
            .lvl = 34,
#line 11653
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11655
                MOVE_COMEUPPANCE,
                MOVE_SUCKER_PUNCH,
                MOVE_BRAVE_BIRD,
                MOVE_ROOST,
            },
            },
            {
#line 11660
            .species = SPECIES_LYCANROC_MIDNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11660
            .heldItem = ITEM_LUM_BERRY,
#line 11664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11661
            .ability = ABILITY_NO_GUARD,
#line 11662
            .lvl = 35,
#line 11663
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11664
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
                MOVE_ACCELEROCK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 11669
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_3] =
    {
#line 11670
        .trainerName = _("Silver"),
#line 11671
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11672
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11674
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11675
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11677
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11679
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11680
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11682
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 11686
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11687
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11689
                MOVE_RAZOR_LEAF,
                MOVE_GROWTH,
                MOVE_SLEEP_POWDER,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 11694
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11695
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11697
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_POISON_STING,
                MOVE_GUST,
            },
            },
            {
#line 11702
            .species = SPECIES_QUILAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11703
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11705
                MOVE_FLAME_WHEEL,
                MOVE_DIG,
                MOVE_QUICK_ATTACK,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 11710
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_4] =
    {
#line 11711
        .trainerName = _("SILVER"),
#line 11712
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11713
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11715
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11716
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11718
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 11720
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11722
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11721
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11723
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 11728
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11730
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11729
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11731
                MOVE_SLUDGE,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 11736
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11738
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11737
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11739
                MOVE_OCTAZOOKA,
                MOVE_PSYBEAM,
                MOVE_AURORA_BEAM,
            },
            },
            {
#line 11743
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11745
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11744
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11746
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 11751
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11753
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11752
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11754
                MOVE_THUNDER_PUNCH,
                MOVE_FLAMETHROWER,
                MOVE_QUICK_ATTACK,
                MOVE_IRON_TAIL,
            },
            },
        },
    },
#line 11759
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_5] =
    {
#line 11760
        .trainerName = _("SILVER"),
#line 11761
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11762
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11764
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11765
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11767
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11769
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11769
            .heldItem = ITEM_CHESTO_BERRY,
#line 11771
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11770
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11772
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 11777
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11779
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11778
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11780
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 11785
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11785
            .heldItem = ITEM_QUICK_CLAW,
#line 11787
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11786
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11788
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11793
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11795
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11794
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11796
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 11801
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11801
            .heldItem = ITEM_CHARCOAL,
#line 11803
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11802
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11804
                MOVE_FLAMETHROWER,
                MOVE_QUICK_ATTACK,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 11809
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11811
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11810
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11812
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 11817
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_6] =
    {
#line 11818
        .trainerName = _("SILVER"),
#line 11819
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11820
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11822
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11823
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11824
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11826
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11828
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11828
            .heldItem = ITEM_CHESTO_BERRY,
#line 11830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11829
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11831
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 11836
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11836
            .heldItem = ITEM_LEFTOVERS,
#line 11838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11837
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11839
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 11844
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11844
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 11846
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11845
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11847
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11852
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11852
            .heldItem = ITEM_SCOPE_LENS,
#line 11854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11853
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11855
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 11860
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11860
            .heldItem = ITEM_CHARCOAL,
#line 11862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11861
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11863
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 11868
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11868
            .heldItem = ITEM_QUICK_CLAW,
#line 11870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11869
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11871
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 11876
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_CYNDAQUIL_7] =
    {
#line 11877
        .trainerName = _("SILVER"),
#line 11878
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11879
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11881
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11882
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11883
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 11885
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11887
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11887
            .heldItem = ITEM_CHESTO_BERRY,
#line 11889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11888
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11890
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 11895
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11895
            .heldItem = ITEM_LEFTOVERS,
#line 11897
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11896
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11898
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 11903
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11903
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 11905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11904
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11906
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_PSYBEAM,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 11911
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11911
            .heldItem = ITEM_SCOPE_LENS,
#line 11913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11912
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11914
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 11919
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11919
            .heldItem = ITEM_CHARCOAL,
#line 11921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11920
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11922
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
                MOVE_IRON_TAIL,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 11927
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11927
            .heldItem = ITEM_QUICK_CLAW,
#line 11929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11928
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11930
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 11935
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_1] =
    {
#line 11936
        .trainerName = _("???"),
#line 11937
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11938
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11940
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11941
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11944
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11945
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11948
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_2] =
    {
#line 11949
        .trainerName = _("Silver"),
#line 11950
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11951
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 11953
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 11954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 11956
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11958
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11958
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 11962
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11959
            .ability = ABILITY_MAGIC_BOUNCE,
#line 11960
            .lvl = 34,
#line 11961
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11962
                MOVE_MYSTICAL_FIRE,
                MOVE_SIGNAL_BEAM,
                MOVE_FUTURE_SIGHT,
                MOVE_REFLECT,
            },
            },
            {
#line 11967
            .species = SPECIES_GRENINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11967
            .heldItem = ITEM_SCOPE_LENS,
#line 11971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11968
            .ability = ABILITY_SUPER_LUCK,
#line 11969
            .lvl = 36,
#line 11970
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11971
                MOVE_AQUA_CUTTER,
                MOVE_NIGHT_SLASH,
                MOVE_ICE_PUNCH,
                MOVE_LOW_KICK,
            },
            },
            {
#line 11976
            .species = SPECIES_ROTOM_MOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11976
            .heldItem = ITEM_LEFTOVERS,
#line 11980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11977
            .ability = ABILITY_LEVITATE,
#line 11978
            .lvl = 34,
#line 11979
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11980
                MOVE_LIGHT_SCREEN,
                MOVE_DISCHARGE,
                MOVE_GIGA_DRAIN,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 11985
            .species = SPECIES_MAROWAK_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11985
            .heldItem = ITEM_PASSHO_BERRY,
#line 11989
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11986
            .ability = ABILITY_CURSED_BODY,
#line 11987
            .lvl = 35,
#line 11988
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11989
                MOVE_SHADOW_BONE,
                MOVE_FIRE_LASH,
                MOVE_FOCUS_PUNCH,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 11994
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11994
            .heldItem = ITEM_CELL_BATTERY,
#line 11998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11995
            .ability = ABILITY_INNER_FOCUS,
#line 11996
            .lvl = 34,
#line 11997
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11998
                MOVE_DUAL_WINGBEAT,
                MOVE_STEEL_WING,
                MOVE_CRUNCH,
                MOVE_ROOST,
            },
            },
            {
#line 12003
            .species = SPECIES_LYCANROC_MIDNIGHT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12003
            .heldItem = ITEM_LUM_BERRY,
#line 12007
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12004
            .ability = ABILITY_NO_GUARD,
#line 12005
            .lvl = 35,
#line 12006
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12007
                MOVE_STONE_EDGE,
                MOVE_STOMPING_TANTRUM,
                MOVE_ACCELEROCK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 12012
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_3] =
    {
#line 12013
        .trainerName = _("SILVER"),
#line 12014
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12015
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 12017
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 12018
        .items = { ITEM_SUPER_POTION },
#line 12019
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 12021
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12023
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12024
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12026
                MOVE_BITE,
                MOVE_ROCK_THROW,
                MOVE_SCREECH,
            },
            },
            {
#line 12030
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12031
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12033
                MOVE_EMBER,
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
            },
            },
            {
#line 12038
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12039
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12041
                MOVE_BITE,
                MOVE_CONFUSE_RAY,
                MOVE_POISON_STING,
                MOVE_GUST,
            },
            },
            {
#line 12046
            .species = SPECIES_CROCONAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12047
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12049
                MOVE_BITE,
                MOVE_ICE_PUNCH,
                MOVE_BUBBLE_BEAM,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 12054
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_4] =
    {
#line 12055
        .trainerName = _("SILVER"),
#line 12056
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12057
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 12059
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 12060
        .items = { ITEM_SUPER_POTION },
#line 12061
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 12063
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12065
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12067
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12066
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12068
                MOVE_THRASH,
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
            },
            },
            {
#line 12073
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12075
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12074
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12076
                MOVE_SLUDGE,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 12081
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12083
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12082
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12084
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_BITE,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12089
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12091
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12090
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12092
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 12097
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12099
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12098
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12100
                MOVE_ICE_PUNCH,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_BITE,
            },
            },
        },
    },
#line 12105
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_5] =
    {
#line 12106
        .trainerName = _("SILVER"),
#line 12107
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12108
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 12110
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 12111
        .items = { ITEM_HYPER_POTION },
#line 12112
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 12114
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12116
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12116
            .heldItem = ITEM_CHESTO_BERRY,
#line 12118
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12117
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12119
                MOVE_SLASH,
                MOVE_FAINT_ATTACK,
                MOVE_ROCK_SMASH,
                MOVE_REST,
            },
            },
            {
#line 12124
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12125
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12127
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 12132
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12132
            .heldItem = ITEM_QUICK_CLAW,
#line 12134
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12133
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12135
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 12140
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12142
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12141
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12143
                MOVE_FLAMETHROWER,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12148
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12148
            .heldItem = ITEM_MYSTIC_WATER,
#line 12150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12149
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12151
                MOVE_ICE_PUNCH,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_BITE,
            },
            },
            {
#line 12156
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12158
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 12157
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12159
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 12164
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_6] =
    {
#line 12165
        .trainerName = _("SILVER"),
#line 12166
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12167
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 12169
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 12170
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12171
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12173
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12175
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12175
            .heldItem = ITEM_CHESTO_BERRY,
#line 12177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12176
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12178
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 12183
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12183
            .heldItem = ITEM_LEFTOVERS,
#line 12185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12184
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12186
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_WING_ATTACK,
            },
            },
            {
#line 12191
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12191
            .heldItem = ITEM_SCOPE_LENS,
#line 12193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12192
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12194
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 12199
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12199
            .heldItem = ITEM_CHARCOAL,
#line 12201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12200
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12202
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12207
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12207
            .heldItem = ITEM_SCOPE_LENS,
#line 12209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12208
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12210
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 12215
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12215
            .heldItem = ITEM_QUICK_CLAW,
#line 12217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12216
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12218
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 12223
    [DIFFICULTY_NORMAL][TRAINER_RIVAL_TOTODILE_7] =
    {
#line 12224
        .trainerName = _("SILVER"),
#line 12225
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12226
        .trainerPic = TRAINER_PIC_SILVER,
        .encounterMusic_gender =
#line 12228
            TRAINER_ENCOUNTER_MUSIC_SILVER,
#line 12229
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12232
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_SILVER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12234
            .species = SPECIES_URSALUNA_BLOODMOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12234
            .heldItem = ITEM_CHESTO_BERRY,
#line 12236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12235
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12237
                MOVE_FAKE_TEARS,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_REST,
            },
            },
            {
#line 12242
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12242
            .heldItem = ITEM_LEFTOVERS,
#line 12244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12243
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12245
                MOVE_TOXIC,
                MOVE_DOUBLE_TEAM,
                MOVE_CONFUSE_RAY,
                MOVE_FLY,
            },
            },
            {
#line 12250
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12250
            .heldItem = ITEM_SCOPE_LENS,
#line 12252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12251
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12253
                MOVE_SLUDGE_BOMB,
                MOVE_RAZOR_LEAF,
                MOVE_SLEEP_POWDER,
                MOVE_GROWTH,
            },
            },
            {
#line 12258
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12258
            .heldItem = ITEM_CHARCOAL,
#line 12260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12259
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12261
                MOVE_FIRE_BLAST,
                MOVE_IRON_TAIL,
                MOVE_CRUNCH,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12266
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12266
            .heldItem = ITEM_SCOPE_LENS,
#line 12268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12267
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12269
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 12274
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12274
            .heldItem = ITEM_QUICK_CLAW,
#line 12276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12275
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12277
                MOVE_CRUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_FIRE_BLAST,
            },
            },
        },
    },
#line 12282
    [DIFFICULTY_NORMAL][TRAINER_RED_2] =
    {
#line 12283
        .trainerName = _("RED"),
#line 12284
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 12285
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 12287
            TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
#line 12288
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12289
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 0
        .trainerBackPic = TRAINER_PIC_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12292
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12292
            .heldItem = ITEM_LIGHT_BALL,
#line 12294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12293
            .lvl = 93,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12295
                MOVE_THUNDERBOLT,
                MOVE_SURF,
                MOVE_IRON_TAIL,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12300
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12300
            .heldItem = ITEM_LEFTOVERS,
#line 12302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12301
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12303
                MOVE_AMNESIA,
                MOVE_CURSE,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 12308
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12308
            .heldItem = ITEM_CHARCOAL,
#line 12310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12309
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12311
                MOVE_FIRE_BLAST,
                MOVE_WING_ATTACK,
                MOVE_OUTRAGE,
                MOVE_STEEL_WING,
            },
            },
            {
#line 12316
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12316
            .heldItem = ITEM_MIRACLE_SEED,
#line 12318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12317
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12319
                MOVE_GIGA_DRAIN,
                MOVE_BODY_SLAM,
                MOVE_SLEEP_POWDER,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 12324
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12324
            .heldItem = ITEM_QUICK_CLAW,
#line 12326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12325
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12327
                MOVE_ICE_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_BODY_SLAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 12332
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12332
            .heldItem = ITEM_SITRUS_BERRY,
#line 12334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12333
            .lvl = 80,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12335
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_MORNING_SUN,
            },
            },
        },
    },
#line 12340
    [DIFFICULTY_NORMAL][TRAINER_EUSINE] =
    {
#line 12341
        .trainerName = _("Eusine"),
#line 12342
        .trainerClass = TRAINER_CLASS_MYSTERY_MAN,
#line 12343
        .trainerPic = TRAINER_PIC_EUSINE,
        .encounterMusic_gender =
#line 12345
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12346
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 12348
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
#line 0
        .trainerBackPic = TRAINER_PIC_EUSINE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12350
            .species = SPECIES_OVERQWIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12350
            .heldItem = ITEM_METRONOME,
#line 12354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12351
            .ability = ABILITY_INTIMIDATE,
#line 12352
            .lvl = 46,
#line 12353
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12354
                MOVE_PURSUIT,
            },
            },
            {
#line 12356
            .species = SPECIES_ELECTRODE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12356
            .heldItem = ITEM_NORMAL_GEM,
#line 12360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12357
            .ability = ABILITY_AFTERMATH,
#line 12358
            .lvl = 47,
#line 12359
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12360
                MOVE_EXPLOSION,
                MOVE_THUNDERBOLT,
                MOVE_ENERGY_BALL,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 12365
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12365
            .heldItem = ITEM_FOCUS_SASH,
#line 12369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12366
            .ability = ABILITY_INNER_FOCUS,
#line 12367
            .lvl = 48,
#line 12368
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12369
                MOVE_PSYCHIC,
                MOVE_AURA_SPHERE,
                MOVE_SHADOW_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 12374
    [DIFFICULTY_NORMAL][TRAINER_GIOVANNI] =
    {
#line 12375
        .trainerName = _("GIOVANNI"),
#line 12376
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12377
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .encounterMusic_gender =
#line 12379
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12380
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12381
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12383
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_GIOVANNI,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12385
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12386
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12388
                MOVE_DIZZY_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_SAFEGUARD,
                MOVE_MEGA_PUNCH,
            },
            },
            {
#line 12393
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12394
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12396
                MOVE_DARK_PULSE,
                MOVE_AIR_SLASH,
                MOVE_THIEF,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 12401
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12402
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12404
                MOVE_ICE_PUNCH,
                MOVE_SLUDGE_BOMB,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 12409
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12410
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12412
                MOVE_FAINT_ATTACK,
                MOVE_SWAGGER,
                MOVE_SCREECH,
                MOVE_SLASH,
            },
            },
            {
#line 12417
            .species = SPECIES_URSALUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12418
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12420
                MOVE_EARTHQUAKE,
                MOVE_SANDSTORM,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 12425
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12426
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12428
                MOVE_THUNDER_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_THRASH,
            },
            },
        },
    },
#line 12433
    [DIFFICULTY_NORMAL][TRAINER_PROTON_1] =
    {
#line 12434
        .trainerName = _("Proton"),
#line 12435
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12436
        .trainerPic = TRAINER_PIC_PROTON,
        .encounterMusic_gender =
#line 12438
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12439
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES,
#line 12441
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_PROTON,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12443
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12443
            .heldItem = ITEM_WEAKNESS_POLICY,
#line 12447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12444
            .ability = ABILITY_SKITTER_SPEED,
#line 12445
            .lvl = 25,
#line 12446
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12447
                MOVE_INFESTATION,
                MOVE_DIG,
                MOVE_TOXIC_THREAD,
                MOVE_SUCKER_PUNCH,
            },
            },
            {
#line 12452
            .species = SPECIES_VOLTORB_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12452
            .heldItem = ITEM_WISE_GLASSES,
#line 12456
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 30, 30, 31),
#line 12453
            .ability = ABILITY_AFTERMATH,
#line 12454
            .lvl = 26,
#line 12455
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12457
                MOVE_VOLT_SWITCH,
                MOVE_ENERGY_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_METAL_SOUND,
            },
            },
            {
#line 12462
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12462
            .heldItem = ITEM_EVIOLITE,
#line 12466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12463
            .ability = ABILITY_FLAME_BODY,
#line 12464
            .lvl = 25,
#line 12465
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12466
                MOVE_FIRE_SPIN,
                MOVE_WILL_O_WISP,
                MOVE_CURSE,
                MOVE_HEX,
            },
            },
            {
#line 12471
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12471
            .heldItem = ITEM_BERRY_JUICE,
#line 12475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12472
            .ability = ABILITY_INSOMNIA,
#line 12473
            .lvl = 25,
#line 12474
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12475
                MOVE_PSYBEAM,
                MOVE_NIGHT_SHADE,
                MOVE_CONFUSE_RAY,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 12480
            .species = SPECIES_FALINKS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12480
            .heldItem = ITEM_COBA_BERRY,
#line 12484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12481
            .ability = ABILITY_BATTLE_ARMOR,
#line 12482
            .lvl = 24,
#line 12483
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12484
                MOVE_BULK_UP,
                MOVE_ROCK_SMASH,
                MOVE_HEART_STAMP,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 12489
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12489
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 12493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12490
            .ability = ABILITY_TECHNICIAN,
#line 12491
            .lvl = 25,
#line 12492
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12493
                MOVE_FAKE_OUT,
                MOVE_PURSUIT,
                MOVE_ICE_SHARD,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 12498
    [DIFFICULTY_NORMAL][TRAINER_PROTON_2] =
    {
#line 12499
        .trainerName = _("PROTON"),
#line 12500
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12501
        .trainerPic = TRAINER_PIC_PROTON,
        .encounterMusic_gender =
#line 12503
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12504
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12505
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12507
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_PROTON,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12509
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12510
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12512
                MOVE_SLUDGE_BOMB,
                MOVE_POUND,
                MOVE_ACID_ARMOR,
                MOVE_MINIMIZE,
            },
            },
            {
#line 12517
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12518
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12520
                MOVE_SLUDGE_BOMB,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_PUNCH,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 12525
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12527
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12526
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12528
                MOVE_SLUDGE_BOMB,
                MOVE_SELF_DESTRUCT,
                MOVE_HAZE,
                MOVE_TACKLE,
            },
            },
            {
#line 12533
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12534
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12536
                MOVE_SLUDGE_BOMB,
                MOVE_DOUBLE_KICK,
                MOVE_ICE_PUNCH,
                MOVE_THRASH,
            },
            },
            {
#line 12541
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12542
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12544
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_FISSURE,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12549
    [DIFFICULTY_NORMAL][TRAINER_ARCHER] =
    {
#line 12550
        .trainerName = _("ARCHER"),
#line 12551
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12552
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 12554
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12555
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12556
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12558
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARCHER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12560
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12561
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12563
                MOVE_TRI_ATTACK,
                MOVE_ZAP_CANNON,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 12568
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12569
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12571
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 12576
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12577
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12579
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 12584
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12585
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12587
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 12592
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12593
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12595
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 12600
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_1] =
    {
#line 12601
        .trainerName = _("ARCHER"),
#line 12602
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12603
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 12605
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12606
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12607
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12609
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARCHER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12611
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12612
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12614
                MOVE_SELF_DESTRUCT,
                MOVE_SMOG,
                MOVE_SMOKESCREEN,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 12619
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12620
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12622
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 12627
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12629
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12628
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12630
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 12635
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_4] =
    {
#line 12636
        .trainerName = _("ARCHER"),
#line 12637
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12638
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 12640
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12641
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12642
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12644
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARCHER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12646
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12647
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12649
                MOVE_TRI_ATTACK,
                MOVE_ZAP_CANNON,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 12654
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12656
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12655
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12657
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 12662
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12663
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12665
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 12670
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12671
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12673
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 12678
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12679
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12681
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 12686
    [DIFFICULTY_NORMAL][TRAINER_ARCHER_5] =
    {
#line 12687
        .trainerName = _("ARCHER"),
#line 12688
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12689
        .trainerPic = TRAINER_PIC_ARCHER,
        .encounterMusic_gender =
#line 12691
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12692
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12695
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARCHER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12697
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12698
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12700
                MOVE_TRI_ATTACK,
                MOVE_ZAP_CANNON,
                MOVE_FLAMETHROWER,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 12705
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12706
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12708
                MOVE_HEADBUTT,
                MOVE_ROCK_SMASH,
                MOVE_PURSUIT,
                MOVE_FRUSTRATION,
            },
            },
            {
#line 12713
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12715
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12714
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12716
                MOVE_BITE,
                MOVE_STRENGTH,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 12721
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12723
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12722
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12724
                MOVE_BITE,
                MOVE_SMOG,
                MOVE_ROAR,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 12729
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12730
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12732
                MOVE_CONFUSION,
                MOVE_CURSE,
                MOVE_AMNESIA,
                MOVE_SURF,
            },
            },
        },
    },
#line 12737
    [DIFFICULTY_NORMAL][TRAINER_PETREL_1] =
    {
#line 12738
        .trainerName = _("PETREL"),
#line 12739
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12740
        .trainerPic = TRAINER_PIC_PETREL,
        .encounterMusic_gender =
#line 12742
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12743
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12744
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12746
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_PETREL,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12748
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12750
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12749
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12751
                MOVE_PIN_MISSILE,
                MOVE_EXPLOSION,
                MOVE_SPIKES,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 12756
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12757
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12759
                MOVE_ROCK_TOMB,
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 12764
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12766
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12765
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12767
                MOVE_SMOG,
                MOVE_FLAMETHROWER,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
            },
            },
            {
#line 12772
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12774
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12773
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12775
                MOVE_ICE_BEAM,
                MOVE_CLAMP,
                MOVE_SPIKE_CANNON,
                MOVE_SURF,
            },
            },
        },
    },
#line 12780
    [DIFFICULTY_NORMAL][TRAINER_PETREL_2] =
    {
#line 12781
        .trainerName = _("PETREL"),
#line 12782
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12783
        .trainerPic = TRAINER_PIC_PETREL,
        .encounterMusic_gender =
#line 12785
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12786
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12787
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12789
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_PETREL,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12791
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12793
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12792
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12794
                MOVE_PIN_MISSILE,
                MOVE_EXPLOSION,
                MOVE_SPIKES,
                MOVE_SPIKE_CANNON,
            },
            },
            {
#line 12799
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12800
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12802
                MOVE_ROCK_SLIDE,
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_THRASH,
            },
            },
            {
#line 12807
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12808
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12810
                MOVE_SMOG,
                MOVE_FLAMETHROWER,
                MOVE_ROCK_SLIDE,
                MOVE_CURSE,
            },
            },
            {
#line 12815
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12816
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12818
                MOVE_ICE_BEAM,
                MOVE_CLAMP,
                MOVE_SPIKE_CANNON,
                MOVE_SURF,
            },
            },
        },
    },
#line 12823
    [DIFFICULTY_NORMAL][TRAINER_ARIANA_1] =
    {
#line 12824
        .trainerName = _("ARIANA"),
#line 12825
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12826
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 12828
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12829
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12830
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12832
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARIANA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12834
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12836
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12835
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12837
                MOVE_LEER,
                MOVE_SLUDGE_BOMB,
                MOVE_BITE,
                MOVE_WRAP,
            },
            },
            {
#line 12842
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12843
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12845
                MOVE_FAINT_ATTACK,
                MOVE_PAY_DAY,
                MOVE_MUD_SLAP,
                MOVE_SLASH,
            },
            },
            {
#line 12850
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12851
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12853
                MOVE_SWEET_SCENT,
                MOVE_SLEEP_POWDER,
                MOVE_SLUDGE_BOMB,
                MOVE_GIGA_DRAIN,
            },
            },
        },
    },
#line 12858
    [DIFFICULTY_NORMAL][TRAINER_ARIANA_2] =
    {
#line 12859
        .trainerName = _("ARIANA"),
#line 12860
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12861
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 12863
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12864
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12865
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12867
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARIANA,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12869
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12871
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12870
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12872
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_SLUDGE_BOMB,
            },
            },
            {
#line 12877
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12878
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12880
                MOVE_BITE,
                MOVE_SCREECH,
                MOVE_CHARM,
                MOVE_SLASH,
            },
            },
            {
#line 12885
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12886
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12888
                MOVE_SLEEP_POWDER,
                MOVE_SLUDGE_BOMB,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 12893
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12895
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12894
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12896
                MOVE_STRENGTH,
                MOVE_TWISTER,
                MOVE_GUST,
                MOVE_SURF,
            },
            },
            {
#line 12901
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12903
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12902
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12904
                MOVE_PURSUIT,
                MOVE_TOXIC,
                MOVE_FAINT_ATTACK,
                MOVE_FLY,
            },
            },
        },
    },
#line 12909
    [DIFFICULTY_NORMAL][TRAINER_DAHLIA_NORMAL] =
    {
#line 12910
        .trainerName = _("ARIANA"),
#line 12911
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12912
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 12914
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12915
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12916
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12918
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARIANA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12920
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12922
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12921
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12923
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 12928
    [DIFFICULTY_NORMAL][TRAINER_DAHLIA_HARD] =
    {
#line 12929
        .trainerName = _("ARIANA"),
#line 12930
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
#line 12931
        .trainerPic = TRAINER_PIC_ARIANA,
        .encounterMusic_gender =
#line 12933
            TRAINER_ENCOUNTER_MUSIC_ROCKET,
#line 12934
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 12935
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 12936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 12937
        .mugshotColor = MUGSHOT_COLOR_DARKRED,
#line 0
        .trainerBackPic = TRAINER_PIC_ARIANA,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12939
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12940
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12942
                MOVE_SCREECH,
                MOVE_BITE,
                MOVE_GLARE,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 12948
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 12949
        .trainerName = _("RED"),
#line 12950
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12951
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 12953
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12954
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 0
        .trainerBackPic = TRAINER_PIC_RED,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12956
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12957
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12960
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 12961
        .trainerName = _("LEAF"),
#line 12962
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12963
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 12964
F_TRAINER_FEMALE | 
#line 12965
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12966
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 0
        .trainerBackPic = TRAINER_PIC_LEAF,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12968
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12969
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
