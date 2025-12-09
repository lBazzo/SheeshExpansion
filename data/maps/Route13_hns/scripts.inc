Route13_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route13_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route13_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route13_EventScript_Alex::
	trainerbattle_single TRAINER_ALEX Route13_Text_PokefanmAlexSeen, Route13_Text_PokefanmAlexBeaten
	msgbox Route13_Text_PokefanmAlexAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Joshua::
	trainerbattle_single TRAINER_JOSHUA Route13_Text_PokefanmJoshuaSeen, Route13_Text_PokefanmJoshuaBeaten
	msgbox Route13_Text_PokefanmJoshuaAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_TrainerTips::
	msgbox Route13_Text_TrainerTips, MSGBOX_SIGN
	end

Route13_EventScript_RouteSign::
	msgbox Route13_Text_Sign, MSGBOX_SIGN
	end

Route13_EventScript_DirectionsSign::
	msgbox Route13_Text_DirectionsSign, MSGBOX_SIGN
	end

Route13_Text_PokefanmAlexSeen:
	.string "Bow down before my regal POKéMON!$"

Route13_Text_PokefanmAlexBeaten:
	.string "How… How dare you mock royalty!$"

Route13_Text_PokefanmAlexAfterBattle:
	.string "Doesn't everyone wish to someday\n"
	.string "be a king?$"

Route13_Text_PokefanmJoshuaSeen:
	.string "Nihihi! Would you like to battle\n"
	.string "my PIKACHU gang?$"

Route13_Text_PokefanmJoshuaBeaten:
	.string "PI-PIKACHU!$"

Route13_Text_PokefanmJoshuaAfterBattle:
	.string "You look like you have many\n"
	.string "POKéMON,\p"
	.string "but PIKACHU is still the best.$"

Route13_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Look! Right there, at the left\n"
	.string "side of the post.$"

Route13_Text_Sign:
	.string "ROUTE 13\p"
	.string "NORTH TO SILENCE BRIDGE$"

Route13_Text_DirectionsSign:
	.string "NORTH TO LAVENDER TOWN\p"
	.string "WEST TO FUCHSIA CITY$"

