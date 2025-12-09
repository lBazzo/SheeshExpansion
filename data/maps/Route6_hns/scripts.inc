Route6_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route6_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route6_EventScript_Pokefan::
	msgbox Route6_Text_PokefanM, MSGBOX_NPC
	end

Route6_EventScript_Sign::
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route6_Text_PokefanM:
	.string "The road is closed until the\n"
	.string "problem at the POWER PLANT is\l"
	.string "solved.$"

Route6_Text_UndergroundPathSign:
	.string "UNDERGROUND PATH\p"
	.string "CERULEAN CITY - VERMILION CITY$"

