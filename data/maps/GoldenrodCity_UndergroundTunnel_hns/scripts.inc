.set LOCALID_GOLDENROD_UNDERGROUND_KIMONO, 8
.set LOCALID_GOLDENROD_UNDERGROUND_LUCY, 9

GoldenrodCity_UndergroundTunnel_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_UndergroundTunnel_OnLoad
	.byte 0

GoldenrodCity_UndergroundTunnel_OnLoad::
	goto GoldenrodCity_UndergroundTunnel_MapScript_TryOpenDoor
	end
	
GoldenrodCity_UndergroundTunnel_EventScript_KimonoTriggerBot::
	lock
	playbgm MUS_HG_KIMONO_GIRL, TRUE
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_WalkToPlayerBot
	waitmovement 0
	msgbox GoldenrodCity_UndergroundTunnel_Text_Kimono1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, Common_Movement_ExclamationMark
	delay 60
	msgbox GoldenrodCity_UndergroundTunnel_Text_Kimono2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, Common_Movement_WalkUp1
	waitmovement 0
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_Leave1
	waitmovement 0
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_Spin
	waitmovement 0
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_Leave2
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_KIMONO
	removeobject LOCALID_GOLDENROD_UNDERGROUND_KIMONO
	fadedefaultbgm
	setvar VAR_GOLDENROD_CITY_STATE, 8
	end

GoldenrodCity_UndergroundTunnel_EventScript_KimonoTriggerTop::
	lock
	playbgm MUS_HG_KIMONO_GIRL, TRUE
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_WalkToPlayerTop
	waitmovement 0
	msgbox GoldenrodCity_UndergroundTunnel_Text_Kimono1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, Common_Movement_ExclamationMark
	delay 60
	msgbox GoldenrodCity_UndergroundTunnel_Text_Kimono2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, Common_Movement_WalkDown1
	waitmovement 0
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_Leave1
	waitmovement 0
	playse SE_M_PETAL_DANCE
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_Spin
	waitmovement 0
	applymovement LOCALID_GOLDENROD_UNDERGROUND_KIMONO, GoldenrodCity_UndergroundTunnel_Movement_Kimono_Leave2
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_KIMONO
	removeobject LOCALID_GOLDENROD_UNDERGROUND_KIMONO
	fadedefaultbgm
	setvar VAR_GOLDENROD_CITY_STATE, 8
	end


GoldenrodCity_UndergroundTunnel_Movement_Kimono_WalkToPlayerBot:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

GoldenrodCity_UndergroundTunnel_Movement_Kimono_WalkToPlayerTop:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

GoldenrodCity_UndergroundTunnel_Movement_Kimono_Leave1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

GoldenrodCity_UndergroundTunnel_Movement_Kimono_Spin:
	face_down
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	step_end

GoldenrodCity_UndergroundTunnel_Movement_Kimono_Leave2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end


GoldenrodCity_UndergroundTunnel_Text_Kimono1:
	.string "Team Rocket members in black suits\n"
	.string "have been running around...\p"
	.string "I was wondering what was going on.\n"
	.string "So, you took on Team Rocket?\l"
	.string "You are impressive!\p"
	.string "You may be able to face the\n"
	.string "legendary POKé...$"

GoldenrodCity_UndergroundTunnel_Text_Kimono2:
	.string "Hahaha! Never mind.\n"
	.string "I must go now.$"

GoldenrodUnderground_EventScript_Brother_Haircut1::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_HAIRCUT1_RECEIVED, GoldenrodUnderground_EventScript_Already_Got_Haircut1
	showmoneybox 0, 0
	msgbox GoldenrodUnderground_Text_OlderBrotherOffer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, GoldenrodUnderground_EventScript_Haircut1
	msgbox GoldenrodUnderground_Text_OlderBrotherThatsAShame, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	end

GoldenrodUnderground_EventScript_Haircut1::
	msgbox GoldenrodUnderground_Text_OlderBrotherAskWhich
	special ChoosePartyMon
	waitstate
	showmoneybox 0, 0
	lock
	faceplayer
	goto_if_ge VAR_0x8004, PARTY_SIZE, GoldenrodUnderground_EventScript_Declined_Haircut1
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, GoldenrodUnderground_EventScript_Declined_Haircut1
	checkmoney 500, 0
	goto_if_eq VAR_RESULT, FALSE, GoldenrodUnderground_EventScript_NotEnough_Haircut1
	removemoney 500
	updatemoneybox 0
	playse SE_SHOP
	msgbox GoldenrodUnderground_Text_OlderBrotherWatchItBeautiful
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HaircutBrother1
	fadescreen FADE_FROM_BLACK
	special BufferMonNickname
	msgbox GoldenrodUnderground_Text_OlderBrotherAllDone
	hidemoneybox
	setflag FLAG_DAILY_HAIRCUT1_RECEIVED
	release
	end

GoldenrodUnderground_EventScript_Declined_Haircut1::
	msgbox GoldenrodUnderground_Text_OlderBrotherThatsAShame, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

GoldenrodUnderground_EventScript_Already_Got_Haircut1::
	msgbox GoldenrodUnderground_Text_OlderBrotherOnePerDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodUnderground_EventScript_NotEnough_Haircut1::
	msgbox GoldenrodUnderground_Text_OlderBrotherNeedMoreMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end


GoldenrodUnderground_EventScript_Brother_Haircut2::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_HAIRCUT2_RECEIVED, GoldenrodUnderground_EventScript_Already_Got_Haircut2
	showmoneybox 0, 0
	msgbox GoldenrodUnderground_Text_YoungerBrotherOffer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, GoldenrodUnderground_EventScript_Haircut2
	msgbox GoldenrodUnderground_Text_YoungerBrotherDisappointed, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	end

GoldenrodUnderground_EventScript_Haircut2::
	msgbox GoldenrodUnderground_Text_YoungerBrotherAskWhich
	special ChoosePartyMon
	waitstate
	showmoneybox 0, 0
	lock
	faceplayer
	goto_if_ge VAR_0x8004, PARTY_SIZE, GoldenrodUnderground_EventScript_Declined_Haircut2
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, GoldenrodUnderground_EventScript_Declined_Haircut2
	checkmoney 300, 0
	goto_if_eq VAR_RESULT, FALSE, GoldenrodUnderground_EventScript_NotEnough_Haircut2
	removemoney 300
	updatemoneybox 0
	playse SE_SHOP
	msgbox GoldenrodUnderground_Text_YoungerBrotherLookCool
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HaircutBrother1
	fadescreen FADE_FROM_BLACK
	special BufferMonNickname
	msgbox GoldenrodUnderground_Text_YoungerBrotherAllDone
	hidemoneybox
	setflag FLAG_DAILY_HAIRCUT2_RECEIVED
	release
	end

GoldenrodUnderground_EventScript_Declined_Haircut2::
	msgbox GoldenrodUnderground_Text_YoungerBrotherDisappointed, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

GoldenrodUnderground_EventScript_Already_Got_Haircut2::
	msgbox GoldenrodUnderground_Text_YoungerBrotherOnePerDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodUnderground_EventScript_NotEnough_Haircut2::
	msgbox GoldenrodUnderground_Text_YoungerBrotherShortOnFunds, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end


GoldenrodCity_UndergroundTunnel_MapScript_TryOpenDoor::
	goto_if_set FLAG_UNLOCKED_GOLDENROD_UNDERGROUND_DOOR, GoldenrodCity_UndergroundTunnel_MapScript_OpenDoor
	end

GoldenrodCity_UndergroundTunnel_MapScript_OpenDoor::
	setmetatile 12, 10, 0x2DD, FALSE
	end

GoldenrodCity_UndergroundTunnel_EventScript_Door::
	lock
	goto_if_set FLAG_UNLOCKED_GOLDENROD_UNDERGROUND_DOOR, GoldenrodCity_UndergroundTunnel_EventScript_DoorAlreadyOpened
	checkitem ITEM_BASEMENT_KEY
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_UndergroundTunnel_EventScript_OpenDoor
	msgbox GoldenrodUnderground_Text_DoorsLocked, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_UndergroundTunnel_EventScript_OpenDoor::
	msgbox GoldenrodUnderground_Text_KeyOpenedDoor, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_UNLOCKED_GOLDENROD_UNDERGROUND_DOOR
	setmetatile 12, 10, 0x2DD, FALSE
	playse SE_BANG
	special DrawWholeMapView
	waitse
	release
	end

GoldenrodCity_UndergroundTunnel_EventScript_DoorAlreadyOpened::
	msgbox GoldenrodUnderground_Text_DoorIsOpen, MSGBOX_DEFAULT
	closemessage
	release
	end


GoldenrodCity_UndergroundTunnel_EventScript_Item_CoinCase::
	finditem ITEM_COIN_CASE
	end

GoldenrodCity_UndergroundTunnel_EventScript_Item_SuperPotion::
	finditem ITEM_SUPER_POTION
	end

GoldenrodCity_UndergroundTunnel_EventScript_Item_ParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end

GoldenrodCity_UndergroundTunnel_EventScript_Item_Antidote::
	finditem ITEM_ANTIDOTE
	end

GoldenrodUnderground_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message GoldenrodUnderground_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart GoldenrodUnderground_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
GoldenrodUnderground_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	pokemartlistend

GoldenrodUnderground_HerbShop_Text_WelcomeToHerbShop:
	.string "Welcome to the HERB SHOP, home of\n"
	.string "effective and inexpensive medicine!$"

GoldenrodUnderground_Text_YoungerBrotherOffer:
    .string "Welcome to the POKéMON SALON!\p"
    .string "I'm the younger and less expensive\n"
    .string "of the two HAIRCUT BROTHERS.\p"
    .string "I'll spiff up your POKéMON for just\n"
    .string "¥300.\p"
    .string "So? How about it?$"

GoldenrodUnderground_Text_YoungerBrotherAskWhich:
    .string "OK, which POKéMON should I do?$"

GoldenrodUnderground_Text_YoungerBrotherLookCool:
    .string "OK! I'll make it look cool!$"

GoldenrodUnderground_Text_YoungerBrotherAllDone:
    .string "There we go! All done!$"

GoldenrodUnderground_Text_YoungerBrotherDisappointed:
    .string "No? How disappointing!$"

GoldenrodUnderground_Text_YoungerBrotherShortOnFunds:
    .string "You're a little short on funds.$"

GoldenrodUnderground_Text_YoungerBrotherOnePerDay:
    .string "I can do only one haircut a day.\p"
    .string "Sorry, but I'm all done for today.$"



GoldenrodUnderground_Text_OlderBrotherOffer:
    .string "Welcome!\p"
    .string "I run the POKéMON SALON!\p"
    .string "I'm the older and better of the two\n"
    .string "HAIRCUT BROTHERS.\p"
    .string "I can make your POKéMON beautiful\n"
    .string "for just ¥500.\p"
    .string "Would you like me to do that?$"

GoldenrodUnderground_Text_OlderBrotherAskWhich:
    .string "Which POKéMON should I work on?$"

GoldenrodUnderground_Text_OlderBrotherWatchItBeautiful:
    .string "OK! Watch it become beautiful!$"

GoldenrodUnderground_Text_OlderBrotherAllDone:
    .string "There! All done!$"

GoldenrodUnderground_Text_OlderBrotherThatsAShame:
    .string "Is that right? That's a shame!$"

GoldenrodUnderground_Text_OlderBrotherNeedMoreMoney:
    .string "You'll need more money than that.$"

GoldenrodUnderground_Text_OlderBrotherOnePerDay:
    .string "I do only one haircut a day.\n"
    .string "I'm done for today.$"

GoldenrodUnderground_Text_PokemaniacDonaldAfterBattleOld:
    .string "Are you making a POKéDEX? Here's a\n"
    .string "hot tip.\p"
    .string "The HIKER on ROUTE 33, ANTHONY, is a\n"
    .string "good guy.\p"
    .string "He'll phone you if he sees any rare\n"
    .string "POKéMON.$"

GoldenrodUnderground_Text_DoorsLocked:
    .string "The door's locked…$"

GoldenrodUnderground_Text_DoorIsOpen:
    .string "The door is open.$"

GoldenrodUnderground_Text_KeyOpenedDoor:
    .string "The BASEMENT KEY opened the door.$"

GoldenrodUnderground_Text_NoEntry:
    .string "NO ENTRY BEYOND THIS POINT$"










GoldenrodCity_UndergroundTunnel_EventScript_Lucy::
	lock
	faceplayer
	playbgm MUS_B_PIKE, TRUE
	goto_if_set FLAG_LUCY_CHALLENGE_EXPLAINED, GoldenrodCity_UndergroundTunnel_EventScript_LucyPostIntro
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyIntro, MSGBOX_DEFAULT
	closemessage
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, GoldenrodCity_UndergroundTunnel_EventScript_LucyBattleNormal
	case 1, GoldenrodCity_UndergroundTunnel_EventScript_LucyBattleHard
	case MULTI_B_PRESSED, GoldenrodCity_UndergroundTunnel_EventScript_DeclineLucyChallenge
	goto GoldenrodCity_UndergroundTunnel_EventScript_DeclineLucyChallenge

GoldenrodCity_UndergroundTunnel_EventScript_LucyPostIntro::
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, GoldenrodCity_UndergroundTunnel_EventScript_LucyBattleNormal
	case 1, GoldenrodCity_UndergroundTunnel_EventScript_LucyBattleHard
	case MULTI_B_PRESSED, GoldenrodCity_UndergroundTunnel_EventScript_DeclineLucyChallenge
	goto GoldenrodCity_UndergroundTunnel_EventScript_DeclineLucyChallenge

GoldenrodCity_UndergroundTunnel_EventScript_LucyBattleNormal::
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyPreBattleNormal, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, GoldenrodCity_UndergroundTunnel_Text_LucyWin
	playbgm MUS_B_PIKE, TRUE
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyNormalAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 11, GoldenrodCity_UndergroundTunnel_EventScript_LucyLeave1
	call_if_ge VAR_TEMP_0, 12, GoldenrodCity_UndergroundTunnel_EventScript_LucyLeave2
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_LUCY
	removeobject LOCALID_GOLDENROD_UNDERGROUND_LUCY
	fadedefaultbgm
	release
	end

GoldenrodCity_UndergroundTunnel_EventScript_LucyBattleHard::
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyPreBattleHard, MSGBOX_DEFAULT
	closemessage
	@special SetRandomStatus
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, GoldenrodCity_UndergroundTunnel_Text_LucyWin
	playbgm MUS_B_PIKE, TRUE
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyHardAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox GoldenrodCity_UndergroundTunnel_Text_LucyLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 11, GoldenrodCity_UndergroundTunnel_EventScript_LucyLeave1
	call_if_ge VAR_TEMP_0, 12, GoldenrodCity_UndergroundTunnel_EventScript_LucyLeave2
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_LUCY
	removeobject LOCALID_GOLDENROD_UNDERGROUND_LUCY
	fadedefaultbgm
	release
	end

GoldenrodCity_UndergroundTunnel_EventScript_DeclineLucyChallenge::
	msgbox GoldenrodCity_UndergroundTunnel_Text_DeclineLucyChallenge, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_LUCY_CHALLENGE_EXPLAINED
	fadedefaultbgm
	release
	end

GoldenrodCity_UndergroundTunnel_Text_LucyIntro:
    .string "Listen. I'm not one for chit chat.\n"
	.string "My name is Lucy.\p"
	.string "LUCY: The other FRONTIER heads all had\n"
	.string "some deep, introspective reason for\l"
	.string "challenging you, didn't they?\p"
	.string "Sorry to disappoint. I only want to\n"
	.string "fight you because you beat them.\p"
	.string "If I win, that makes me the strongest...\p"
	.string "Hm? The challenge? I suppose I could\n"
	.string "think of one...\p"
	.string "If you want to prove yourself, I will\n"
	.string "afflict all your POKéMON with a random\l"
	.string "status effect before the battle.$"

GoldenrodCity_UndergroundTunnel_Text_LucyPostIntro:
	.string "So... we doing this or what?$"

GoldenrodCity_UndergroundTunnel_Text_LucyPreBattleNormal:
    .string "Think you'll take the easy win? Sorry.\n"
	.string "Still not gonna happen.$"

GoldenrodCity_UndergroundTunnel_Text_LucyWin:
    .string "Urk...$"

GoldenrodCity_UndergroundTunnel_Text_LucyNormalAfter:
    .string "Fine. I admit you're at least passable\n"
	.string "in skill. Take these and go.$"

GoldenrodCity_UndergroundTunnel_Text_LucyLeaving:
    .string "I'm not going to forget this...\p"
	.string "Come to the BATTLE PYKE soon. I'll get\n"
	.string "my revenge there.\p"
	.string "...You'd better not keep me waiting.$"

GoldenrodCity_UndergroundTunnel_Text_LucyPreBattleHard:
    .string "Hah! You're certainly confident.\n"
	.string "Let's see why that is!$"

GoldenrodCity_UndergroundTunnel_Text_LucyHardAfter:
    .string "Fine! Have your stupid scales then.\n"
	.string "Go on! Take them already!$"

GoldenrodCity_UndergroundTunnel_Text_DeclineLucyChallenge:
    .string "...Hurry up. I hate timewasters.$"



GoldenrodCity_UndergroundTunnel_EventScript_LucyLeave1:
	applymovement LOCALID_GOLDENROD_UNDERGROUND_LUCY, GoldenrodCity_UndergroundTunnel_Movement_LucyLeave1
	waitmovement 0
	return

GoldenrodCity_UndergroundTunnel_EventScript_LucyLeave2:
	applymovement LOCALID_GOLDENROD_UNDERGROUND_LUCY, GoldenrodCity_UndergroundTunnel_Movement_LucyLeave2
	waitmovement 0
	return

GoldenrodCity_UndergroundTunnel_Movement_LucyLeave1:
	walk_down
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

GoldenrodCity_UndergroundTunnel_Movement_LucyLeave2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end








