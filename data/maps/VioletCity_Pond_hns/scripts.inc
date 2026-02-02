.set LOCALID_TUTOR, 1
.set LOCALID_UNOWN, 2

VioletCity_Pond_hns_MapScripts::
	.byte 0

VioletCity_Pond_EventScript_Unown::
	lock
	faceplayer
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
	msgbox VioletCity_Pond_Text_Unown, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_UNOWN, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

VioletCity_Pond_Text_Unown:
	.string "Unown: Oooooeeeeeooooo!$"

VioletCity_Pond_EventScript_HPTutor::	
	lock
	faceplayer
	msgbox VioletCity_Pond_Text_HPTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_Pond_EventScript_HPTutorDeclined
	msgbox VioletCity_Pond_Text_HPTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, VioletCity_Pond_EventScript_HPTutorDeclined
	applymovement LOCALID_TUTOR, Common_Movement_FaceRight
	msgbox VioletCity_Pond_Text_HPTutorTeachingHP, MSGBOX_DEFAULT
	applymovement LOCALID_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 3, VioletCity_Pond_EventScript_UnownTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 2, VioletCity_Pond_EventScript_UnownTeachPlayerLeft
	goto_if_set FLAG_TALKED_HP_TUTOR, VioletCity_Pond_EventScript_HPTutorFriend
	msgbox VioletCity_Pond_Text_HPTutorHPTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_HP_TUTOR
	closemessage
	release
	end

VioletCity_Pond_EventScript_HPTutorFriend::
	msgbox VioletCity_Pond_Text_HPTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Pond_EventScript_UnownTeachPlayerBelow::
	applymovement LOCALID_UNOWN, VioletCity_Pond_Movement_UnownTeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_UNOWN, VioletCity_Pond_Movement_UnownTeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

VioletCity_Pond_Movement_UnownTeachPlayerBelow1::
	walk_down
	face_left
	step_end

VioletCity_Pond_Movement_UnownTeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	face_up
	walk_up
	face_down
	step_end

VioletCity_Pond_EventScript_UnownTeachPlayerLeft::
	applymovement LOCALID_UNOWN, VioletCity_Pond_Movement_UnownTeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_UNOWN, VioletCity_Pond_Movement_UnownTeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

VioletCity_Pond_Movement_UnownTeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

VioletCity_Pond_Movement_UnownTeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	face_right
	walk_right
	walk_right
	walk_up
	face_down
	step_end

VioletCity_Pond_EventScript_HPTutorDeclined::
	msgbox VioletCity_Pond_Text_HPTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Pond_Text_HPTutorLetMeTeach:
	.string "Wait...!\p"
	.string "Your POKéMON's hidden potential...\n"
	.string "it's off the charts!\p"
	.string "Please, let me teach Hidden Power to\n"
	.string "your POKéMON! You'll let me, won't you?$"

VioletCity_Pond_Text_HPTutorDeclined:
	.string "Oh, but your POKéMON...\p"
	.string "They could be so much more,\n"
	.string "if only you believed in them...$"

VioletCity_Pond_Text_HPTutorWhichMon:
	.string "Oh, really!? Great! Amazing! Incredible!\n"
	.string "Whose potential shall we unlock today?$"

VioletCity_Pond_Text_HPTutorTeachingHP:
	.string "Fufufu... a wise choice. Now, UNOWN,\n"
	.string "demonstrate your hidden technique!$"

VioletCity_Pond_Text_HPTutorHPTaught:
	.string "Congratulations! Your POKéMON's inner\n"
	.string "potential has been realised.\p"
	.string "Do return here at once if you ever lose\n"
	.string "your way. I will help you find it again.\p"
	.string "Or, um- you could come just to chat!\p"
	.string "The locals can't see hidden\n"
	.string "potential like you and I can, so I\l"
	.string "choose to hang out here instead.\p"
	.string "It gets a little lonely sometimes...$"

VioletCity_Pond_Text_HPTutorFriend:
	.string "Do come and see us again, won't you?\p"
	.string "UNOWN and I consider you our friend.\n"
	.string "Um- that's okay with you, right?$"

VioletCity_Pond_EventScript_Wattrel::
	lock
	faceplayer
	playmoncry SPECIES_WATTREL, CRY_MODE_NORMAL
	msgbox VioletCity_Pond_Text_Wattrel, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	release
	end

VioletCity_Pond_Text_Wattrel:
	.string "'Munch', 'Crunch', 'Munch', 'Crunch'\p"
	.string "Wattrel: Watt?$"

VioletCity_Pond_EventScript_BirdFeeder::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BERRIES_BIRD_FEEDER, VioletCity_Pond_EventScript_BirdFeederPostBerries
	msgbox VioletCity_Pond_Text_BirdFeederGiveBerries, MSGBOX_DEFAULT
	giveitem ITEM_ORAN_BERRY, 900
	giveitem ITEM_CHERI_BERRY, 900
	giveitem ITEM_CHESTO_BERRY, 900
	giveitem ITEM_PECHA_BERRY, 900
	giveitem ITEM_RAWST_BERRY, 900
	giveitem ITEM_ASPEAR_BERRY, 900
	giveitem ITEM_PERSIM_BERRY, 900
	msgbox VioletCity_Pond_Text_BirdFeederAfterBerriesGiven, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_BERRIES_BIRD_FEEDER
	closemessage
	release
	end

VioletCity_Pond_EventScript_BirdFeederPostBerries::
	msgbox VioletCity_Pond_Text_BirdFeederAfterBerriesGiven, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Pond_Text_BirdFeederGiveBerries:
	.string "I like to come here to feed the birds.\n"
	.string "They just love snacking on berries.\p"
	.string "Would you like to feed them too? Or are\n"
	.string "you just hungry?\p"
	.string "It doesn't matter. Everyone who likes\n"
	.string "berries can have some!$"

VioletCity_Pond_Text_BirdFeederAfterBerriesGiven:
	.string "The magic lady over there and I tend to\n"
	.string "get on better with POKéMON than we do\l"
	.string "with people.\p"
	.string "I guess as a trainer, you must get along\n"
	.string "well with both. That sounds fun!$"
