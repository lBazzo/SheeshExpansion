.set LOCALID_NURSE, 1

VioletCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_Pokecenter_OnTransition
	.byte 0

VioletCity_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_VIOLET_CITY
	end

VioletCity_PokemonCenter_EventScript_Aide::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SPINDA, VioletCity_PokemonCenter_EventScript_Aide_Received
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, VioletCity_PokemonCenter_EventScript_AideNoRoom
	msgbox VioletCity_PokeCenter_Text_ElmsAideFavor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_PokemonCenter_EventScript_Aide_Refuse
	goto_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_Aide_Accepted
	release
	end


VioletCity_PokemonCenter_EventScript_AideNoRoom::
	msgbox VioletCity_PokeCenter_Text_ElmsAideNoRoom, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Refuse::
	msgbox VioletCity_PokeCenter_Text_ElmsAideRefuse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_PokemonCenter_EventScript_Aide_Refuse
	goto_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_Aide_Accepted
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Accepted::
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, VioletCity_PokeCenter_Text_ElmsAideFullParty
	@playfanfare MUS_OBTAIN_ITEM
	@message VioletCity_PokeCenter_Text_ReceivedTheEgg
	@waitfanfare
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveEgg, MSGBOX_DEFAULT
	closemessage
	givemon SPECIES_SPINDA, 5
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_SPINDA
	message VioletCity_PokeCenter_Text_ReceivedSpinda
	waitfanfare
	msgbox VioletCity_PokeCenter_Text_Nickname, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_NicknameSpinda
	setflag FLAG_RECEIVED_SPINDA
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveItem, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE_SMALL
	setflag FLAG_HIDE_VIOLET_CITY_AIDE
	setvar VAR_VIOLET_CITY_KIMONO_GIRL, 1
	clearflag FLAG_HIDE_VIOLET_CITY_KIMONO_GIRL
	clearflag FLAG_HIDE_NEWBARKTOWN_LAB_AIDE
	release
	end

VioletCity_PokemonCenter_EventScript_NicknameSpinda::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMonFull
	return

VioletCity_PokemonCenter_EventScript_Aide_Received::
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EVentScript_Kid::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_GameboyKid, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Man::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_Text_BookshelfWoman::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_BooksAreGreat, MSGBOX_DEFAULT
	closemessage
	release
	end


VioletCity_PokeCenter_Text_ElmsAideFavor:
	.string "{PLAYER}, long time, no see.\p"
	.string "PROF.ELM asked me to find you.\p"
	.string "He has another favor to ask.\p"
	.string "Would you take this POKéMON?$"

VioletCity_PokeCenter_Text_ElmsAideNoRoom:
	.string "{PLAYER}, long time, no see.\p"
	.string "PROF.ELM asked me to find you.\p"
	.string "He has another favor to ask.\p"
	.string "Would you take this POKéMON?\p"
	.string "Oh, wait... You need to make room\n"
	.string "in your party first.$"

VioletCity_PokeCenter_Text_ElmsAideGiveEgg:
	.string "{PLAYER}, you're the only person\n"
	.string "we can rely on.$"

VioletCity_PokeCenter_Text_ElmsAideGiveItem:
	.string "Oh, and this might help you, too.$"

VioletCity_PokeCenter_Text_ElmsAideFullParty:
	.string "Oh, no. You can't carry any more\n"
	.string "POKéMON with you.\p"
	.string "I'll wait here while you make\n"
	.string "room for it.$"

VioletCity_PokeCenter_Text_ElmsAideRefuse:
	.string "B-but… PROF.ELM asked for you…$"

VioletCity_PokeCenter_Text_BooksAreGreat:
	.string "While my POKéMON are recovering\n"
	.string "I love to read a good book.$"

VioletCity_PokeCenter_Text_MobileAdapter:
	.string "I just battled a friend in\n"
	.string "CIANWOOD over a link.\p"
	.string "If you connect a MOBILE ADAPTER,\n"
	.string "you can link with a friend far\l"
	.string "away.$"

VioletCity_PokeCenter_Text_GameboyKid:
	.string "A guy named BILL made the\n"
	.string "POKéMON PC storage system.$"

VioletCity_PokeCenter_Text_Gentleman:
	.string "It was around three years ago.\p"
	.string "TEAM ROCKET was up to no good\n"
	.string "with POKéMON.\p"
	.string "But justice prevailed--a young\n"
	.string "kid broke 'em up.$"

VioletCity_PokeCenter_Text_Youngster:
	.string "POKéMON are smart. They won't\n"
	.string "obey a trainer they don't respect.\p"
	.string "Without the right GYM BADGES,\n"
	.string "they will just do as they please.$"

VioletCity_PokeCenter_Text_ReceivedSpinda:
	.string "{PLAYER} received {STR_VAR_1}!$"

VioletCity_PokeCenter_Text_Nickname::
	.string "Would you like to give your\n"
	.string "{STR_VAR_1} a nickname?$"
