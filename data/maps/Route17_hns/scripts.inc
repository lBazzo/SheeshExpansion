Route17_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route17_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route17_EventScript_Charles::
	trainerbattle_single TRAINER_CHARLES Route17_Text_BikerCharlesSeen, Route17_Text_BikerCharlesBeaten
	msgbox Route17_Text_BikerCharlesAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_Text_BikerCharlesSeen:
	.string "We're fearless highway stars!$"

Route17_Text_BikerCharlesBeaten:
	.string "Arrrgh! Crash and burn!$"

Route17_Text_BikerCharlesAfterBattle:
	.string "Reckless driving causes accidents!\n"
	.string "Take it easy!$"

