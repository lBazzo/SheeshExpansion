.set LOCALID_NURSE, 1
.set LOCALID_ECRUTEAK_BILL, 7

GoldenrodCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_PokemonCenter_OnTransition
	.byte 0

GoldenrodCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_GOLDENROD_CITY
	end

EcruteakCity_PokemonCenter_EventScript_Bill::
	lock
	delay 30
	playse SE_PC_OFF
	delay 55
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_Bill1, MSGBOX_DEFAULT
	msgbox EcruteakCity_PokemonCenter1F_Text_Bill2, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, EcruteakCity_PokemonCenter_EventScript_BillLeaveBot
	call_if_eq VAR_FACING, DIR_WEST, EcruteakCity_PokemonCenter_EventScript_BillLeaveTop
	playse SE_EXIT
	setflag FLAG_HIDE_ECRUTEAK_BILL
	removeobject LOCALID_ECRUTEAK_BILL
	setflag FLAG_SYS_PC_BILL
	clearflag FLAG_HIDE_GOLDENROD_BILL
	release
	end

EcruteakCity_PokemonCenter_EventScript_BillFaceDown::
	turnobject LOCALID_ECRUTEAK_BILL, DIR_SOUTH
	return

EcruteakCity_PokemonCenter_EventScript_BillFaceRight::
	turnobject LOCALID_ECRUTEAK_BILL, DIR_EAST
	return

EcruteakCity_PokemonCenter_EventScript_BillLeaveTop::
	applymovement LOCALID_ECRUTEAK_BILL, EcruteakCity_PokemonCenter_Movement_BillTop
	waitmovement 0
	return

EcruteakCity_PokemonCenter_EventScript_BillLeaveBot::
	applymovement LOCALID_ECRUTEAK_BILL, EcruteakCity_PokemonCenter_Movement_BillBot
	waitmovement 0
	return

EcruteakCity_PokemonCenter_Movement_BillTop:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

EcruteakCity_PokemonCenter_Movement_BillBot:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end


EcruteakCity_PokemonCenter1F_Text_Bill1:
	.string "Hi, I'm BILL. And who are you?\p"
	.string "Hmm, {PLAYER}, huh?\n"
	.string "You've come at the right time.$"

EcruteakCity_PokemonCenter1F_Text_Bill2:
	.string "I just finished adjustments on my\n"
	.string "POKéMON STORAGE SYSTEM.\p"
	.string "You know that PC you use to store\n"
	.string "all your POKéMON?\p"
	.string "I developed that myself!\p"
	.string "Now that I've installed this one,\n"
	.string "my PC is running at all\l"
	.string "POKéMON CENTERS in JOHTO and KANTO.\p"
	.string "I have to hurry on back home to see my\n"
	.string "folks.\p"
	.string "Feel free to visit my place anytime!\n"
    .string "Just go up from the POKéMON CENTER and\l"
    .string "take the first left. You can't miss it.\p"
	.string "Buh-bye!$"

GoldenrodCity_PokemonCenter_EventScript_GbaKid1::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_GameboyKidText1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_GbaKid2::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_GameboyKidText2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_Granny::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_GrannyText, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_LassText, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_GrannyText:
    .string "I just love living in the big city!\n"
    .string "I moved here when I was a young\l"
    .string "trainer, like you!$"

GoldenrodCity_PokemonCenter_GameboyKidText1:
    .string "This is a special POKéMON CENTER.\n"
    .string "The roof is made of gold!$"

GoldenrodCity_PokemonCenter_GameboyKidText2:
    .string "I told my brother that the roof is\n"
    .string "made of real gold. He'll believe\l"
	.string "anything!$"

GoldenrodCity_PokemonCenter_LassText:
    .string "A higher level POKéMON doesn't\n"
    .string "always win.\p"
    .string "After all, it may have a type\n"
    .string "disadvantage.\p"
    .string "I don't think there is a single\n"
    .string "POKéMON that is the toughest.$"

GoldenrodPokeCenter_LinkReceptionistPleaseAcceptGSBallText:
    .string "{PLAYER}, isn't it?\p"
    .string "Congratulations!\p"
    .string "As a special deal, a GS BALL has\n"
    .string "been sent just for you!\p"
    .string "Please accept it!$"

GoldenrodPokeCenter_LinkReceptionistPleaseDoComeAgainText:
    .string "Please do come again!$"

GoldenrodCity_PokemonCenter_PokefanFDoYouHaveEonMailText:
    .string "Oh my, your pack looks so heavy!\p"
    .string "Oh! Do you happen to have\n"
    .string "something named EON MAIL?\p"
    .string "My daughter is after one.\p"
    .string "You can part with one, can't you?$"

GoldenrodCity_PokemonCenter_AskGiveAwayAnEonMailText:
    .string "Give away an EON MAIL?$"

GoldenrodCity_PokemonCenter_PokefanFThisIsForYouText:
    .string "Oh, that's great! Thank you,\n"
    .string "honey!\p"
    .string "Here, this is for you in return!$"

GoldenrodCity_PokemonCenter_PokefanFDaughterWillBeDelightedText:
    .string "My daughter will be delighted!$"

GoldenrodCity_PokemonCenter_PokefanFTooBadText:
    .string "Oh? You don't have one? Too bad.$"

GoldenrodCity_PokemonCenter_PokefanFAnotherTimeThenText:
    .string "Oh… Well, another time, then.$"

GoldenrodCity_PokemonCenter_PlayerGaveAwayTheEonMailText:
    .string "{PLAYER} gave away the EON MAIL.$"
