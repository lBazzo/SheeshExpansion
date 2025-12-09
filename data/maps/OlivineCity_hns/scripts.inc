.set LOCALID_OLIVINE_SILVER, 4
.set LOCALID_OLIVINE_DAHLIA, 24

OlivineCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

OlivineCity_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

OlivineCity_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

OlivineCity_EventScript_CityTrigger:: @FLAGHEAP
	setflag FLAG_HIDE_OLIVINE_CITY_GYM_LEADERS
	setflag FLAG_HIDE_OLIVINE_SILVER
	setflag FLAG_VISITED_OLIVINE_CITY
	clearflag FLAG_SAFARI_ZONE_WEST_EXPANSION
	clearflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	clearflag FLAG_HIDE_BATTLEFRONTIER_ENGINEER
	clearflag FLAG_HIDE_LIGHTHOUSE_JASMINE
	clearflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	clearflag FLAG_HIDE_OLIVINE_DAHLIA
	clearflag FLAG_HIDE_OLIVINE_STEVEN
	clearflag FLAG_STEVEN_INTRO_DONE
	setvar VAR_GETFLY, 0
	
	setvar VAR_OLIVINE_CITY_STATE, 1
	setvar VAR_DAHLIA_STATE, 1

	@cianwood flags
	setvar VAR_SUICUNE_ENCOUNTERS, 1
	clearflag FLAG_HIDE_CIANWOOD_SUICUNE
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setvar VAR_CIANWOOD_CITY_STATE, 1
	end

OlivineCity_EventScript_SilverTrigger::
	lock
	clearflag FLAG_HIDE_OLIVINE_SILVER
	opendoor 11, 27
	addobject LOCALID_OLIVINE_SILVER
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	delay 20 
	closedoor 11, 27
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 28, OlivineCity_EventScript_SilverWalkToPlayer1
	call_if_eq VAR_TEMP_1, 29, OlivineCity_EventScript_SilverWalkToPlayer2
	call_if_eq VAR_TEMP_1, 30, OlivineCity_EventScript_SilverWalkToPlayer3
	msgbox OlivineCity_Text_SilverEncounter, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 28, OlivineCity_EventScript_SilverLeaveAdjust1
	call_if_eq VAR_TEMP_1, 29, OlivineCity_EventScript_SilverLeaveAdjust2
	call_if_eq VAR_TEMP_1, 30, OlivineCity_EventScript_SilverLeaveAdjust2
	applymovement LOCALID_OLIVINE_SILVER, OlivineCity_Movement_SilverLeave
	waitmovement 0
	setvar VAR_OLIVINE_CITY_STATE, 2
	setflag FLAG_HIDE_OLIVINE_SILVER
	removeobject LOCALID_OLIVINE_SILVER
	fadedefaultbgm
	release
	end

OlivineCity_EventScript_SilverWalkToPlayer1::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer1
	waitmovement 0
	return

OlivineCity_EventScript_SilverWalkToPlayer2::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer2
	waitmovement 0
	return

OlivineCity_EventScript_SilverWalkToPlayer3::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer3
	waitmovement 0
	return

OlivineCity_EventScript_SilverLeaveAdjust1::
	applymovement LOCALID_OLIVINE_SILVER Common_Movement_WalkDown1
	waitmovement 0
	return

OlivineCity_EventScript_SilverLeaveAdjust2::
	applymovement LOCALID_OLIVINE_SILVER Common_Movement_WalkUp1
	waitmovement 0
	return

OlivineCity_Movement_SilverWalkToPlayer1:
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_SilverWalkToPlayer2:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_SilverWalkToPlayer3:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_SilverLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OlivineCity_Text_SilverEncounter:
	.string "You again?\n"
	.string "There's no need to be alert.\p"
	.string "I don't bother with wimps\n"
	.string "like you.\p"
	.string "Speaking of weaklings, the\n"
	.string "city's Gym Leader isn't here,\l"
	.string "and is supposedly taking care\l"
	.string "of a sick POKéMON at the\l"
	.string "Lighthouse.\p"
	.string "Humph! Boo-hoo!\n"
	.string "Just let sick POKéMON go!\p"
	.string "A POKéMON that can't battle\n"
	.string "is worthless!\p"
	.string "Why don't you go train at the\n"
	.string "Lighthouse?\p"
	.string "Who knows? It may make you a\n"
	.string "bit of a better Trainer!$"

OlivineCity_EventScript_DahliaTrigger::
	lock
	playse SE_PIN
	applymovement LOCALID_OLIVINE_DAHLIA, Common_Movement_ExclamationMark
	delay 60
	playbgm MUS_HG_B_ARCADE, TRUE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 45, OlivineCity_EventScript_DahliaWalkToPlayer1
	call_if_eq VAR_TEMP_1, 46, OlivineCity_EventScript_DahliaWalkToPlayer2
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_DahliaWalkToPlayer3
	goto_if_eq VAR_DAHLIA_STATE, 2, OlivineCity_EventScript_ChallengedByDahliaPostIntro
	goto OlivineCity_EventScript_ChallengedByDahlia

OlivineCity_EventScript_DahliaWalkToPlayer1::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkToPlayer1
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkToPlayer2::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkToPlayer2
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkToPlayer3::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkToPlayer3
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkBack1::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkBack1
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkBack2::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkBack2
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkBack3::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkBack3
	waitmovement 0
	return

OlivineCity_Movement_DahliaWalkToPlayer1::
	walk_up
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaWalkToPlayer2::
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaWalkToPlayer3::
	walk_down
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaWalkBack1::
	walk_down
	walk_left
	walk_left
	face_right
	step_end

OlivineCity_Movement_DahliaWalkBack2::
	walk_left
	walk_left
	face_right
	step_end

OlivineCity_Movement_DahliaWalkBack3::
	walk_up
	walk_left
	walk_left
	face_right
	step_end

OlivineCity_Movement_DahliaThinking::
	face_left
	waitmovement 30
	face_right
	step_end

OlivineCity_EventScript_ChallengedByDahlia::
	setvar VAR_DAHLIA_STATE, 2
	msgbox OlivineCity_Text_DahliaEncounter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_DAHLIA, Common_Movement_FaceLeft
	waitmovement 0
	msgbox OlivineCity_Text_DahliaEncounter2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_DAHLIA, Common_Movement_FaceRight
	waitmovement 0
	msgbox OlivineCity_Text_DahliaEncounterPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, OlivineCity_EventScript_DahliaBattleNormal
	case 1, OlivineCity_EventScript_DahliaBattleHard
	case MULTI_B_PRESSED, OlivineCity_EventScript_DeclineDahliaChallenge
	goto OlivineCity_EventScript_DeclineDahliaChallenge

OlivineCity_EventScript_ChallengedByDahliaPostIntro::
	msgbox OlivineCity_Text_DahliaEncounterPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, OlivineCity_EventScript_DahliaBattleNormal
	case 1, OlivineCity_EventScript_DahliaBattleHard
	case MULTI_B_PRESSED, OlivineCity_EventScript_DeclineDahliaChallenge
	goto OlivineCity_EventScript_DeclineDahliaChallenge

OlivineCity_EventScript_DahliaBattleNormal::
	msgbox OlivineCity_Text_DahliaBattleNormal, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_DAHLIA_NORMAL, OlivineCity_Text_DahliaWin
	playbgm MUS_HG_B_ARCADE, TRUE
	msgbox OlivineCity_Text_DahliaNormalAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	msgbox OlivineCity_Text_DahliaLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 45, OlivineCity_EventScript_DahliaLeave1
	call_if_eq VAR_TEMP_1, 46, OlivineCity_EventScript_DahliaLeave1
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_DahliaLeave2
	waitmovement 0
	setflag FLAG_HIDE_OLIVINE_DAHLIA
	removeobject LOCALID_OLIVINE_DAHLIA
	setvar VAR_DAHLIA_STATE, 3
	fadedefaultbgm
	release
	end

OlivineCity_EventScript_DahliaBattleHard::
	setweather WEATHER_RAIN
	doweather
	msgbox OlivineCity_Text_DahliaBattleHard, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_DAHLIA_HARD, OlivineCity_Text_DahliaWin
	playbgm MUS_HG_B_ARCADE, TRUE
	setweather WEATHER_SHADE
	doweather
	msgbox OlivineCity_Text_DahliaHardAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox OlivineCity_Text_DahliaLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 45, OlivineCity_EventScript_DahliaLeave1
	call_if_eq VAR_TEMP_1, 46, OlivineCity_EventScript_DahliaLeave1
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_DahliaLeave2
	waitmovement 0
	setflag FLAG_HIDE_OLIVINE_DAHLIA
	removeobject LOCALID_OLIVINE_DAHLIA
	setvar VAR_DAHLIA_STATE, 3
	fadedefaultbgm
	release
	end

OlivineCity_EventScript_DeclineDahliaChallenge::
	msgbox OlivineCity_Text_DeclineDahliaChallenge, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 45, OlivineCity_EventScript_DahliaWalkBack1
	call_if_eq VAR_TEMP_1, 46, OlivineCity_EventScript_DahliaWalkBack2
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_DahliaWalkBack3
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	waitmovement 0
	fadedefaultbgm
	release
	end

OlivineCity_EventScript_DahliaLeave1::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaLeave1
	waitmovement 0
	return

OlivineCity_EventScript_DahliaLeave2::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaLeave2
	waitmovement 0
	return

OlivineCity_Movement_DahliaLeave1::
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaLeave2::
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Text_DahliaEncounter:
	.string "...Aha!\p"
	.string "I knew it! A strong trainer, lucky me!\p"
	.string "You're exactly the kind of person I was\n"
	.string "looking to run into. Let me explain.\p"
	.string "My name is DAHLIA. I run the BATTLE\n"
	.string "ARCADE in a land far away from here.\p"
	.string "DAHLIA: The BATTLE ARCADE is a facility\n"
	.string "where trainers battle under randomly\l"
	.string "chosen conditions, testing both their\l"
	.string "luck and skill.\p"
	.string "...Or so I thought.\p"
	.string "Recently, I battled an incredibly\n"
	.string "strong trainer, who managed to win even\l"
	.string "when the ARCADE gave him a forfeit.\p"
	.string "Afterwards, he said to me, 'A tougher\n"
	.string "fight simply means I come out the other\l"
	.string "side a stronger trainer.'$"

OlivineCity_Text_DahliaEncounter2:
	.string "That got me thinking...$"

OlivineCity_Text_DahliaEncounterPostIntro:
	.string "I want to know.\p"
	.string "Is it better to always have good luck\n"
	.string "and an easy path to victory?\p"
	.string "Or does bad luck and struggle make us\n"
	.string "stronger in the long run?\p"
	.string "Say we were to battle right now, would\n"
	.string "you wish for a hard opponent, or a\l"
	.string "normal opponent?\p"
	.string "What'll it be?$"

OlivineCity_Text_DeclineDahliaChallenge:
	.string "Oh, you want to think over your answer?\n"
	.string "Guess that makes two of us!\p"
	.string "I'll be waiting here for when you're\n"
	.string "ready then.$"

OlivineCity_Text_DahliaBattleNormal:
	.string "Hoping your good luck lasts forever,\n"
	.string "are you? We'll see about that!$"

OlivineCity_Text_DahliaBattleHard:
	.string "Interesting! So you're the type to opt\n"
	.string "into adversity, are you?\p"
	.string "In that case, let's see just how strong\n"
	.string "the hardship you've endured has made\l"
	.string "you!$"

OlivineCity_Text_DahliaWin:
	.string "Incredible! No matter the source of\n"
	.string "your strength, I can't deny that you\l"
	.string "are one skilled trainer!$"

OlivineCity_Text_DahliaNormalAfter:
	.string "So that's that, then.\p"
	.string "You know, I think you're right. If you\n"
	.string "take on the more difficult challenge\l"
	.string "every time, eventually you will lose\l"
	.string "more than you would have otherwise by\l"
	.string "letting luck take its natural course.\p"
	.string "Thank you for showing me your point of\n"
	.string "view. Here, I want you to have these.\l"
	.string "It's two HEART SCALES.$"

OlivineCity_Text_DahliaHardAfter:
	.string "So that's that, then.\p"
	.string "You know, I think you're right. If you\n"
	.string "take on the more difficult challenge\l"
	.string "every time, eventually you will learn\l"
	.string "how to overcome mountains you\l"
	.string "otherwise would never be able to climb.\p"
	.string "Thank you for showing me your point of\n"
	.string "view. Here, I want you to have these.\l"
	.string "It's four HEART SCALES.$"

OlivineCity_Text_DahliaLeaving:	
	.string "The real luck I had was running into you\n"
	.string "today, {PLAYER}.\p"
	.string "You know, I think the other FRONTIER\n"
	.string "BRAINS would love to meet you.\p"
	.string "Maybe keep an eye out for them on the\n"
	.string "rest of your journey.\p"
	.string "Who knows? Maybe I'll be lucky enough\n"
	.string "to run into you again someday.\l"
	.string "Bye bye for now!$"

OlivineCity_EventScript_Sailor1::
	lock
	faceplayer
	msgbox OlivineCity_Text_Sailor1, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Sailor2::
	lock
	faceplayer
	msgbox OlivineCity_Text_Sailor2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox OlivineCity_Text_YoungsterPokegear, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Machoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox OlivineCity_Text_Machoke, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OlivineCity_EventScript_Sign::
	lock
	msgbox OlivineCity_Text_Sign, MSGBOX_SIGN
	end

OlivineCity_EventScript_PortSign::
	lock
	msgbox OlivineCity_Text_PortSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_CafeSign::
	msgbox OlivineCity_Text_CafeSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_GymSign::
	lock
	msgbox OlivineCity_Text_GymSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_LighthouseSign::
	lock
	msgbox OlivineCity_Text_LighthouseSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_Item_Shockwave::
	finditem ITEM_TM_SHOCK_WAVE
	end

OlivineCity_EventScript_EonTicketWoman::
	lock
	faceplayer
	checkitem ITEM_AURORA_TICKET
	goto_if_eq VAR_RESULT, TRUE, OlivineCity_EventScript_EonTicketWomanAfter
	goto_if_set FLAG_IS_KANTO_CHAMPION, OlivineCity_EventScript_EonTicketWomanChamp
	msgbox OlivineCity_Text_EonTicketWoman1, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_EonTicketWomanChamp::
	msgbox OlivineCity_Text_EonTicketWoman2, MSGBOX_DEFAULT
	giveitem ITEM_AURORA_TICKET
	closemessage
	release
	end

OlivineCity_EventScript_EonTicketWomanAfter::
	msgbox OlivineCity_Text_EonTicketWoman3, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_CafeSign:
	.string "OLIVINE CAFE\n"
	.string "WHERE STRONG SAILORS ENJOY\l"
	.string "HEARTY MEALS OF STRENGTH$"

OlivineCity_Text_EonTicketWoman1:
	.string "My name is MARY!\p"
	.string "Just kidding, but I love MARY's\n"
	.string "radio show!$"

OlivineCity_Text_EonTicketWoman2:
	.string "You must be {PLAYER}!!!\p"
	.string "Oh my goodness! The champion!\p"
	.string "I heard about you on MARY's\n"
	.string "radio show!\p"
	.string "Here, take this!$"

OlivineCity_Text_EonTicketWoman3:
	.string "I can't believe I met the\n"
	.string "champion!!!$"

OlivineCity_Text_Sailor1:
	.string "Dark roads are dangerous\n"
	.string "at night.\p"
	.string "But in the pitch-black of\n"
	.string "night, the sea is even more\l"
	.string "treacherous!\p"
	.string "Without the beacon of the\n"
	.string "LIGHTHOUSE to guide it,\l"
	.string "no ship can sail.$"

OlivineCity_Text_YoungsterPokegear:
	.string "That thing you have--\n"
	.string "it's a POKéGEAR, right?\l"
	.string "Wow, that's cool.$"

OlivineCity_Text_YoungsterPokedex:
	.string "Wow, you have a POKéDEX!\p"
	.string "That is just so awesome.$"

OlivineCity_Text_Sailor2:
	.string "The league has JASMINE\n"
	.string "pegged as the sixth\l"
	.string "strongest GYM LEADER!\p"
	.string "Hah! That's a load of crud.\p"
	.string "There's no way PRYCE could\n"
	.string "hurt JASMINE's Steel-type\l"
	.string "POKéMON!\p"
	.string "Bureaucracy if you ask me.\p"
	.string "She's something to be feared,\n"
	.string "that's for sure!$"

OlivineCity_Text_Sign:
	.string "OLIVINE CITY\p"
	.string "The Port Closest to Foreign Lands$"

OlivineCity_Text_PortSign:
	.string "OLIVINE PORT\n"
	.string "FAST SHIP PIER$"

OlivineCity_Text_GymSign:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: JASMINE\p"
	.string "The Steel-Clad Defense Girl$"

OlivineCity_Text_LighthouseSign:
	.string "OLIVINE LIGHTHOUSE\n"
	.string "Also known as the GLITTER\l"
	.string "LIGHTHOUSE$"

OlivineCity_Text_BattleTowerSign:
	.string "BATTLE TOWER AHEAD\n"
	.string "Opening Now!$"

OlivineCity_Text_Machoke:
	.string "MACHOKE: CHO!$"
