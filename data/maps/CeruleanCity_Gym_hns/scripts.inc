.set LOCALID_CERULEAN_GYM_ROCKET, 5

CeruleanCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeruleanCity_Gym_OnFrame
	.byte 0

CeruleanCity_Gym_OnFrame::
	map_script_2 VAR_KANTO_ROCKET_STORY_STATE, 2,  CeruleanCity_Gym_EventScript_RocketGrunt
	map_script_2 VAR_TEMP_0, 0,  CeruleanCity_Gym_EventScript_TryMachinePart
	.2byte 0

CeruleanCity_Gym_EventScript_RocketGrunt::
	lock
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntBumpPlayer
	delay 20
	playse SE_BANG
	waitmovement 0
	
	msgbox CeruleanGym_Text_GruntIntro, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_CERULEAN_GYM_ROCKET, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntWalkBack
	waitmovement 0
	msgbox CeruleanGym_Text_GruntBigMistake, MSGBOX_DEFAULT
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntWalkToPlayerAgain
	waitmovement 0
	msgbox CeruleanGym_Text_GruntBye, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Gym_Movement_PlayerSlide
	delay 10
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntLeave
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_CERULEAN_GYM_ROCKET
	removeobject LOCALID_CERULEAN_GYM_ROCKET
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_CERULEAN_CAPE_ROCKET
	setvar VAR_KANTO_ROCKET_STORY_STATE, 3
	release
	end

CeruleanCity_Gym_EventScript_TryMachinePart::
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 5, CeruleanCity_Gym_EventScript_MachinePart
	setvar VAR_TEMP_0, 1
	end

CeruleanCity_Gym_EventScript_MachinePart::
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CeruleanCity_Movement_CameraPanUp
	waitmovement 0
	delay 30
	setvar VAR_0x8004, 5  @ x
	setvar VAR_0x8005, 13  @ y
	playse SE_PIN
	setvar VAR_0x8006, 0
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
	waitfieldeffect FLDEFF_SPARKLE
	delay 65
	applymovement OBJ_EVENT_ID_CAMERA, CeruleanCity_Movement_CameraPanDown
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_TEMP_0, 1
	end

CeruleanCity_Gym_EventScript_MachinePartItem::
	goto_if_lt VAR_KANTO_ROCKET_STORY_STATE, 5, CeruleanCity_Gym_EventScript_DoNothing
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 6, CeruleanCity_Gym_EventScript_DoNothing
	finditem ITEM_MACHINE_PART
	setvar VAR_KANTO_ROCKET_STORY_STATE, 6
	setflag FLAG_HIDDEN_ITEM_MACHINE_PART
	end

CeruleanCity_Gym_EventScript_DoNothing::
	end

CeruleanCity_Movement_CameraPanUp:
	walk_up
	walk_up
	walk_up
	step_end

CeruleanCity_Movement_CameraPanDown:
	walk_down
	walk_down
	walk_down
	step_end

CeruleanCity_Gym_Movement_GruntBumpPlayer:
	walk_fast_down
	walk_fast_down
	walk_in_place_fast_down
	lock_facing_direction
	jump_up
	unlock_facing_direction
	delay_16
	walk_down
	step_end

CeruleanCity_Gym_Movement_GruntWalkBack:
	lock_facing_direction
	walk_slow_up
	walk_slow_up
	unlock_facing_direction
	step_end

CeruleanCity_Gym_Movement_GruntWalkToPlayerAgain:
	walk_down
	walk_down
	step_end

CeruleanCity_Gym_Movement_PlayerSlide:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

CeruleanCity_Gym_Movement_GruntLeave:
	walk_fast_down
	walk_in_place_fast_down
	step_end

CeruleanCity_Gym_EventScript_Statue::
	lockall
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeruleanCity_Gym_Text_GymStatue
	releaseall
	end

CeruleanCity_Gym_EventScript_StatueDuringRocket::
	msgbox CeruleanGym_Text_Note, MSGBOX_SIGN
	end 

CeruleanCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeruleanGym_EventScript_Diana::
	trainerbattle_single TRAINER_DIANA CeruleanGym_Text_SwimmerfDianaSeen, CeruleanGym_Text_SwimmerfDianaBeaten
	msgbox CeruleanGym_Text_SwimmerfDianaAfter, MSGBOX_AUTOCLOSE
	end

CeruleanGym_EventScript_Briana::
	trainerbattle_single TRAINER_BRIANA CeruleanGym_Text_SwimmerfBrianaSeen, CeruleanGym_Text_SwimmerfBrianaBeaten
	msgbox CeruleanGym_Text_SwimmerfBrianaAfter, MSGBOX_AUTOCLOSE
	end

CeruleanGym_EventScript_Parker::
	trainerbattle_single TRAINER_PARKER CeruleanGym_Text_SwimmermParkerSeen, CeruleanGym_Text_SwimmermParkerBeaten
	msgbox CeruleanGym_Text_SwimmermParkerAfter, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_AZALEA_TOWN_GYM, CeruleanCity_Gym_EventScript_GymGuyAfter
	msgbox CeruleanGym_Text_GuideIntro, MSGBOX_NPC
	end

CeruleanCity_Gym_EventScript_GymGuyAfter::
	msgbox CeruleanGym_Text_GuideWin, MSGBOX_NPC
	end

CeruleanCity_Gym_Text_GymStatue::
    .string "AZALEA POKéMON GYM\n"
    .string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "DEEZ, DOZE$"

CeruleanCity_Gym_Text_GymStatuePlayerWon::
    .string "AZALEA POKéMON GYM\n"
    .string "LEADER: MISTY\p"
    .string "WINNING TRAINERS:\n"
	.string "DEEZ, DOZE, {PLAYER}$"

CeruleanGym_Text_Note:
	.string "Sorry, I'll be out for a while.\n"
	.string "MISTY, GYM LEADER\p"
	.string "Since MISTY's out, we'll be away\n"
	.string "too.\l"
	.string "GYM TRAINERS$"


CeruleanCity_Gym_EventScript_Misty::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_AZALEA_TOWN_GYM, CeruleanCity_Gym_EventScript_Misty_Defeated
	msgbox CeruleanGym_Text_MistyIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MISTY, CeruleanGym_Text_MistyWinLoss
	message AzaleaTown_Gym_Text_ReceivedHiveBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox AzaleaTown_Gym_Text_HiveBadgeSpeechMisty, MSGBOX_DEFAULT
	setflag FLAG_BADGE02_GET
	setflag FLAG_DEFEATED_AZALEA_TOWN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	msgbox CeruleanGym_Text_MistyTm, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	giveitem ITEM_TM_WATER_PULSE
	setvar VAR_AZALEA_TOWN_STATE, 5
	closemessage
	setflag FLAG_HIDE_AZALEA_TOWN_FARFETCHD
	setflag FLAG_GET_HEADBUTT
	clearflag FLAG_HIDE_ILEX_FOREST_APPRENTICE
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_1
	closemessage
	release
	end

AzaleaTown_Gym_Text_ReceivedHiveBadge:
	.string "{PLAYER} received HIVEBADGE.$"

AzaleaTown_Gym_Text_HiveBadgeSpeechMisty:
	.string "Sorry. I lost my cool there.\p"
	.string "You know, if I get to battle strong\n"
	.string "trainers like you, then running this gym\l"
	.string "isn't so bad.\p"
	.string "Do you know the benefits\n"
	.string "of the HIVEBADGE?\p"
	.string "If you have it, POKéMON up\n"
	.string "to L30 will obey you,\l"
	.string "even traded ones.\p"
	.string "POKéMON that know CUT will be able\n"
	.string "to use it outside of battle too.$"

CeruleanCity_Gym_SetSuicuneScene::
	setvar VAR_SUICUNE_ENCOUNTERS, 6
	clearflag FLAG_HIDE_ROUTE25_SUICUNE
	return

CeruleanCity_Gym_EventScript_Misty_Defeated::
	msgbox CeruleanGym_Text_MistyFightDone, MSGBOX_DEFAULT
	closemessage
	release
	end

CeruleanGym_Text_GruntIntro:
	.string "Oops! I so sorry! You not hurt,\n"
	.string "okay?\p"
	.string "I very busy. No time for talking\n"
	.string "with you. Not good for me if\l"
	.string "seen by somebody.$"

CeruleanGym_Text_GruntBigMistake:
	.string "Oh no! You seen me already!\n"
	.string "I make big mistake!$"

CeruleanGym_Text_GruntBye:
	.string "Hey, you! Forget you see me,\n"
	.string "okay?\p"
	.string "You see, hear, know nothing,\p"
	.string "okay? Bye, kid! Nothing!\p"
	.string "Bye-bye a go-go!$"

CeruleanGym_Text_Note1:
	.string "Sorry, I'll be out for a while.\n"
	.string "MISTY, GYM LEADER\p"
	.string "Since MISTY's out, we'll be away\n"
	.string "too. GYM TRAINERS$"

CeruleanGym_Text_MistyIntro:
	.string "Let me guess. You're here for a badge?\p"
	.string "It's true that I was asked to be the\n"
	.string "new GYM LEADER here, but...\p"
	.string "Ugh! They didn't say anything about all\n"
	.string "the little pests in this place!\p"
	.string "Bugs are one of the three most\n"
	.string "disgusting things in the world!\p"
	.string "Even after all the renovations to the\n"
	.string "GYM, I always feel like there's one of\l"
	.string "them lurking behind me...\p"
	.string "That's it. You want to battle? Fine.\n"
	.string "I'm going to take my anger out on you!$"

CeruleanGym_Text_MistyWinLoss:
	.string "MISTY: You really are good…\p"
	.string "I'll admit that you are skilled…\p"
	.string "Here you go. It's the HIVEBADGE.$"

CeruleanGym_Text_ReceivedBadge:
	.string "{PLAYER} received CASCADEBADGE.$"

CeruleanGym_Text_MistyFightDone:
	.string "By the way...\p"
	.string "Did you see BUGSY on your way here?\p"
	.string "I blew up at him the last time we met\n"
	.string "and feel kind of bad about it.\p"
	.string "He's a good kid...\p"
	.string "If you see him, tell him me and\n"
	.string "GOLISOPOD are doing just fine, alright?$"

CeruleanGym_Text_MistyRematch:
	.string "MISTY: Wow, you're the KANTO\n"
	.string "CHAMPION now!\p"
	.string "That's amazing! You've come a\n"
	.string "long way, {PLAYER}.\p"
	.string "But I'm not backing down.\p"
	.string "Want to have a rematch with me?$"

CeruleanGym_Text_MistyRematchDefeat:
	.string "MISTY: You really are good…$"

CeruleanGym_Text_SwimmerfDianaSeen:
	.string "Let's get on with it!$"

CeruleanGym_Text_SwimmerfDianaBeaten:
	.string "I give up! You're the winner!$"

CeruleanGym_Text_SwimmerfDianaAfter:
	.string "I'll be swimming quietly.$"

CeruleanGym_Text_SwimmerfBrianaSeen:
	.string "Don't let my elegant swimming\n"
	.string "unnerve you.$"

CeruleanGym_Text_SwimmerfBrianaBeaten:
	.string "Ooh, you calmly disposed of me…$"

CeruleanGym_Text_SwimmerfBrianaAfter:
	.string "Don't be too smug about beating\n"
	.string "me.\p"
	.string "MISTY will destroy you if you get\n"
	.string "complacent.$"

CeruleanGym_Text_SwimmermParkerSeen:
	.string "Glub…\p"
	.string "Come and get me!$"

CeruleanGym_Text_SwimmermParkerBeaten:
	.string "This can't be…$"

CeruleanGym_Text_SwimmermParkerAfter:
	.string "MISTY has gotten much better in\n"
	.string "the past few years.\p"
	.string "Don't let your guard down, or\n"
	.string "you'll be crushed!$"

CeruleanGym_Text_GuideIntro:
	.string "Yo! CHAMP in making!\p"
	.string "The new GYM LEADER here, MISTY, uses\n"
	.string "WATER-type POKéMON.\p"
	.string "If you have any GRASS-type or\n"
	.string "ELECTRIC-type POKéMON, now is the time\l"
	.string "to put them to good use!$"

CeruleanGym_Text_GuideWin:
	.string "Hoo, you showed me how tough you\n"
	.string "are.\p"
	.string "As always, that was one heck of a\n"
	.string "great battle!$"

CeruleanGym_Text_MistyTm:
	.string "Here, take this too.\n"
	.string "It's just as good as Bugsy's U-Turn,\l" 
	.string "so promise you'll use it, okay?$"

