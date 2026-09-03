.set LOCALID_BELLCHIME_MORTY, 52

BellchimeTrail_hns_MapScripts::
	.byte 0


BellchimeTrail_EventScript_Morty::
	lock
	faceplayer
	msgbox BellchimeTrail_Text_Morty, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_BELLCHIME_MORTY
	removeobject LOCALID_BELLCHIME_MORTY
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_MORTY
	release
	end

BellchimeTrail_Text_Morty:
	.string "Morty: The legendary Pokémon\n"
	.string "did not choose me...\p"
	.string "But that does not mean that I\n"
	.string "have lost out on my future.\p"
	.string "I will continue my training until I\n"
	.string "I discover a new future for me.$"

BellchimeTrail_EventScript_ShayminSage::
	lock
	faceplayer
	goto_if_set FLAG_PLAYER_CAUGHT_SHAYMIN, BellchimeTrail_EventScript_ShayminSagePostGracideaFlower
	msgbox BellchimeTrail_Text_ShayminSageDoYouHaveShaymin, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BellchimeTrail_EventScript_ShayminSageNotShaymin
	baobacheckmon 6
	goto_if_eq VAR_RESULT, FALSE, BellchimeTrail_EventScript_ShayminSageNotShaymin
	msgbox BellchimeTrail_Text_ShayminSagePlayerHasShaymin, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_GRACIDEA
	setflag FLAG_PLAYER_CAUGHT_SHAYMIN
	goto BellchimeTrail_EventScript_ShayminSagePostGracideaFlower
	end

BellchimeTrail_EventScript_ShayminSageNotShaymin::
	msgbox BellchimeTrail_Text_ShayminSageThatsNotShaymin, MSGBOX_DEFAULT
	closemessage
	release
	end

BellchimeTrail_EventScript_ShayminSagePostGracideaFlower::
	msgbox BellchimeTrail_Text_ShayminSageExplainGracidea, MSGBOX_DEFAULT
	closemessage
	release
	end

BellchimeTrail_Text_ShayminSageDoYouHaveShaymin:
	.string "Got Shaymin?$"

BellchimeTrail_Text_ShayminSageThatsNotShaymin:
	.string "No Shaymin.$"

BellchimeTrail_Text_ShayminSagePlayerHasShaymin:
	.string "That's Shaymin!$"

BellchimeTrail_Text_ShayminSageExplainGracidea:
	.string "You got the Gracidea.$"



BellchimeTrail_EventScript_KeldeoSage::
	lock
	faceplayer
	goto_if_set FLAG_PLAYER_CAUGHT_KELDEO, BellchimeTrail_EventScript_KeldeoSageCheckTM
	msgbox BellchimeTrail_Text_KeldeoSageDoYouHaveKeldeo, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lockall
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BellchimeTrail_EventScript_KeldeoSageNotKeldeo
	baobacheckmon 7
	goto_if_eq VAR_RESULT, FALSE, BellchimeTrail_EventScript_KeldeoSageNotKeldeo
	msgbox BellchimeTrail_Text_KeldeoSagePlayerHasKeldeo, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SECRET_SWORD
	setflag FLAG_PLAYER_CAUGHT_KELDEO
	goto BellchimeTrail_EventScript_KeldeoSagePostTM
	end

BellchimeTrail_EventScript_KeldeoSageNotKeldeo::
	msgbox BellchimeTrail_Text_KeldeoSageThatsNotKeldeo, MSGBOX_DEFAULT
	closemessage
	release
	end

BellchimeTrail_EventScript_KeldeoSagePostTM::
	msgbox BellchimeTrail_Text_KeldeoSagePostTM, MSGBOX_DEFAULT
	closemessage
	release
	end

BellchimeTrail_EventScript_KeldeoSageCheckTM::
	checkitem ITEM_TM_SECRET_SWORD
	goto_if_eq VAR_RESULT, TRUE, BellchimeTrail_EventScript_KeldeoSageOnlyOneTM
	msgbox BellchimeTrail_Text_KeldeoSageHaveNewTM, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SECRET_SWORD
	msgbox BellchimeTrail_Text_KeldeoSagePostTM, MSGBOX_DEFAULT
	closemessage
	release
	end

BellchimeTrail_EventScript_KeldeoSageOnlyOneTM::
	msgbox BellchimeTrail_Text_KeldeoSageExplainOnlyOneTM, MSGBOX_DEFAULT
	closemessage
	release
	end

BellchimeTrail_Text_KeldeoSageDoYouHaveKeldeo:
	.string "Got Keldeo?$"

BellchimeTrail_Text_KeldeoSageThatsNotKeldeo:
	.string "No Keldeo.$"

BellchimeTrail_Text_KeldeoSagePlayerHasKeldeo:
	.string "That's Keldeo!$"

BellchimeTrail_Text_KeldeoSagePostTM:
	.string "Use TM to change form.$"

BellchimeTrail_Text_KeldeoSageExplainOnlyOneTM:
	.string "You got the TM already.$"

BellchimeTrail_Text_KeldeoSageHaveNewTM:
	.string "Have another TM.$"

EcruteakBellchimeTrail_EventScript_Item_BigMushroom::
	finditem ITEM_BIG_MUSHROOM
	end

EcruteakBellchimeTrail_EventScript_DoorTrigger::
	lock
	opendoor 28, 12
	waitdooranim
	addobject OBJ_EVENT_ID_CAMERA
	removeobject OBJ_EVENT_ID_PLAYER
	closedoor 28, 12
	applymovement OBJ_EVENT_ID_CAMERA, EcruteakBellchimeTrail_Movement_CameraPanUp
	waitmovement 0
	warp MAP_TIN_TOWER_1F, 1
	release
	end

EcruteakBellchimeTrail_Movement_CameraPanUp::
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	step_end
