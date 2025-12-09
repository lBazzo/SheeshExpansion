.set LOCALID_CRASHERWAKE, 16

WhirlIslands_B1F_hns_MapScripts::
	.byte 0

WhirlIslands_B1F_EventScript_Item_Max_Revive::
	finditem ITEM_MAX_REVIVE
	end

WhirlIslands_B1F_EventScript_Item_Full_Restore::
	finditem ITEM_FULL_RESTORE
	end

WhirlIslands_B1F_EventScript_Item_PP_Max::
	finditem ITEM_PP_MAX
	end



WhirlIslands_B1F_EventScript_CrasherWake::
	lock
	applymovement LOCALID_CRASHERWAKE, Common_Movement_FacePlayer
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 52, WhirlIslands_B1F_EventScript_PlayerFaceWakeUp
	call_if_eq VAR_TEMP_0, 53, WhirlIslands_B1F_EventScript_PlayerFaceWakeLeft
	goto_if_ge VAR_ALL_B2B_STATE, 12, WhirlIslands_B1F_EventScript_CrasherWakeAlreadyFought
	msgbox WhirlIslands_B1F_Text_CrasherWakeSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MILLER, WhirlIslands_B1F_Text_CrasherWakeBeaten
	msgbox WhirlIslands_B1F_Text_CrasherWakeAfter, MSGBOX_DEFAULT
	closemessage
	setvar VAR_ALL_B2B_STATE, 12
	release
	end

WhirlIslands_B1F_EventScript_CrasherWakeAlreadyFought::
	msgbox WhirlIslands_B1F_Text_CrasherWakeAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

WhirlIslands_B1F_EventScript_PlayerFaceWakeUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

WhirlIslands_B1F_EventScript_PlayerFaceWakeLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

WhirlIslands_B1F_Text_CrasherWakeSeen:
	.string "Oh, hey there! Come to see the\n"
	.string "LEGENDARY POKéMON as well? Ha ha!\p"
	.string "Whoops! I'd better tell you who I am!\p"
	.string "I'm the triple-threat in POKéMON,\n"
	.string "wrestling, and song.\l"
	.string "That's right, I'm CRASHER WAKE!\p"
	.string "WAKE: You don't look like much of a\n"
	.string "wrestler, and I'm not sure your vocal\l"
	.string "chords are fully developed yet, so why\l"
	.string "don't we compete in a battle, eh?\p"
	.string "The winner gets the LEGENDARY POKéMON,\n"
	.string "and the loser can sing them a victory\l"
	.string "song. Sounds good, right?\p"
	.string "C'mon, let me see what you're made of!$"

WhirlIslands_B1F_Text_CrasherWakeBeaten:
	.string "That puts a grin on my face!\n"
	.string "Guhahaha! That was a blast!$"

WhirlIslands_B1F_Text_CrasherWakeAfter:
	.string "Wow, you're some trainer! I guess while\n"
	.string "I've been training my muscles and lungs,\l"
	.string "you've spent all that time toughening\l"
	.string "up your POKéMON!\p"
	.string "All right then, go on. This one's yours. I\n"
	.string "hope it's a big'un!$"





