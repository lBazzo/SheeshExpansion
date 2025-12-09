.set LOCALID_ILEX_FOREST_FARFETCHD_1, 3
.set LOCALID_ILEX_FOREST_FARFETCHD_2, 29
.set LOCALID_ILEX_FOREST_FARFETCHD_3, 31
.set LOCALID_ILEX_FOREST_FARFETCHD_4, 30
.set LOCALID_ILEX_FOREST_CELEBI, 7
.set LOCALID_ILEX_FOREST_KURT, 32
.set LOCALID_ILEX_FOREST_KIMONO, 34
.set LOCALID_ILEX_FOREST_BUTTERFREE, 33
.set LOCALID_ILEX_FOREST_SECOND_CELEBI, 36
.set LOCALID_ILEX_FOREST_BUGSY, 37

IlexForest_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IlexForest_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

IlexForest_OnTransition: 
	call_if_eq VAR_ILEX_FOREST_FARFETCHD, 1, IlexForest_EventScript_ReenterWhenFarfetchdLeaving
	call_if_eq VAR_ILEX_FOREST_FARFETCHD, 2, IlexForest_EventScript_ReenterDuringCutScene
	call_if_lt VAR_AZALEA_TOWN_STATE, 3, IlexForest_EventScript_MoveBugsy
	callnative SetTimeBasedEncounters
	end	

IlexForest_EventScript_ReenterWhenFarfetchdLeaving::
	setobjectxyperm LOCALID_ILEX_FOREST_FARFETCHD_1, 33, 51
	return

IlexForest_EventScript_ReenterDuringCutScene::
	clearflag FLAG_HIDE_ILEX_FOREST_MASTER
	clearflag FLAG_HIDE_ILEX_FOREST_APPRENTICE
	setobjectxyperm LOCALID_ILEX_FOREST_FARFETCHD_1, 28, 42
	return

IlexForest_EventScript_Apprentice::
	lock
	faceplayer
	goto_if_eq VAR_ILEX_FOREST_FARFETCHD, 2, IlexForest_EventScript_Apprentice2
	goto_if_eq VAR_ILEX_FOREST_FARFETCHD, 3, IlexForest_EventScript_Apprentice2
	msgbox IlexForest_Text_ApprenticeIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_Apprentice2::
	msgbox IlexForest_Text_ApprenticeAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_Boss::
	lock
	faceplayer
	msgbox IlexForest_Text_CharcoalMasterTalkAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_Farfetchd_1A::
	lock
	faceplayer
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Kwaaaa, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	goto_if_eq VAR_ILEX_FOREST_FARFETCHD, 3, IlexForest_EventScript_Farfetchd_Done
	goto_if_eq VAR_ILEX_FOREST_FARFETCHD, 2, IlexForest_EventScript_Farfetchd_Done
	goto_if_eq VAR_ILEX_FOREST_FARFETCHD, 1, IlexForest_EventScript_Farfetchd_Leave
	goto_if_eq VAR_FACING, DIR_SOUTH, IlexForest_EventScript_Farfetchd_1B
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_1, IlexForest_Movement_Farfetchd_1A
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_1
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_1
	@add clockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_2
	addobject LOCALID_ILEX_FOREST_FARFETCHD_2
	release
	end
IlexForest_EventScript_Farfetchd_1B::
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_1, IlexForest_Movement_Farfetchd_1B
	waitmovement 0
	setvar VAR_ILEX_FOREST_FARFETCHD, 1
	setobjectxyperm LOCALID_ILEX_FOREST_FARFETCHD_1, 33, 51
	release
	end

IlexForest_EventScript_Farfetchd_2A::
	lock
	faceplayer
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Kwaaaa, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	goto_if_eq VAR_FACING, DIR_SOUTH, IlexForest_EventScript_Farfetchd_2B
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_2, IlexForest_Movement_Farfetchd_2A
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_2
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_2
	@add clockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_3
	addobject LOCALID_ILEX_FOREST_FARFETCHD_3
	release
	end
IlexForest_EventScript_Farfetchd_2B::
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_2, IlexForest_Movement_Farfetchd_2B
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_2
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_2
	@add counterclockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_1
	addobject LOCALID_ILEX_FOREST_FARFETCHD_1
	release
	end

IlexForest_EventScript_Farfetchd_3A::
	lock
	faceplayer
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Kwaaaa, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	goto_if_eq VAR_FACING, DIR_SOUTH, IlexForest_EventScript_Farfetchd_3B
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_3, IlexForest_Movement_Farfetchd_3A
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_3
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_3
	@add clockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_2
	addobject LOCALID_ILEX_FOREST_FARFETCHD_2
	release
	end
IlexForest_EventScript_Farfetchd_3B::
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_3, IlexForest_Movement_Farfetchd_3B
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_3
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_3
	@add counterclockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_4
	addobject LOCALID_ILEX_FOREST_FARFETCHD_4
	release
	end

IlexForest_EventScript_Farfetchd_4A::
	lock
	faceplayer
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox IlexForest_Text_Kwaaaa, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	goto_if_eq VAR_FACING, DIR_SOUTH, IlexForest_EventScript_Farfetchd_4B
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_4, IlexForest_Movement_Farfetchd_4A
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_4
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_4
	@add clockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_3
	addobject LOCALID_ILEX_FOREST_FARFETCHD_3
	release
	end
IlexForest_EventScript_Farfetchd_4B::
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_4, IlexForest_Movement_Farfetchd_4B
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_4
	removeobject LOCALID_ILEX_FOREST_FARFETCHD_4
	@add counterclockwise farfetchd
	clearflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_1
	addobject LOCALID_ILEX_FOREST_FARFETCHD_1
	release
	end


IlexForest_EventScript_Farfetchd_Leave::
	goto_if_eq VAR_FACING, DIR_EAST, IlexForest_EventScript_Farfetchd_Return
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_1, IlexForest_Movement_Farfetchd_Leave
	waitmovement 0
	setobjectxyperm LOCALID_ILEX_FOREST_FARFETCHD_1, 28, 42
	setvar VAR_ILEX_FOREST_FARFETCHD, 2
	clearflag FLAG_HIDE_ILEX_FOREST_KIMONO
	clearflag FLAG_HIDE_ILEX_FOREST_MASTER
	setflag FLAG_HIDE_AZALEA_TOWN_CUT_MASTER
	addobject 1
	release
	end
IlexForest_EventScript_Farfetchd_Return::
	setvar VAR_ILEX_FOREST_FARFETCHD, 0
	applymovement LOCALID_ILEX_FOREST_FARFETCHD_1, IlexForest_Movement_Farfetchd_Return
	waitmovement 0
	release
	end
IlexForest_EventScript_Farfetchd_Done::
	release
	end

IlexForest_EventScript_TriggerBot::
	lock
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_WalkUp
	waitmovement 0
IlexForest_EventScript_Trigger::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox IlexForest_Text_CharcoalMasterIntro, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_HM_CUT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox IlexForest_Text_CharcoalMasterOutro, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_HM_CUT
	setflag FLAG_HIDE_ILEX_FOREST_MASTER
	setflag FLAG_HIDE_ILEX_FOREST_APPRENTICE
	setflag FLAG_HIDE_ILEX_FOREST_FARFETCHD_1
	setvar VAR_ILEX_FOREST_FARFETCHD, 3
	setvar VAR_AZALEA_TOWN_STATE, 7
	clearflag FLAG_HIDE_AZALEA_TOWN_FARFETCHD
	clearflag FLAG_HIDE_AZALEA_TOWN_CUT_MASTER
	closemessage
	release
	end

IlexForest_EventScript_Picnicker::
	lock
	faceplayer
	msgbox IlexForest_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_BugcatcherWayne::
	trainerbattle_single TRAINER_WAYNE IlexForest_Text_BugCatcherWayneSeen, IlexForest_Text_BugCatcherWayneBeaten
	msgbox IlexForest_Text_BugCatcherWayneAfter, MSGBOX_AUTOCLOSE
	end

IlexForest_EventScript_Shrine::
	lock
	goto_if_eq VAR_AZALEA_TOWN_STATE, 9, IlexForest_EventScript_Celebi_Event
	msgbox IlexForest_Text_Shrine, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_Celebi_Event::
	msgbox IlexForest_Text_ShrineCelebiEvent, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, IlexForest_EventScript_Shrine_Cancel
	msgbox IlexForest_Text_InsertGSBall, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_CELEBI
	addobject LOCALID_ILEX_FOREST_CELEBI
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_ILEX_FOREST_CELEBI, IlexForest_Movement_Celebi1
	waitmovement 0
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_ILEX_FOREST_CELEBI, IlexForest_Movement_Celebi2
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	waitmovement 0
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_ILEX_FOREST_CELEBI, IlexForest_Movement_Celebi3
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_CELEBI, 40
	special BattleSetup_StartLegendaryBattle
waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, IlexForest_EventScript_Shrine_Caught
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ILEX_FOREST_CELEBI
	setflag FLAG_HIDE_CELEBI
	fadescreenswapbuffers FADE_FROM_BLACK
IlexForest_EventScript_Kurt::
	clearflag FLAG_HIDE_ILEX_FOREST_KURT
	addobject LOCALID_ILEX_FOREST_KURT
	applymovement LOCALID_ILEX_FOREST_KURT, IlexForest_Movement_Kurt1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	msgbox IlexForest_Text_KurtCaughtCelebi, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ILEX_FOREST_KURT, IlexForest_Movement_Kurt2
	waitmovement 0
	setflag FLAG_HIDE_ILEX_FOREST_KURT
	removeobject LOCALID_ILEX_FOREST_KURT
	setvar VAR_AZALEA_TOWN_STATE, 10
	release
	end

IlexForest_EventScript_Shrine_Caught::
	setflag FLAG_CAUGHT_CELEBI
	return

IlexForest_EventScript_Shrine_Cancel::
	closemessage
	release
	end


IlexForest_EventScript_SecondCelebi::
	lock
	faceplayer
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_CELEBI, 40
	special BattleSetup_StartLegendaryBattle
waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IlexForest_EventScript_SecondCelebiRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ILEX_FOREST_SECOND_CELEBI
	setflag FLAG_HIDE_ILEX_FOREST_SECOND_CELEBI
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

IlexForest_EventScript_SecondCelebiRan::
	release
	end


IlexForest_EventScript_Sign::
	lock
	msgbox IlexForest_Text_Signpost MSGBOX_SIGN
	closemessage
	release
	end

IlexForest_EventScript_Kimono::
	lock
	playbgm MUS_HG_KIMONO_GIRL, TRUE
	playse SE_PIN
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
	applymovement2 LOCALID_ILEX_FOREST_KIMONO, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_ILEX_FOREST_KIMONO, IlexForest_Movement_Kimono_Girl1
	waitmovement 0
	msgbox IlexForest_Text_Kimono_Girl1, MSGBOX_DEFAULT
	closemessage
	playse SE_M_PETAL_DANCE
	applymovement2 LOCALID_ILEX_FOREST_KIMONO, IlexForest_Movement_Kimono_Girl_Spin
	waitmovement 0
	turnobject LOCALID_ILEX_FOREST_KIMONO, DIR_SOUTH
	msgbox IlexForest_Text_Kimono_Girl2, MSGBOX_YESNO
	closemessage
	msgbox IlexForest_Text_Kimono_Girl3, MSGBOX_DEFAULT
	closemessage
	playfirstmoncry
	applymovement2 OBJ_EVENT_ID_FOLLOWER, IlexForest_Movement_Follower1
	waitmovement 0
	playfirstmoncry
	turnobject LOCALID_ILEX_FOREST_KIMONO DIR_WEST
	msgbox IlexForest_Text_Kimono_Girl4, MSGBOX_DEFAULT
	closemessage 
	turnobject LOCALID_ILEX_FOREST_KIMONO DIR_SOUTH
	delay 16
	msgbox IlexForest_Text_Kimono_Girl5, MSGBOX_DEFAULT
	closemessage
	delay 16
	playfirstmoncry
	applymovement2 OBJ_EVENT_ID_FOLLOWER, IlexForest_Movement_Follower2
	applymovement2 LOCALID_ILEX_FOREST_KIMONO, IlexForest_Movement_Kimono_Girl2
	waitmovement 0
	waitmovement 0
	fadedefaultbgm
	setvar VAR_ILEX_FOREST_FARFETCHD, 4
	setflag FLAG_HIDE_ILEX_FOREST_KIMONO
	removeobject LOCALID_ILEX_FOREST_KIMONO
	playfirstmoncry
	applymovement OBJ_EVENT_ID_FOLLOWER, IlexForest_Movement_Follower3
	waitmovement 0
	playfirstmoncry
	release
	end

IlexForest_EventScript_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

IlexForest_EventScript_Ether::
	finditem ITEM_ETHER
	end

IlexForest_EventScript_FullHeal::
	finditem ITEM_FULL_HEAL
	end

IlexForest_EventScript_SunnyDay::
	finditem ITEM_TM_SUNNY_DAY
	end

IlexForest_Movement_Kimono_Girl1:
	walk_right
	face_down
	step_end

IlexForest_Movement_Kimono_Girl_Spin:
	face_left
	delay_8
	face_up
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_up
	delay_8
	face_right
	delay_8
	face_down
	step_end

IlexForest_Movement_Follower1:
	walk_left
	jump_2_up
	walk_up
	face_right
	jump_in_place_right
	delay 16
	face_left
	jump_in_place_left
	delay 16
	face_right
	step_end

IlexForest_Movement_Follower2:
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

IlexForest_Movement_Kimono_Girl2:
	face_left
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

IlexForest_Movement_Follower3:
	delay 16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	jump_2_down
	walk_right
	face_up
	step_end


IlexForest_Movement_Farfetchd_1A:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
IlexForest_Movement_Farfetchd_1B:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end
IlexForest_Movement_Farfetchd_2A:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end
IlexForest_Movement_Farfetchd_2B:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end
IlexForest_Movement_Farfetchd_3A:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end
IlexForest_Movement_Farfetchd_3B:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end
IlexForest_Movement_Farfetchd_4A:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
IlexForest_Movement_Farfetchd_4B:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

IlexForest_Movement_Farfetchd_Leave:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_down
	step_end
IlexForest_Movement_Farfetchd_Return:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up	
	step_end

IlexForest_Movement_Celebi1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

IlexForest_Movement_Celebi2:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	step_end

IlexForest_Movement_Celebi3:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

IlexForest_Movement_Kurt1:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

IlexForest_Movement_Kurt2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

IlexForest_Text_ApprenticeIntro:
	.string "Oh, man… My boss is going to be\n"
	.string "steaming…\p"
	.string "The FARFETCH'D that CUTS trees\n"
	.string "for charcoal took off on me.\p"
	.string "I can't go looking for it here\n"
	.string "in the ILEX FOREST.\p"
	.string "It's too big, dark and scary\n"
	.string "for me…$"

IlexForest_Text_ApprenticeAfter:
	.string "Wow! Thanks a whole bunch!\p"
	.string "My boss's POKéMON won't obey me\n"
	.string "because I don't have a BADGE.$"

IlexForest_Text_ItsTheMissingPokemon:
	.string "It's the missing POKéMON!$"

IlexForest_Text_Kwaaaa:
	.string "FARFETCH'D: Kwaa!$"

IlexForest_Text_CharcoalMasterIntro:
	.string "Ah! My FARFETCH'D!\p"
	.string "You found it for us, kid?\p"
	.string "Without it, we wouldn't be able\n"
	.string "to CUT trees for charcoal.\p"
	.string "Thanks, kid!\p"
	.string "Now, how can I thank you…\p"
	.string "I know! Here, take this.$"

IlexForest_Text_CharcoalMasterOutro:
	.string "That's the CUT HM.\n"
	.string "Teach that to a POKéMON to clear\l"
	.string "small trees.\p"
	.string "Of course, you have to have the\n"
	.string "GYM BADGE from AZALEA to use it.$"

IlexForest_Text_CharcoalMasterTalkAfter:
	.string "Do you want to apprentice as a\n"
	.string "charcoal maker with me?\p"
	.string "You'll be first-rate in ten years!$"

MoveTutor_Text_HeadbuttTeach:
	.string "What am I doing?\p"
	.string "I'm shaking trees using HEADBUTT.\p"
	.string "Do you think your POKéMON will\n"
	.string "want to HEADBUTT, too?\p"
	.string "I can teach one the move HEADBUTT\n"
	.string "if you'd like. It's fun!$"
	
MoveTutor_Text_HeadbuttWhichMon:
	.string "Ehehe, sure thing! It'd be great if\n"
	.string "the POKéMON looked like me.$"

MoveTutor_Text_HeadbuttDeclined:
	.string "You don't need to be shy about it.\n"
	.string "Let's butt heads!$"

MoveTutor_Text_HeadbuttTaught:
	.string "Rattle trees with HEADBUTT.\n"
	.string "Sometimes, sleeping POKéMON fall out.$"

IlexForest_Text_Lass:
	.string "Did something happen to the\n"
	.string "forest's guardian?$"

IlexForest_Text_Signpost:
	.string "ILEX FOREST is so overgrown with\n"
	.string "trees that you can't see the sky.\p"
	.string "Please watch out for items that may\n"
	.string "have been dropped.$"

IlexForest_Text_Shrine:
	.string "ILEX FOREST SHRINE…\p"
	.string "It's in honor of the forest's\n"
	.string "protector…$"

IlexForest_Text_ShrineCelebiEvent:
	.string "ILEX FOREST SHRINE…\p"
	.string "It's in honor of the forest's\n"
	.string "protector…\p"
	.string "Oh? What is this?\p"
	.string "It's a hole.\n"
	.string "It looks like the GS BALL would fit\l"
	.string "inside it.\p"
	.string "Want to put the GS BALL here?$"

IlexForest_Text_InsertGSBall:
	.string "{PLAYER} put in the GS BALL.$"

IlexForest_Text_KurtCaughtCelebi:
	.string "Whew, wasn't that something!\p"
	.string "{PLAYER}, that was fantastic. Thanks!\p"
	.string "The legends about that SHRINE were\n"
	.string "real after all.\p"
	.string "I feel inspired by what I just saw.\p"
	.string "It motivates me to make better BALLS!\p"
	.string "I'm going!$"

IlexForest_Text_BugCatcherWayneSeen:
	.string "Don't sneak up on me like that!\p"
	.string "You frightened a POKéMON away!$"

IlexForest_Text_BugCatcherWayneBeaten:
	.string "I hadn't seen that POKéMON before…$"

IlexForest_Text_BugCatcherWayneAfter:
	.string "A POKéMON I've never seen before\n"
	.string "fell out of the tree when I used\l"
	.string "HEADBUTT.\p"
	.string "I ought to use HEADBUTT in other\n"
	.string "places too.$"

IlexForest_Text_Kimono_Girl1:
	.string "KIMONO GIRL, KIMONO GIRL, lost and\n"
	.string "all alone. Poor girl lost in the\l"
	.string "dark ILEX FOREST.$"

IlexForest_Text_Kimono_Girl2:
	.string "You remember me from VIOLET CITY?\n"
	.string "You must be imagining.\p"
	.string "Anyway, will you show me how to\n"
	.string "get out of this forest?$"

IlexForest_Text_Kimono_Girl3:
	.string "Me oh my... You are lost yourself,\n"
	.string "aren't you?$"

IlexForest_Text_Kimono_Girl4:
	.string "Wow! Are you going to show me how\n"
	.string "to get out?\p"
	.string "You are such a smart POKéMON!$"

IlexForest_Text_Kimono_Girl5:
	.string "See you.$"

IlexForest_EventScript_MoveBugsy::
	setobjectxyperm LOCALID_ILEX_FOREST_BUGSY, 17, 63
	return

IlexForest_EventScript_Bugsy::
	lock
	faceplayer
	goto_if_le VAR_AZALEA_TOWN_STATE, 2, IlexForest_EventScript_BugsyPreWell
	goto_if_unset FLAG_BUGSY_GIFT_TM, IlexForest_EventScript_BugsyGiftTM
	goto_if_unset FLAG_BUGSY_GIFT_STONE, IlexForest_EventScript_BugsyGiftStone
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsyPreWell::
	msgbox IlexForest_Text_BugsyPreWell, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_BugsyGiftTM::
	msgbox IlexForest_Text_BugsyGiftTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_BULLET_SEED
	setflag FLAG_BUGSY_GIFT_TM
	goto IlexForest_EventScript_BugsyGiftStone

IlexForest_EventScript_BugsyGiftStone::
	msgbox IlexForest_Text_BugsyGiftStone, MSGBOX_DEFAULT
	closemessage
	delay 5
	multichoice 20, 0, MULTI_BUGSY_STONES, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, IlexForest_EventScript_BugsyGiftStoneDeclined
	case 0, IlexForest_EventScript_BugsyWaterStone
	case 1, IlexForest_EventScript_BugsyLeafStone
	case 2, IlexForest_EventScript_BugsyThunderStone
	case 3, IlexForest_EventScript_BugsyShinyStone
	case 4, IlexForest_EventScript_BugsySunStone
	case 5, IlexForest_EventScript_BugsyIceStone
	goto IlexForest_EventScript_BugsyGiftStoneDeclined

IlexForest_EventScript_BugsyGiftStoneDeclined::
	msgbox IlexForest_Text_BugsyGiftStoneDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_EventScript_BugsyWaterStone::
	msgbox IlexForest_Text_BugsyGiftStoneReceived, MSGBOX_DEFAULT
	giveitem ITEM_WATER_STONE
	setflag FLAG_BUGSY_GIFT_STONE
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsyLeafStone::
	msgbox IlexForest_Text_BugsyGiftStoneReceived, MSGBOX_DEFAULT
	giveitem ITEM_LEAF_STONE
	setflag FLAG_BUGSY_GIFT_STONE
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsyThunderStone::
	msgbox IlexForest_Text_BugsyGiftStoneReceived, MSGBOX_DEFAULT
	giveitem ITEM_THUNDER_STONE
	setflag FLAG_BUGSY_GIFT_STONE
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsyShinyStone::
	msgbox IlexForest_Text_BugsyGiftStoneReceived, MSGBOX_DEFAULT
	giveitem ITEM_MOON_STONE
	setflag FLAG_BUGSY_GIFT_STONE
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsySunStone::
	msgbox IlexForest_Text_BugsyGiftStoneReceived, MSGBOX_DEFAULT
	giveitem ITEM_SUN_STONE
	setflag FLAG_BUGSY_GIFT_STONE
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsyIceStone::
	msgbox IlexForest_Text_BugsyGiftStoneReceived, MSGBOX_DEFAULT
	giveitem ITEM_MOON_STONE
	setflag FLAG_BUGSY_GIFT_STONE
	goto IlexForest_EventScript_BugsyCheckOnMisty

IlexForest_EventScript_BugsyCheckOnMisty::
	msgbox IlexForest_Text_BugsyCheckOnMisty, MSGBOX_DEFAULT
	closemessage
	release
	end

IlexForest_Text_BugsyPreWell:
	.string "Hey there! {PLAYER}, is it? I'm BUGSY.\n"
	.string "It's a pleasure to meet you.\p"
	.string "I know it's rude to ask for a favour\n"
	.string "right when you meet someone, but I\l"
	.string "promise it's important!\p"
	.string "TEAM ROCKET has taken over SLOWPOKE\n"
	.string "WELL, and the new GYM LEADER in AZALEA\l"
	.string "TOWN is away right now, so there's no\l"
	.string "one there to stop them.\p"
	.string "I'm worried about if they try to come to\n"
	.string "ILEX FOREST and hurt the POKéMON here\l"
	.string "too, so I've got to stay here and keep\l"
	.string "them safe...\p"
	.string "You seem like a capable trainer. Would\n"
	.string "you be able to beat them in my place?\p"
	.string "...\p"
	.string "Thanks, {PLAYER}! I'm counting on you!$"

IlexForest_Text_BugsyGiftTM:
	.string "Wow, {PLAYER}, you're amazing!\p"
	.string "I mean, I knew you could do it, but you\n"
	.string "should still be very proud!\p"
	.string "I know it's not much compared to what\n"
	.string "you've done for the people and POKéMON\l"
	.string "of AZALEA TOWN, but I want you to have\l"
	.string "this TM.\p"
	.string "It contains U-Turn. It lets you attack\n"
	.string "and then reposition quickly during a\l"
	.string "battle. I'm sure you'll use it well.$"

IlexForest_Text_BugsyGiftStone:
	.string "Say, you're probably going to challenge\n"
	.string "the AZALEA GYM now, right?\p"
	.string "Your POKéMON could maybe use a boost\n"
	.string "from one of these evolution stones.\p"
	.string "Which one would you like?$"

IlexForest_Text_BugsyGiftStoneReceived:
	.string "Okay then, here you go! Just don't tell\n"
	.string "MISTY I gave you this, okay?$"

IlexForest_Text_BugsyCheckOnMisty:
	.string "Not that it's any of my business, but do\n"
	.string "you know how MISTY's getting on?\p"
	.string "The last time I was here, she was a\n"
	.string "little down.\p"
	.string "I tried to cheer her up by explaining to\n"
	.string "her how awesome bug type POKéMON can\l"
	.string "be, and I gave her my little WIMPOD for\l"
	.string "her to keep as a friend, since it's a\l"
	.string "water type too.\p"
	.string "She got mad at me for it though...\p"
	.string "I'm not upset or anything. I just hope\n"
	.string "her and WIMPOD are getting along.$"

IlexForest_Text_BugsyGiftStoneDeclined:
	.string "Oh, you still need time to decide?\n"
	.string "That's okay, I'll wait here for you.$"
