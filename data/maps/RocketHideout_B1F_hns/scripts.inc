.set LOCALID_ROCKETHIDEOUT_GRUNTM1, 1
.set LOCALID_ROCKETHIDEOUT_GRUNTM2, 2
.set LOCALID_ROCKETHIDEOUT_GRUNTM3, 3
.set LOCALID_ROCKETHIDEOUT_GRUNTM4, 4

RocketHideout_B1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_OnLoad
	.byte 0

RocketHideout_B1F_OnLoad::
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_1, 2, RocketHideout_B1F_EventScript_SetStatue1
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_2, 2, RocketHideout_B1F_EventScript_SetStatue2
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_3, 2, RocketHideout_B1F_EventScript_SetStatue3
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_4, 2, RocketHideout_B1F_EventScript_SetStatue4
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_5, 2, RocketHideout_B1F_EventScript_SetStatue5
	end

RocketHideout_B1F_EventScript_SetStatue1::
	setmetatile 40, 1, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue2::
	setmetatile 27, 19, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue3::
	setmetatile 45, 6, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue4::
	setmetatile 45, 19, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue5::
	setmetatile 27, 19, 0x2A9, TRUE
	return

RocketHideout_B1F_TriggerTest::
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	clearflag FLAG_ROCKETHIDEOUT_SWITCH
	clearflag FLAG_HIDE_ROCKETHIDEOUT2_LANCE_DRAGONITE
	clearflag FLAG_HIDE_ROCKETHIDEOUT2_GATE
	setflag FLAG_HIDE_ROCKETHIDEOUT3_SILVER
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_GATE
	clearflag FLAG_GOT_PASSWORD_FROM_ETO
	clearflag FLAG_GOT_PASSWORD_FROM_GRUNTF 
	setvar VAR_ROCKET_PASSWORD, 0
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_MURKROW
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_GIOVANNI
	setflag FLAG_HIDE_ROCKETHIDEOUT3_PETREL
	setflag FLAG_HIDE_ROCKETHIDEOUT2_MURKROWSTAIRS
	setflag FLAG_HIDE_ROCKETHIDEOUT2_MURKROWGATE
	setflag FLAG_HIDE_ROCKETHIDEOUT3_MURKROWSTAIRS
	setflag FLAG_HIDE_ROCKETHIDEOUT2_ARIANA_AND_GRUNT
	setvar VAR_TEMP_3, 1
	end

RocketHideout_B1F_EventScript_SpawnGruntLeft::
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	addobject VAR_TEMP_0
	return

RocketHideout_B1F_EventScript_SpawnGruntRight::
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	addobject VAR_TEMP_0
	return

RocketHideout_B1F_EventScript_HeightAdjust::
	applymovement VAR_TEMP_0, Common_Movement_WalkDown1
	waitmovement 0
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue1::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM1
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 1
	end

RocketHideout_B1F_Trigger_Statue1::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM1
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 40, 1, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue2::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM2
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 1
	end

RocketHideout_B1F_Trigger_Statue2::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM2
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 27, 19, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue3::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM3
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 1
	end

RocketHideout_B1F_Trigger_Statue3::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM3
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 45, 6, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue4::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 1
	end

RocketHideout_B1F_Trigger_Statue4::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 45, 19, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue5::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 1
	end

RocketHideout_B1F_Trigger_Statue5::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 27, 19, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	


RocketHideout_B1F_Trigger_StatueGruntLeft::
	playse SE_WARP_IN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_2, 4, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 9, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 22, RocketHideout_B1F_EventScript_HeightAdjust
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox RocketHideout_B1F_Text_CameraGrunt1Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_17, RocketHideout_B1F_Text_CameraGrunt1Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	delay 55
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	msgbox RocketHideout_B1F_Text_CameraGrunt2Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_18, RocketHideout_B1F_Text_CameraGrunt2Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	removeobject VAR_TEMP_0
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM3
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM1
	return

RocketHideout_B1F_Trigger_StatueGruntRight::
	playse SE_WARP_IN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_2, 4, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 9, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 22, RocketHideout_B1F_EventScript_HeightAdjust
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox RocketHideout_B1F_Text_CameraGrunt3Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_17, RocketHideout_B1F_Text_CameraGrunt3Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	delay 55
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkNormalLeft
	waitmovement 0
	msgbox RocketHideout_B1F_Text_CameraGrunt4Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_18, RocketHideout_B1F_Text_CameraGrunt4Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkNormalRight
	waitmovement 0
	delay 55
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkSlowLeft
	waitmovement 0
	msgbox RocketHideout_B1F_Text_CameraGrunt5Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_19, RocketHideout_B1F_Text_CameraGrunt5Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkSlowRight
	waitmovement 0
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	removeobject VAR_TEMP_0
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM3
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM1
	return

RocketHideout_B1F_Movement_GruntWalkRight:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

RocketHideout_B1F_Movement_GruntWalkLeft:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RocketHideout_B1F_Movement_GruntWalkNormalRight:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RocketHideout_B1F_Movement_GruntWalkNormalLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RocketHideout_B1F_Movement_GruntWalkSlowRight:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

RocketHideout_B1F_Movement_GruntWalkSlowLeft:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

RocketHideout_B1F_Text_CameraGrunt1Seen:
    .string "Hey!\n"
    .string "Intruder alert!$"

RocketHideout_B1F_Text_CameraGrunt2Seen:
    .string "It's my turn! There's no escape!$"

RocketHideout_B1F_Text_CameraGrunt3Seen:
    .string "I'm the fastest of the Grunt Trio!\p"
	.string "I'll end this battle before my brothers\n"
	.string "even catch up!$"

RocketHideout_B1F_Text_CameraGrunt4Seen:
    .string "We're the Grunt Tri- hey, wait a minute,\n"
	.string "where's the fast Grunt?\p"
	.string "Did he lose already?$"

RocketHideout_B1F_Text_CameraGrunt5Seen:
    .string "Hey, no one's here yet.\p"
	.string "Does that mean...?\p" 
	.string "Uh, well, in that case, I should...\p"
	.string "I'm the fastest of the Grunt Trio!\n"
	.string "I'll end this battle before...\l"
	.string "Uhhhh...\p"
	.string "Give me a second, would you? I'm not\n"
	.string "good at thinking on my feet...$"

RocketHideout_B1F_Text_CameraGrunt1Beaten:
    .string "Dang… I failed…$"

RocketHideout_B1F_Text_CameraGrunt2Beaten:
    .string "Surveillance cams are in the\n"
    .string "POKéMON statues.\p"
    .string "We'll keep appearing until you\n"
    .string "beat us all.$"

RocketHideout_B1F_Text_CameraGrunt3Beaten:
    .string "Turns out I'm the fastest at losing\n"
    .string "too...$"

RocketHideout_B1F_Text_CameraGrunt4Beaten:
    .string "I don't believe this. And how is that\n"
	.string "last loafer still not here yet?\p"
	.string "We even gave him a head start!$"

RocketHideout_B1F_Text_CameraGrunt5Beaten:
    .string "Oh jeez...\n"
	.string "I wasn't ready to battle either.\p"
	.string "My brothers are gonna yell at me again\n"
	.string "when they get here...$"

RocketHideout_B1F_EventScript_TrainerJed::
	trainerbattle_single TRAINER_JED RocketHideout_B1F_Text_ScientistJedSeen, RocketHideout_B1F_Text_ScientistJedBeaten
	msgbox RocketHideout_B1F_Text_ScientistJedAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_Text_ScientistJedSeen:
    .string "This was once a ninja hideout.\p"
    .string "There are traps to confound\n"
    .string "intruders like you.$"

RocketHideout_B1F_Text_ScientistJedBeaten:
    .string "I get it…$"

RocketHideout_B1F_Text_ScientistJedAfter:
    .string "All right. I'll divulge a secret\n"
    .string "about our hideout.\p"
    .string "That thing on the floor at the\n"
    .string "end is a warp panel.\p"
    .string "If you step on it, you'll be\n"
    .string "warped back to the entrance.$"

RocketHideout_B1F_Text_GruntM16Seen:
    .string "Heheh. Feeling lucky, punk?$"

RocketHideout_B1F_Text_GruntM16Beaten:
    .string "Kaboom!$"

RocketHideout_B1F_Text_GruntM16After:
    .string "I don't even know where the traps\n"
    .string "are planted.\p"
    .string "You'll just have to collect your\n"
    .string "courage and walk.$"

RocketHideout_B1F_EventScript_Rocket16::
	trainerbattle_single TRAINER_GRUNT_13 RocketHideout_B1F_Text_GruntM16Seen, RocketHideout_B1F_Text_GruntM16Beaten
	msgbox RocketHideout_B1F_Text_GruntM16After, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Item_BigNugget::
	finditem ITEM_BIG_NUGGET
	end

RocketHideout_B1F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

RocketHideout_B1F_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

RocketHideout_B1F_EventScript_Persian::
	msgbox RocketHideout_B1F_Text_SecurityCameraStatue, MSGBOX_NPC
	end

RocketHideout_B1F_Text_SecurityCameraStatue:
    .string "It's a PERSIAN statue…$"

RocketHideout_B1F_EventScript_DummyPanel::
	msgbox RocketHideout_B1F_Text_NothingThere, MSGBOX_SIGN
	end

RocketHideout_B1F_EventScript_Switch::
	lock
	goto_if_set FLAG_ROCKETHIDEOUT_SWITCH, RocketHideout_B1F_EventScript_TurnOffSwitch
	msgbox RocketHideout_B1F_Text_SecretSwitch, MSGBOX_DEFAULT
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 2
	setmetatile 40, 1, 0x2A9, TRUE
	setmetatile 27, 19, 0x2A9, TRUE
	setmetatile 45, 6, 0x2A9, TRUE
	setmetatile 45, 19, 0x2A9, TRUE
	setmetatile 27, 19, 0x2A9, TRUE
	special DrawWholeMapView
	setflag FLAG_ROCKETHIDEOUT_SWITCH
	release
	end

RocketHideout_B1F_EventScript_TurnOffSwitch::
	msgbox RocketHideout_B1F_Text_SwitchOff, MSGBOX_DEFAULT
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 0
	setmetatile 40, 1, 0x2A8, TRUE
	setmetatile 27, 19, 0x2A8, TRUE
	setmetatile 45, 6, 0x2A8, TRUE
	setmetatile 45, 19, 0x2A8, TRUE
	setmetatile 27, 19, 0x2A8, TRUE
	special DrawWholeMapView
	clearflag FLAG_ROCKETHIDEOUT_SWITCH
	release
	end

RocketHideout_B1F_Text_NothingThere:
	.string "A strange panel... Nothing here.$"

RocketHideout_B1F_Text_SecretSwitch:
    .string "A secret switch! Better press it.$"

RocketHideout_B1F_Text_SwitchOff:
    .string "The switch is turned off.$"

RocketHideout_B1F_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE, RocketHideout_B1F_Text_BikerDwayneSeen, RocketHideout_B1F_Text_BikerDwayneBeaten
	msgbox RocketHideout_B1F_Text_BikerDwayneAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Harris::
	trainerbattle_single TRAINER_HARRIS, RocketHideout_B1F_Text_BikerHarrisSeen, RocketHideout_B1F_Text_BikerHarrisBeaten
	msgbox RocketHideout_B1F_Text_BikerHarrisAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Zeke::
	trainerbattle_single TRAINER_ZEKE, RocketHideout_B1F_Text_BikerZekeSeen, RocketHideout_B1F_Text_BikerZekeBeaten
	msgbox RocketHideout_B1F_Text_BikerZekeAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_Text_BikerDwayneSeen:
	.string "Of course they give me the guard post\n"
	.string "right next to the surveillance statue.\p"
	.string "Now I can't even use my phone down\n"
	.string "here.\p"
	.string "Do you have any idea how boring it is\n"
	.string "just sitting around waiting for an\l"
	.string "intruder to show up?$"

RocketHideout_B1F_Text_BikerDwayneBeaten:
	.string "Well, that killed some time at least...$"

RocketHideout_B1F_Text_BikerDwayneAfter:
	.string "You know, I guess our boss doesn't care\n"
	.string "about us enough to even get mad if I\l"
	.string "slack off on company time\p"
	.string "That's it. Time to reignite my Words With\n"
	.string "Friends rivalry with Grunt 8!$"

RocketHideout_B1F_Text_BikerHarrisSeen:
	.string "Man... can't you see I'm busy here?\n"
	.string "Why'd you have to show up now?$"

RocketHideout_B1F_Text_BikerHarrisBeaten:
	.string "Great. Now I lost my train of thought.$"

RocketHideout_B1F_Text_BikerHarrisAfter:
	.string "Hey kid. Eight letter word beginning\n"
	.string "with the letter 'I'. Got any ideas?\p"
	.string "'Ignorant'?\p"
	.string "Pfft. Yeah. Like that's a real word. You\n"
	.string "think I was born yesterday or what?$"

RocketHideout_B1F_Text_BikerZekeSeen:
	.string "BOO!\p"
	.string "Bet you weren't expecting to be\n"
	.string "spotted the moment you walked in!$"

RocketHideout_B1F_Text_BikerZekeBeaten:
	.string "Oh... I guess you were expecting it.$"

RocketHideout_B1F_Text_BikerZekeAfter:
	.string "I'm not sure what's worse.\n"
	.string "Not being able to scare a kid,\l"
	.string "or scaring them and still losing...$"

RocketHideout_B1F_EventScript_Riley::
	trainerbattle_single TRAINER_RILEY RocketHideout_B1F_Text_BikerRileySeen, RocketHideout_B1F_Text_BikerRileyBeaten
	msgbox RocketHideout_B1F_Text_BikerRileyAfterBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_Text_BikerRileySeen:
	.string "Yo! Wanna join TEAM ROCKET? We get to\n"
	.string "wear this cool uniform and stay up late!$"

RocketHideout_B1F_Text_BikerRileyBeaten:
	.string "Aw man, but I need to recruit more\n"
	.string "members, or my savings are toast!$"

RocketHideout_B1F_Text_BikerRileyAfterBattle:
	.string "If I just get two more people to join,\n"
	.string "and they get two more people to join\l"
	.string "too, then I'll be rich!\p"
	.string "That's what ARCHER told me, at least.\p"
	.string "Why would a guy successful enough to\n"
	.string "to lead his own organisation lie?$"

RocketHideout_B1F_EventScript_Ross::
	trainerbattle_single TRAINER_ROSS RocketHideout_B1F_Text_ScientistRossSeen, RocketHideout_B1F_Text_ScientistRossBeaten
	msgbox RocketHideout_B1F_Text_ScientistRossAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_Text_ScientistRossSeen:
    .string "I used to work for SILPH, but now\n"
    .string "I run research for TEAM ROCKET.\p"
    .string "A meddlesome child like you needs\n"
    .string "to be punished.$"

RocketHideout_B1F_Text_ScientistRossBeaten:
    .string "A mere tactical error cost me…$"

RocketHideout_B1F_Text_ScientistRossAfter:
    .string "A radio signal that drives\n"
    .string "POKéMON mad…\p"
    .string "My experiment is a complete\n"
    .string "success.\p"
    .string "My promotion is assured. This\n"
    .string "loss means absolutely nothing.$"

RocketHideout_B1F_EventScript_Mitch::
	trainerbattle_single TRAINER_MITCH RocketHideout_B1F_Text_ScientistMitchSeen, RocketHideout_B1F_Text_ScientistMitchBeaten
	msgbox RocketHideout_B1F_Text_ScientistMitchAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_Text_ScientistMitchSeen:
    .string "I don't care that POKéMON are hurt\n"
    .string "by our experiment.$"

RocketHideout_B1F_Text_ScientistMitchBeaten:
    .string "Thinking is my strong suit, not\n"
    .string "battling.$"

RocketHideout_B1F_Text_ScientistMitchAfter:
    .string "If we turn up the power of our\n"
    .string "radio signal for broadcast\l"
    .string "nationwide…\p"
    .string "The very thought excites me!$"
