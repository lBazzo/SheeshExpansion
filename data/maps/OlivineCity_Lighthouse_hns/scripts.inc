.set LOCALID_LIGHTHOUSE_JASMINE, 12
.set LOCALID_LIGHTHOUSE_AMPHAROS, 13
.set LOCALID_OLIVINE_STEVEN, 19
.set LOCALID_LIGHTHOUSE_1FSAILOR, 2
.set LOCALID_LIGHTHOUSE_2FSAILOR, 20
.set LOCALID_LIGHTHOUSE_3FSAILOR, 21
.set LOCALID_LIGHTHOUSE_4FSAILOR, 22
.set LOCALID_LIGHTHOUSE_5FSAILOR, 23
.set LOCALID_LIGHTHOUSE_REWARDSAILOR, 24
.set LOCALID_LIGHTHOUSE_ALFRED, 4
.set LOCALID_LIGHTHOUSE_HUEY, 3
.set LOCALID_LIGHTHOUSE_THEO, 6
.set LOCALID_LIGHTHOUSE_KENT, 8
.set LOCALID_LIGHTHOUSE_1FSAILORRIGHT, 47
.set LOCALID_LIGHTHOUSE_2FSAILORRIGHT, 48
.set LOCALID_LIGHTHOUSE_3FSAILORRIGHT, 49
.set LOCALID_LIGHTHOUSE_4FSAILORRIGHT, 50
.set LOCALID_LIGHTHOUSE_5FSAILORRIGHT, 51
.set LOCALID_LIGHTHOUSE_GLENN, 58
.set LOCALID_LIGHTHOUSE_COREY, 59
.set LOCALID_LIGHTHOUSE_LYLE, 60
.set LOCALID_LIGHTHOUSE_BILL, 61
.set LOCALID_LIGHTHOUSE_ERNEST, 11
.set LOCALID_LIGHTHOUSE_ELLEN, 37
.set LOCALID_LIGHTHOUSE_JOE, 39
.set LOCALID_LIGHTHOUSE_LAURA, 38
.set LOCALID_LIGHTHOUSE_LLOYD, 40
.set LOCALID_LIGHTHOUSE_SHANNON, 41

OlivineCity_Lighthouse_hns_MapScripts::
	.byte 0

OlivineLighthouse_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

OlivineLighthouse_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

OlivineLighthouse_EventScript_Item_TMBulkUp::
    @finditem ITEM_TM_BULK_UP
    end

OlivineLighthouse_EventScript_Item_HyperPotion::
    finditem ITEM_HYPER_POTION
    end

OlivineLighthouse_EventScript_Item_Protein::
    finditem ITEM_PROTEIN
    end

OlivineLighthouse_EventScript_Steven::
	lock
	faceplayer
	goto_if_le VAR_OLIVINE_CITY_STATE, 3, OlivineCity_EventScript_StevenBlockingLighthouse
	clearflag FLAG_LIGHTHOUSE_BREAK_USED 
	setvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 0
	goto_if_set FLAG_STEVEN_INTRO_DONE, OlivineLighthouse_EventScript_StevenPostIntroGift
	playse SE_PIN
	applymovement LOCALID_OLIVINE_STEVEN, Common_Movement_ExclamationMark
	delay 60
	msgbox OlivineCity_Text_StevenReadyToGift, MSGBOX_DEFAULT
	closemessage
	msgbox OlivineCity_Text_StevenPostIntroReadyToGift, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_STEVEN_GIFTS, FALSE 
	switch VAR_RESULT
	case 0, OlivineLighthourse_EventScript_GiveCorviknight
	case 1, OlivineLighthourse_EventScript_GiveEscavalier
	case 2, OlivineLighthourse_EventScript_GiveTinkaton
	case MULTI_B_PRESSED, OlivineCity_EventScript_DeclineStevenGift
	goto OlivineCity_EventScript_DeclineStevenGift

OlivineCity_EventScript_StevenBlockingLighthouse::
	msgbox OlivineCity_Text_StevenBlockingLighthouse, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_DeclineStevenGift::
	msgbox OlivineCity_Text_DeclineStevenGift, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_STEVEN_INTRO_DONE
	release
	end

OlivineLighthouse_EventScript_StevenPostIntroGift::
	msgbox OlivineCity_Text_StevenPostIntroReadyToGift, MSGBOX_DEFAULT
	multichoice 20, 0, MULTI_STEVEN_GIFTS, FALSE 
	switch VAR_RESULT
	case 0, OlivineLighthourse_EventScript_GiveCorviknight
	case 1, OlivineLighthourse_EventScript_GiveEscavalier
	case 2, OlivineLighthourse_EventScript_GiveTinkaton
	case MULTI_B_PRESSED, OlivineCity_EventScript_DeclineStevenGift
	goto OlivineCity_EventScript_DeclineStevenGift

OlivineLighthourse_EventScript_GiveCorviknight::
	@HnS named gift pokemon setup
	@setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIDGEY
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, OlivineLighthouse_EventScript_FullParty
	msgbox OlivineCity_Text_StevenGivingGift, MSGBOX_DEFAULT
	bufferspeciesname STR_VAR_1, SPECIES_CORVIKNIGHT
	givemon SPECIES_CORVIKNIGHT, 74
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_CORVIKNIGHT
	message OlivineLighthouse_Text_ReceivedPokemon
	waitfanfare
	msgbox OlivineLighthouse_Text_Nickname, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, OlivineLighthouse_EventScript_NicknameGift

	msgbox OlivineCity_Text_StevenAfterGift, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 15, OlivineLighthouse_EventScript_StevenLeave1
	call_if_eq VAR_TEMP_1, 16, OlivineLighthouse_EventScript_StevenLeave2
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_HIDE_OLIVINE_STEVEN
	removeobject LOCALID_OLIVINE_STEVEN
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 1
	release
	end

OlivineLighthourse_EventScript_GiveEscavalier::
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, OlivineLighthouse_EventScript_FullParty
	msgbox OlivineCity_Text_StevenGivingGift, MSGBOX_DEFAULT
	bufferspeciesname STR_VAR_1, SPECIES_ESCAVALIER
	givemon SPECIES_ESCAVALIER, 74
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_ESCAVALIER
	message OlivineLighthouse_Text_ReceivedPokemon
	waitfanfare
	msgbox OlivineLighthouse_Text_Nickname, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, OlivineLighthouse_EventScript_NicknameGift

	msgbox OlivineCity_Text_StevenAfterGift, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 15, OlivineLighthouse_EventScript_StevenLeave1
	call_if_eq VAR_TEMP_1, 16, OlivineLighthouse_EventScript_StevenLeave2
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_HIDE_OLIVINE_STEVEN
	removeobject LOCALID_OLIVINE_STEVEN
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 1
	release
	end

OlivineLighthourse_EventScript_GiveTinkaton::
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, OlivineLighthouse_EventScript_FullParty
	msgbox OlivineCity_Text_StevenGivingGift, MSGBOX_DEFAULT
	bufferspeciesname STR_VAR_1, SPECIES_TINKATON
	givemon SPECIES_TINKATON, 74
	playfanfare MUS_OBTAIN_ITEM
	bufferspeciesname STR_VAR_1, SPECIES_TINKATON
	message OlivineLighthouse_Text_ReceivedPokemon
	waitfanfare
	msgbox OlivineLighthouse_Text_Nickname, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, OlivineLighthouse_EventScript_NicknameGift

	msgbox OlivineCity_Text_StevenAfterGift, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 15, OlivineLighthouse_EventScript_StevenLeave1
	call_if_eq VAR_TEMP_1, 16, OlivineLighthouse_EventScript_StevenLeave2
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_HIDE_OLIVINE_STEVEN
	removeobject LOCALID_OLIVINE_STEVEN
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 1
	release
	end

OlivineLighthouse_EventScript_NicknameGift:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMonFull
	return

OlivineLighthouse_EventScript_FullParty::
	msgbox OlivineLighthouse_Text_FullParty, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_STEVEN_INTRO_DONE
	release
	end

OlivineCity_Text_StevenGivingGift:
	.string "I thought you'd make that choice.\n"
	.string "Please take good care of it.$"

OlivineLighthouse_Text_FullParty:
	.string "Oh, no. You can't carry any more\n"
	.string "Pokémon with you.\p"
	.string "I'll wait here while you make\n"
	.string "room for it.$"

OlivineLighthouse_Text_ReceivedPokemon:
	.string "{PLAYER} received {STR_VAR_1}!$"

OlivineLighthouse_Text_Nickname:
	.string "Would you like to give your\n"
	.string "{STR_VAR_1} a nickname?$"

OlivineCity_Text_StevenPostIntroReadyToGift:
	.string "So, I have Corviknight, Escavalier and\n"
	.string "Tinkaton. Which would you prefer?$"

OlivineCity_Text_StevenAfterGift:
	.string "I'm sure you'll take great care of it.\p"
	.string "As for me, I'm afraid I've got to leave\n"
	.string "on official Pokémon League business in\l"
	.string "Hoenn.\p"
	.string "I'm sure you won't have much trouble\n"
	.string "delivering the medicine to Jasmine.\p"
	.string "Thanks again for your help.\n"
	.string "Until next time!$"

OlivineCity_Text_DeclineStevenGift:
	.string "Hm? You want to think it over? Fine by\n"
	.string "me. Let me know when you're ready.$"

OlivineCity_Text_StevenBlockingLighthouse:
	.string "Hello there. Sorry for the brisk\n"
	.string "introduction, but I'm going to have to\l"
	.string "ask you to leave for the time being.\p"
	.string "This city's old Gym Leader, Jasmine, is\n"
	.string "currently taking care of the sick\l"
	.string "Pokémon that normally lights up this\l"
	.string "lighthouse.\p"
	.string "We're not sure exactly what's wrong\n"
	.string "with Amphy, so it's too dangerous to let\l"
	.string "other people up there right now.\p"
	.string "If you have a spare moment, might I ask\n"
	.string "you to gather some medicine for me?\p"
	.string "The pharmacist in the Safari Zone Gate\n"
	.string "should have something. If you tell him I\l"
	.string "sent you, I'm sure he'll cooperate.$"

OlivineCity_Text_StevenReadyToGift:
	.string "Is that... the Secret Potion?\p"
	.string "Brilliant! That's exactly what the\n"
	.string "doctor ordered! I can't thank you\l"
	.string "enough!\p"
	.string "{PLAYER}, is it? A pleasure to meet you.\n"
	.string "Let me introduce myself properly, and\l"
	.string "please excuse my past frankness.\p"
	.string "I am Steven, a trainer such as yourself.\p"
	.string "Steven: I am a fan of steel type\n"
	.string "Pokémon, much like Jasmine. It is how we\l"
	.string "initially formed our bond, as a matter\l"
	.string "of fact.\p"
	.string "But I'm sure you didn't go to all this\n"
	.string "trouble just to exchange small talk\l"
	.string "with me.\p"
	.string "To show just how grateful I am, I'd like\n"
	.string "you to have one of these steel type\l"
	.string "Pokémon. Each of them will make a\l"
	.string "powerful partner, so choose wisely.$"

OlivineLighthouse_EventScript_StevenLeave1::
	applymovement LOCALID_OLIVINE_STEVEN OlivineLighthouse_Movement_StevenLeave1
	waitmovement 0
	return

OlivineLighthouse_EventScript_StevenLeave2::
	applymovement LOCALID_OLIVINE_STEVEN OlivineLighthouse_Movement_StevenLeave2
	waitmovement 0
	return

OlivineLighthouse_Movement_StevenLeave1::
	walk_down
	walk_down
	walk_down
	walk_left
	face_down
	step_end

OlivineLighthouse_Movement_StevenLeave2::
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

OlivineLighthouse_EventScript_1FPokefanF::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_1FPokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

@PLACEHOLDER
OlivineLighthouse_EventScript_SailorGauntletBeaten::

OlivineLighthouse_EventScript_1FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_1FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 3, OlivineLighthouse_EventScript_1FSailorGauntletBeaten
	goto_if_set FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_1FSailorWantToResumeGauntlet
	goto_if_set FLAG_LIGHTHOUSE_GAUNTLET_EXPLAINED, OlivineLighthouse_EventScript_1FSailorIntroDone
	clearflag FLAG_LIGHTHOUSE_BREAK_USED
	msgbox OlivineLighthouse_Text_1FSailorIntro, MSGBOX_DEFAULT
	closemessage
	msgbox OlivineLighthouse_Text_SailorPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedGauntlet
	case 0, OlivineLighthouse_EventScript_1FSailorAcceptedGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedGauntlet


OlivineLighthouse_EventScript_1FSailorIntroDone::
	msgbox OlivineLighthouse_Text_SailorPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedGauntlet
	case 0, OlivineLighthouse_EventScript_1FSailorAcceptedGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedGauntlet


OlivineLighthouse_EventScript_1FSailorBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 8, OlivineLighthouse_EventScript_1FSailorGauntletBeaten
	goto_if_unset FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_1FSailorWantToTakeBreak
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_1FSailorWantToResumeGauntlet
	call OlivineLighthouse_EventScript_1FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_1FSailorWantToTakeBreak::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_1FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_WantToTakeBreak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_1FBreakDeclined
	msgbox OlivineLighthouse_Text_PlayerUsingBreak, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	setflag FLAG_LIGHTHOUSE_BREAK_USED
	clearflag FLAG_IN_GAUNTLET
	release
	end
	
OlivineLighthouse_EventScript_1FBreakDeclined::
	call OlivineLighthouse_EventScript_1FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_GetBackInThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_1FSailorWantToResumeGauntlet::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_1FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorReadyToReenterGauntlet, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet
	case 0, OlivineLighthouse_EventScript_SailorAcceptedReenterGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet

OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet::
	msgbox OlivineLighthouse_Text_SailorDeclinedReenterGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerBack
	release
	end

OlivineLighthouse_EventScript_SailorAcceptedReenterGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedReenterGauntlet, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_IN_GAUNTLET
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	release
	end

OlivineLighthouse_EventScript_1FSailorAcceptedGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 2
	setflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_SailorDeclinedGauntlet::
	msgbox OlivineLighthouse_Text_SailorDeclinedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerBack
	setflag FLAG_LIGHTHOUSE_GAUNTLET_EXPLAINED
	release
	end

OlivineLighthouse_EventScript_PlayerFaceSailor::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

OlivineLighthouse_EventScript_1FSailorGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_1FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 2, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_1FSailorBlockReadjustPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_1FSAILOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

OlivineLighthouse_EventScript_MarkCurrentGauntletComplete::
	addvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 1
	clearflag FLAG_LIGHTHOUSE_BREAK_USED
	clearflag FLAG_IN_GAUNTLET
	return

OlivineLighthouse_EventScript_MovePlayerBack::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	return

OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight::
	applymovement OBJ_EVENT_ID_PLAYER, OlivineLighthouse_Movement_MovePlayerIntoGauntletRight
	waitmovement 0
	return

OlivineLighthouse_Movement_MovePlayerIntoGauntletRight::
	walk_left
	walk_up
	walk_left
	step_end

OlivineLighthouse_Text_1FSailorIntro:
	.string "Yo there, hotshot! Fancy yourself a\n"
	.string "future champion?\p"
	.string "We've got just the challenge for you!\p"
	.string "Each floor of the lighthouse is lined\n"
	.string "with experienced trainers who will push\l"
	.string "your endurance to its limit.\p"
	.string "Y'know, normally what happens is, once \n"
	.string "you go in, my buddy and I would make\l"
	.string "sure you couldn't leave until you'd \l"
	.string "defeated every trainer on that floor.\p"
	.string "But, I mean, I guess you are pretty\n"
	.string "young to be taking this challenge, huh?\p"
	.string "I'd really like to see the look on the\n"
	.string "captain's face if a child managed to do\l"
	.string "what he couldn't, so how about we \l"
	.string "strike up a little deal, eh?\p"
	.string "Once per floor, I'll let you sneak out to\n"
	.string "change your team around.\p"
	.string "Or, you know, for potty time, or to play\n"
	.string "games on your Pokégear.\p"
	.string "Whatever it is that kids do these days.\p"
	.string "I'll be sure to let the other sailors\n"
	.string "know about our little secret, too.\p"
	.string "And, of course, there's an incredible\n"
	.string "prize waiting for you at the top!$"

OlivineLighthouse_Text_SailorPostIntro:
	.string "So, now you know the rules. No\n"
	.string "dilly, no dally. You ready, hotshot?$"

OlivineLighthouse_Text_CantLeaveGauntlet:
	.string "Hey, where do you think you're going?\p"
	.string "No leaving until you've tasted either\n"
	.string "victory or defeat, got it?$"

OlivineLighthouse_Text_SailorDeclinedGauntlet:
	.string "Bah. You'll be back. They ALL come\n"
	.string "crawling back eventually, heh heh heh...$"

OlivineLighthouse_Text_SailorAcceptedGauntlet:
	.string "That's the spirit! Now go in there and\n"
	.string "show them who's boss! WROARRR!$"

OlivineLighthouse_Text_SailorGauntletBeaten:
	.string "Would you look at that, you beat them\n"
	.string "all!\p"
	.string "Doesn't it make you feel powerful\n"
	.string "taking on all those trainers and coming\l"
	.string "out on top? Bwahahaha!$"

OlivineLighthouse_Text_WantToTakeBreak:
	.string "How's it going, lil' buddy? Looks to me\n"
	.string "like you're cooking up a storm.\p"
	.string "So... fancy taking that cheeky break we\n"
	.string "talked about earlier?$"

OlivineLighthouse_Text_GetBackInThere:
	.string "Hah! Not like you need it, eh? Now, go\n"
	.string "and show them what's what! WROARRR!$"

OlivineLighthouse_Text_PlayerUsingBreak:
	.string "Alright then. Go cool off for a minute.\p"
	.string "Just don't be gone too long, yeah?\p"
	.string "It's not gonna be a great look for me if\n"
	.string "the captain figures out I'm letting you\l"
	.string "off easy.$"

OlivineLighthouse_Text_SailorReadyToReenterGauntlet:
	.string "Hey, look who's back!\n"
	.string "You ready for round two, pal?$"

OlivineLighthouse_Text_SailorAcceptedReenterGauntlet:
	.string "Aw yeah! Now go and show those bums\n"
	.string "how it is! WROARRR!$"

OlivineLighthouse_Text_SailorDeclinedReenterGauntlet:
	.string "Alright, alright. Do what you need to do.\p"
	.string "And... maybe bring me a snack or \n"
	.string "something while you're away?\p"
	.string "...\p"
	.string "Only joking! Hahaha!\p"
	.string "Ha.......................\p"
	.string "...Maybe just a teeny tiny one?$"

OlivineLighthouse_EventScript_1FSailorRight::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 2, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_1FSailorRightBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 8, OlivineLighthouse_EventScript_1FSailorRightGauntletBeaten
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_1FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_1FSailorRightGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_1FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 2, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_1FSailorRightBlockReadjustPlayer::
	applymovement LOCALID_LIGHTHOUSE_1FSAILORRIGHT, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

OlivineLighthouse_EventScript_1FLastTrainerTrigger::
	lock
	playbgm MUS_ENCOUNTER_RICH, FALSE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_ALFRED, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 4, OlivineLighthouse_EventScript_AdjustLastTrainer1F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_GentlemanAlfredSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ALFRED, OlivineLighthouse_Text_GentlemanAlfredBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 3
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer1F::
    applymovement LOCALID_LIGHTHOUSE_ALFRED, Common_Movement_WalkRight1
    waitmovement 0
    return

OlivineLighthouse_Text_1FPokefanF:
	.string "In the past, Pokémon used to light\n"
	.string "the sea around Olivine at night.\p"
	.string "The Lighthouse was built in honor\n"
	.string "of those noble Pokémon.$"

OlivineLighthouse_Text_GentlemanAlfredSeen:
	.string "Hm? This is no place for playing.$"

OlivineLighthouse_Text_GentlemanAlfredBeaten:
	.string "Ah! I can see that you're serious.$"

OlivineLighthouse_Text_GentlemanAlfredAfter:
	.string "Up top is a Pokémon that keeps\n"
	.string "the Lighthouse lit.\p"
	.string "But I hear that it's sick now,\n"
	.string "and can't be cured normally.$"

OlivineLighthouse_EventScript_Alfred::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_ALFRED), OlivineLighthouse_EventScript_AlfredPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_GentlemanAlfredSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_ALFRED, OlivineLighthouse_Text_GentlemanAlfredBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AlfredPostBattle::
	msgbox OlivineLighthouse_Text_GentlemanAlfredAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_EventScript_Herman::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_HERMAN), OlivineLighthouse_EventScript_HermanPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_PsychicHermanSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_HERMAN, OlivineLighthouse_Text_PsychicHermanBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_HermanPostBattle::
	msgbox OlivineLighthouse_Text_PsychicHermanAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PsychicHermanSeen:
	.string "…$"

OlivineLighthouse_Text_PsychicHermanBeaten:
	.string "…$"

OlivineLighthouse_Text_PsychicHermanAfterBattle:
	.string "…\p"
	.string "I lost while I had my eyes closed…$"

OlivineLighthouse_EventScript_Jimmy::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_JIMMY), OlivineLighthouse_EventScript_JimmyPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_YoungsterJimmy_Seen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_JIMMY, OlivineLighthouse_Text_YoungsterJimmy_Beaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_JimmyPostBattle::
	msgbox OlivineLighthouse_Text_YoungsterJimmy_AfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_YoungsterJimmy_Seen:
	.string "I can run like the wind!$"

OlivineLighthouse_Text_YoungsterJimmy_Beaten:
	.string "Blown away!$"

OlivineLighthouse_Text_YoungsterJimmy_AfterBattle:
	.string "I wear shorts the whole year round.\p"
	.string "That's my fashion policy.$"

OlivineLighthouse_EventScript_Warren::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_WARREN), OlivineLighthouse_EventScript_WarrenPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_YoungsterWarren_Seen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_WARREN, OlivineLighthouse_Text_YoungsterWarren_Beaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_WarrenPostBattle::
	msgbox OlivineLighthouse_Text_YoungsterWarren_AfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_YoungsterWarren_Seen:
	.string "Hmmm… I don't know what to do…$"

OlivineLighthouse_Text_YoungsterWarren_Beaten:
	.string "I knew I'd lose…$"

OlivineLighthouse_Text_YoungsterWarren_AfterBattle:
	.string "You looked strong.\p"
	.string "I was afraid to take you on…$"

OlivineLighthouse_EventScript_Martin::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_MARTIN), OlivineLighthouse_EventScript_MartinPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
	msgbox OlivineLighthouse_Text_FisherMartinSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_MARTIN, OlivineLighthouse_Text_FisherMartinBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_MartinPostBattle::
	msgbox OlivineLighthouse_Text_FisherMartinAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_FisherMartinSeen:
	.string "Patience is the key to both\n"
	.string "fishing and Pokémon.$"

OlivineLighthouse_Text_FisherMartinBeaten:
	.string "Gwaaah!$"

OlivineLighthouse_Text_FisherMartinAfterBattle:
	.string "I'm too impatient for fishing…$"

OlivineLighthouse_EventScript_Kenny::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_KENNY), OlivineLighthouse_EventScript_KennyPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_HikerKennySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_KENNY, OlivineLighthouse_Text_HikerKennyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_KennyPostBattle::
	msgbox OlivineLighthouse_Text_HikerKennyAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_HikerKennySeen:
	.string "I should get myself an Onix.$"

OlivineLighthouse_Text_HikerKennyBeaten:
	.string "I lost…$"

OlivineLighthouse_Text_HikerKennyAfterBattle:
	.string "Geological features don't appear\n"
	.string "to change.\p"
	.string "But they actually change, little\n"
	.string "by little.$"

OlivineLighthouse_EventScript_Carter::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_CARTER), OlivineLighthouse_EventScript_CarterPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_PokefanmCarterSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_CARTER, OlivineLighthouse_Text_PokefanmCarterBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_CarterPostBattle::
	msgbox OlivineLighthouse_Text_PokefanmCarterAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PokefanmCarterSeen:
	.string "Let me tell you, I had a hard time\n"
	.string "catching my prized Pokémon.$"

OlivineLighthouse_Text_PokefanmCarterBeaten:
	.string "Awaaah!$"

OlivineLighthouse_Text_PokefanmCarterAfterBattle:
	.string "I think my team is well-balanced.$"

OlivineLighthouse_EventScript_Trevor::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_TREVOR), OlivineLighthouse_EventScript_TrevorPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_PokefanmTrevorSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_TREVOR, OlivineLighthouse_Text_PokefanmTrevorBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_TrevorPostBattle::
	msgbox OlivineLighthouse_Text_PokefanmTrevorAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PokefanmTrevorSeen:
	.string "Hi. Did you know…?\p"
	.string "Pokémon get more friendly if you\n"
	.string "train them in a place that they\l"
	.string "remember.$"

OlivineLighthouse_Text_PokefanmTrevorBeaten:
	.string "Where did I meet this Pokémon…?$"

OlivineLighthouse_Text_PokefanmTrevorAfterBattle:
	.string "If only there were an easy way to\n"
	.string "identify where I got my Pokémon…$"

@2nd floor==============================================================================================================================

OlivineLighthouse_EventScript_2FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_2FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 5, OlivineLighthouse_EventScript_SailorGauntletBeaten
	goto_if_set FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_2FSailorWantToResumeGauntlet
	msgbox OlivineLighthouse_Text_SailorPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedGauntlet
	case 0, OlivineLighthouse_EventScript_2FSailorAcceptedGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedGauntlet

OlivineLighthouse_EventScript_2FSailorAcceptedGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 4
	setflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_2FSailorRight::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 4, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_2FSailorRightBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 14, OlivineLighthouse_EventScript_2FSailorRightGauntletBeaten
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_2FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_2FSailorRightBlockReadjustPlayer::
	applymovement LOCALID_LIGHTHOUSE_2FSAILORRIGHT, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

OlivineLighthouse_EventScript_2FSailorBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 14, OlivineLighthouse_EventScript_2FSailorGauntletBeaten
	goto_if_unset FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_2FSailorWantToTakeBreak
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_2FSailorWantToResumeGauntlet
	call OlivineLighthouse_EventScript_2FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_2FSailorWantToTakeBreak::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_2FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_WantToTakeBreak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_2FBreakDeclined
	msgbox OlivineLighthouse_Text_PlayerUsingBreak, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	setflag FLAG_LIGHTHOUSE_BREAK_USED
	clearflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_2FSailorWantToResumeGauntlet::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_2FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorReadyToReenterGauntlet, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet
	case 0, OlivineLighthouse_EventScript_SailorAcceptedReenterGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet

OlivineLighthouse_EventScript_2FBreakDeclined::
	call OlivineLighthouse_EventScript_2FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_GetBackInThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_2FSailorGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_2FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 4, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_2FSailorRightGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_2FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 4, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_2FSailorBlockReadjustPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_2FSAILOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return


OlivineLighthouse_EventScript_2FLastTrainerTrigger::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_2, FALSE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_HUEY, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 33, OlivineLighthouse_EventScript_AdjustLastTrainer2F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_SailorHueySeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HUEY, OlivineLighthouse_Text_SailorHueyBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 5
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer2F::
    applymovement LOCALID_LIGHTHOUSE_HUEY, Common_Movement_WalkRight1
    waitmovement 0
    return

OlivineLighthouse_EventScript_Quentin::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_QUENTIN), OlivineLighthouse_EventScript_QuentinPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_CamperQuentinSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_QUENTIN, OlivineLighthouse_Text_CamperQuentinBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_QuentinPostBattle::
	msgbox OlivineLighthouse_Text_CamperQuentinAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_CamperQuentinSeen:
    .string "I'm really, really tough!$"

OlivineLighthouse_Text_CamperQuentinBeaten:
    .string "I was tough at the Battle Tower…$"

OlivineLighthouse_Text_CamperQuentinAfter:
    .string "Have you been to the Battle Tower?\p"
    .string "I never, ever lose there, but…$"	

OlivineLighthouse_EventScript_Timothy::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_TIMOTHY), OlivineLighthouse_EventScript_TimothyPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_2, TRUE
	msgbox OlivineLighthouse_Text_HikerTimothySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_TIMOTHY, OlivineLighthouse_Text_HikerTimothyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_TimothyPostBattle::
	msgbox OlivineLighthouse_Text_HikerTimothyAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_HikerTimothySeen:
    .string "Why do I climb mountains?\p"
    .string "Because they're there.\p"
    .string "Why do I train Pokémon?\p"
    .string "Because they're there!$"

OlivineLighthouse_Text_HikerTimothyBeaten:
    .string "Losses… They're there too!$"

OlivineLighthouse_Text_HikerTimothyAfter:
    .string "The best thing to ever happen to\n"
    .string "me was discovering Pokémon.$"

OlivineLighthouse_EventScript_Huey::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_HUEY), OlivineLighthouse_EventScript_HueyPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_SailorHueySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_HUEY, OlivineLighthouse_Text_SailorHueyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_HueyPostBattle::
    msgbox OlivineLighthouse_Text_SailorHueyAfter, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_Text_SailorHueySeen:
	.string "Men of the sea are always\n"
	.string "spoiling for a good fight!$"

OlivineLighthouse_Text_SailorHueyBeaten:
	.string "Urf!\n"
	.string "I lose!$"

OlivineLighthouse_Text_SailorHueyAfter:
	.string "What power! How would you like\n"
	.string "to sail the seas with me?$"

OlivineLighthouse_EventScript_Tommy::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_TOMMY), OlivineLighthouse_EventScript_TommyPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyTommySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_TOMMY, OlivineLighthouse_Text_SchoolboyTommyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_TommyPostBattle::
    msgbox OlivineLighthouse_Text_SchoolboyTommyAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_EventScript_Billy::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_BILLY), OlivineLighthouse_EventScript_BillyPostBattle
	playbgm MUS_HG_ENCOUNTER_SAGE, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyBillySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_BILLY, OlivineLighthouse_Text_SchoolboyBillyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_BillyPostBattle::
    msgbox OlivineLighthouse_Text_SchoolboyBillyAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_Text_SchoolboyTommySeen:
	.string "Let's battle. I won't lose!$"

OlivineLighthouse_Text_SchoolboyTommyBeaten:
	.string "I forgot to do my homework!$"

OlivineLighthouse_Text_SchoolboyTommyAfterBattle:
	.string "Sayonara! I just learned that in\n"
	.string "my Japanese class.$"

OlivineLighthouse_Text_SchoolboyBillySeen:
	.string "Are you making a note of what you've\n"
	.string "learned? Show me you still remember."

OlivineLighthouse_Text_SchoolboyBillyBeaten:
	.string "Ah. You remember.$"

OlivineLighthouse_Text_SchoolboyBillyAfterBattle:
	.string "Knowledge can be lost over time if you\n"
	.string "don't review it every so often.$"

OlivineLighthouse_EventScript_Denis::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_DENIS), OlivineLighthouse_EventScript_DenisPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_BirdKeeperDenisSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_DENIS, OlivineLighthouse_Text_BirdKeeperDenisBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_DenisPostBattle::
    msgbox OlivineLighthouse_Text_BirdKeeperDenisAfter, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_Text_BirdKeeperDenisSeen:
	.string "We're pretty high up here. My bird\n"
	.string "Pokémon are in prime form.$"

OlivineLighthouse_Text_BirdKeeperDenisBeaten:
	.string "Oops… They crashed…$"

OlivineLighthouse_Text_BirdKeeperDenisAfter:
	.string "My Pokémon learned how to use Fly in\n"
	.string "Cianwood.\p"
	.string "Well, since I'm a loser, I'll Fly\n"
	.string "across the sea…$"

@3rd floor==============================================================================================================================

OlivineLighthouse_EventScript_3FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_3FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 7, OlivineLighthouse_EventScript_SailorGauntletBeaten
	goto_if_set FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_3FSailorWantToResumeGauntlet
	msgbox OlivineLighthouse_Text_SailorPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedGauntlet
	case 0, OlivineLighthouse_EventScript_3FSailorAcceptedGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedGauntlet

OlivineLighthouse_EventScript_3FSailorAcceptedGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 6
	setflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_3FSailorRight::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 6, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_3FSailorRightBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 19, OlivineLighthouse_EventScript_3FSailorRightGauntletBeaten
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_3FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_3FSailorRightBlockReadjustPlayer::
	applymovement LOCALID_LIGHTHOUSE_3FSAILORRIGHT, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

OlivineLighthouse_EventScript_3FSailorBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 19, OlivineLighthouse_EventScript_3FSailorGauntletBeaten
	goto_if_unset FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_3FSailorWantToTakeBreak
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_3FSailorWantToResumeGauntlet
	call OlivineLighthouse_EventScript_3FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_3FSailorWantToTakeBreak::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_3FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_WantToTakeBreak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_3FBreakDeclined
	msgbox OlivineLighthouse_Text_PlayerUsingBreak, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	setflag FLAG_LIGHTHOUSE_BREAK_USED
	clearflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_3FSailorWantToResumeGauntlet::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_3FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorReadyToReenterGauntlet, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet
	case 0, OlivineLighthouse_EventScript_SailorAcceptedReenterGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet

OlivineLighthouse_EventScript_3FBreakDeclined::
	call OlivineLighthouse_EventScript_3FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_GetBackInThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_3FSailorGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_3FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 6, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_3FSailorRightGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_3FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 6, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_3FSailorBlockReadjustPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_3FSAILOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return




OlivineLighthouse_EventScript_3FLastTrainerTrigger::
	lock
	playbgm MUS_ENCOUNTER_MALE, FALSE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_THEO, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 62, OlivineLighthouse_EventScript_AdjustLastTrainer3F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_BirdKeeperTheoSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_THEO, OlivineLighthouse_Text_BirdKeeperTheoBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 7
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer3F::
    applymovement LOCALID_LIGHTHOUSE_THEO, Common_Movement_WalkRight1
    waitmovement 0
    return

OlivineLighthouse_EventScript_Theo::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_THEO), OlivineLighthouse_EventScript_TheoPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_BirdKeeperTheoSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_THEO, OlivineLighthouse_Text_BirdKeeperTheoBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_TheoPostBattle::
	msgbox OlivineLighthouse_Text_BirdKeeperTheoAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BirdKeeperTheoSeen:
	.string "Why are you here? Are you just\n"
	.string "going to gawk? I suggest you leave!$"

OlivineLighthouse_Text_BirdKeeperTheoBeaten:
	.string "You really are concerned about\n"
	.string "the sick Pokémon…$"

OlivineLighthouse_Text_BirdKeeperTheoAfter:
	.string "How the heck do you go up?\p"
	.string "I want to visit the sick Pokémon,\n"
	.string "but I can't get up there…$"


OlivineLighthouse_EventScript_SailorTerrell::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_TERRELL), OlivineLighthouse_EventScript_TerrellPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_2, TRUE
	msgbox OlivineLighthouse_Text_SailorTerrellSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_TERRELL, OlivineLighthouse_Text_SailorTerrellBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_TerrellPostBattle::
	msgbox OlivineLighthouse_Text_SailorTerrellAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_SailorTerrellSeen:
	.string "Sailors are both kind and strong.\n"
	.string "How about you?$"

OlivineLighthouse_Text_SailorTerrellBeaten:
	.string "You are both kind and strong…$"

OlivineLighthouse_Text_SailorTerrellAfter:
	.string "Every time I return to Olivine,\n"
	.string "I visit the Gym.\p"
	.string "The Gym Leader’s Pokémon type\n"
	.string "changed without me noticing.$"


OlivineLighthouse_EventScript_GentlemanPreston::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_PRESTON), OlivineLighthouse_EventScript_PrestonPostBattle
	playbgm MUS_ENCOUNTER_RICH, TRUE
	msgbox OlivineLighthouse_Text_GentlemanPrestonSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_PRESTON, OlivineLighthouse_Text_GentlemanPrestonBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_PrestonPostBattle::
	msgbox OlivineLighthouse_Text_GentlemanPrestonAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_GentlemanPrestonSeen:
	.string "I travel the world to train my\n"
	.string "Pokémon. I wish to battle you.$"

OlivineLighthouse_Text_GentlemanPrestonBeaten:
	.string "…Sigh. I must train some more…$"

OlivineLighthouse_Text_GentlemanPrestonAfter:
	.string "Jasmine used to use rock-type\n"
	.string "Pokémon like Onix.$"


OlivineLighthouse_EventScript_HikerBailey::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_BAILEY), OlivineLighthouse_EventScript_BaileyPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
	msgbox OlivineLighthouse_Text_HikerBaileySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_BAILEY, OlivineLighthouse_Text_HikerBaileyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_BaileyPostBattle::
	msgbox OlivineLighthouse_Text_HikerBaileyAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_HikerBaileySeen:
	.string "Alright! I'll show you the\n"
	.string "power of my Pokémon!$"

OlivineLighthouse_Text_HikerBaileyBeaten:
	.string "Mercy! You showed me your\n"
	.string "power!$"

OlivineLighthouse_Text_HikerBaileyAfterBattle:
	.string "It's over. I don't mind.\n"
	.string "We psychics can see it coming.$"

OlivineLighthouse_EventScript_HikerNoland::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_NOLAND), OlivineLighthouse_EventScript_NolandPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_2, TRUE
	msgbox OlivineLighthouse_Text_HikerNolandSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_NOLAND, OlivineLighthouse_Text_HikerNolandBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_NolandPostBattle::
	msgbox OlivineLighthouse_Text_HikerNolandAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_HikerNolandSeen:
    .string "Are you alone?\n"
    .string "Then let's battle!$"

OlivineLighthouse_Text_HikerNolandBeaten:
    .string "That's too much to handle!$"

OlivineLighthouse_Text_HikerNolandAfterBattle:
    .string "I wonder if there are any\n"
    .string "mountains worth climbing in Kanto?$"


@4th floor==============================================================================================================================

OlivineLighthouse_EventScript_4FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_4FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 9, OlivineLighthouse_EventScript_SailorGauntletBeaten
	goto_if_set FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_4FSailorWantToResumeGauntlet
	msgbox OlivineLighthouse_Text_SailorPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedGauntlet
	case 0, OlivineLighthouse_EventScript_4FSailorAcceptedGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedGauntlet

OlivineLighthouse_EventScript_4FSailorAcceptedGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 8
	setflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_4FSailorRight::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 8, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_4FSailorRightBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 31, OlivineLighthouse_EventScript_4FSailorRightGauntletBeaten
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_4FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_4FSailorRightBlockReadjustPlayer::
	applymovement LOCALID_LIGHTHOUSE_4FSAILORRIGHT, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

OlivineLighthouse_EventScript_4FSailorBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 31, OlivineLighthouse_EventScript_4FSailorGauntletBeaten
	goto_if_unset FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_4FSailorWantToTakeBreak
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_4FSailorWantToResumeGauntlet
	call OlivineLighthouse_EventScript_4FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_4FSailorWantToTakeBreak::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_4FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_WantToTakeBreak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_4FBreakDeclined
	msgbox OlivineLighthouse_Text_PlayerUsingBreak, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	setflag FLAG_LIGHTHOUSE_BREAK_USED
	clearflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_4FSailorWantToResumeGauntlet::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_4FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorReadyToReenterGauntlet, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet
	case 0, OlivineLighthouse_EventScript_SailorAcceptedReenterGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet

OlivineLighthouse_EventScript_4FBreakDeclined::
	call OlivineLighthouse_EventScript_4FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_GetBackInThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_4FSailorGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_4FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 8, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_4FSailorRightGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_4FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 8, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_4FSailorBlockReadjustPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_4FSAILOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return








OlivineLighthouse_EventScript_4FLastTrainerTrigger::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_2, FALSE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_KENT, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 91, OlivineLighthouse_EventScript_AdjustLastTrainer4F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_PsychicKentSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KENT, OlivineLighthouse_Text_PsychicKentBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 9
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer4F::
    applymovement LOCALID_LIGHTHOUSE_KENT, Common_Movement_WalkRight1
    waitmovement 0
    return


OlivineLighthouse_EventScript_Jim::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_JIM), OlivineLighthouse_EventScript_JimPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_2, TRUE
	msgbox OlivineLighthouse_Text_HikerJimSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_JIM, OlivineLighthouse_Text_HikerJimBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_JimPostBattle::
	msgbox OlivineLighthouse_Text_HikerJimAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_HikerJimSeen:
	.string "Hahahah!$"

OlivineLighthouse_Text_HikerJimBeaten:
	.string "Hahaha-hachoo!$"

OlivineLighthouse_Text_HikerJimAfter:
	.string "Hay fever is making me sneeze!\n"
	.string "Ahahah-CHOO!$"


OlivineLighthouse_EventScript_Kazu::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_KAZU), OlivineLighthouse_EventScript_KazuPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_KazuSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_KAZU, OlivineLighthouse_Text_KazuBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_KazuPostBattle::
	msgbox OlivineLighthouse_Text_KazuAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_KazuSeen:
	.string "This place isn't your casual play.\n"
	.string "area. It's not suited for a picnic.$"

OlivineLighthouse_Text_KazuBeaten:
	.string "Ohhh, no!$"

OlivineLighthouse_Text_KazuAfter:
	.string "I guess I was the casual...$"

OlivineLighthouse_EventScript_Charles::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_CHARLES), OlivineLighthouse_EventScript_CharlesPostBattle
	playbgm MUS_ENCOUNTER_RICH, TRUE
	msgbox OlivineLighthouse_Text_BikerCharlesSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_CHARLES, OlivineLighthouse_Text_BikerCharlesBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_CharlesPostBattle::
	msgbox OlivineLighthouse_Text_BikerCharlesAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BikerCharlesSeen:
	.string "My age makes me fearless. You'll\n"
	.string "understand when you're older.$"

OlivineLighthouse_Text_BikerCharlesBeaten:
	.string "Good heavens!$"

OlivineLighthouse_Text_BikerCharlesAfterBattle:
	.string "They say that a bit of fear is good. It\n"
	.string "keeps you alert when you ought to be.$"

OlivineLighthouse_EventScript_Joel::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_JOEL), OlivineLighthouse_EventScript_JoelPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_BikerJoelSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_JOEL, OlivineLighthouse_Text_BikerJoelBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_JoelPostBattle::
	msgbox OlivineLighthouse_Text_BikerJoelAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BikerJoelSeen:
	.string "Oi mate, you wanna go or what?$"

OlivineLighthouse_Text_BikerJoelBeaten:
	.string "Chill bruv!$"

OlivineLighthouse_Text_BikerJoelAfterBattle:
	.string "Nah you're going crazy on it, and for\n"
	.string "what?$"


OlivineLighthouse_EventScript_PsychicKent::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_KENT), OlivineLighthouse_EventScript_KentPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_PsychicKentSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_KENT, OlivineLighthouse_Text_PsychicKentBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_KentPostBattle::
	msgbox OlivineLighthouse_Text_PsychicKentAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PsychicKentSeen:
	.string "Jasmine must be worried sick about\n"
	.string "the Pokémon here.\p"
	.string "She won't even smile these days.$"

OlivineLighthouse_Text_PsychicKentBeaten:
	.string "I can't manage a smile either…$"

OlivineLighthouse_Text_PsychicKentAfter:
	.string "Speaking of sick, I've heard there's\n"
	.string "a good Pharmacy past Cianwood.$"


OlivineLighthouse_EventScript_LassConnie::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_CONNIE), OlivineLighthouse_EventScript_ConniePostBattle
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	msgbox OlivineLighthouse_Text_LassConnieSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_CONNIE, OlivineLighthouse_Text_LassConnieBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_ConniePostBattle::
	msgbox OlivineLighthouse_Text_LassConnieAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_LassConnieSeen:
	.string "Jasmine was this city's Gym Leader.\p"
	.string "I mean to bring her back with me.\p"
	.string "Nobody had better get in my way!$"

OlivineLighthouse_Text_LassConnieBeaten:
	.string "Aaack! My Pokémon!$"

OlivineLighthouse_Text_LassConnieAfter:
	.string "Right. Anybody would be worried if\n"
	.string "his or her own Pokémon were hurt.\p"
	.string "I'll pray for the Pokémon here, so\n"
	.string "Jasmine can get on with her life.$"


OlivineLighthouse_EventScript_Kipp::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_KIPP), OlivineLighthouse_EventScript_KippPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyKippSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_KIPP, OlivineLighthouse_Text_SchoolboyKippBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_KippPostBattle::
	msgbox OlivineLighthouse_Text_SchoolboyKippAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_SchoolboyKippSeen:
	.string "Hang on. I have to phone my mom.$"

OlivineLighthouse_Text_SchoolboyKippBeaten:
	.string "Sorry, Mom! I was beaten!$"

OlivineLighthouse_Text_SchoolboyKippAfterBattle:
	.string "My mom worries so much about me, I\n"
	.string "have to phone her all the time.$"


OlivineLighthouse_EventScript_Johnny::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_JOHNNY), OlivineLighthouse_EventScript_JohnnyPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyJohnnySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_JOHNNY, OlivineLighthouse_Text_SchoolboyJohnnyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_JohnnyPostBattle::
	msgbox OlivineLighthouse_Text_SchoolboyJohnnyAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_SchoolboyJohnnySeen:
	.string "I love being up high. The air smells so\n"
	.string "fresh, don't you think?$"

OlivineLighthouse_Text_SchoolboyJohnnyBeaten:
	.string "You're wickedly tough!$"

OlivineLighthouse_Text_SchoolboyJohnnyAfterBattle:
	.string "It's always a bummer coming back down\n"
	.string "to earth on the ground floor...$"


OlivineLighthouse_EventScript_Boris::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_BORIS), OlivineLighthouse_EventScript_BorisPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_BirdKeeperBorisSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_BORIS, OlivineLighthouse_Text_BirdKeeperBorisBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_BorisPostBattle::
	msgbox OlivineLighthouse_Text_BirdKeeperBorisAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BirdKeeperBorisSeen:
	.string "If you're looking for your future,\n"
	.string "it won't be easy to find.$"

OlivineLighthouse_Text_BirdKeeperBorisBeaten:
	.string "Ayieee!$"

OlivineLighthouse_Text_BirdKeeperBorisAfterBattle:
	.string "We all make our own path in life. That's\n"
	.string "what makes things interesting.$"

OlivineLighthouse_EventScript_Bob::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_BOB), OlivineLighthouse_EventScript_BobPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
	msgbox OlivineLighthouse_Text_BirdKeeperBobSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_BOB, OlivineLighthouse_Text_BirdKeeperBobBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_BobPostBattle::
	msgbox OlivineLighthouse_Text_BirdKeeperBobAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BirdKeeperBobSeen:
	.string "It feels a little dispiriting to be just\n"
	.string "one of many trainers lined up like this.\p"
	.string "I'm not some Team Rocket grunt... \n"
	.string "I want to be the main character!$"

OlivineLighthouse_Text_BirdKeeperBobBeaten:
	.string "…Whew!$"

OlivineLighthouse_Text_BirdKeeperBobAfterBattle:
	.string "I guess to be the star of the show,\n"
	.string "you've got to be good at what you do.\p"
	.string "Then again, maybe this is just my\n"
	.string "training arc... Yeah, that's it!$"

OlivineLighthouse_EventScript_Arnold::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_ARNOLD), OlivineLighthouse_EventScript_ArnoldPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_FisherArnoldSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_ARNOLD, OlivineLighthouse_Text_FisherArnoldBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_ArnoldPostBattle::
	msgbox OlivineLighthouse_Text_FisherArnoldAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_FisherArnoldSeen:
	.string "I'm bored by waiting. Let's battle!$"

OlivineLighthouse_Text_FisherArnoldBeaten:
	.string "Utter failure…$"

OlivineLighthouse_Text_FisherArnoldAfterBattle:
	.string "I'll just go back to waiting…\n"
	.string "But there's nothing to do…$"


OlivineLighthouse_EventScript_Dudley::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_DUDLEY), OlivineLighthouse_EventScript_DudleyPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyDudleySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_DUDLEY, OlivineLighthouse_Text_SchoolboyDudleyBeaten
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_DudleyPostBattle::
	msgbox OlivineLighthouse_Text_SchoolboyDudleyAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_SchoolboyDudleySeen:
	.string "Here I come! Kachow!$"

OlivineLighthouse_Text_SchoolboyDudleyBeaten:
	.string "Whoo! Good stuff.$"

OlivineLighthouse_Text_SchoolboyDudleyAfter:
	.string "Kachow is Lightning McQueen's\n"
	.string "catchphrase.\p"
	.string "When I was young, I always wanted\n"
	.string "to be a car...$"

@5th floor==============================================================================================================================

OlivineLighthouse_EventScript_5FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_5FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 11, OlivineLighthouse_EventScript_SailorGauntletBeaten
	goto_if_set FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_5FSailorWantToResumeGauntlet
	msgbox OlivineLighthouse_Text_SailorPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedGauntlet
	case 0, OlivineLighthouse_EventScript_5FSailorAcceptedGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedGauntlet

OlivineLighthouse_EventScript_5FSailorAcceptedGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 10
	setflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_5FSailorRight::
	lock
	faceplayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 10, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_5FSailorRightBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 36, OlivineLighthouse_EventScript_5FSailorRightGauntletBeaten
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_5FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_5FSailorRightBlockReadjustPlayer::
	applymovement LOCALID_LIGHTHOUSE_5FSAILORRIGHT, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

OlivineLighthouse_EventScript_5FSailorBlockPlayer::
	lock
	goto_if_ge VAR_LIGHTHOUSE_TRAINER_COUNTER, 36, OlivineLighthouse_EventScript_5FSailorGauntletBeaten
	goto_if_unset FLAG_LIGHTHOUSE_BREAK_USED, OlivineLighthouse_EventScript_5FSailorWantToTakeBreak
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_5FSailorWantToResumeGauntlet
	call OlivineLighthouse_EventScript_5FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_5FSailorWantToTakeBreak::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_5FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_WantToTakeBreak, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_5FBreakDeclined
	msgbox OlivineLighthouse_Text_PlayerUsingBreak, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	setflag FLAG_LIGHTHOUSE_BREAK_USED
	clearflag FLAG_IN_GAUNTLET
	release
	end

OlivineLighthouse_EventScript_5FSailorWantToResumeGauntlet::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_5FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorReadyToReenterGauntlet, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet
	case 0, OlivineLighthouse_EventScript_SailorAcceptedReenterGauntlet
	goto OlivineLighthouse_EventScript_SailorDeclinedReenterGauntlet

OlivineLighthouse_EventScript_5FBreakDeclined::
	call OlivineLighthouse_EventScript_5FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_GetBackInThere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_5FSailorGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, OlivineLighthouse_EventScript_5FSailorBlockReadjustPlayerLeft
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 10, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_5FSailorRightGauntletBeaten::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_SOUTH, OlivineLighthouse_EventScript_5FSailorRightBlockReadjustPlayer
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 10, OlivineLighthouse_EventScript_MarkCurrentGauntletComplete
	release
	end

OlivineLighthouse_EventScript_5FSailorBlockReadjustPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_5FSAILOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return









OlivineLighthouse_EventScript_5FLastTrainerTrigger::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_2, FALSE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_ERNEST, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 120, OlivineLighthouse_EventScript_AdjustLastTrainer5F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_CooltrainerErnestSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERNEST, OlivineLighthouse_Text_CooltrainerErnestBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 11
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer5F::
    applymovement LOCALID_LIGHTHOUSE_ERNEST, Common_Movement_WalkRight1
    waitmovement 0
    return

OlivineLighthouse_EventScript_Glenn::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_GLENN), OlivineLighthouse_EventScript_GlennPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
	msgbox OlivineLighthouse_Text_BikerGlennSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_GLENN, OlivineLighthouse_Text_BikerGlennBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 133, OlivineLighthouse_EventScript_AdjustCoreyPlayerLeft
	call_if_eq VAR_TEMP_0, 134, OlivineLighthouse_EventScript_AdjustCoreyPlayerMiddle
	call_if_eq VAR_TEMP_0, 135, OlivineLighthouse_EventScript_AdjustCoreyPlayerRight
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_2, TRUE
	msgbox OlivineLighthouse_Text_BurglarCoreySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_COREY, OlivineLighthouse_Text_BurglarCoreyBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_COREY, 134, 5
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustCoreyPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_COREY, OlivineLighthouse_Movement_AdjustCoreyPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustCoreyPlayerLeft::
	walk_left
	walk_up
	step_end

OlivineLighthouse_EventScript_AdjustCoreyPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustCoreyPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_COREY, OlivineLighthouse_Movement_AdjustCoreyPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustCoreyPlayerRight::
	walk_right 
	walk_up
	step_end

OlivineLighthouse_EventScript_GlennPostBattle::
	msgbox OlivineLighthouse_Text_BikerGlennAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BikerGlennSeen:
	.string "You must be getting pretty tired now,\n"
	.string "huh?\p"
	.string "This'll be like taking candy from a baby!$"

OlivineLighthouse_Text_BikerGlennBeaten:
	.string "You're one tough baby...$"

OlivineLighthouse_Text_BikerGlennAfterBattle:
	.string "Well, I guess I didn't sleep well today\n"
	.string "either, ha ha ha...$"

OlivineLighthouse_EventScript_Corey::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_COREY), OlivineLighthouse_EventScript_CoreyPostBattle
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_2, TRUE
	msgbox OlivineLighthouse_Text_BurglarCoreySeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_COREY, OlivineLighthouse_Text_BurglarCoreyBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 133, OlivineLighthouse_EventScript_AdjustGlennPlayerLeft
	call_if_eq VAR_TEMP_0, 134, OlivineLighthouse_EventScript_AdjustGlennPlayerMiddle
	call_if_eq VAR_TEMP_0, 135, OlivineLighthouse_EventScript_AdjustGlennPlayerRight
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
	msgbox OlivineLighthouse_Text_BikerGlennSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_GLENN, OlivineLighthouse_Text_BikerGlennBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_GLENN, 134, 3
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustGlennPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_GLENN, OlivineLighthouse_Movement_AdjustGlennPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustGlennPlayerLeft::
	walk_left
	walk_down
	step_end

OlivineLighthouse_EventScript_AdjustGlennPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustGlennPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_GLENN, OlivineLighthouse_Movement_AdjustGlennPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustGlennPlayerRight::
	walk_right 
	walk_down
	step_end

OlivineLighthouse_EventScript_CoreyPostBattle::
	msgbox OlivineLighthouse_Text_BurglarCoreyAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_BurglarCoreySeen:
	.string "Yeehaw! Lucky!$"

OlivineLighthouse_Text_BurglarCoreyBeaten:
	.string "How unlucky! I lost!$"

OlivineLighthouse_Text_BurglarCoreyAfterBattle:
	.string "I found a pretty stone here.\p"
	.string "Someone must have lost it…$"



OlivineLighthouse_EventScript_Lyle::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_LYLE), OlivineLighthouse_EventScript_LylePostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_FirebreatherLyleSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_LYLE, OlivineLighthouse_Text_FirebreatherLyleBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 130, OlivineLighthouse_EventScript_AdjustBillPlayerLeft
	call_if_eq VAR_TEMP_0, 131, OlivineLighthouse_EventScript_AdjustBillPlayerMiddle
	call_if_eq VAR_TEMP_0, 132, OlivineLighthouse_EventScript_AdjustBillPlayerRight
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_FirebreatherBillSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_BILL, OlivineLighthouse_Text_FirebreatherBillBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_BILL, 131, 5
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustBillPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_BILL, OlivineLighthouse_Movement_AdjustBillPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustBillPlayerLeft::
	walk_left
	walk_up
	step_end

OlivineLighthouse_EventScript_AdjustBillPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustBillPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_BILL, OlivineLighthouse_Movement_AdjustBillPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustBillPlayerRight::
	walk_right 
	walk_up
	step_end

OlivineLighthouse_EventScript_LylePostBattle::
	msgbox OlivineLighthouse_Text_FirebreatherLyleAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_FirebreatherLyleSeen:
    .string "I'm going to Kanto to put\n"
    .string "on sword-swallowing shows!$"

OlivineLighthouse_Text_FirebreatherLyleBeaten:
    .string "Bonk… the sword is dull.$"

OlivineLighthouse_Text_FirebreatherLyleAfterBattle:
    .string "I guess my battling style is just\n"
    .string "too blunt.$"



OlivineLighthouse_EventScript_FirebreatherBill::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_BILL), OlivineLighthouse_EventScript_BillPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_FirebreatherBillSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_BILL, OlivineLighthouse_Text_FirebreatherBillBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 130, OlivineLighthouse_EventScript_AdjustLylePlayerLeft
	call_if_eq VAR_TEMP_0, 131, OlivineLighthouse_EventScript_AdjustLylePlayerMiddle
	call_if_eq VAR_TEMP_0, 132, OlivineLighthouse_EventScript_AdjustLylePlayerRight
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_FirebreatherLyleSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_LYLE, OlivineLighthouse_Text_FirebreatherLyleBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_LYLE, 131, 3
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustLylePlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_LYLE, OlivineLighthouse_Movement_AdjustLylePlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustLylePlayerLeft::
	walk_left
	walk_down
	step_end

OlivineLighthouse_EventScript_AdjustLylePlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustLylePlayerRight::
	applymovement LOCALID_LIGHTHOUSE_LYLE, OlivineLighthouse_Movement_AdjustLylePlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustLylePlayerRight::
	walk_right 
	walk_down
	step_end

OlivineLighthouse_EventScript_BillPostBattle::
	msgbox OlivineLighthouse_Text_FirebreatherBillAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_FirebreatherBillSeen:
	.string "Heh! I'll catch you like I'd catch any\n"
	.string "bug!$"

OlivineLighthouse_Text_FirebreatherBillBeaten:
	.string "Ack! What gives?$"

OlivineLighthouse_Text_FirebreatherBillAfter:
	.string "Hmph! You won't elude me next time,\n"
	.string "little bug!$"



OlivineLighthouse_EventScript_Ernest::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_ERNEST), OlivineLighthouse_EventScript_ErnestPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_CooltrainerErnestSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_ERNEST, OlivineLighthouse_Text_CooltrainerErnestBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 127, OlivineLighthouse_EventScript_AdjustEllenPlayerLeft
	call_if_eq VAR_TEMP_0, 128, OlivineLighthouse_EventScript_AdjustEllenPlayerMiddle
	call_if_eq VAR_TEMP_0, 129, OlivineLighthouse_EventScript_AdjustEllenPlayerRight
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	msgbox OlivineLighthouse_Text_LassEllenSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_ELLEN, OlivineLighthouse_Text_LassEllenBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_ELLEN, 128, 5
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustEllenPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_ELLEN, OlivineLighthouse_Movement_AdjustEllenPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustEllenPlayerLeft::
	walk_left
	walk_up
	step_end

OlivineLighthouse_EventScript_AdjustEllenPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustEllenPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_ELLEN, OlivineLighthouse_Movement_AdjustEllenPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustEllenPlayerRight::
	walk_right 
	walk_up
	step_end

OlivineLighthouse_EventScript_ErnestPostBattle::
	msgbox OlivineLighthouse_Text_CooltrainerErnestAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_CooltrainerErnestSeen:
	.string "I wanted to battle Jasmine, but she's\n"
	.string "not up to it now.\p"
	.string "So, how about you?$"

OlivineLighthouse_Text_CooltrainerErnestBeaten:
	.string "Whoa, whoa. You're overwhelming!$"

OlivineLighthouse_Text_CooltrainerErnestAfter:
	.string "A Gym Leader isn't just about being\n"
	.string "strong.\p"
	.string "A Leader also needs to be\n"
	.string "compassionate.$"

OlivineLighthouse_EventScript_Ellen::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_ELLEN), OlivineLighthouse_EventScript_EllenPostBattle
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	msgbox OlivineLighthouse_Text_LassEllenSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_ELLEN, OlivineLighthouse_Text_LassEllenBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 127, OlivineLighthouse_EventScript_AdjustErnestPlayerLeft
	call_if_eq VAR_TEMP_0, 128, OlivineLighthouse_EventScript_AdjustErnestPlayerMiddle
	call_if_eq VAR_TEMP_0, 129, OlivineLighthouse_EventScript_AdjustErnestPlayerRight
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_CooltrainerErnestSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_ERNEST, OlivineLighthouse_Text_CooltrainerErnestBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_ERNEST, 128, 3
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustErnestPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_ERNEST, OlivineLighthouse_Movement_AdjustErnestPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustErnestPlayerLeft::
	walk_left
	walk_down
	step_end

OlivineLighthouse_EventScript_AdjustErnestPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustErnestPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_ERNEST, OlivineLighthouse_Movement_AdjustErnestPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustErnestPlayerRight::
	walk_right 
	walk_down
	step_end

OlivineLighthouse_EventScript_EllenPostBattle::
	msgbox OlivineLighthouse_Text_LassEllenAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_LassEllenSeen:
	.string "It's my turn. Draw! From my hand I\n"
	.string "summon...$"

OlivineLighthouse_Text_LassEllenBeaten:
	.string "Nooooo! My life points! Ahhhhhhhhhhhh!$"

OlivineLighthouse_Text_LassEllenAfter:
	.string "I can't talk right now. I'm pretending\n"
	.string "to be in the Shadow Realm.\p"
	.string "...\p"
	.string "It's pretty boring in here...$"




OlivineLighthouse_EventScript_Joe::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_JOE), OlivineLighthouse_EventScript_JoePostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyJoeSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_JOE, OlivineLighthouse_Text_SchoolboyJoeBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 124, OlivineLighthouse_EventScript_AdjustLauraPlayerLeft
	call_if_eq VAR_TEMP_0, 125, OlivineLighthouse_EventScript_AdjustLauraPlayerMiddle
	call_if_eq VAR_TEMP_0, 126, OlivineLighthouse_EventScript_AdjustLauraPlayerRight
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	msgbox OlivineLighthouse_Text_LassLauraSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_LAURA, OlivineLighthouse_Text_LassLauraBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_LAURA, 125, 5
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustLauraPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_LAURA, OlivineLighthouse_Movement_AdjustLauraPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustLauraPlayerLeft::
	walk_left
	walk_up
	step_end

OlivineLighthouse_EventScript_AdjustLauraPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustLauraPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_LAURA, OlivineLighthouse_Movement_AdjustLauraPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustLauraPlayerRight::
	walk_right 
	walk_up
	step_end

OlivineLighthouse_EventScript_JoePostBattle::
	msgbox OlivineLighthouse_Text_SchoolboyJoeAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_SchoolboyJoeSeen:
	.string "Hey, wanna hear a joke?\n"
	.string "It starts with, 'my name is Joe'!$"

OlivineLighthouse_Text_SchoolboyJoeBeaten:
	.string "Joe who?$"

OlivineLighthouse_Text_SchoolboyJoeAfter:
	.string "Joe need to stop expecting the obvious\n"
	.string "punchline every time.\p"
	.string "You thought I'd say Joe mama, didn't\n"	
	.string "you? Never let them know Joe next move.$"


OlivineLighthouse_EventScript_Laura::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_LAURA), OlivineLighthouse_EventScript_LauraPostBattle
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	msgbox OlivineLighthouse_Text_LassLauraSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_LAURA, OlivineLighthouse_Text_LassLauraBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 124, OlivineLighthouse_EventScript_AdjustJoePlayerLeft
	call_if_eq VAR_TEMP_0, 125, OlivineLighthouse_EventScript_AdjustJoePlayerMiddle
	call_if_eq VAR_TEMP_0, 126, OlivineLighthouse_EventScript_AdjustJoePlayerRight
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_SchoolboyJoeSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_JOE, OlivineLighthouse_Text_SchoolboyJoeBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_JOE, 125, 3
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustJoePlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_JOE, OlivineLighthouse_Movement_AdjustJoePlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustJoePlayerLeft::
	walk_left
	walk_down
	step_end

OlivineLighthouse_EventScript_AdjustJoePlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustJoePlayerRight::
	applymovement LOCALID_LIGHTHOUSE_JOE, OlivineLighthouse_Movement_AdjustJoePlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustJoePlayerRight::
	walk_right 
	walk_down
	step_end

OlivineLighthouse_EventScript_LauraPostBattle::
	msgbox OlivineLighthouse_Text_LassLauraAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_LassLauraSeen:
	.string "Hi! Hi! Look at my kitty cat!$"

OlivineLighthouse_Text_LassLauraBeaten:
	.string "What the…$"

OlivineLighthouse_Text_LassLauraAfter:
	.string "Isn't Liepard just so, so cute?$"


OlivineLighthouse_EventScript_Lloyd::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_LLOYD), OlivineLighthouse_EventScript_LloydPostBattle
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
	msgbox OlivineLighthouse_Text_CamperLloydSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_LLOYD, OlivineLighthouse_Text_CamperLloydBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 121, OlivineLighthouse_EventScript_AdjustShannonPlayerLeft
	call_if_eq VAR_TEMP_0, 122, OlivineLighthouse_EventScript_AdjustShannonPlayerMiddle
	call_if_eq VAR_TEMP_0, 123, OlivineLighthouse_EventScript_AdjustShannonPlayerRight
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	msgbox OlivineLighthouse_Text_LassShannonSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_SHANNON, OlivineLighthouse_Text_LassShannonBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_SHANNON, 122, 5
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustShannonPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_SHANNON, OlivineLighthouse_Movement_AdjustShannonPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustShannonPlayerLeft::
	walk_left
	walk_up
	step_end

OlivineLighthouse_EventScript_AdjustShannonPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustShannonPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_SHANNON, OlivineLighthouse_Movement_AdjustShannonPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustShannonPlayerRight::
	walk_right 
	walk_up
	step_end

OlivineLighthouse_EventScript_LloydPostBattle::
	msgbox OlivineLighthouse_Text_CamperLloydAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_CamperLloydSeen:
	.string "WAIT! YOU FORGOT THE$"

OlivineLighthouse_Text_CamperLloydBeaten:
	.string "Never mind...$"

OlivineLighthouse_Text_CamperLloydAfter:
	.string "Why do they call it oven when you of in\n"
	.string "the cold food of out hot eat the food?$"


OlivineLighthouse_EventScript_Shannon::
	lock
	faceplayer
	goto_if_set (TRAINER_FLAGS_START + TRAINER_SHANNON), OlivineLighthouse_EventScript_ShannonPostBattle
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	msgbox OlivineLighthouse_Text_LassShannonSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_SHANNON, OlivineLighthouse_Text_LassShannonBeaten
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 121, OlivineLighthouse_EventScript_AdjustLloydPlayerLeft
	call_if_eq VAR_TEMP_0, 122, OlivineLighthouse_EventScript_AdjustLloydPlayerMiddle
	call_if_eq VAR_TEMP_0, 123, OlivineLighthouse_EventScript_AdjustLloydPlayerRight
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	msgbox OlivineLighthouse_Text_CamperLloydSeen, MSGBOX_DEFAULT
	playbgm MUS_HG_LIGHTHOUSE, TRUE
	trainerbattle_no_intro TRAINER_LLOYD, OlivineLighthouse_Text_CamperLloydBeaten
	fadescreen FADE_TO_BLACK
	setobjectxy LOCALID_LIGHTHOUSE_LLOYD, 122, 3
	fadescreen FADE_FROM_BLACK
	addvar VAR_LIGHTHOUSE_TRAINER_COUNTER, 1
	release
	end

OlivineLighthouse_EventScript_AdjustLloydPlayerLeft::
	applymovement LOCALID_LIGHTHOUSE_LLOYD, OlivineLighthouse_Movement_AdjustLloydPlayerLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustLloydPlayerLeft::
	walk_left
	walk_down
	step_end

OlivineLighthouse_EventScript_AdjustLloydPlayerMiddle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustLloydPlayerRight::
	applymovement LOCALID_LIGHTHOUSE_LLOYD, OlivineLighthouse_Movement_AdjustLloydPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineLighthouse_Movement_AdjustLloydPlayerRight::
	walk_right 
	walk_down
	step_end

OlivineLighthouse_EventScript_ShannonPostBattle::
	msgbox OlivineLighthouse_Text_LassShannonAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_LassShannonSeen:
	.string "Quick! Let's play rock paper scissors!$"

OlivineLighthouse_Text_LassShannonBeaten:
	.string "But... I thought nothing beats rock...$"

OlivineLighthouse_Text_LassShannonAfter:
	.string "Tch. You paper players are all the same.\n"
	.string "You ruin the game for everyone.$"


OlivineLighthouse_EventScript_RewardSailor::
	lock
	clearflag FLAG_HIDE_REWARDSAILOR
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 50
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 118, OlivineLighthouse_EventScript_AdjustRewardSailorLeft
	call_if_eq VAR_TEMP_0, 120, OlivineLighthouse_EventScript_AdjustRewardSailorRight
	applymovement LOCALID_LIGHTHOUSE_REWARDSAILOR, OlivineLighthouse_Movement_RewardSailorEnter
	waitmovement 0
	msgbox OlivineLighthouse_Text_RewardSailorIntro, MSGBOX_DEFAULT
	giveitem ITEM_LEFTOVERS
	giveitem ITEM_BLACK_SLUDGE
	msgbox OlivineLighthouse_Text_RewardSailorLeaving, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_0, 118, OlivineLighthouse_EventScript_RewardSailorLeave1
	call_if_eq VAR_TEMP_0, 119, OlivineLighthouse_EventScript_RewardSailorLeave2
	call_if_eq VAR_TEMP_0, 120, OlivineLighthouse_EventScript_RewardSailorLeave3
	setflag FLAG_HIDE_REWARDSAILOR
	removeobject LOCALID_LIGHTHOUSE_REWARDSAILOR
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 12
	release
	end

OlivineLighthouse_EventScript_AdjustRewardSailorLeft::
	applymovement LOCALID_LIGHTHOUSE_REWARDSAILOR, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineLighthouse_EventScript_AdjustRewardSailorRight::
	applymovement LOCALID_LIGHTHOUSE_REWARDSAILOR, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineLighthouse_Movement_RewardSailorEnter::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OlivineLighthouse_EventScript_RewardSailorLeave1::
	applymovement LOCALID_LIGHTHOUSE_REWARDSAILOR, OlivineLighthouse_Movement_RewardSailorLeave1
	waitmovement 0
	return

OlivineLighthouse_EventScript_RewardSailorLeave2::
	applymovement LOCALID_LIGHTHOUSE_REWARDSAILOR, OlivineLighthouse_Movement_RewardSailorLeave2
	waitmovement 0
	return

OlivineLighthouse_EventScript_RewardSailorLeave3::
	applymovement LOCALID_LIGHTHOUSE_REWARDSAILOR, OlivineLighthouse_Movement_RewardSailorLeave3
	waitmovement 0
	return

OlivineLighthouse_Movement_RewardSailorLeave1::
	walk_slow_right
	walk_slow_right
	walk_slow_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

OlivineLighthouse_Movement_RewardSailorLeave2::
	walk_slow_right
	walk_slow_up
	walk_slow_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end


OlivineLighthouse_Movement_RewardSailorLeave3::
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_fast_right
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

OlivineLighthouse_Text_RewardSailorIntro:
	.string "Huh? Who the heck are you?\p"
	.string "No way someone actually made it all the\n"
	.string "way to the top--\p"
	.string "Er, I mean, congratulations trainer!\n"
	.string "We've been expecting you!\p"
	.string "For your impressive display of\n"
	.string "endurance, I hereby award you...\l"
	.string "Um...\p"
	.string "Let's see, I've got to have something in\n"
	.string "my pockets for this...\p"
	.string "Aha! This delectable combination of\n"
	.string "Leftovers and Black Sludge!\l"
	.string "You've earned it! Really...$"

OlivineLighthouse_Text_RewardSailorLeaving:
	.string "Anyway, I'll just be leaving now.\p"
	.string "It might be better to avoid telling\n"
	.string "Jasmine that we were blocking the way\l"
	.string "of the person with the medicine, hey?\p"
	.string "What? Did we get her permission to do\n"
	.string "this?\p"
	.string "Of course, heh heh...................\p"
	.string "Heh.$"


@6th floor==============================================================================================================================

OlivineLighthouse_EventScript_Jasmine::
	lock
	faceplayer
	goto_if_eq VAR_OLIVINE_CITY_STATE, 3, OlivineLighthouse_EventScript_JasmineGoGetPotion
	goto_if_eq VAR_OLIVINE_CITY_STATE, 4, OlivineLighthouse_EventScript_JasmineDeliverPotion
	msgbox OlivineLighthouse_Text_JasmineCianwoodPharmacy, MSGBOX_DEFAULT
	msgbox OlivineLighthouse_Text_JasmineGetMedicine, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 3
	release
	end
OlivineLighthouse_EventScript_JasmineGoGetPotion::
	msgbox OlivineLighthouse_Text_JasmineGetMedicine2, MSGBOX_DEFAULT
	release
	end


OlivineLighthouse_EventScript_Ampharos::
	lock
	faceplayer
	goto_if_lt VAR_OLIVINE_CITY_STATE, 5, OlivineLighthouse_EventScript_AmpharosSick
	fadescreen FADE_TO_WHITE
	playse SE_M_THUNDERBOLT2
	waitse
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPaluPalulu, MSGBOX_DEFAULT
	waitmoncry
	setflag FLAG_AMPHAROS_HEALED
	release
	end

OlivineLighthouse_EventScript_AmpharosSick::
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPalPaloo, MSGBOX_DEFAULT
	waitmoncry
	msgbox OlivineLighthouse_Text_AmphyBreathingLabored, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_JasmineCianwoodPharmacy:
	.string "Jasmine: …This Pokémon always kept\n"
	.string "the sea lit at night.\p"
	.string "…But it suddenly got sick… It's\n"
	.string "gasping for air…\p"
	.string "…I understand that there is a\n"
	.string "wonderful pharmacy past Cianwood…\p"
	.string "But that's across the sea…\n"
	.string "And I can't leave Amphy unattended…$"

OlivineLighthouse_Text_JasmineGetMedicine:
	.string "…May I ask you to get some medicine\n"
	.string "for me? Please?$"

OlivineLighthouse_Text_JasmineGetMedicine2:
	.string "There is a wonderful pharmacy\n"
	.string "past Cianwood…\p"
	.string "But that's across the sea…\n"
	.string "And I can't leave Amphy unattended…\p"
	.string "…May I ask you to get some medicine\n"
	.string "for me? Please?$"

OlivineLighthouse_Text_JasmineCureAmphy:
	.string "Jasmine: …Will that medicine cure\n"
	.string "Amphy?$"


OlivineLighthouse_EventScript_JasmineDeliverPotion::
	msgbox OlivineLighthouse_Text_JasmineCureAmphy, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineLighthouse_EventScript_JasmineRefuse
	playse SE_USE_ITEM
	removeitem ITEM_SECRET_POTION
	msgbox OlivineLighthouse_Text_PlayerHandedSecretpotion, MSGBOX_DEFAULT
	waitse
	msgbox OlivineLighthouse_Text_JasmineDontBeOffended, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_LIGHTHOUSE_JASMINE, DIR_NORTH
	delay 20
	turnobject LOCALID_LIGHTHOUSE_AMPHAROS, DIR_SOUTH
	playse MUS_HEAL
	waitse
	msgbox OlivineLighthouse_Text_JasmineAmphyHowFeeling, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_M_THUNDERBOLT2
	waitse
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox OlivineLighthouse_Text_AmphyPaluPalulu, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	applymovement LOCALID_LIGHTHOUSE_AMPHAROS, OlivineLighthouse_Movement_Amphy
	waitmovement 0
	applymovement LOCALID_LIGHTHOUSE_JASMINE, OlivineLighthouse_Movement_Jasmine
	msgbox OlivineLighthouse_Text_JasmineThankYou, MSGBOX_DEFAULT
	closemessage

	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_LIGHTHOUSE_JASMINE
	removeobject LOCALID_LIGHTHOUSE_JASMINE
	waitse
	delay 50
	fadescreen FADE_FROM_BLACK
	setvar VAR_OLIVINE_CITY_STATE, 5
	setflag FLAG_AMPHAROS_HEALED
	clearflag FLAG_HIDE_OLIVINE_CITY_GYM_LEADERS
	clearflag FLAG_OLIVINE_GYM_EXPLAINED
	release
	end

OlivineLighthouse_Movement_Jasmine:
	face_player
	step_end

OlivineLighthouse_Movement_Amphy:
	walk_up
	jump_in_place_down
	jump_in_place_left
	jump_in_place_right
	jump_in_place_up
	face_down
	step_end


OlivineLighthouse_EventScript_JasmineRefuse::
	msgbox OlivineLighthouse_Text_JasmineISee, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineLighthouse_Text_PlayerHandedSecretpotion:
	.string "{PLAYER} handed the Secretpotion to\n"
	.string "Jasmine.$"

OlivineLighthouse_Text_JasmineDontBeOffended:
	.string "Jasmine: …Um, please don't be\n"
	.string "offended…\p"
	.string "…Amphy will not take anything from\n"
	.string "anyone but me…$"

OlivineLighthouse_Text_JasmineAmphyHowFeeling:
	.string "Jasmine: …\p"
	.string "Amphy, how are you feeling?$"

OlivineLighthouse_Text_JasmineThankYou:
	.string "Jasmine: …Oh, I'm so relieved…\p"
	.string "This is just so wonderful…\p"
	.string "Thank you so very, very much.\p"
	.string "Oh… You're taking the Gym challenge?\p"
	.string "Maybe if you continue to do well, we'll\n"
	.string "run into each other again in the future.$"
	.string "Bye for now…$"

OlivineLighthouse_Text_JasmineISee:
	.string "Jasmine: …I see…\n"
	.string "…Amphy, hang on!$"

OlivineLighthouse_Text_AmphyPalPaloo:
	.string "Amphy: …\n"
	.string "…Pa… paloo…$"

OlivineLighthouse_Text_AmphyBreathingLabored:
	.string "Its breathing is terribly\n"
	.string "labored…$"

OlivineLighthouse_Text_AmphyPaluPalulu:
	.string "Amphy: Palu! Palulu!$"
