MtMortar_1F_North_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar_1F_North_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar_1F_North_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtMortar_1F_North_EventScript_Item_MaxRepel::
    finditem ITEM_MAX_REPEL
    end

MtMortar_1F_North_EventScript_Item_EscapeRope::
    finditem ITEM_ESCAPE_ROPE
    end

MtMortar_1F_North_EventScript_Item_MaxPotion::
    finditem ITEM_MAX_POTION
    end

MtMortar_1F_North_EventScript_Item_Nugget::
    finditem ITEM_NUGGET
    end

MtMortar_1F_North_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

MtMortar_1F_North_EventScript_Item_FullIncense::
    finditem ITEM_REVIVE
    end

MtMortar_1F_North_EventScript_Item_KingsRock::
    finditem ITEM_KINGS_ROCK
    end

MtMortar_1F_North_EventScript_BlackBelt::
    lock 
    faceplayer
    goto_if_set FLAG_HIDE_BLACKBELT_AND_KINGAMBIT, MtMortar_1F_North_EventScript_BlackBeltAlreadyGivenLeadersCrest
    msgbox MtMortar_1F_North_Text_BlackBeltBeforeGivingItem, MSGBOX_DEFAULT
    giveitem ITEM_LEADERS_CREST
    setflag FLAG_HIDE_BLACKBELT_AND_KINGAMBIT
    goto MtMortar_1F_North_EventScript_BlackBeltAlreadyGivenLeadersCrest
    end 

MtMortar_1F_North_EventScript_BlackBeltAlreadyGivenLeadersCrest::
    msgbox MtMortar_1F_North_Text_BlackBeltAlreadyGivenLeadersCrest, MSGBOX_DEFAULT
    closemessage
    release 
    end 

MtMortar_1F_North_Text_BlackBeltBeforeGivingItem:
    .string "Always train to be number one!\p"
    .string "If you don't believe you can do it, then\n"
    .string "you won't!\p"
    .string "You've got to stand up to the current\n"
    .string "number one and say, 'I'm better than\l"
    .string "you' with no hesitation.\p"
    .string "I like you! You know what it takes to be\n"
    .string "the best at something.\p"
    .string "Use this to become the best in the\n"
    .string "world. No the universe, even!$"

MtMortar_1F_North_Text_BlackBeltAlreadyGivenLeadersCrest:
    .string "Kingambit and I are going to become the\n"
    .string "strongest duo this planet has ever\l"
    .string "known.\p"
    .string "It's not a question of if, but when.$"

MtMortar_1F_North_EventScript_Kingambit::
	lock
	faceplayer
	playmoncry SPECIES_KINGAMBIT, CRY_MODE_NORMAL
	msgbox MtMortar_1F_North_Text_Kingambit, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	release
	end

MtMortar_1F_North_Text_Kingambit:
	.string "Kingambit: ...$"
