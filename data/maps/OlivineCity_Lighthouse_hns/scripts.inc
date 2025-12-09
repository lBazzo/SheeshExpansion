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
.set LOCALID_LIGHTHOUSE_ERNEST, 11


OlivineCity_Lighthouse_hns_MapScripts::
	.byte 0

OlivineLighthouse_EventScript_Item_Ether::
    finditem ITEM_ETHER
    end

OlivineLighthouse_EventScript_Item_RareCandy::
    finditem ITEM_RARE_CANDY
    end

OlivineLighthouse_EventScript_Item_TMBulkUp::
    finditem ITEM_TM_BULK_UP
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
	multichoice 20, 6, MULTI_STEVEN_GIFTS, FALSE 
	switch VAR_RESULT
	case 0, OlivineLighthourse_EventScript_GiveCorviknight
	case 1, OlivineLighthourse_EventScript_GiveEscavalier
	case 2, OlivineLighthourse_EventScript_GiveTinkaton
	case MULTI_B_PRESSED, OlivineCity_EventScript_DeclineStevenGift
	goto OlivineCity_EventScript_DeclineStevenGift

OlivineLighthourse_EventScript_GiveCorviknight::
	@HnS named gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIDGEY
	bufferspeciesname STR_VAR_1, SPECIES_PIDGEY
	givenamedmon 5
	call Common_EventScript_GiftMon
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
	@HnS named gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CATERPIE
	bufferspeciesname STR_VAR_1, SPECIES_CATERPIE
	givenamedmon 6
	call Common_EventScript_GiftMon
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
	@HnS named gift pokemon setup
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CLEFAIRY
	bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
	givenamedmon 7
	call Common_EventScript_GiftMon
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

OlivineCity_Text_StevenPostIntroReadyToGift:
	.string "So, I have CORVIKNIGHT, ESCAVALIER and\n"
	.string "TINKATON. Which would you prefer?$"

OlivineCity_Text_StevenAfterGift:
	.string "I'm sure you'll take great care of it.\p"
	.string "As for me, I'm afraid I've got to leave\n"
	.string "on official POKéMON LEAGUE business in\l"
	.string "HOENN.\p"
	.string "I'm sure you won't have much trouble\n"
	.string "delivering the medicine to JASMINE.\p"
	.string "Thanks again for your help.\n"
	.string "Until next time!$"

OlivineCity_Text_DeclineStevenGift:
	.string "Hm? You want to think it over? Fine by\n"
	.string "me. Let me know when you're ready.$"

OlivineCity_Text_StevenBlockingLighthouse:
	.string "Hi there. Sorry for the brisk\n"
	.string "introduction, but I'm going to have to\l"
	.string "ask you to leave for the time being.\p"
	.string "This city's old GYM LEADER, JASMINE, is\n"
	.string "currently taking care of the sick\l"
	.string "POKéMON that normally lights up this\l"
	.string "lighthouse.\p"
	.string "We're not sure exactly what's wrong\n"
	.string "with AMPHY, so it's too dangerous to let\l"
	.string "other people up there right now.\p"
	.string "If you have a spare moment, might I ask\n"
	.string "you to gather some medicine for me?\p"
	.string "The pharmacist in the SAFARI ZONE GATE\n"
	.string "should have something. If you tell him I\l"
	.string "sent you, I'm sure he'll cooperate.$"

OlivineCity_Text_StevenReadyToGift:
	.string "Is that... the SECRET POTION?\p"
	.string "Brilliant! That's exactly what the\n"
	.string "doctor ordered! I can't thank you\l"
	.string "enough!\p"
	.string "{PLAYER}, is it? A pleasure to meet you.\n"
	.string "Let me introduce myself properly, and\l"
	.string "please excuse my past frankness.\p"
	.string "I am STEVEN, a trainer such as yourself.\p"
	.string "STEVEN: I am a fan of steel type\n"
	.string "POKéMON, much like JASMINE. It is how we\l"
	.string "initially formed our bond, as a matter\l"
	.string "of fact.\p"
	.string "But I'm sure you didn't go to all this\n"
	.string "trouble just to exchange small talk\l"
	.string "with me.\p"
	.string "To show just how grateful I am, I'd like\n"
	.string "you to have one of these steel type\l"
	.string "POKéMON. Each of them will make a\l"
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

OlivineLighthouse_EventScript_1FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_1FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 3, OlivineLighthouse_EventScript_SailorGauntletBeaten
	goto_if_set FLAG_LIGHTHOUSE_GAUNTLET_EXPLAINED, OlivineLighthouse_EventScript_1FSailorIntroDone
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
	applymovement LOCALID_LIGHTHOUSE_1FSAILOR, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_1FSailorAcceptedGauntlet::
	msgbox OlivineLighthouse_Text_SailorAcceptedGauntlet, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_MovePlayerIntoGauntletLeft
	call_if_eq VAR_TEMP_1, 6, OlivineLighthouse_EventScript_MovePlayerIntoGauntletRight
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 2
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

OlivineLighthouse_EventScript_SailorGauntletBeaten::
	msgbox OlivineLighthouse_Text_SailorGauntletBeaten, MSGBOX_DEFAULT
	closemessage
	release
	end

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
	.string "Once you go in, there's no coming back\n"
	.string "out until you beat all the trainers on\l"
	.string "that floor.\p"
	.string "You are of course allowed to heal your\n"
	.string "POKéMON between fights, but there'll be\l"
	.string "no changing your team around.\p"
	.string "And, of course, there's an INCREDIBLE\n"
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
	.string "show them who's the boss! WROARRR!$"

OlivineLighthouse_Text_SailorGauntletBeaten:
	.string "Would you look at that, you beat them\n"
	.string "all!\p"
	.string "Doesn't it make you feel powerful\n"
	.string "taking on all those trainers and coming\l"
	.string "out on top? Bwahahaha!$"

OlivineLighthouse_EventScript_1FLastTrainerTrigger::
	lock
	playbgm MUS_ENCOUNTER_RICH, TRUE
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
	.string "In the past, POKéMON used to light\n"
	.string "the sea around OLIVINE at night.\p"
	.string "The LIGHTHOUSE was built in honor\n"
	.string "of those noble POKéMON.$"

OlivineLighthouse_Text_GentlemanAlfredSeen:
	.string "Hm? This is no place for playing.$"

OlivineLighthouse_Text_GentlemanAlfredBeaten:
	.string "Ah! I can see that you're serious.$"

OlivineLighthouse_Text_GentlemanAlfredAfter:
	.string "Up top is a POKéMON that keeps\n"
	.string "the LIGHTHOUSE lit.\p"
	.string "But I hear that it's sick now,\n"
	.string "and can't be cured normally.$"

OlivineLighthouse_EventScript_GentlemanAlfred::
    lock
	faceplayer
    msgbox OlivineLighthouse_Text_GentlemanAlfredAfter, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_EventScript_Martin::
	trainerbattle_single TRAINER_MARTIN OlivineLighthouse_Text_FisherMartinSeen, OlivineLighthouse_Text_FisherMartinBeaten
	msgbox OlivineLighthouse_Text_FisherMartinAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_FisherMartinSeen:
	.string "Patience is the key to both\n"
	.string "fishing and POKéMON.$"

OlivineLighthouse_Text_FisherMartinBeaten:
	.string "Gwaaah!$"

OlivineLighthouse_Text_FisherMartinAfterBattle:
	.string "I'm too impatient for fishing…$"

OlivineLighthouse_EventScript_Kenny::
	trainerbattle_single TRAINER_KENNY OlivineLighthouse_Text_HikerKennySeen, OlivineLighthouse_Text_HikerKennyBeaten
	msgbox OlivineLighthouse_Text_HikerKennyAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_HikerKennySeen:
	.string "I should get myself an ONIX.$"

OlivineLighthouse_Text_HikerKennyBeaten:
	.string "I lost…$"

OlivineLighthouse_Text_HikerKennyAfterBattle:
	.string "Geological features don't appear\n"
	.string "to change.\p"
	.string "But they actually change, little\n"
	.string "by little.$"

OlivineLighthouse_EventScript_Carter::
	trainerbattle_single TRAINER_CARTER OlivineLighthouse_Text_PokefanmCarterSeen, OlivineLighthouse_Text_PokefanmCarterBeaten
	msgbox OlivineLighthouse_Text_PokefanmCarterAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_PokefanmCarterSeen:
	.string "Let me tell you, I had a hard time\n"
	.string "catching my prized POKéMON.$"

OlivineLighthouse_Text_PokefanmCarterBeaten:
	.string "Awaaah!$"

OlivineLighthouse_Text_PokefanmCarterAfterBattle:
	.string "I think my team is well-balanced.$"

OlivineLighthouse_EventScript_Trevor::
	trainerbattle_single TRAINER_TREVOR OlivineLighthouse_Text_PokefanmTrevorSeen, OlivineLighthouse_Text_PokefanmTrevorBeaten
	msgbox OlivineLighthouse_Text_PokefanmTrevorAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_PokefanmTrevorSeen:
	.string "Hi. Did you know…?\p"
	.string "POKéMON get more friendly if you\n"
	.string "train them in a place that they\l"
	.string "remember.$"

OlivineLighthouse_Text_PokefanmTrevorBeaten:
	.string "Where did I meet this POKéMON…?$"

OlivineLighthouse_Text_PokefanmTrevorAfterBattle:
	.string "If only there were an easy way to\n"
	.string "identify where I got my POKéMON…$"

@2nd floor==============================================================================================================================

OlivineLighthouse_EventScript_2FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_2FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 5, OlivineLighthouse_EventScript_SailorGauntletBeaten
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
	release
	end

OlivineLighthouse_EventScript_2FSailorBlockPlayer::
	lock
	applymovement LOCALID_LIGHTHOUSE_2FSAILOR, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_2FLastTrainerTrigger::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
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

OlivineLighthouse_EventScript_Huey::
	lock
	faceplayer
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
	trainerbattle_single TRAINER_TOMMY OlivineLighthouse_Text_SchoolboyTommySeen, OlivineLighthouse_Text_SchoolboyTommyBeaten
	msgbox OlivineLighthouse_Text_SchoolboyTommyAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_Billy::
	trainerbattle_single TRAINER_BILLY OlivineLighthouse_Text_SchoolboyBillySeen, OlivineLighthouse_Text_SchoolboyBillyBeaten
	msgbox OlivineLighthouse_Text_SchoolboyBillyAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_SchoolboyTommySeen:
	.string "Let's battle. I won't lose!$"

OlivineLighthouse_Text_SchoolboyTommyBeaten:
	.string "I forgot to do my homework!$"

OlivineLighthouse_Text_SchoolboyTommyAfterBattle:
	.string "Sayonara! I just learned that in\n"
	.string "my Japanese class.$"

OlivineLighthouse_Text_SchoolboyBillySeen:
	.string "My favorite class is PE!$"

OlivineLighthouse_Text_SchoolboyBillyBeaten:
	.string "Oh, no! How could I lose?$"

OlivineLighthouse_Text_SchoolboyBillyAfterBattle:
	.string "If POKéMON were a subject at\n"
	.string "school, I'd be the best!$"

OlivineLighthouse_EventScript_BirdKeeperDenis::
    trainerbattle_single TRAINER_DENIS, OlivineLighthouse_Text_BirdKeeperDenisSeen, OlivineLighthouse_Text_BirdKeeperDenisBeaten
    msgbox OlivineLighthouse_Text_BirdKeeperDenisAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_Text_BirdKeeperDenisSeen:
	.string "We're pretty high up here. My bird\n"
	.string "POKéMON are in prime form.$"

OlivineLighthouse_Text_BirdKeeperDenisBeaten:
	.string "Oops… They crashed…$"

OlivineLighthouse_Text_BirdKeeperDenisAfter:
	.string "My POKéMON learned how to use FLY in\n"
	.string "CIANWOOD.\p"
	.string "Well, since I'm a loser, I'll FLY\n"
	.string "across the sea…$"

@3rd floor==============================================================================================================================

OlivineLighthouse_EventScript_3FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_3FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 7, OlivineLighthouse_EventScript_SailorGauntletBeaten
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
	release
	end

OlivineLighthouse_EventScript_3FSailorBlockPlayer::
	lock
	applymovement LOCALID_LIGHTHOUSE_3FSAILOR, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_3FLastTrainerTrigger::
	lock
	playbgm MUS_ENCOUNTER_MALE, TRUE
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



OlivineLighthouse_EventScript_BirdKeeperTheo::
	lock
	faceplayer
    msgbox OlivineLighthouse_Text_BirdKeeperTheoAfter, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_EventScript_SailorTerrell::
    trainerbattle_single TRAINER_TERRELL, OlivineLighthouse_Text_SailorTerrellSeen, OlivineLighthouse_Text_SailorTerrellBeaten
    msgbox OlivineLighthouse_Text_SailorTerrellAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_EventScript_GentlemanPreston::
    trainerbattle_single TRAINER_PRESTON, OlivineLighthouse_Text_GentlemanPrestonSeen, OlivineLighthouse_Text_GentlemanPrestonBeaten
    msgbox OlivineLighthouse_Text_GentlemanPrestonAfter, MSGBOX_AUTOCLOSE
    end


OlivineLighthouse_Text_BirdKeeperTheoSeen:
	.string "Why are you here? Are you just\n"
	.string "going to gawk? I suggest you leave!$"

OlivineLighthouse_Text_BirdKeeperTheoBeaten:
	.string "You really are concerned about\n"
	.string "the sick POKéMON…$"

OlivineLighthouse_Text_BirdKeeperTheoAfter:
	.string "How the heck do you go up?\p"
	.string "I want to visit the sick POKéMON,\n"
	.string "but I can't get up there…$"

OlivineLighthouse_Text_SailorTerrellSeen:
	.string "Sailors are both kind and strong.\n"
	.string "How about you?$"

OlivineLighthouse_Text_SailorTerrellBeaten:
	.string "You are both kind and strong…$"

OlivineLighthouse_Text_SailorTerrellAfter:
	.string "Every time I return to OLIVINE,\n"
	.string "I visit the GYM.\p"
	.string "The GYM LEADER’s POKéMON type\n"
	.string "changed without me noticing.$"

OlivineLighthouse_Text_GentlemanPrestonSeen:
	.string "I travel the world to train my\n"
	.string "POKéMON. I wish to battle you.$"

OlivineLighthouse_Text_GentlemanPrestonBeaten:
	.string "…Sigh. I must train some more…$"

OlivineLighthouse_Text_GentlemanPrestonAfter:
	.string "JASMINE used to use rock-type\n"
	.string "POKéMON like ONIX.$"

@4th floor==============================================================================================================================

OlivineLighthouse_EventScript_4FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_4FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 9, OlivineLighthouse_EventScript_SailorGauntletBeaten
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
	release
	end

OlivineLighthouse_EventScript_4FSailorBlockPlayer::
	lock
	applymovement LOCALID_LIGHTHOUSE_4FSAILOR, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_4FLastTrainerTrigger::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_KENT, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 91, OlivineLighthouse_EventScript_AdjustLastTrainer4F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_SailorKentSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KENT, OlivineLighthouse_Text_SailorKentBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 9
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer4F::
    applymovement LOCALID_LIGHTHOUSE_KENT, Common_Movement_WalkRight1
    waitmovement 0
    return

OlivineLighthouse_EventScript_SailorKent::
	lock
	faceplayer
    msgbox OlivineLighthouse_Text_SailorKentAfter, MSGBOX_DEFAULT
	closemessage
	release
    end



OlivineLighthouse_EventScript_LassConnie::
    trainerbattle_single TRAINER_CONNIE, OlivineLighthouse_Text_LassConnieSeen, OlivineLighthouse_Text_LassConnieBeaten
    msgbox OlivineLighthouse_Text_LassConnieAfter, MSGBOX_AUTOCLOSE
    end

OlivineLighthouse_Text_SailorKentSeen:
	.string "JASMINE must be worried sick about\n"
	.string "the POKéMON here.\p"
	.string "She won't even smile these days.$"

OlivineLighthouse_Text_SailorKentBeaten:
	.string "I can't manage a smile either…$"

OlivineLighthouse_Text_SailorKentAfter:
	.string "Speaking of sick, I've heard there's\n"
	.string "a good PHARMACY near CIANWOOD.$"

OlivineLighthouse_Text_LassConnieSeen:
	.string "JASMINE was this city's GYM LEADER.\p"
	.string "I mean to bring her back with me.\p"
	.string "Nobody had better get in my way!$"

OlivineLighthouse_Text_LassConnieBeaten:
	.string "Aaack! My POKéMON!$"

OlivineLighthouse_Text_LassConnieAfter:
	.string "Right. Anybody would be worried if\n"
	.string "his or her own POKéMON were hurt.\p"
	.string "I'll pray for the POKéMON here, so\n"
	.string "JASMINE can get on with her life.$"

OlivineLighthouse_EventScript_Kipp::
	trainerbattle_single TRAINER_KIPP OlivineLighthouse_Text_SchoolboyKippSeen, OlivineLighthouse_Text_SchoolboyKippBeaten
	msgbox OlivineLighthouse_Text_SchoolboyKippAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_SchoolboyKippSeen:
	.string "Hang on. I have to phone my mom.$"

OlivineLighthouse_Text_SchoolboyKippBeaten:
	.string "Sorry, Mom! I was beaten!$"

OlivineLighthouse_Text_SchoolboyKippAfterBattle:
	.string "My mom worries so much about me, I\n"
	.string "have to phone her all the time.$"

OlivineLighthouse_EventScript_Johnny::
	trainerbattle_single TRAINER_JOHNNY OlivineLighthouse_Text_SchoolboyJohnnySeen, OlivineLighthouse_Text_SchoolboyJohnnyBeaten
	msgbox OlivineLighthouse_Text_SchoolboyJohnnyAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_SchoolboyJohnnySeen:
	.string "We're on a field trip to OLIVINE\n"
	.string "LIGHTHOUSE for science studies.$"

OlivineLighthouse_Text_SchoolboyJohnnyBeaten:
	.string "You're wickedly tough!$"

OlivineLighthouse_Text_SchoolboyJohnnyAfterBattle:
	.string "I'm tired of walking. I need to\n"
	.string "take a break.$"

OlivineLighthouse_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS OlivineLighthouse_Text_BirdKeeperBorisSeen, OlivineLighthouse_Text_BirdKeeperBorisBeaten
	msgbox OlivineLighthouse_Text_BirdKeeperBorisAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_Bob::
	trainerbattle_single TRAINER_BOB OlivineLighthouse_Text_BirdKeeperBobSeen, OlivineLighthouse_Text_BirdKeeperBobBeaten
	msgbox OlivineLighthouse_Text_BirdKeeperBobAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_BirdKeeperBorisSeen:
	.string "If you're looking for POKéMON,\n"
	.string "you have to look in the tall grass.$"

OlivineLighthouse_Text_BirdKeeperBorisBeaten:
	.string "Ayieee!$"

OlivineLighthouse_Text_BirdKeeperBorisAfterBattle:
	.string "Since you're so strong, it must be\n"
	.string "fun to battle.$"

OlivineLighthouse_Text_BirdKeeperBobSeen:
	.string "It feels a little dispiriting to be just\n"
	.string "one of many trainers lined up like this.\p"
	.string "I'm not some TEAM ROCKET grunt... \n"
	.string "I want to be the main character!$"

OlivineLighthouse_Text_BirdKeeperBobBeaten:
	.string "…Whew!$"

OlivineLighthouse_Text_BirdKeeperBobAfterBattle:
	.string "I guess to be the star of the show,\n"
	.string "you've got to be good at what you do.\p"
	.string "Then again, maybe this is just my\n"
	.string "training arc... Yeah, that's it!$"

OlivineLighthouse_EventScript_Arnold::
	trainerbattle_single TRAINER_ARNOLD OlivineLighthouse_Text_FisherArnoldSeen, OlivineLighthouse_Text_FisherArnoldBeaten
	msgbox OlivineLighthouse_Text_FisherArnoldAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_FisherArnoldSeen:
	.string "I'm bored by fishing. Let's battle!$"

OlivineLighthouse_Text_FisherArnoldBeaten:
	.string "Utter failure…$"

OlivineLighthouse_Text_FisherArnoldAfterBattle:
	.string "I'll just go back to fishing…\n"
	.string "But there's no water here…$"

OlivineLighthouse_EventScript_Dudley::
	trainerbattle_single TRAINER_DUDLEY OlivineLighthouse_Text_SchoolboyDudleySeen, OlivineLighthouse_Text_SchoolboyDudleyBeaten
	msgbox OlivineLighthouse_Text_SchoolboyDudleyAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_Text_SchoolboyDudleySeen:
	.string "Here I come! Kachow!$"

OlivineLighthouse_Text_SchoolboyDudleyBeaten:
	.string "Whoo! Good stuff.$"

OlivineLighthouse_Text_SchoolboyDudleyAfter:
	.string "Kachow is Lightning McQueen's\n"
	.string "catchphrase.\p"
	.string "When I grow up, I want to be a car.$"

@5th floor==============================================================================================================================

OlivineLighthouse_EventScript_5FSailor::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 5, OlivineLighthouse_EventScript_PlayerFaceSailor
	applymovement LOCALID_LIGHTHOUSE_5FSAILOR, Common_Movement_FacePlayer
	goto_if_ge VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 11, OlivineLighthouse_EventScript_SailorGauntletBeaten
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
	release
	end

OlivineLighthouse_EventScript_5FSailorBlockPlayer::
	lock
	applymovement LOCALID_LIGHTHOUSE_5FSAILOR, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox OlivineLighthouse_Text_CantLeaveGauntlet, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	release
	end

OlivineLighthouse_EventScript_5FLastTrainerTrigger::
	lock
	playbgm MUS_HG_ENCOUNTER_BOY_2, TRUE
	playse SE_PIN
	applymovement LOCALID_LIGHTHOUSE_ERNEST, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 120, OlivineLighthouse_EventScript_AdjustLastTrainer5F
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox OlivineLighthouse_Text_SailorErnestSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERNEST, OlivineLighthouse_Text_SailorErnestBeaten
	setvar VAR_LIGHTHOUSE_GAUNTLET_SAILOR, 11
	release
	end

OlivineLighthouse_EventScript_AdjustLastTrainer5F::
    applymovement LOCALID_LIGHTHOUSE_ERNEST, Common_Movement_WalkRight1
    waitmovement 0
    return

OlivineLighthouse_EventScript_SailorErnest::
	lock
	faceplayer
    msgbox OlivineLighthouse_Text_SailorErnestAfter, MSGBOX_DEFAULT
	closemessage
	release
    end

OlivineLighthouse_Text_SailorErnestSeen:
	.string "I wanted to battle JASMINE, but she's\n"
	.string "not up to it now.\p"
	.string "So, how about you?$"

OlivineLighthouse_Text_SailorErnestBeaten:
	.string "Whoa, whoa. You're overwhelming!$"

OlivineLighthouse_Text_SailorErnestAfter:
	.string "A GYM LEADER isn't just about being\n"
	.string "strong.\p"
	.string "A LEADER also needs to be\n"
	.string "compassionate.$"

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
	walk_right
	walk_right
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

OlivineLighthouse_Movement_RewardSailorLeave2::
	walk_right
	walk_up
	walk_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end


OlivineLighthouse_Movement_RewardSailorLeave3::
	walk_left
	walk_up
	walk_up
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

OlivineLighthouse_Text_RewardSailorIntro:
	.string "Huh? Who the heck are you?\p"
	.string "No way someone actually made it all the\n"
	.string "way to the top-\p"
	.string "Er, I mean, congratulations, trainer!\n"
	.string "We've been expecting you!\p"
	.string "For your impressive display of\n"
	.string "endurance, I hereby award you...\l"
	.string "Um...\p"
	.string "Let's see, I've got to have something in\n"
	.string "my pockets for this...\p"
	.string "Aha! This delectable combination of\n"
	.string "LEFTOVERS and BLACK SLUDGE!\l"
	.string "You've earned it! Really...$"

OlivineLighthouse_Text_RewardSailorLeaving:
	.string "Anyway, I'll just be leaving now.\p"
	.string "It might be better to avoid telling\n"
	.string "JASMINE that we were blocking the way\l"
	.string "of the person with the medicine, hey?\p"
	.string "What? Did we get her permission to do\n"
	.string "this?\p"
	.string "Of course, heh heh...................\p"
	.string "Heh.$"

OlivineLighthouse_EventScript_Ellen::
	trainerbattle_single TRAINER_ELLEN OlivineLighthouse_Text_LassEllenSeen, OlivineLighthouse_Text_LassEllenBeaten
	msgbox OlivineLighthouse_Text_LassEllenAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_Joe::
	trainerbattle_single TRAINER_JOE OlivineLighthouse_Text_SchoolboyJoeSeen, OlivineLighthouse_Text_SchoolboyJoeBeaten
	msgbox OlivineLighthouse_Text_SchoolboyJoeAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA OlivineLighthouse_Text_LassLauraSeen, OlivineLighthouse_Text_LassLauraBeaten
	msgbox OlivineLighthouse_Text_LassLauraAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_Lloyd::
	trainerbattle_single TRAINER_LLOYD OlivineLighthouse_Text_CamperLloydSeen, OlivineLighthouse_Text_CamperLloydBeaten
	msgbox OlivineLighthouse_Text_CamperLloydAfter, MSGBOX_AUTOCLOSE
	end

OlivineLighthouse_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON OlivineLighthouse_Text_LassShannonSeen, OlivineLighthouse_Text_LassShannonBeaten
	msgbox OlivineLighthouse_Text_LassShannonAfter, MSGBOX_AUTOCLOSE
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

OlivineLighthouse_Text_LassLauraSeen:
	.string "Do you know about three type cores?\n"
	.string "Here, I'll show you what I mean.$"

OlivineLighthouse_Text_LassLauraBeaten:
	.string "What the…$"

OlivineLighthouse_Text_LassLauraAfter:
	.string "Oh no. I thought this was a three on\n"
	.string "three fight. The docs must be wrong...$"

OlivineLighthouse_Text_CamperLloydSeen:
	.string "WAIT! YOU FORGOT THE$"

OlivineLighthouse_Text_CamperLloydBeaten:
	.string "Never mind...$"

OlivineLighthouse_Text_CamperLloydAfter:
	.string "Why do they call it oven when you of in\n"
	.string "the cold food of out hot eat the food?$"

OlivineLighthouse_Text_LassShannonSeen:
	.string "Quick! Let's play rock paper scissors!$"

OlivineLighthouse_Text_LassShannonBeaten:
	.string "But... I thought nothing beats rock...$"

OlivineLighthouse_Text_LassShannonAfter:
	.string "Tch. You paper players are all the same.\n"
	.string "You ruin the game for everyone.$"





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
	.string "JASMINE: …This POKéMON always kept\n"
	.string "the sea lit at night.\p"
	.string "…But it suddenly got sick… It's\n"
	.string "gasping for air…\p"
	.string "…I understand that there is a\n"
	.string "wonderful PHARMACY in CIANWOOD…\p"
	.string "But that's across the sea…\n"
	.string "And I can't leave AMPHY unattended…$"

OlivineLighthouse_Text_JasmineGetMedicine:
	.string "…May I ask you to get some medicine\n"
	.string "for me? Please?$"

OlivineLighthouse_Text_JasmineGetMedicine2:
	.string "There is a wonderful PHARMACY\n"
	.string "in CIANWOOD…\p"
	.string "But that's across the sea…\n"
	.string "And I can't leave AMPHY unattended…\p"
	.string "…May I ask you to get some medicine\n"
	.string "for me? Please?$"

OlivineLighthouse_Text_JasmineCureAmphy:
	.string "JASMINE: …Will that medicine cure\n"
	.string "AMPHY?$"


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
	.string "{PLAYER} handed the SECRETPOTION to\n"
	.string "JASMINE.$"

OlivineLighthouse_Text_JasmineDontBeOffended:
	.string "JASMINE: …Um, please don't be\n"
	.string "offended…\p"
	.string "…AMPHY will not take anything from\n"
	.string "anyone but me…$"

OlivineLighthouse_Text_JasmineAmphyHowFeeling:
	.string "JASMINE: …\p"
	.string "AMPHY, how are you feeling?$"

OlivineLighthouse_Text_JasmineThankYou:
	.string "JASMINE: …Oh, I'm so relieved…\p"
	.string "This is just so wonderful…\p"
	.string "Thank you so very, very much.\p"
	.string "Oh… You're taking the GYM challenge?\p"
	.string "Maybe if you continue to do well, we'll\n"
	.string "run into each other again in the future.$"
	.string "Bye for now…$"

OlivineLighthouse_Text_JasmineISee:
	.string "JASMINE: …I see…\n"
	.string "…AMPHY, hang on!$"

OlivineLighthouse_Text_AmphyPalPaloo:
	.string "AMPHY: …\n"
	.string "…Pa… paloo…$"

OlivineLighthouse_Text_AmphyBreathingLabored:
	.string "Its breathing is terribly\n"
	.string "labored…$"

OlivineLighthouse_Text_AmphyPaluPalulu:
	.string "AMPHY: Palu! Palulu!$"
