TinTower_1F_hns_MapScripts::
	.byte 0

TinTower_1F_EventScript_SageA::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageA_Hooh
	msgbox TinTower_1F_Sage4_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageA_Hooh::
	msgbox TinTower_1F_Sage4_Text1, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageB_Hooh
	msgbox TinTower_1F_Sage2_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB_Hooh::
	msgbox TinTower_1F_Sage1_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageC_Hooh
	msgbox TinTower_1F_Sage6_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC_Hooh::
	msgbox TinTower_1F_Sage3_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageD::
	lock
	faceplayer
	goto_if_set FLAG_PLAYER_CAUGHT_SILVALLY, TinTower_1F_EventScript_SageDPostMemories
	msgbox TinTower_1F_Text_SageDDoYouHaveSilvally, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, TinTower_1F_EventScript_SageDNotSilvally
	baobacheckmon 5
	goto_if_eq VAR_RESULT, FALSE, TinTower_1F_EventScript_SageDNotSilvally
	msgbox TinTower_1F_Text_SageDPlayerHasSilvally, MSGBOX_DEFAULT
	giveitem ITEM_BUG_MEMORY
	giveitem ITEM_DARK_MEMORY
	giveitem ITEM_DRAGON_MEMORY
	giveitem ITEM_ELECTRIC_MEMORY
	giveitem ITEM_FAIRY_MEMORY
	giveitem ITEM_FIGHTING_MEMORY
	giveitem ITEM_FIRE_MEMORY
	giveitem ITEM_FLYING_MEMORY
	giveitem ITEM_GHOST_MEMORY
	giveitem ITEM_GRASS_MEMORY
	giveitem ITEM_GROUND_MEMORY
	giveitem ITEM_ICE_MEMORY
	giveitem ITEM_POISON_MEMORY
	giveitem ITEM_PSYCHIC_MEMORY
	giveitem ITEM_ROCK_MEMORY
	giveitem ITEM_STEEL_MEMORY
	giveitem ITEM_WATER_MEMORY
	setflag FLAG_PLAYER_CAUGHT_SILVALLY
	goto TinTower_1F_EventScript_SageDPostMemories
	end

TinTower_1F_EventScript_SageDNotSilvally::
	msgbox TinTower_1F_Text_SageDThatsNotSilvally, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageDPostMemories::
	msgbox TinTower_1F_Text_SageDMemoriesChangeItsType, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_Text_SageDDoYouHaveSilvally:
	.string "I'm looking for a Pokémon called\n"
	.string "Silvally.\p"
	.string "I've heard rumours that its somewhere\n"
	.string "above this floor, but us Sages have\l"
	.string "never been permitted to go upstairs.\p"
	.string "Do you have one? Could you show it to\n"
	.string "me?$"

TinTower_1F_Text_SageDPlayerHasSilvally:
	.string "Oh, that's it!\p"
	.string "It's truly breathtaking...\p"
	.string "Please. Take these with you.\n"
	.string "Help Silvally realise its potential.$"

TinTower_1F_Text_SageDThatsNotSilvally:
	.string "...Sorry, I don't think that's what\n"
	.string "Silvally looks like.\p"
	.string "Not that I've ever seen it myself, but\n"
	.string "I'm convinced I'll know it when I see it.\p"
	.string "Or, I hope so...$"

TinTower_1F_Text_SageDMemoriesChangeItsType:
	.string "Silvally uses artificially created\n"
	.string "memories to change it's type.\p"
	.string "They say it's like the ability of a\n"
	.string "certain other Pokémon.\p"
	.string "Though of course, no one has seen that\n"
	.string "Pokémon except for La-\p"
	.string "Please excuse me. That is only a rumour.\p"
	.string "It would be blasphemous to assume it is\n"
	.string "true.$"

TinTower_1F_Sage1_Text:
	.string "According to legend…\n"
	.string "When the souls of Pokémon and humans\p"
	.string "commune, from the heavens descends a\n"
	.string "Pokémon of rainbow colors…\p"
	.string "Could it mean the legendary Pokémon\n"
	.string "are testing us humans?$"

TinTower_1F_Sage2_Text:
	.string "When the BRASS TOWER burned down,\n"
	.string "three nameless Pokémon were said\l"
	.string "to have perished. It was tragic.\p"
	.string "However…\p"
	.string "A rainbow-colored Pokémon…\n"
	.string "In other words…\p"
	.string "HO-OH descended from the sky and\n"
	.string "gave new life to the three Pokémon.\p"
	.string "They are…\n"
	.string "SUICUNE, ENTEI and RAIKOU.\p"
	.string "That is what they say.$"

TinTower_1F_Sage3_Text:
	.string "The two TOWERS are said to have been\n"
	.string "built to foster friendship and\p"
	.string "hope between Pokémon and people.\n"
	.string "That was 700 years ago, but the ideal\p"
	.string "still remains important today.$"

TinTower_1F_Sage4_Text1:
	.string "HO-OH appears to have descended\n"
	.string "upon this, the TIN TOWER!$"

TinTower_1F_Sage4_Text2:
	.string "The legendary Pokémon are said\n"
	.string "to embody three powers…\p"
	.string "The lightning that struck the TOWER.\n"
	.string "The fire that burned the TOWER.\p"
	.string "And the rain that put out the fire…$"

TinTower_1F_Sage6_Text2:
	.string "Of the legendary Pokémon, SUICUNE\n"
	.string "is said to be the closest to HO-OH.\p"
	.string "I hear there may also be a link to\n"
	.string "Pokémon known as UNOWN.\p"
	.string "The Pokémon UNOWN must be sharing a\n"
	.string "cooperative bond with SUICUNE.$"

TinTower_1F_EusineHoOh_Text:
	.string "I knew it.\p"
	.string "I knew you'd get to see the Pokémon\n"
	.string "of rainbow colors, <PLAYER>.\p"
	.string "It happened just as I envisioned.\n"
	.string "My research isn't bad, I might say.\p"
	.string "I'm going to keep studying Pokémon\n"
	.string "to become a famous POKéMANIAC!$"

TinTower_1F_EusineSuicune_Text:
	.string "EUSINE: Awesome! Too awesome, even!\n"
	.string "I've never seen a battle that great.\p"
	.string "That was truly inspiring to see.\n"
	.string "SUICUNE was tough, but you were even\p"
	.string "more incredible, <PLAYER>.\n"
	.string "I heard SUICUNE's mystic power\p"
	.string "summons a rainbow-colored Pokémon.\n"
	.string "Maybe, just maybe, what went on today\p"
	.string "will cause that Pokémon to appear.\n"
	.string "I'm going to study the legends more.\p"
	.string "Thanks for showing me that fantastic\n"
	.string "battle.\p"
	.string "Later, <PLAYER>!$"
