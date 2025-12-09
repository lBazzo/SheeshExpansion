Route8_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route8_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route8_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route8_Text_LockedDoor:
	.string "It's locked…$"

Route8_Text_UndergroundPathSign:
	.string "The flyer's torn.\p"
	.string "It's impossible to read…$"
