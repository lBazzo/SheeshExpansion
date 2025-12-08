.set LOCALID_DRAGONSDEN_SAGE, 1

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
