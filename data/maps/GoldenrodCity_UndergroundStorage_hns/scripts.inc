.set LOCALID_UNDERGROUND_STORAGE_B2B1GRUNTTOP, 12
.set LOCALID_UNDERGROUND_STORAGE_B2B1GRUNTBOT, 11
.set LOCALID_UNDERGROUND_STORAGE_B2B2GRUNTLEFT, 13
.set LOCALID_UNDERGROUND_STORAGE_B2B2GRUNTRIGHT, 14
.set LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTLEFT, 9
.set LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTDOWN, 8
.set LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTRIGHT, 10

GoldenrodCity_UndergroundStorage_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_UndergroundStorage_OnTransition
    .byte 0

GoldenrodCity_UndergroundStorage_OnTransition::
    call_if_ge VAR_ALL_B2B_STATE, 8, GoldenrodCity_UndergroundStorage_EventScript_MoveBeatenGrunts
    end

GoldenrodCity_UndergroundStorage_EventScript_MoveBeatenGrunts::
    setobjectxyperm LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTDOWN, 13, 7
    setobjectxyperm LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTLEFT, 11, 5
    setobjectxyperm LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTRIGHT, 15, 5
    return

GoldenrodCity_UndergroundStorage_EventScript_Director::
    lock
    faceplayer
    checkitem ITEM_CARD_KEY
    goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_UndergroundStorage_EventScript_Director2
    msgbox RadioTowerBasement_Text_DirectorIntro, MSGBOX_DEFAULT
    closemessage
    giveitem ITEM_CARD_KEY
    msgbox RadioTowerBasement_Text_DirectorCardKey, MSGBOX_DEFAULT
    setflag FLAG_HIDE_3F_BLOCKING_ROCKET
    clearflag FLAG_HIDE_3F_B2B2B_ROCKETS
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Director2::
    msgbox RadioTowerBasement_Text_DirectorAfter, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Grunt19::
    trainerbattle_single TRAINER_GRUNT_19, RadioTowerBasement_Text_GruntM24Seen, RadioTowerBasement_Text_GruntM24Beaten
	msgbox RadioTowerBasement_Text_GruntM24After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Grunt12::
    trainerbattle_single TRAINER_GRUNT_12, RadioTowerBasement_Text_GruntM14Seen, RadioTowerBasement_Text_GruntM14Beaten
	msgbox RadioTowerBasement_Text_GruntM14After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Eto::
    trainerbattle_single TRAINER_ETO_3, RadioTowerBasement_Text_GruntM15Seen, RadioTowerBasement_Text_GruntM15Beaten
	msgbox RadioTowerBasement_Text_GruntM15After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_TM_CALM_MIND::
    finditem ITEM_TM_CALM_MIND
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_MaxEther::
    finditem ITEM_MAX_ETHER
    end

RadioTowerBasement_Text_GruntM24Seen:
    .string "How did you get this far?\p"
    .string "I guess it can't be helped. I'll\n"
    .string "dispose of you.$"

RadioTowerBasement_Text_GruntM24Beaten:
    .string "I got disposed of…$"

RadioTowerBasement_Text_GruntM24After:
    .string "TEAM ROCKET will keep going, waiting\n"
    .string "for the return of GIOVANNI.\p"
    .string "We'll do whatever it takes.$"

RadioTowerBasement_Text_GruntM14Seen:
    .string "You're not going any farther!\p"
    .string "I don't show mercy to my enemies,\n"
    .string "not even brats!$"

RadioTowerBasement_Text_GruntM14Beaten:
    .string "Blast it!$"

RadioTowerBasement_Text_GruntM14After:
    .string "I lost…\p"
    .string "Please forgive me, GIOVANNI!$"

RadioTowerBasement_Text_GruntM15Seen:
    .string "Hyuck-hyuck-hyuck! Look who it is!\p"
    .string "Ready? I'm really tough now!$"

RadioTowerBasement_Text_GruntM15Beaten:
    .string "Hyuck-hyuck-hyuck! You're so good!\p"
    .string "This TEAM ROCKET thing is just\n"
    .string "a job, but I can see it hurts others.\p"
    .string "That's it, I'm leaving.\p"
    .string "Thank you so much. Sorry GIOVANNI!$"

RadioTowerBasement_Text_GruntM15After:
    .string "Hyuck-hyuck-hyuck! That was a blast!\n"
    .string "I'll remember you!$"

RadioTowerBasement_Text_DirectorIntro:
    .string "DIRECTOR: Who? What? You came to\n"
    .string "rescue me?\p"
    .string "Thank you!\p"
    .string "The RADIO TOWER!\p"
    .string "What's happening there?\p"
    .string "Taken over by TEAM ROCKET?\p"
    .string "Here. Take this CARD KEY.$"

RadioTowerBasement_Text_DirectorCardKey:
    .string "DIRECTOR: Use that to open the\n"
    .string "shutters on 3F.$"

RadioTowerBasement_Text_DirectorAfter:
    .string "I'm begging you to help.\p"
    .string "There's no telling what they'll do if\n"
    .string "they control the transmitter.\p"
    .string "They may even be able to control\n"
    .string "POKéMON using a special signal!\p"
    .string "You're the only one I can call on.\p"
    .string "Please save the RADIO TOWER…\p"
    .string "And all the POKéMON nationwide!$"

GoldenrodCity_UndergroundStorage_EventScript_B2B1::
	lock
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	playse SE_PIN
	applymovement LOCALID_UNDERGROUND_STORAGE_B2B1GRUNTTOP, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0 
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B1GruntTopPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B1GruntTopBeaten
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	playse SE_PIN
	applymovement LOCALID_UNDERGROUND_STORAGE_B2B1GRUNTBOT, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B1GruntBotPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B1GruntBotBeaten
	setvar VAR_ALL_B2B_STATE, 7
	release
	end

GoldenrodCity_UndergroundStorage_Text_B2B1GruntTopPreFight:
	.string "You may have beaten all the earlier\n"
    .string "grunts, but this time will be\l"
    .string "different... for some reason!$"

GoldenrodCity_UndergroundStorage_Text_B2B1GruntTopBeaten:
	.string "Ow, ow, ow!$"

GoldenrodCity_UndergroundStorage_Text_B2B1GruntTopAfter:
	.string "The expected outcome... No way...$"

GoldenrodCity_UndergroundStorage_Text_B2B1GruntBotPreFight:
	.string "You know what, you actually look pretty\n"
    .string "strong... Any take backsies?$"

GoldenrodCity_UndergroundStorage_Text_B2B1GruntBotBeaten:
	.string "So that's a no...?$"

GoldenrodCity_UndergroundStorage_Text_B2B1GruntBotAfter:
	.string "You know, considering TEAM ROCKET are\n"
	.string "willing to give jobs to guys who can't\l"
	.string "really battle like me, they can't really\l"
    .string "be that evil, right?$"

GoldenrodCity_UndergroundStorage_EventScript_B2B1GruntTop::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B1GruntTopAfter, MSGBOX_DEFAULT
	closemessage
    release
	end

GoldenrodCity_UndergroundStorage_EventScript_B2B1GruntBot::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B1GruntBotAfter, MSGBOX_DEFAULT
	closemessage
    release
	end






GoldenrodCity_UndergroundStorage_EventScript_B2B2::
	lock
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	playse SE_PIN
	applymovement LOCALID_UNDERGROUND_STORAGE_B2B2GRUNTLEFT, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2GruntLeftPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B2GruntLeftBeaten
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	playse SE_PIN
	applymovement LOCALID_UNDERGROUND_STORAGE_B2B2GRUNTRIGHT, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2GruntRightPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B2GruntRightBeaten
	setvar VAR_ALL_B2B_STATE, 8
	release
	end

GoldenrodCity_UndergroundStorage_Text_B2B2GruntLeftPreFight:
	.string "Where's the DIRECTOR?\p"
    .string "What, did you think we'd just direct you\n"
    .string "towards him, or...?$"

GoldenrodCity_UndergroundStorage_Text_B2B2GruntLeftBeaten:
	.string "Hey, why didn't you laugh?\n"
    .string "That was a good one though...$"

GoldenrodCity_UndergroundStorage_Text_B2B2GruntLeftAfter:
	.string "Well, my girlfriend thinks I'm hilarious!\p"
    .string "You wouldn't know her, though.\n"
    .string "She, uh... She lives in GALAR.$"

GoldenrodCity_UndergroundStorage_Text_B2B2GruntRightPreFight:
	.string "ARCHER says we're not allowed to look\n"
    .string "through these big storage boxes,\l"
    .string "and I have no idea why.\p"
    .string "We're already in big trouble if this\n"
    .string "takeover fails, so what's the point in\l"
    .string "being so goody two-shoes about it?$"

GoldenrodCity_UndergroundStorage_Text_B2B2GruntRightBeaten:
	.string "Ah! I can't concentrate! Not knowing\n"
    .string "what's inside them is driving me insane!$"

GoldenrodCity_UndergroundStorage_Text_B2B2GruntRightAfter:
	.string "I really hope they have some POKéMON\n"
	.string "cards inside. Those damn scalpers are\l"
	.string "ruining it for everyone else.\p"
    .string "And apparently we're the criminals!\n"
    .string "Can you believe it?$"

GoldenrodCity_UndergroundStorage_EventScript_B2B2GruntLeft::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2GruntLeftAfter, MSGBOX_DEFAULT
	closemessage
    release
	end

GoldenrodCity_UndergroundStorage_EventScript_B2B2GruntRight::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2GruntRightAfter, MSGBOX_DEFAULT
	closemessage
    release
	end

GoldenrodCity_UndergroundStorage_EventScript_B2B2B::
	lock
	playse SE_PIN
	applymovement LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTDOWN, Common_Movement_ExclamationMark
	delay 60
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownAskIfReady, MSGBOX_DEFAULT
    multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, GoldenrodCity_UndergroundStorage_EventScript_B2B2BDeclined
	case 0, GoldenrodCity_UndergroundStorage_EventScript_B2B2BAccepted
	goto GoldenrodCity_UndergroundStorage_EventScript_B2B2BDeclined
	
GoldenrodCity_UndergroundStorage_EventScript_B2B2BDeclined::
    msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownTooScared, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
    waitmovement 0
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_B2B2BAccepted::
    playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
    msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownConfirmedFight, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownBeaten
    applymovement LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTDOWN, GoldenrodCity_UndergroundStorage_Movement_B2B2BGruntDownBeaten
    waitmovement 0
	applymovement LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTLEFT, Common_Movement_WalkInPlaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
    waitmovement 0
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntLeftPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B2BGruntLeftBeaten
    applymovement LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTLEFT, GoldenrodCity_UndergroundStorage_Movement_B2B2BGruntLeftBeaten
    waitmovement 0
    applymovement LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTRIGHT, Common_Movement_WalkInPlaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
    waitmovement 0
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntRightPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_UndergroundStorage_Text_B2B2BGruntRightBeaten
    applymovement LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTRIGHT, GoldenrodCity_UndergroundStorage_Movement_B2B2BGruntRightBeaten
    waitmovement 0
    setobjectxyperm LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTDOWN, 13, 7
    setobjectxyperm LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTLEFT, 11, 5
    setobjectxyperm LOCALID_UNDERGROUND_STORAGE_B2B2BGRUNTRIGHT, 15, 5
	setvar VAR_ALL_B2B_STATE, 9
	release
	end

GoldenrodCity_UndergroundStorage_Movement_B2B2BGruntDownBeaten::
    lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

GoldenrodCity_UndergroundStorage_Movement_B2B2BGruntLeftBeaten::
    lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

GoldenrodCity_UndergroundStorage_Movement_B2B2BGruntRightBeaten::
    lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownAskIfReady:
    .string "Come for the DIRECTOR, have you?\p"
    .string "Well aren't you adorable, trying to play\n"
    .string "the hero.\p"
    .string "Still feeling brave even though there's\n"
    .string "three of us and only one of you?\p"
    .string "What'll it be, hero?\n"
    .string "Think you can take us all on?$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownTooScared:
    .string "That's right. Just be a good kid, turn\n"
    .string "right back around and pretend you\l"
    .string "didn't see anything here.$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownConfirmedFight:
    .string "Huh? B-but you're outnumbered...\n"
    .string "You're supposed to back down...$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownBeaten:
    .string "You've still got two more of us to go!\n"
    .string "Don't feel cocky yet!$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownAfter:
	.string "I wish I was a hero...$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntLeftPreFight:
	.string "I'm up next! No time to rest!$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntLeftBeaten:
	.string "I guess you can just keep going, huh...?$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntLeftAfter:
	.string "Man, do we just suck or what?$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntRightPreFight:
	.string "Ack! It's my turn? I didn't think anyone\n"
    .string "would get this far, so I didn't really\l"
    .string "practice properly!$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntRightBeaten:
	.string "Oh. I wish I trained a little harder now.$"

GoldenrodCity_UndergroundStorage_Text_B2B2BGruntRightAfter:
	.string "The DIRECTOR is lucky he has people\n"
	.string "like you willing to fight for him.\p"
	.string "If someone kidnapped me, I think I'd\n"
    .string "just get left there...$"

GoldenrodCity_UndergroundStorage_EventScript_B2B2BGruntDown::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntDownAfter, MSGBOX_DEFAULT
	closemessage
	end

GoldenrodCity_UndergroundStorage_EventScript_B2B2BGruntLeft::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntLeftAfter, MSGBOX_DEFAULT
	closemessage
	end

GoldenrodCity_UndergroundStorage_EventScript_B2B2BGruntRight::
	lock
    faceplayer
	msgbox GoldenrodCity_UndergroundStorage_Text_B2B2BGruntRightAfter, MSGBOX_DEFAULT
	closemessage
	end






