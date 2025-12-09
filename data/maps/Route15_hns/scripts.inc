Route15_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route15_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route15_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route15_EventScript_Sign::
	msgbox Route15_Text_Sign, MSGBOX_SIGN
	end

Route15_EventScript_PPup::
	finditem ITEM_PP_UP
	end

Route15_Text_Sign:
	.string "ROUTE 15\p"
	.string "FUCHSIA CITY - LAVENDER TOWN$"

