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
	.string "Hi, I'm Bill. And who are you?\p"
	.string "Hmm, {PLAYER}, huh?\n"
	.string "You've come at the right time.$"

EcruteakCity_PokemonCenter1F_Text_Bill2:
	.string "I just finished adjustments on my\n"
	.string "Pokémon Storage System.\p"
	.string "You know that PC you use to store\n"
	.string "all your Pokémon?\p"
	.string "I developed that myself!\p"
	.string "Now that I've installed this one,\n"
	.string "my PC is running at all\l"
	.string "Pokémon Centers in Johto and Kanto.\p"
	.string "I have to hurry on back home to see my\n"
	.string "folks.\p"
	.string "Feel free to visit my place anytime!\n"
    .string "Just go up from the Pokémon Center and\l"
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
    .string "This is a special Pokémon Center.\n"
    .string "The roof is made of gold!$"

GoldenrodCity_PokemonCenter_GameboyKidText2:
    .string "I told my brother that the roof is\n"
    .string "made of real gold. He'll believe\l"
	.string "anything!$"

GoldenrodCity_PokemonCenter_LassText:
    .string "A higher level Pokémon doesn't\n"
    .string "always win.\p"
    .string "After all, it may have a type\n"
    .string "disadvantage.\p"
    .string "I don't think there is a single\n"
    .string "Pokémon that is the toughest.$"

GoldenrodPokeCenter_LinkReceptionistPleaseAcceptGSBallText:
    .string "{PLAYER}, isn't it?\p"
    .string "Congratulations!\p"
    .string "As a special deal, a GS Ball has\n"
    .string "been sent just for you!\p"
    .string "Please accept it!$"

GoldenrodPokeCenter_LinkReceptionistPleaseDoComeAgainText:
    .string "Please do come again!$"

GoldenrodCity_PokemonCenter_PokefanFDoYouHaveEonMailText:
    .string "Oh my, your pack looks so heavy!\p"
    .string "Oh! Do you happen to have\n"
    .string "something named Eon Mail?\p"
    .string "My daughter is after one.\p"
    .string "You can part with one, can't you?$"

GoldenrodCity_PokemonCenter_AskGiveAwayAnEonMailText:
    .string "Give away an Eon Mail?$"

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
    .string "{PLAYER} gave away the Eon Mail.$"




GoldenrodCity_PokemonCenter_EventScript_SuperNerdRotom::
	lock
	faceplayer
	goto_if_set FLAG_GOT_ROTOM, GoldenrodCity_PokemonCenter_EventScript_SuperNerdRotomAfter
	msgbox GoldenrodCity_PokemonCenter_Text_ExchangeCoinsForRotom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_PokemonCenter_EventScript_SuperNerdRotomDeclined
	setvar VAR_TEMP_2, 300
	checkcoins VAR_RESULT
	goto_if_lt VAR_RESULT, VAR_TEMP_2, GoldenrodCity_PokemonCenter_EventScript_NotEnoughCoins
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, GoldenrodCity_PokemonCenter_EventScript_PartyFull
	giveitem ITEM_ROTOM_CATALOG
	removecoins 300
	playfanfare MUS_OBTAIN_ITEM
	givemon SPECIES_ROTOM, 5
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM 
	message GoldenrodCity_PokemonCenter_Text_ReceivedRotom
	waitfanfare
	msgbox GoldenrodCity_PokemonCenter_Text_Nickname, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, GoldenrodCity_PokemonCenter_EventScript_NicknameRotom
	setflag FLAG_GOT_ROTOM
	msgbox GoldenrodCity_PokemonCenter_Text_RotomAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_SuperNerdRotomAfter::
	msgbox GoldenrodCity_PokemonCenter_Text_SuperNerdRotomAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_SuperNerdRotomDeclined::
	msgbox GoldenrodCity_PokemonCenter_Text_SuperNerdRotomDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_NotEnoughCoins::
	msgbox GoldenrodCity_PokemonCenter_Text_SuperNerdRotomNotEnoughCoins, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_PartyFull::
	msgbox GoldenrodCity_PokemonCenter_Text_SuperNerdRotomPartyFull, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_NicknameRotom::
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMonFull
	return

GoldenrodCity_PokemonCenter_Text_SuperNerdRotomAfter:
	.string "Oh. It's you. Say... How is Rotom doing?$"

GoldenrodCity_PokemonCenter_Text_ReceivedRotom:
	.string "{PLAYER} received Rotom!$"

GoldenrodCity_PokemonCenter_Text_ExchangeCoinsForRotom:
	.string "You're a trainer, right?\p"
	.string "I got this Rotom to try and cheat the\n"
	.string "slot machines in the Game Corner, but I\l"
	.string "chickened out in the end.\p"
	.string "I don't want to go to jail, but now I\n"
	.string "have no money for the slot machines.\p"
	.string "Plus, I think Rotom seems like it wants\n"
	.string "to have fun in battles instead.\p"
	.string "Do you think you could take it off my\n"
	.string "hands? Say, for 300 coins?$"

GoldenrodCity_PokemonCenter_Text_RotomAfter:
	.string "Wow, thank you! Now I just need to make\n"
	.string "these coins last...$"

GoldenrodCity_PokemonCenter_Text_SuperNerdRotomDeclined:
	.string "Right...\n"
	.string "Well, if you ever change your mind...$"

GoldenrodCity_PokemonCenter_Text_SuperNerdRotomNotEnoughCoins:
	.string "I'd love to give you Rotom, but I do\n"
	.string "really want those coins... Sorry.$"

GoldenrodCity_PokemonCenter_Text_SuperNerdRotomPartyFull:
	.string "You don't have room in your party. Come\n"
	.string "back soon, okay? I'll be waiting...$"

GoldenrodCity_PokemonCenter_Text_Nickname:
	.string "Would you like to give your\n"
	.string "{STR_VAR_1} a nickname?$"

