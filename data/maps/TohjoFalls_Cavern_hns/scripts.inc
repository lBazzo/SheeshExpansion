TohjoFalls_Cavern_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TohjoFalls_Cavern_OnTransition
	.byte 0

TohjoFalls_Cavern_OnTransition::
	goto_if_le VAR_COMPLETED_LUGIA, 2, TohjoFalls_Cavern_EventScript_SetPsyduck
	end

TohjoFalls_Cavern_EventScript_HeartScale::
	finditem ITEM_HEART_SCALE
	end

TohjoFalls_Cavern_EventScript_SetPsyduck::
	clearflag FLAG_HIDE_TOHJO_PSYDUCK
	return

TohjoFalls_Cavern_EventScript_Psyduck::
	lock
	faceplayer
	msgbox TohjoFalls_Cavern_Text_Psyduck, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
	waitmoncry
	release
	end

TohjoFalls_Cavern_Text_Psyduck::
	.string "BAZZO: Trying to skip out on the lore,\n"
	.string "are we?\p"
	.string "I may have ran out of interesting lore\n"
	.string "accurate dialogue to keep you on the\l"
	.string "train tracks of the JOHTO storyline,\l"
	.string "but I have endless patience for dealing\l"
	.string "with gamers like you who ask for devs\l"
	.string "to put more effort into the story or\l"
	.string "complain about everything being in\l"
	.string "Emerald and then skip through\l"
	.string "everything regardless.\p"
	.string "I'll bet you're playing with speedup on\n"
	.string "and have the in-game audio muted now\l"
	.string "as well, right?\p"
	.string "I hope Pokemon Hallways and Corridors\n"
	.string "comes out soon and traps you in it\l"
	.string "forever so you can spend eternity\l"
	.string "thinking about what you tried to do\l"
	.string "here.\p"
	.string "Go back and fight LOOGIA now! QUACK!$"


