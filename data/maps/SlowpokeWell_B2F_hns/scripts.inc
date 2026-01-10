.set LOCALID_WELL_SLOWKING, 1
.set LOCALID_WELL_TUTOR, 3
.set LOCALID_WELL_BONSLY, 4

SlowpokeWell_B2F_hns_MapScripts::
	.byte 0

SlowpokeWell_EventScript_Item_Kings_Rock::
	finditem ITEM_KINGS_ROCK
	end

SlowpokeWell_EventScript_Slowking::
	lock
	faceplayer
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	msgbox SlowpokeWell_Text_Slowking, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	goto_if_set FLAG_ITEM_SLOWPOKE_WELL_RAIN_DANCE, SlowpokeWell_EventScript_Slowking2
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	applymovement LOCALID_WELL_SLOWKING, SlowpokeWell_Movement_RainDance1
	waitmovement 0
	delay 55
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	applymovement LOCALID_WELL_SLOWKING, SlowpokeWell_Movement_RainDance2
	waitmovement 0
	delay 55
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	applymovement LOCALID_WELL_SLOWKING, SlowpokeWell_Movement_RainDance3
	waitmovement 0
	delay 55
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	applymovement LOCALID_WELL_SLOWKING, SlowpokeWell_Movement_RainDance4
	waitmovement 0
	delay 55
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	setweather WEATHER_RAIN
	doweather
	waitmoncry
	@giveitem ITEM_TM_RAIN_DANCE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_ITEM_SLOWPOKE_WELL_RAIN_DANCE
	release
	end

SlowpokeWell_EventScript_Slowking2::
	setweather WEATHER_RAIN
	doweather
	release
	end



SlowpokeWell_Movement_RainDance1:
	face_right
	delay_8
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	delay_8
	step_end

SlowpokeWell_Movement_RainDance2:
	face_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	delay_8
	step_end

SlowpokeWell_Movement_RainDance3:
	face_down
	lock_facing_direction
	walk_fast_right
	walk_fast_left
	unlock_facing_direction
	delay_8
	step_end

SlowpokeWell_Movement_RainDance4:
	lock_facing_direction
	walk_fast_left
	walk_fast_right
	unlock_facing_direction
	step_end

SlowpokeWell_Text_Slowking:
	.string "SLOWKING: ........................$"

SlowpokeWell_EventScript_Bonsly::
	lock
	faceplayer
	playmoncry SPECIES_BONSLY, CRY_MODE_NORMAL
	msgbox SlowpokeWell_Text_Bonsly, MSGBOX_DEFAULT
	delay 20
	waitmoncry
	applymovement LOCALID_WELL_BONSLY, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

SlowpokeWell_Text_Bonsly:
	.string "BooBeeeee!$"

SlowpokeWell_EventScript_Tutor::
	lock
	faceplayer
	msgbox SlowpokeWell_Text_TutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlowpokeWell_EventScript_TutorDeclined
	msgbox SlowpokeWell_Text_TutorWhichMove, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_WELL_TUTOR, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, SlowpokeWell_EventScript_TutorDeclined
	case 0, SlowpokeWell_EventScript_TutorScreech
	case 1, SlowpokeWell_EventScript_TutorFakeTears
	goto SlowpokeWell_EventScript_TutorDeclined

SlowpokeWell_EventScript_TutorScreech::
	msgbox SlowpokeWell_Text_TutorWhichMonScreech, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SCREECH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, SlowpokeWell_EventScript_TutorDeclined
	applymovement LOCALID_WELL_TUTOR, Common_Movement_FaceRight
	msgbox SlowpokeWell_Text_TutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WELL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 9, SlowpokeWell_EventScript_TeachPlayerBelow
	call_if_eq VAR_TEMP_1, 8, SlowpokeWell_EventScript_TeachPlayerLeft
	goto_if_set FLAG_TALKED_WELL_TUTOR, SlowpokeWell_EventScript_WellTutorFriend
	msgbox SlowpokeWell_Text_TutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_WELL_TUTOR
	closemessage
	release
	end

SlowpokeWell_EventScript_TutorFakeTears::
	msgbox SlowpokeWell_Text_TutorWhichMonFakeTears, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FAKE_TEARS
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, SlowpokeWell_EventScript_TutorDeclined
	applymovement LOCALID_WELL_TUTOR, Common_Movement_FaceRight
	msgbox SlowpokeWell_Text_TutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WELL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 9, SlowpokeWell_EventScript_TeachPlayerBelow
	call_if_eq VAR_TEMP_1, 8, SlowpokeWell_EventScript_TeachPlayerLeft
	goto_if_set FLAG_TALKED_WELL_TUTOR, SlowpokeWell_EventScript_WellTutorFriend
	msgbox SlowpokeWell_Text_TutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_WELL_TUTOR
	closemessage
	release
	end

SlowpokeWell_EventScript_WellTutorFriend::
	msgbox SlowpokeWell_Text_WellTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

SlowpokeWell_EventScript_TeachPlayerBelow::
	applymovement LOCALID_WELL_BONSLY, SlowpokeWell_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_BONSLY, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_WELL_BONSLY, SlowpokeWell_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

SlowpokeWell_Movement_TeachPlayerBelow1::
	walk_down
	face_left
	step_end

SlowpokeWell_Movement_TeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	delay 30
	face_up
	walk_up
	face_down
	step_end

SlowpokeWell_EventScript_TeachPlayerLeft::
	applymovement LOCALID_WELL_BONSLY, SlowpokeWell_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_BONSLY, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_WELL_BONSLY, SlowpokeWell_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

SlowpokeWell_Movement_TeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

SlowpokeWell_Movement_TeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	delay 30
	face_right
	walk_right
	walk_right
	walk_up
	face_down
	step_end

SlowpokeWell_EventScript_TutorDeclined::
	msgbox SlowpokeWell_Text_TutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

SlowpokeWell_Text_TutorDeclined::
	.string "You're just a big, boring, no noise\n"
	.string "numpty, aren't you?\p"
	.string "Stinky!\p"
	.string "Lame!\p"
	.string "Go away!$"

SlowpokeWell_Text_TutorLetMeTeach:
	.string "I love making lots of noise!\p"
	.string "Mom says I can make all the noise I like\n"
	.string "down here, as long as it's not near her.\p"
	.string "Sometimes I like to SCREECH.\n"
	.string "Sometimes I like to cry with FAKE TEARS.\p"
	.string "You like making noise too, right?$"

SlowpokeWell_Text_TutorWhichMove:
	.string "OK! You like the WEEEEEEEEE noise or\n"
	.string "the WAHHHHHHHH noise? I can do both!$"

SlowpokeWell_Text_TutorWhichMonScreech:
	.string "The WEEEEEEEEE noise! Yay! Who wants\n"
	.string "to make the WEEEEEEEEE noise?$"

SlowpokeWell_Text_TutorWhichMonFakeTears:
	.string "The WAHHHHHHHH noise! Yay! Who wants\n"
	.string "to make the WAHHHHHHHH noise?$"

SlowpokeWell_Text_TutorTeachingMove:
	.string "OK! BONSLY, get ready!\p"
	.string "Just wait till you see this!\n"
	.string "Or, more like till you hear it, tee hee!$"

SlowpokeWell_Text_TutorMoveTaught:
	.string "BAM! Wasn't that loud? I told you\n"
	.string "BONSLY is the best!\p"
	.string "You and your POKéMON make loud noise.\n"
	.string "Make noise with us again soon!$"

SlowpokeWell_Text_WellTutorFriend:
	.string "You and your POKéMON make almost as\n"
	.string "much noise as BONSLY!\p"
	.string "Have you considered going pro?\p"
	.string "My mom says I'm the noisiest person in\n"
	.string "the world, but you can have second\l"
	.string "place if you want!$"