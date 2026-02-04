.set LOCALID_MTSILVEROUTSIDE_BLACKBELT, 14

MtSilver_Outside_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_Outside_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtSilver_Outside_OnTransition: 
	callnative SetTimeBasedEncounters
	setflag FLAG_VISITED_MT_SILVER
	call_if_set FLAG_MTSILVER_BLACKBELTTALKED, MtSilver_Outside_EventScript_BlackBeltGuardMoveGuard
	end

MtSilver_Outside_EventScript_BlackBeltGuardMoveGuard::
	setobjectxyperm LOCALID_MTSILVEROUTSIDE_BLACKBELT, 16, 8
	return

MtSilver_Outside_EventScript_Sign::
	msgbox MtSilver_Outside_Text_Sign, MSGBOX_SIGN
	end

MtSilver_Outside_Text_Sign:
	.string "MT. SILVER$"

MtSilver_Outside_EventScript_BlackBeltGuard::
	lock 
	faceplayer
	goto_if_set FLAG_MTSILVER_BLACKBELTTALKED, MtSilver_Outside_EventScript_BlackBeltGuardPostSapphireTalked
	checkitem ITEM_SAPPHIRE
	goto_if_eq VAR_RESULT, FALSE, MtSilver_Outside_EventScript_BlackBeltGuardNoSapphire
	msgbox MtSilver_Outside_Text_BlackBeltGuardYouHaveSapphire, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	call_if_eq VAR_TEMP_2, 16, MtSilver_Outside_EventScript_BlackBeltGuardMoveAwayPlayerOnLeft
	call_if_ge VAR_TEMP_2, 17, MtSilver_Outside_EventScript_BlackBeltGuardMoveAwayPlayerOnRight
	setflag FLAG_MTSILVER_BLACKBELTTALKED
	release
	end

MtSilver_Outside_EventScript_BlackBeltGuardNoSapphire::
	msgbox MtSilver_Outside_Text_BlackBeltGuardNoSapphire, MSGBOX_DEFAULT
	closemessage
	release
	end

MtSilver_Outside_EventScript_BlackBeltGuardMoveAwayPlayerOnLeft::
	applymovement LOCALID_MTSILVEROUTSIDE_BLACKBELT, MtSilver_Outside_Movement_BlackBeltGuardPlayerOnLeft
	waitmovement 0
	return

MtSilver_Outside_Movement_BlackBeltGuardPlayerOnLeft::
	walk_right
	face_down
	step_end

MtSilver_Outside_EventScript_BlackBeltGuardMoveAwayPlayerOnRight::
	applymovement LOCALID_MTSILVEROUTSIDE_BLACKBELT, MtSilver_Outside_Movement_BlackBeltGuardPlayerOnRight
	waitmovement 0
	return

MtSilver_Outside_Movement_BlackBeltGuardPlayerOnRight::
	walk_left
	face_down
	step_end

MtSilver_Outside_EventScript_BlackBeltGuardPostSapphireTalked::
	msgbox MtSilver_Outside_Text_BlackBeltGuardCarefulOfLegendaries, MSGBOX_DEFAULT
	closemessage
	release
	end

MtSilver_Outside_Text_BlackBeltGuardYouHaveSapphire:
	.string "That Sapphire...\p"
	.string "If you have Spenser's approval, that's\n"
	.string "more than enough for me.\p"
	.string "I grant you permission to enter!$"

MtSilver_Outside_Text_BlackBeltGuardNoSapphire:
	.string "I can't let you through here. The\n"
	.string "Pokémon inside are just too strong.\p"
	.string "Unless you have some proof of your\n"
	.string "strength on you, I cannot let you pass.$"

MtSilver_Outside_Text_BlackBeltGuardCarefulOfLegendaries:
	.string "I want a legendary too...$"
