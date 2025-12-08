Route11_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route11_OnTransition:
	callnative SetTimeBasedEncounters
	end


Route11_EventScript_Engineer::
	msgbox Route11_Text_Engineer, MSGBOX_NPC
	end

Route11_Text_Engineer:
	.string "I saw a strange POKéMON climbing\n"
	.string "in the trees, but it didn't\l"
	.string "look like MANKEY...$"

Route11_Text_Sign:
	.string "ROUTE 11$"

