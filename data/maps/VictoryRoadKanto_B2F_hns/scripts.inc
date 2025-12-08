.set LOCALID_VICTORYROAD_TOPVICTOR, 12
.set LOCALID_VICTORYROAD_LEFTXERXES, 13
.set LOCALID_VICTORYROAD_RIGHTJACOBI, 14

VictoryRoadKanto_B2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoadKanto_B2F_OnTransition
	.byte 0

VictoryRoadKanto_B2F_OnTransition::
	call_if_ge VAR_ALL_B2B_STATE, 14, VictoryRoadKanto_B2F_EventScript_MoveBeatenTrainers
	end

VictoryRoadKanto_B2F_EventScript_MoveBeatenTrainers::
	setobjectxyperm LOCALID_VICTORYROAD_TOPVICTOR, 18, 30
	setobjectxyperm LOCALID_VICTORYROAD_LEFTXERXES, 16, 32
	setobjectxyperm LOCALID_VICTORYROAD_RIGHTJACOBI, 20, 32
	return

VictoryRoadKanto_B2F_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end
VictoryRoadKanto_B2F_EventScript_Item_FullHeal::
	finditem ITEM_FULL_HEAL
	end
VictoryRoadKanto_B2F_EventScript_Item_Potion::
	finditem ITEM_POTION
	end

VictoryRoadKanto_B2F_EventScript_B2B2B::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	playse SE_PIN
	applymovement LOCALID_VICTORYROAD_TOPVICTOR, Common_Movement_ExclamationMark
	delay 60
	msgbox VictoryRoadKanto_B2F_Text_VictorSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, VictoryRoadKanto_B2F_Text_VictorBeaten
	applymovement LOCALID_VICTORYROAD_TOPVICTOR, VictoryRoadKanto_B2F_Movement_VictorBeaten
	waitmovement 0
	applymovement LOCALID_VICTORYROAD_LEFTXERXES, Common_Movement_WalkInPlaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
    waitmovement 0
	msgbox VictoryRoadKanto_B2F_Text_XerxesSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_1, VictoryRoadKanto_B2F_Text_XerxesBeaten
	applymovement LOCALID_VICTORYROAD_LEFTXERXES, VictoryRoadKanto_B2F_Movement_XerxesBeaten
	waitmovement 0
	applymovement LOCALID_VICTORYROAD_RIGHTJACOBI, Common_Movement_WalkInPlaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
    waitmovement 0
	msgbox VictoryRoadKanto_B2F_Text_JacobiSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_1, VictoryRoadKanto_B2F_Text_JacobiBeaten
	applymovement LOCALID_VICTORYROAD_RIGHTJACOBI, VictoryRoadKanto_B2F_Movement_JacobiBeaten
	waitmovement 0
	setobjectxyperm LOCALID_VICTORYROAD_TOPVICTOR, 18, 30
	setobjectxyperm LOCALID_VICTORYROAD_LEFTXERXES, 16, 32
	setobjectxyperm LOCALID_VICTORYROAD_RIGHTJACOBI, 20, 32
	setvar VAR_ALL_B2B_STATE, 14
	release
	end

VictoryRoadKanto_B2F_EventScript_Victor::
	lock
	faceplayer
	msgbox VictoryRoadKanto_B2F_Text_VictorAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

VictoryRoadKanto_B2F_EventScript_Xerxes::
	lock
	faceplayer
	msgbox VictoryRoadKanto_B2F_Text_XerxesAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

VictoryRoadKanto_B2F_EventScript_Jacobi::
	lock
	faceplayer
	msgbox VictoryRoadKanto_B2F_Text_JacobiAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

VictoryRoadKanto_B2F_Movement_VictorBeaten::
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

VictoryRoadKanto_B2F_Movement_XerxesBeaten::
    lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

VictoryRoadKanto_B2F_Movement_JacobiBeaten::
    lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

VictoryRoadKanto_B2F_Text_VictorSeen:
	.string "...\p"
	.string "Sorry, nope. I don't believe it.\p"
	.string "There's no way a trainer like you has\n"
	.string "what it takes to beat the POKéMON\l"
	.string "LEAGUE.\p"
	.string "Think I'm wrong? Then let's see you\n"
	.string "prove it to us, here and now!$"

VictoryRoadKanto_B2F_Text_VictorBeaten:
	.string "H-huh? Wait, that one didn't count!$"

VictoryRoadKanto_B2F_Text_VictorAfter:
	.string "I can admit where I'm wrong. You may not\n"
	.string "project a great aura at first glance,\l"
	.string "but seeing you battle made it painfully\l"
	.string "obvious. You're not just any trainer.\p"
	.string "Go on. See what the POKéMON LEAGUE\n"
	.string "has to offer.$"

VictoryRoadKanto_B2F_Text_XerxesSeen:
	.string "You beat VICTOR? Then you must be\n"
	.string "pretty good. Battle with me next.$"

VictoryRoadKanto_B2F_Text_XerxesBeaten:
	.string "I was right. You are good...$"

VictoryRoadKanto_B2F_Text_XerxesAfter:
	.string "Sometimes, when I'm climbing up the\n"
	.string "ranks in battling, I get the feeling\l"
	.string "that I'm getting worse as time goes on.\p"
	.string "But that's not true. I'm just facing\n"
	.string "greater challenges than before.$"

VictoryRoadKanto_B2F_Text_JacobiSeen:
	.string "Going last is for trainers with the\n"
	.string "toughest mental fortitude.\p"
	.string "Not only do you get the least practice,\n"
	.string "but by the time it's your turn to\l"
	.string "battle, the pressure is at it's highest.\p"
	.string "No matter how good a trainer you are,\n"
	.string "you can't overcome my experience in\l"
	.string "these situations just like that!$"

VictoryRoadKanto_B2F_Text_JacobiBeaten:
	.string "I see. So that's how you do it.$"

VictoryRoadKanto_B2F_Text_JacobiAfter:
	.string "It's true that experience helps you to\n"
	.string "keep calm when things get tough.\p"
	.string "But some people manage to thrive when\n"
	.string "everything is on the line.\p"
	.string "It's just how they're wired.$"

VictoryRoadKanto_B2F_EventScript_Gregory::
	trainerbattle_single TRAINER_GREGORY VictoryRoadKanto_B2F_Text_GentlemanGregorySeen, VictoryRoadKanto_B2F_Text_GentlemanGregoryBeaten
	msgbox VictoryRoadKanto_B2F_Text_GentlemanGregoryAfter, MSGBOX_AUTOCLOSE
	end

VictoryRoadKanto_B2F_EventScript_Vincent::
	trainerbattle_single TRAINER_VINCENT VictoryRoadKanto_B2F_Text_GuitaristVincentSeen, VictoryRoadKanto_B2F_Text_GuitaristVincentBeaten
	msgbox VictoryRoadKanto_B2F_Text_GuitaristVincentAfter, MSGBOX_AUTOCLOSE
	end

VictoryRoadKanto_B2F_Text_GentlemanGregorySeen:
	.string "Let's have a nice, relaxing battle shall\n"
	.string "we? Best of luck to you.$"

VictoryRoadKanto_B2F_Text_GentlemanGregoryBeaten:
	.string "Well, would you look at that?\n"
	.string "I feel refreshed already.$"

VictoryRoadKanto_B2F_Text_GentlemanGregoryAfter:
	.string "It's important to take things slow.\p"
	.string "If you don't, you won't even know what\n"
	.string "you would have missed otherwise.$"

VictoryRoadKanto_B2F_Text_GuitaristVincentSeen:
	.string "Think you can beat me?$"

VictoryRoadKanto_B2F_Text_GuitaristVincentBeaten:
	.string "Ooh, how shocking!$"

VictoryRoadKanto_B2F_Text_GuitaristVincentAfter:
	.string "If only I were on my top game today,\n"
	.string "you would have been toast…$"



