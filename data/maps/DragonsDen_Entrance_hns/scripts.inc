.set LOCALID_DRAGONSDEN_SAGE, 1
.set LOCALID_DRAGONSDEN_KIM, 4
.set LOCALID_DRAGONSDEN_SHEGO, 5

DragonsDen_Entrance_hns_MapScripts::
	.byte 0

DragonsDen_Entrance_EventScript_Sage::
	lock
	faceplayer
	goto_if_eq VAR_BLACKTHORN_CITY_STATE, 1, DragonsDen_Entrance_EventScript_SageRefuse
	msgbox BlackthornGrampsGrantsEntryText, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Entrance_EventScript_SageRefuse::
	msgbox BlackthornGrampsRefusesEntryText, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Entrance_Trigger_Sage::
	lock
	turnobject LOCALID_DRAGONSDEN_SAGE, DIR_EAST
	msgbox BlackthornGrampsRefusesEntryText, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_WalkDown1
	waitmovement 0
	turnobject LOCALID_DRAGONSDEN_SAGE, DIR_SOUTH
	release
	end

DragonsDen_Entrance_EventScript_Cybil::
	trainerbattle_single TRAINER_CYBIL DragonsDen_Entrance_Text_CooltrainerfCybilSeen, DragonsDen_Entrance_Text_CooltrainerfCybilBeaten
	msgbox DragonsDen_Entrance_Text_CooltrainerfCybilAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Entrance_Text_CooltrainerfCybilSeen:
    .string "You look strong.\p"
    .string "Good trainers seek tough\n"
    .string "opponents instinctively.$"

DragonsDen_Entrance_Text_CooltrainerfCybilBeaten:
    .string "Nope! This won't do at all.$"

DragonsDen_Entrance_Text_CooltrainerfCybilAfter:
    .string "We all get better by experiencing\n"
    .string "many battles.\p"
    .string "I battled a lot to become what I\n"
    .string "am today--an elite.$"

@New Stuff 

DragonsDen_Entrance_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA DragonsDen_Entrance_Text_PicnickerDebraSeen, DragonsDen_Entrance_Text_PicnickerDebraBeaten
	msgbox DragonsDen_Entrance_Text_PicnickerDebraAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Entrance_Text_PicnickerDebraSeen:
	.string "I'm so bored. Want to battle?$"

DragonsDen_Entrance_Text_PicnickerDebraBeaten:
	.string "Yow! You're too strong!$"

DragonsDen_Entrance_Text_PicnickerDebraAfter:
	.string "Now I'm bored again.$"







DragonsDen_Entrance_EventScript_B2B::
	lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
    playse SE_PIN
	applymovement LOCALID_DRAGONSDEN_KIM, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 7, DragonsDen_Entrance_EventScript_AdjustKim
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox DragonsDen_Entrance_Text_CooltrainerKim_Before, MSGBOX_DEFAULT
	playbgm MUS_HG_DRAGONS_DEN, TRUE
	trainerbattle_no_intro TRAINER_KIM_P, DragonsDen_Entrance_Text_CooltrainerKim_Beaten
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	playse SE_PIN
	applymovement LOCALID_DRAGONSDEN_SHEGO, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 6, DragonsDen_Entrance_EventScript_AdjustShego
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox DragonsDen_Entrance_Text_CooltrainerShego_Before, MSGBOX_DEFAULT
	playbgm MUS_HG_DRAGONS_DEN, TRUE
	trainerbattle_no_intro TRAINER_SHEGO, DragonsDen_Entrance_Text_CooltrainerShego_Beaten
	setvar VAR_TERA_B2B_COUNTER, 5
	release
	end

DragonsDen_Entrance_EventScript_AdjustKim::
	applymovement LOCALID_DRAGONSDEN_KIM, Common_Movement_WalkDown1
	waitmovement 0
	return

DragonsDen_Entrance_EventScript_Kim::
	lock
	faceplayer
	msgbox DragonsDen_Entrance_Text_CooltrainerKim_After, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Entrance_EventScript_Shego::
	lock
	faceplayer
	msgbox DragonsDen_Entrance_Text_CooltrainerShego_After, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Entrance_Text_CooltrainerKim_Before:
	.string "So what's the sitch?$"

DragonsDen_Entrance_Text_CooltrainerKim_Beaten:
	.string "Wow, you're trouble!$"

DragonsDen_Entrance_Text_CooltrainerKim_After:
	.string "If you wanna reach me, just call me!\n"
	.string "Or beep me! Either works!$"

DragonsDen_Entrance_EventScript_AdjustShego::
	applymovement LOCALID_DRAGONSDEN_SHEGO, Common_Movement_WalkUp1
	waitmovement 0
	return

DragonsDen_Entrance_Text_CooltrainerShego_Before:
	.string "Ha! You're toast now!$"

DragonsDen_Entrance_Text_CooltrainerShego_Beaten:
	.string "Blundered it... again...$"

DragonsDen_Entrance_Text_CooltrainerShego_After:
	.string "How could my strategy not have worked?\n"
	.string "I blame Kimmy over there.$"






