//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 15
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 21
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 20
            .lvl = 42,
#line 19
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 28
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 32
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .lvl = 43,
#line 29
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 33
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 38
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 42
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .lvl = 44,
#line 39
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 43
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 48
    [DIFFICULTY_NORMAL][PARTNER_LANCE] =
    {
#line 49
        .trainerName = _("Lance"),
#line 50
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 51
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .encounterMusic_gender =
#line 53
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 55
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_OMNISCIENT | AI_FLAG_PREFER_HIGHEST_DAMAGE_MOVE | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_SMART_TARGETING | AI_FLAG_TAG_PARTNER,
#line 54
        .trainerBackPic = TRAINER_BACK_PIC_LANCE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 57
            .species = SPECIES_CYCLIZAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 57
            .heldItem = ITEM_EXPERT_BELT,
#line 61
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 58
            .ability = ABILITY_REGENERATOR,
#line 59
            .lvl = 65,
#line 60
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 61
                MOVE_RAPID_SPIN,
                MOVE_IRON_TAIL,
                MOVE_DRACO_METEOR,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 66
            .species = SPECIES_TYRANTRUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 66
            .heldItem = ITEM_FOCUS_SASH,
#line 70
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 67
            .ability = ABILITY_STRONG_JAW,
#line 68
            .lvl = 67,
#line 69
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 70
                MOVE_PSYCHIC_FANGS,
                MOVE_HEAVY_SLAM,
                MOVE_ICE_FANG,
                MOVE_CRUNCH,
            },
            },
            {
#line 75
            .species = SPECIES_GOODRA_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 75
            .heldItem = ITEM_SITRUS_BERRY,
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 76
            .ability = ABILITY_SHELL_ARMOR,
#line 77
            .lvl = 65,
#line 78
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 79
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_PROTECT,
            },
            },
        },
    },
