.set LOCALID_GOLDENROD_ROCKET_SCOUT, 10
.set LOCALID_GOLDENROD_CITY_SILVER, 34
.set LOCALID_GOLDENROD_CITY_LITTLEGIRL, 35
.set LOCALID_GOLDENROD_CITY_AZURILL, 36
.set LOCALID_GOLDENROD_CITY_GAMECORNERGUARD, 37
.set LOCALID_GOLDENROD_CITY_PUNCHTUTOR, 38
.set LOCALID_GOLDENROD_CITY_HITMONCHAN, 39
.set LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, 40
.set LOCALID_GOLDENROD_CITY_ACCELGOR, 41
.set LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, 42
.set LOCALID_GOLDENROD_CITY_PORYGON2, 43
.set LOCALID_GOLDENROD_CITY_FANGTUTOR, 44
.set LOCALID_GOLDENROD_CITY_FERALIGATR, 45
.set LOCALID_GOLDENROD_CITY_GIOVANNI, 46

GoldenrodCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodCity_OnFrame
	.byte 0

GoldenrodCity_EventScript_MoveGameCornerGuard::
	setobjectxyperm LOCALID_GOLDENROD_CITY_GAMECORNERGUARD, 28, 30
	end

GoldenrodCity_OnFrame::
	map_script_2 VAR_GOLDENROD_SILVER_STATE, 1, GoldenrodCity_MapScript_Hide_Silver
	map_script_2 VAR_GOLDENROD_SILVER_STATE, 3, GoldenrodCity_EventScript_Giovanni
	.2byte 0

GoldenrodCity_MapScript_Hide_Silver:
	setflag FLAG_HIDE_GOLDENROD_CITY_SILVER
	removeobject LOCALID_GOLDENROD_CITY_SILVER
	end

GoldenrodCity_EventScript_Trigger:: @flagheap
	setflag FLAG_VISITED_GOLDENROD_CITY
	setflag FLAG_HIDE_GOLDENROD_ROCKETS
	setflag FLAG_HIDE_GOLDENROD_BILL
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_KIMONO
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_LUCY
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_SILVER
	setflag FLAG_HIDE_ROCKET_GOLDENROD_RADIOTOWER_1
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_PETREL
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR_2
	setflag FLAG_HIDE_GOLDENROD_CITY_SILVER
	setflag FLAG_HIDE_GOLDENROD_GIOVANNI
	
	clearflag FLAG_HIDE_GOLDENROD_BEAUTY
	clearflag FLAG_HIDE_GOLDENROD_ROCKET_SCOUT
	clearflag FLAG_HIDE_GOLDENROD_NPCS
	clearflag FLAG_GOT_RETURN
	clearflag FLAG_GOT_FRUSTRATION
	clearflag FLAG_RECEIVED_BIKE
	clearflag FLAG_RECEIVED_SQUIRTBOTTLE
	clearflag FLAG_GOT_EEVEE
	clearflag FLAG_SYS_PC_BILL
	clearflag FLAG_RETURNED_MACHINE_PART
	clearflag FLAG_UNLOCKED_GOLDENROD_UNDERGROUND_DOOR
	clearflag FLAG_GOLDENROD_MACHOKE_1
	clearflag FLAG_GOLDENROD_MACHOKE_2
	clearflag FLAG_GOLDENROD_MACHOKE_3
	clearflag FLAG_COMPLETED_SWITCHES
	clearflag FLAG_ENABLE_RADIO
	clearflag FLAG_KANTO_RADIO_GOT
	clearflag FLAG_GOLDENROD_NPC_TRADE_COMPLETED
	clearflag FLAG_GOT_SKILL_SWAP
	clearflag FLAG_HIDE_RADIOTOWER_GATE
	clearflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR
	clearflag FLAG_GOT_MARY_BRIGHT_POWDER
	clearflag FLAG_GOT_QUICK_CLAW
	clearflag FLAG_GOT_MAGNET
	clearflag FLAG_HIDE_GOLDENROD_CITY_LITTLEGIRL
	clearflag FLAG_HIDE_GOLDENROD_CITY_AZURILL
	clearflag FLAG_GOT_TYPE_BOOSTING_ITEMS

	setvar VAR_BUG_CONTEST_STATE, 0
	setvar VAR_KENYA, 0
	setvar VAR_LUGIA_OR_HOOH, 0
	setvar VAR_TRAIN, 0
	setvar VAR_ELEVATOR, 0
	setvar VAR_GOLDENROD_CITY_STATE, 1
	setvar VAR_GOLDENROD_SILVER_STATE, 1
	setvar VAR_WHITNEY_GYM_B2B_STATE, 1

	release
	end

GoldenrodCity_Trigger_Silver::
	lockall
	opendoor 39, 40
	waitdooranim
	delay 10
	clearflag FLAG_HIDE_GOLDENROD_CITY_SILVER
	addobject LOCALID_GOLDENROD_CITY_SILVER
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	playse SE_BANG
	applymovement LOCALID_GOLDENROD_CITY_SILVER, GoldenrodCity_Movement_Silver1
	applymovement OBJ_EVENT_ID_PLAYER, GoldenrodCity_Movement_Player1
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement LOCALID_GOLDENROD_CITY_SILVER
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	closedoor 39, 40
	waitdooranim
	msgbox GoldenrodCity_Text_Silver2, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_SILVER, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_GOLDENROD_CITY_SILVER, DIR_SOUTH
	msgbox GoldenrodCity_Text_Silver3, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_STARTER_MON, 0, GoldenrodCity_Silver_Battle_Cyndaquil
	call_if_eq VAR_STARTER_MON, 1, GoldenrodCity_Silver_Battle_Totodile
	call_if_eq VAR_STARTER_MON, 2, GoldenrodCity_Silver_Battle_Chikorita
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	msgbox GoldenrodCity_Text_RivalAfter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SILVER, GoldenrodCity_Movement_Silver_Leave
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_CITY_SILVER
	removeobject LOCALID_GOLDENROD_CITY_SILVER
	setvar VAR_GOLDENROD_SILVER_STATE, 2
	fadedefaultbgm
	release
	end

GoldenrodCity_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_2, GoldenrodCity_Text_RivalWin
	return

GoldenrodCity_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_2, GoldenrodCity_Text_RivalWin
	return

GoldenrodCity_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_2, GoldenrodCity_Text_RivalWin
	return


GoldenrodCity_Movement_Silver1:
	delay_16
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

GoldenrodCity_Movement_Player1:
	delay_16
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

GoldenrodCity_Movement_Silver_Leave:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

GoldenrodCity_Text_Silver1:
	.string "Bump!$"

GoldenrodCity_Text_Silver2:
	.string "SILVER: Stupid receptionist and her\n"
	.string "stupid quiz...\p"
	.string "How am I supposed to know who this\n"
	.string "'Kurt' guy is without a last name?\p"
	.string "And why is she asking a child about\n"
	.string "what appears on some slot machines?$"

GoldenrodCity_Text_Silver3:
	.string "SILVER: Oh, it's you.\p"
	.string "...\p"
	.string "Yeah, well, I didn't want that RADIO\n"
	.string "anyway.\p"
	.string "If I couldn't get it right, there's no\n"
	.string "way they'd give one to an idiot like you.\p"
	.string "More importantly...\p"
	.string "Is it true that TEAM ROCKET\n"
	.string "has returned?\p"
	.string "What? You beat them? Hah! Quit\n"
	.string "lying.\p"
	.string "You're not joking?\n"
	.string "Then let's see how good you are.$"

GoldenrodCity_Text_RivalWin:
	.string "…Humph! Useless POKéMON!\p"
	.string "Listen, you. You only won because\n"
	.string "my POKéMON were weak.$"

GoldenrodCity_Text_RivalAfter:
	.string "I hate the weak.\p"
	.string "POKéMON, trainers. It doesn't\n"
	.string "matter who or what.\p"
	.string "I'm going to be strong and wipe\n"
	.string "out the weak.\p"
	.string "That goes for TEAM ROCKET too.\p"
	.string "They act big and tough in a group.\p"
	.string "But get them alone, and they're weak.\n"
	.string "I hate them all.\p"
	.string "You stay out of my way. A weakling\n"
	.string "like you is only a distraction.$"

GoldenrodCity_Text_RivalLoss:
	.string "…Humph! I knew you were lying.$"

GoldenrodCity_Trigger_Music::
	goto_if_lt VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_Trigger_MusicNotYet
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 11, GoldenrodCity_Trigger_MusicNotYet
	playbgm MUS_HG_ROCKET_TAKEOVER, TRUE
	setvar VAR_TEMP_0, 1 
	end

GoldenrodCity_Trigger_MusicNotYet::
	setvar VAR_TEMP_0, 1
	end

GoldenrodCity_Elm_Togepi_Call::
	lock
	pokenavcall GoldenrodCity_Text_ElmCall
	waitmessage
	delay 30
	release
	return

GoldenrodCity_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Youngster::
	msgbox GoldenrodCity_Text_Youngster1, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Youngster2::
	msgbox GoldenrodCity_Text_Youngster2, MSGBOX_NPC
	end

GoldenrodCity_EventScript_CooltrainerF::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_GOLDENROD_ROCKET_SCOUT, GoldenrodCity_EventScript_CooltrainerFCleared
	msgbox GoldenrodCity_Text_CooltrainerF1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_CooltrainerFCleared::
	msgbox GoldenrodCity_Text_CooltrainerF1_Cleared, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Gramps::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_NameRaterSign::
	msgbox GoldenrodCity_Text_NameRaterSign, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_RocketScout::
	lock
	msgbox GoldenrodCity_Text_RocketScout1, MSGBOX_DEFAULT
	closemessage
	PLAYSE SE_PIN
	applymovement LOCALID_GOLDENROD_ROCKET_SCOUT, Common_Movement_ExclamationMark
	delay 20
	faceplayer
	msgbox GoldenrodCity_Text_RocketScout2, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_ROCKET_SCOUT, DIR_NORTH
	release
	end

GoldenrodCity_EventScript_Rocket1::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket2::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket3::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket3, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket4::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket4, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket5::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket5, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket6::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket6, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Woman::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_DAY_POKEMON, GoldenrodCity_EventScript_Hiker2
	msgbox GoldenrodCity_Text_HikerDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Hiker2::
	msgbox GoldenrodCity_Text_HikerNight, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Snubbull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SNUBBULL, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Snubbull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_EventScript_Mime::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MR_MIME, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_MrMime, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_EventScript_SignUnderground::
	lock
	msgbox GoldenrodCity_Text_UndergroundSouthSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignDept::
	lock
	msgbox GoldenrodCity_Text_DeptStoreSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignBike::
	lock
	msgbox GoldenrodCity_Text_BikeShopSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignTrain::
	lock
	msgbox GoldenrodCity_Text_StationSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignGym::
	lock
	msgbox GoldenrodCity_Text_GymSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignFlower::
	lock
	msgbox GoldenrodCity_Text_FlowerShopSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignRadio::
	lock
	msgbox GoldenrodCity_Text_RadioTowerSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignGameCorner::
	lock
	msgbox GoldenrodCity_Text_GameCornerSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_EventScript_Beauty::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Beauty, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_Beauty:
	.string "This is the GOLDENROD GYM!\p"
	.string "Our leader WHITNEY is not here\n"
	.string "right now. She might be at the\l"
	.string "RADIO TOWER.$"

GoldenrodCity_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_LittleGirl, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_LittleGirl:
	.string "Yo, check this out!\p"
	.string "Whenever I play music with my POKéGEAR,\n"
	.string "my Azurill starts dancing!\p"
	.string "Maybe if you get a RADIO, yours will\n"
	.string "too!$"

GoldenrodCity_EventScript_Azurill::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Azurill, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_Azurill:
	.string "Azu! Azurill!$"

GoldenrodCity_Text_Woman:
	.string "I used to train in WHITNEY's GYM,\n"
	.string "but all her crying gave me a\l"
	.string "headache.$"

GoldenrodCity_Text_HikerDay:
	.string "When I went into the GAME CORNER\n"
	.string "it was night time... How long was I\l"
	.string "in there?!$"

GoldenrodCity_Text_HikerNight:
	.string "When I went into the GAME CORNER\n"
	.string "it was day time... How long was I\l"
	.string "in there?!$"

GoldenrodCity_Text_Snubbull:
	.string "SNUBBULL: SNUUUBUUUULL!$"

GoldenrodCity_Text_MrMime:
	.string "............................$"

GoldenrodCity_Text_ElmCall:
	.string "ELM: Hello, {PLAYER}?\n"
	.string "Has that egg hatched yet?\p"
	.string "Once it hatches, don't forget to\n"
	.string "bring it by the lab! I need to\l"
	.string "see it!$"

GoldenrodCity_Text_PokefanM:
	.string "They built the new RADIO TOWER\n"
	.string "to replace the old creaky one.$"

GoldenrodCity_Text_Youngster1:
	.string "I know there's a new BIKE SHOP,\n"
	.string "but I can't find it anywhere.$"

GoldenrodCity_Text_CooltrainerF1:
	.string "Is that man in black dressed up\n"
	.string "like a TEAM ROCKET member?\p"
	.string "How silly!$"

GoldenrodCity_Text_CooltrainerF1_Cleared:
	.string "Was that man in black really part\n"
	.string "of TEAM ROCKET? I can't believe it!$"

GoldenrodCity_Text_CooltrainerF2:
	.string "The RADIO TOWER in GOLDENROD CITY\n"
	.string "is quite the landmark.\p"
	.string "They're running a campaign now.\p"
	.string "They'll give you a shiny new\n"
	.string "RADIO if you can pass their quiz.$"

GoldenrodCity_Text_CooltrainerF2_GotCard:
	.string "Oh, your POKéGEAR already works\n"
	.string "as a radio!$"

GoldenrodCity_Text_Youngster2:
	.string "E-he-he-he…\p"
	.string "I got in trouble for playing in\n"
	.string "the DEPT.STORE basement.$"

GoldenrodCity_Text_Lass:
	.string "That man inside rates your\n"
	.string "POKéMON nicknames.\p"
	.string "He can even rename them.$"

GoldenrodCity_Text_Gramps:
	.string "Whew! This town is so big,\n"
	.string "I can't find anything at all.$"

GoldenrodCity_Text_RocketScout1:
	.string "So this is the RADIO TOWER…$"

GoldenrodCity_Text_RocketScout2:
	.string "What do you want, pest?\n"
	.string "Scram already!$"

GoldenrodCity_Text_Rocket1:
	.string "Stay out of the way!\n"
	.string "Beat it, kid!$"

GoldenrodCity_Text_Rocket2:
	.string "Take over the RADIO TOWER…\p"
	.string "What? It's none of your business!$"

GoldenrodCity_Text_Rocket3:
	.string "POKéMON? They're just tools\n"
	.string "we use to make money!$"

GoldenrodCity_Text_Rocket4:
	.string "Our dream will soon come true…\p"
	.string "It was a long, hard struggle…$"

GoldenrodCity_Text_Rocket5:
	.string "Hey, brat! You don't belong here!\n"
	.string "Get lost already!$"

GoldenrodCity_Text_Rocket6:
	.string "Come and taste the terror of\n"
	.string "TEAM ROCKET!$"

GoldenrodCity_Text_StationSign:
	.string "GOLDENROD CITY STATION$"

GoldenrodCity_Text_RadioTowerSign:
	.string "GOLDENROD CITY RADIO TOWER$"

GoldenrodCity_Text_DeptStoreSign:
	.string "Full Selection of POKéMON Goods!\p"
	.string "GOLDENROD CITY DEPT.STORE$"

GoldenrodCity_Text_GymSign:
	.string "GOLDENROD CITY POKéMON GYM\n"
	.string "LEADER: WHITNEY\p"
	.string "The Incredibly Pretty Girl!$"

GoldenrodCity_Text_CitySign:
	.string "GOLDENROD CITY\p"
	.string "The Festive City of Opulent Charm$"

GoldenrodCity_Text_BikeShopSign:
	.string "The World is a Cycle Path!\n"
	.string "BIKE SHOP$"

GoldenrodCity_Text_GameCornerSign:
	.string "Your Playground!\p"
	.string "GOLDENROD CITY GAME CORNER$"

GoldenrodCity_Text_NameRaterSign:
	.string "NAME RATER\p"
	.string "Get Your POKéMON Nicknames Rated$"

GoldenrodCity_Text_UndergroundNorthSign:
	.string "UNDERGROUND ENTRANCE$"

GoldenrodCity_Text_UndergroundSouthSign:
	.string "UNDERGROUND ENTRANCE$"


GoldenrodCity_Text_FlowerShopSign:
	.string "Blooming Beautiful FLOWER SHOP$"

GoldenrodCity_Text_MoveTutorAsk:
	.string "I can teach your POKéMON some\n"
	.string "amazing moves!\p"
	.string "Should I teach one?$"

GoldenrodCity_Text_MoveTutorCost:
	.string "It'll cost you 1000 coins.\n"
	.string "Okay?$"

GoldenrodCity_Text_MoveTutorDecline:
	.string "Aww… But these moves are great!$"

GoldenrodCity_Text_MoveTutorWhich:
	.string "Wahahah! You won't regret it!\p"
	.string "Which move should I teach?$"

GoldenrodCity_Text_MoveTutorNoCash:
	.string "Too bad. Guess I'll need to\n"
	.string "get some cash from home…$"

GoldenrodCity_Text_MoveTutorUnderstand:
	.string "If you understand this move,\n"
	.string "you've made it as a trainer.$"

GoldenrodCity_Text_MoveTutorFarewell:
	.string "Wahahah! Farewell, kid!$"

GoldenrodCity_Text_MoveTutorBut:
	.string "B-but…$"

GoldenrodCity_Text_MoveTutorNotEnoughCoins:
	.string "…You don't have enough coins…$"

GoldenrodCity_EventScript_GameCornerGuard::
	lock
	faceplayer 
	goto_if_set FLAG_GOT_HAX_ITEMS, GoldenrodCity_EventScript_GameCornerGuardGiven
	msgbox GoldenrodCity_Text_GameCornerGuardItemLove, MSGBOX_DEFAULT
	giveitem ITEM_FOCUS_BAND 
	giveitem ITEM_QUICK_CLAW
	giveitem ITEM_BRIGHT_POWDER
	giveitem ITEM_SCOPE_LENS
	giveitem ITEM_FAULTY_SHIELD
	setflag FLAG_GOT_HAX_ITEMS
	goto GoldenrodCity_EventScript_GameCornerGuardGiven

GoldenrodCity_EventScript_GameCornerGuardGiven::
	msgbox GoldenrodCity_Text_GameCornerGuardGiven, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_GameCornerGuardItemLove:
	.string "Whoa, kid. You're way too young to go in\n"
	.string "here.\p"
	.string "As a responsible adult, it's my duty to\n"
	.string "instead give you a gambling alternative\l"
	.string "to develop your addiciton now, so that\l"
	.string "you're ready to take on the slots when\l"
	.string "you're older.\p"
	.string "Here, take these.$"

GoldenrodCity_Text_GameCornerGuardGiven:
	.string "Isn't gambling in POKéMON battles fun?\p"
	.string "Just remember, if someone else loses,\n"
	.string "it's because they're bad.\p"
	.string "If you lose, it's because you're\n"
	.string "unlucky! What can you do, eh?$"







@PUNCH TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

GoldenrodCity_EventScript_Hitmonchan::
	lock
	faceplayer
	playmoncry SPECIES_HITMONCHAN, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Hitmonchan, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_HITMONCHAN, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

GoldenrodCity_Text_Hitmonchan:
	.string "Hitmonchan: PowPowwwww!$"

GoldenrodCity_EventScript_PunchTutor::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_PunchTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_EventScript_PunchTutorDeclined
	msgbox GoldenrodCity_Text_PunchTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_PUNCH_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, GoldenrodCity_EventScript_PunchTutorThunderPunch
	case 1, GoldenrodCity_EventScript_PunchTutorFirePunch
	case 2, GoldenrodCity_EventScript_PunchTutorIcePunch
	case 3, GoldenrodCity_EventScript_PunchTutorBrickBreak
	case 4, GoldenrodCity_EventScript_PunchTutorPoisonJab
	case 5, GoldenrodCity_EventScript_PunchTutorShadowPunch
	case 6, GoldenrodCity_EventScript_PunchTutorDeclined
	case MULTI_B_PRESSED, GoldenrodCity_EventScript_PunchTutorDeclined
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@TEMPLATE
@GoldenrodCity_EventScript_Tutor::
@	msgbox GoldenrodCity_Text_TutorWhichMon, MSGBOX_DEFAULT
@	setvar VAR_0x8005, MOVE_
@	call MoveTutor_EventScript_OpenPartyMenu
@	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_TutorDeclined
@	applymovement LOCALID_GOLDENROD_CITY_TUTOR, Common_Movement_FaceRight
@	msgbox GoldenrodCity_Text_TutorTeachingMove, MSGBOX_DEFAULT
@	closemessage
@	applymovement LOCALID_GOLDENROD_CITY_TUTOR, Common_Movement_FacePlayer
@	getplayerxy VAR_TEMP_0, VAR_TEMP_1
@	call_if_eq VAR_TEMP_1, 9, GoldenrodCity_EventScript_TutorTeachPlayerBelow
@	call_if_eq VAR_TEMP_1, 8, GoldenrodCity_EventScript_TutorTeachPlayerLeft
@	goto_if_set FLAG_TALKED_GOLDENROD__TUTOR, GoldenrodCity_EventScript_TutorFriend
@	msgbox GoldenrodCity_Text_TutorMoveTaught, MSGBOX_DEFAULT
@	setflag FLAG_TALKED_GOLDENROD__TUTOR
@	closemessage
@	release
@	end
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


GoldenrodCity_EventScript_PunchTutorThunderPunch::
	msgbox GoldenrodCity_Text_PunchTutorThunderPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_PunchTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_PunchTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR, GoldenrodCity_EventScript_PunchTutorFriend
	msgbox GoldenrodCity_Text_PunchTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorFirePunch::
	msgbox GoldenrodCity_Text_PunchTutorFirePunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_PunchTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_PunchTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR, GoldenrodCity_EventScript_PunchTutorFriend
	msgbox GoldenrodCity_Text_PunchTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorIcePunch::
	msgbox GoldenrodCity_Text_PunchTutorIcePunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_PunchTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_PunchTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR, GoldenrodCity_EventScript_PunchTutorFriend
	msgbox GoldenrodCity_Text_PunchTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorBrickBreak::
	msgbox GoldenrodCity_Text_PunchTutorBrickBreakWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BRICK_BREAK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_PunchTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_PunchTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR, GoldenrodCity_EventScript_PunchTutorFriend
	msgbox GoldenrodCity_Text_PunchTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorPoisonJab::
	msgbox GoldenrodCity_Text_PunchTutorPoisonJabWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_POISON_JAB
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_PunchTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_PunchTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR, GoldenrodCity_EventScript_PunchTutorFriend
	msgbox GoldenrodCity_Text_PunchTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorShadowPunch::
	msgbox GoldenrodCity_Text_PunchTutorShadowPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SHADOW_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_PunchTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_PunchTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_PUNCHTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR, GoldenrodCity_EventScript_PunchTutorFriend
	msgbox GoldenrodCity_Text_PunchTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_PUNCH_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorFriend::
	msgbox GoldenrodCity_Text_PunchTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_PunchTutorTeachPlayerBelow::
	applymovement LOCALID_GOLDENROD_CITY_HITMONCHAN, GoldenrodCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_HITMONCHAN, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_HITMONCHAN, GoldenrodCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

GoldenrodCity_Movement_TeachPlayerBelow1::
	walk_down
	face_left
	step_end

GoldenrodCity_Movement_TeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	walk_up
	face_down
	step_end

GoldenrodCity_EventScript_PunchTutorTeachPlayerLeft::
	applymovement LOCALID_GOLDENROD_CITY_HITMONCHAN, GoldenrodCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_HITMONCHAN, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_HITMONCHAN, GoldenrodCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

GoldenrodCity_Movement_TeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

GoldenrodCity_Movement_TeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	walk_right
	walk_right
	walk_up
	face_down
	step_end

GoldenrodCity_EventScript_PunchTutorDeclined::
	msgbox GoldenrodCity_Text_PunchTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_PunchTutorDeclined::
	.string "Hmph! What, are you going to fight your\n"
	.string "enemies with your feet like a WUSS?\p"
	.string "I'll be here training my fists for when\n"
	.string "you see the error of your ways!$"

GoldenrodCity_Text_PunchTutorLetMeTeach:
	.string "HIYAH!\p"
	.string "That's the sound your hands make when\n"
	.string "striking down your enemies -\l"
	.string "with the proper technique, of course.\p"
	.string "I can teach your POKéMON how to punch,\n"
	.string "jab and chop their way to the top.\p"
	.string "Come on! What are we waiting for? Let's\n"
	.string "start training now!$"

GoldenrodCity_Text_PunchTutorWhichMove:
	.string "Alright! What exercise are we gonna\n"
	.string "warm up with?$"

GoldenrodCity_Text_PunchTutorThunderPunchWhichMon:
	.string "The power of Thunder Punch! Who's\n"
	.string "stepping into the arena?$"

GoldenrodCity_Text_PunchTutorFirePunchWhichMon:
	.string "The power of Fire Punch! Who's\n"
	.string "stepping into the arena?$"

GoldenrodCity_Text_PunchTutorIcePunchWhichMon:
	.string "The power of Ice Punch! Who's\n"
	.string "stepping into the arena?$"

GoldenrodCity_Text_PunchTutorBrickBreakWhichMon:
	.string "The power of Brick Break! Who's\n"
	.string "stepping into the arena?$"

GoldenrodCity_Text_PunchTutorPoisonJabWhichMon:
	.string "The power of Poison Jab! Who's\n"
	.string "stepping into the arena?$"

GoldenrodCity_Text_PunchTutorShadowPunchWhichMon:
	.string "The power of Shadow Punch! Who's\n"
	.string "stepping into the arena?$"				

GoldenrodCity_Text_PunchTutorTeachingMove:
	.string "Hitmonchan! Get into the ring and show\n"
	.string "our friend here how to throw down!$"

GoldenrodCity_Text_PunchTutorMoveTaught:
	.string "Heh, your POKéMON aren't bad!\p"
	.string "With your training complete, you should\n"
	.string "be able to use that move anytime.\p"
	.string "I eagerly await our next sparring\n"
	.string "session! You keep at it until then!$"

GoldenrodCity_Text_PunchTutorFriend:
	.string "Another technique succesfully\n"
	.string "mastered!\p"
	.string "One of these days, you'll be teaching me\n"
	.string "some new moves, HOO HAH!$"







@SPEED DROP TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

GoldenrodCity_EventScript_Accelgor::
	lock
	faceplayer
	playmoncry SPECIES_ACCELGOR, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Accelgor, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_ACCELGOR, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

GoldenrodCity_Text_Accelgor:
	.string "Accelgor: Vraaaoooo!$"

GoldenrodCity_EventScript_SpeedDropTutor::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_SpeedDropTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	msgbox GoldenrodCity_Text_SpeedDropTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_SPEED_DROP_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, GoldenrodCity_EventScript_SpeedDropTutorIcyWind
	case 1, GoldenrodCity_EventScript_SpeedDropTutorElectroweb
	case 2, GoldenrodCity_EventScript_SpeedDropTutorRockTomb
	case 3, GoldenrodCity_EventScript_SpeedDropTutorLowSweep
	case 4, GoldenrodCity_EventScript_SpeedDropTutorMudShot
	case 5, GoldenrodCity_EventScript_SpeedDropTutorPounce
	case 6, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	case MULTI_B_PRESSED, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	end

GoldenrodCity_EventScript_SpeedDropTutorIcyWind::
	msgbox GoldenrodCity_Text_SpeedDropTutorIcyWindWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ICY_WIND
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_SpeedDropTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR, GoldenrodCity_EventScript_SpeedDropTutorFriend
	msgbox GoldenrodCity_Text_SpeedDropTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorElectroweb::
	msgbox GoldenrodCity_Text_SpeedDropTutorElectrowebWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ELECTROWEB
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_SpeedDropTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR, GoldenrodCity_EventScript_SpeedDropTutorFriend
	msgbox GoldenrodCity_Text_SpeedDropTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorRockTomb::
	msgbox GoldenrodCity_Text_SpeedDropTutorRockTombWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROCK_TOMB
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_SpeedDropTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR, GoldenrodCity_EventScript_SpeedDropTutorFriend
	msgbox GoldenrodCity_Text_SpeedDropTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorLowSweep::
	msgbox GoldenrodCity_Text_SpeedDropTutorLowSweepWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_LOW_SWEEP
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_SpeedDropTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR, GoldenrodCity_EventScript_SpeedDropTutorFriend
	msgbox GoldenrodCity_Text_SpeedDropTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorMudShot::
	msgbox GoldenrodCity_Text_SpeedDropTutorMudShotWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MUD_SHOT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_SpeedDropTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR, GoldenrodCity_EventScript_SpeedDropTutorFriend
	msgbox GoldenrodCity_Text_SpeedDropTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorPounce::
	msgbox GoldenrodCity_Text_SpeedDropTutorPounceWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_POUNCE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_SpeedDropTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_SpeedDropTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 21, GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR, GoldenrodCity_EventScript_SpeedDropTutorFriend
	msgbox GoldenrodCity_Text_SpeedDropTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_SPEED_DROP_TUTOR
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorFriend::
	msgbox GoldenrodCity_Text_SpeedDropTutorFriend, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	release
	end

GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerBelow::
	applymovement LOCALID_GOLDENROD_CITY_ACCELGOR, GoldenrodCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_ACCELGOR, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_ACCELGOR, GoldenrodCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

GoldenrodCity_EventScript_SpeedDropTutorTeachPlayerLeft::
	applymovement LOCALID_GOLDENROD_CITY_ACCELGOR, GoldenrodCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_ACCELGOR, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_ACCELGOR, GoldenrodCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

GoldenrodCity_EventScript_SpeedDropTutorDeclined::
	msgbox GoldenrodCity_Text_SpeedDropTutorDeclined, MSGBOX_DEFAULT
	applymovement LOCALID_GOLDENROD_CITY_SPEEDDROPTUTOR, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

GoldenrodCity_Text_SpeedDropTutorDeclined::
	.string "You've been reading too much into the\n"
	.string "tortoise and the hare, haven't you?\p"
	.string "Don't think I'm going to wait around\n"
	.string "forever just for you to catch up!$"

GoldenrodCity_Text_SpeedDropTutorLetMeTeach:
	.string "Speed is everything in battles!\p"
	.string "Sometimes, everything is decided by the\n"
	.string "first strike.\p"
	.string "But even if you weren't born the\n"
	.string "fastest, there are moves you can use\l"
	.string "to gain that edge over your opponent.\p"
	.string "So, are you interested in slowing down\n"
	.string "the pace of your enemies?$"

GoldenrodCity_Text_SpeedDropTutorWhichMove:
	.string "Good answer! Now, which move will you\n"
	.string "use to pin down those speedsters with?$"

GoldenrodCity_Text_SpeedDropTutorIcyWindWhichMon:
	.string "Icy Wind it is! And who's going to\n"
	.string "learn the move?$"

GoldenrodCity_Text_SpeedDropTutorElectrowebWhichMon:
	.string "Electroweb it is! And who's going to\n"
	.string "learn the move?$"

GoldenrodCity_Text_SpeedDropTutorRockTombWhichMon:
	.string "Rock Tomb it is! And who's going to\n"
	.string "learn the move?$"

GoldenrodCity_Text_SpeedDropTutorLowSweepWhichMon:
	.string "Low Sweep it is! And who's going to\n"
	.string "learn the move?$"

GoldenrodCity_Text_SpeedDropTutorMudShotWhichMon:
	.string "Mud Shot it is! And who's going to\n"
	.string "learn the move?$"

GoldenrodCity_Text_SpeedDropTutorPounceWhichMon:
	.string "Pounce it is! And who's going to\n"
	.string "learn the move?$"				

GoldenrodCity_Text_SpeedDropTutorTeachingMove:
	.string "Let's do it. Accelgor, give us a\n"
	.string "demonstration, if you please!$"

GoldenrodCity_Text_SpeedDropTutorMoveTaught:
	.string "And that's all there is to it.\p"
	.string "If you're ever having trouble pinning\n"
	.string "down a swift opponent, you just leave\l"
	.string "it to me, got it?$"

GoldenrodCity_Text_SpeedDropTutorFriend:
	.string "You and your POKéMON learn pretty\n"
	.string "fast, you know that?\p"
	.string "If your POKéMON moved as fast as they\n"
	.string "learned, you probably wouldn't need my\l"
	.string "techniques at all!$"










@NEVER MISS TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

GoldenrodCity_EventScript_Porygon2::
	lock
	faceplayer
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Porygon2, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_PORYGON2, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

GoldenrodCity_Text_Porygon2:
	.string "Porygon2: Boooodobidiboo!$"

GoldenrodCity_EventScript_NeverMissTutor::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_NeverMissTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_EventScript_NeverMissTutorDeclined
	msgbox GoldenrodCity_Text_NeverMissTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_NEVER_MISS_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, GoldenrodCity_EventScript_NeverMissTutorFeintAttack
	case 1, GoldenrodCity_EventScript_NeverMissTutorAuraSphere
	case 2, GoldenrodCity_EventScript_NeverMissTutorAerialAce
	case 3, GoldenrodCity_EventScript_NeverMissTutorShockWave
	case 4, GoldenrodCity_EventScript_NeverMissTutorMagicalLeaf
	case 5, GoldenrodCity_EventScript_NeverMissTutorSmartStrike
	case 6, GoldenrodCity_EventScript_NeverMissTutorSwift
	case 7, GoldenrodCity_EventScript_NeverMissTutorMagnetBomb
	case 8, GoldenrodCity_EventScript_NeverMissTutorOdorSleuth
	case 9, GoldenrodCity_EventScript_NeverMissTutorForesight
	case 10, GoldenrodCity_EventScript_NeverMissTutorMiracleEye
	case 11, GoldenrodCity_EventScript_NeverMissTutorSweetScent
	case 12, GoldenrodCity_EventScript_NeverMissTutorLockOn
	case 13, GoldenrodCity_EventScript_NeverMissTutorDeclined
	case MULTI_B_PRESSED, GoldenrodCity_EventScript_NeverMissTutorDeclined
	end

GoldenrodCity_EventScript_NeverMissTutorFeintAttack::
	msgbox GoldenrodCity_Text_NeverMissTutorFeintAttackWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FEINT_ATTACK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorAuraSphere::
	msgbox GoldenrodCity_Text_NeverMissTutorAuraSphereWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_AURA_SPHERE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorAerialAce::
	msgbox GoldenrodCity_Text_NeverMissTutorAerialAceWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_AERIAL_ACE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorShockWave::
	msgbox GoldenrodCity_Text_NeverMissTutorShockWaveWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorMagicalLeaf::
	msgbox GoldenrodCity_Text_NeverMissTutorMagicalLeafWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorSmartStrike::
	msgbox GoldenrodCity_Text_NeverMissTutorSmartStrikeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SMART_STRIKE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorSwift::
	msgbox GoldenrodCity_Text_NeverMissTutorSwiftWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWIFT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorMagnetBomb::
	msgbox GoldenrodCity_Text_NeverMissTutorMagnetBombWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MAGNET_BOMB
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorOdorSleuth::
	msgbox GoldenrodCity_Text_NeverMissTutorOdorSleuthWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ODOR_SLEUTH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorForesight::
	msgbox GoldenrodCity_Text_NeverMissTutorForesightWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FORESIGHT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorMiracleEye::
	msgbox GoldenrodCity_Text_NeverMissTutorMiracleEyeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MIRACLE_EYE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorSweetScent::
	msgbox GoldenrodCity_Text_NeverMissTutorSweetScentWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWEET_SCENT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorLockOn::
	msgbox GoldenrodCity_Text_NeverMissTutorLockOnWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_LOCK_ON
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_NeverMissTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_NeverMissTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_NEVERMISSTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 13, GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR, GoldenrodCity_EventScript_NeverMissTutorFriend
	msgbox GoldenrodCity_Text_NeverMissTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_NEVER_MISS_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorFriend::
	msgbox GoldenrodCity_Text_NeverMissTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_NeverMissTutorTeachPlayerBelow::
	applymovement LOCALID_GOLDENROD_CITY_PORYGON2, GoldenrodCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_PORYGON2, GoldenrodCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

GoldenrodCity_EventScript_NeverMissTutorTeachPlayerLeft::
	applymovement LOCALID_GOLDENROD_CITY_PORYGON2, GoldenrodCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_PORYGON2, GoldenrodCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

GoldenrodCity_EventScript_NeverMissTutorDeclined::
	msgbox GoldenrodCity_Text_NeverMissTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_NeverMissTutorDeclined::
	.string "I see. It seems that I miscalculated.\p"
	.string "Clearly you aren't as invested in\n"
	.string "POKéMON battles as I thought if you're\l"
	.string "willing to make such reckless decisions.$"

GoldenrodCity_Text_NeverMissTutorLetMeTeach:
	.string "I don't deal in if's and maybe's.\p"
	.string "POKéMON battles are a science.\p"
	.string "If a move isn't guaranteed to hit, then\n"
	.string "it may as well be guaranteed to miss.\p"
	.string "I can make sure every move you make is\n"
	.string "fully accurate. How about it?$"

GoldenrodCity_Text_NeverMissTutorWhichMove:
	.string "Just as I predicted. Let us proceed to\n"
	.string "testing the theory at once, shall we?$"

GoldenrodCity_Text_NeverMissTutorFeintAttackWhichMon:
	.string "Feint Attack. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorAuraSphereWhichMon:
	.string "Aura Sphere. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorAerialAceWhichMon:
	.string "Aerial Ace. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorShockWaveWhichMon:
	.string "Shock Wave. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorMagicalLeafWhichMon:
	.string "Magical Leaf. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorSmartStrikeWhichMon:
	.string "Smart Strike. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorSwiftWhichMon:
	.string "Swift. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorMagnetBombWhichMon:
	.string "Magnet Bomb. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorOdorSleuthWhichMon:
	.string "Odor Sleuth. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorForesightWhichMon:
	.string "Foresight. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorMiracleEyeWhichMon:
	.string "Miracle Eye. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorSweetScentWhichMon:
	.string "Sweet Scent. And which POKéMON will be\n"
	.string "participating in our experiment?$"			

GoldenrodCity_Text_NeverMissTutorLockOnWhichMon:
	.string "Lock-On. And which POKéMON will be\n"
	.string "participating in our experiment?$"	

GoldenrodCity_Text_NeverMissTutorTeachingMove:
	.string "Now then, Porygon2. Let us see if our\n"
	.string "hypothesis is correct.$"

GoldenrodCity_Text_NeverMissTutorMoveTaught:
	.string "The process was a complete success.\p"
	.string "This puts you one step ahead of your\n"
	.string "next opponent. $"

GoldenrodCity_Text_NeverMissTutorFriend:
	.string "Dare we call this an experiement\n"
	.string "if we both knew it would\l"
	.string "succeed from the start?\p"
	.string "I'd say you were fortunate, but this is\n"
	.string "the result of careful planning.$"










@FANG TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

GoldenrodCity_EventScript_Feraligatr::
	lock
	faceplayer
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Feraligatr, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_FERALIGATR, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

GoldenrodCity_Text_Feraligatr:
	.string "Feraligatr: BaRawr!$"

GoldenrodCity_EventScript_FangTutor::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_FangTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_EventScript_FangTutorDeclined
	msgbox GoldenrodCity_Text_FangTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_FANG_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, GoldenrodCity_EventScript_FangTutorThunderFang
	case 1, GoldenrodCity_EventScript_FangTutorFireFang
	case 2, GoldenrodCity_EventScript_FangTutorIceFang
	case 3, GoldenrodCity_EventScript_FangTutorCrunch
	case 4, GoldenrodCity_EventScript_FangTutorHyperFang
	case 5, GoldenrodCity_EventScript_FangTutorPoisonFang
	case 6, GoldenrodCity_EventScript_FangTutorPsychicFangs
	case MULTI_B_PRESSED, GoldenrodCity_EventScript_NeverMissTutorDeclined
	end

GoldenrodCity_EventScript_FangTutorThunderFang::
	msgbox GoldenrodCity_Text_FangTutorThunderFangWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end


GoldenrodCity_EventScript_FangTutorFireFang::
	msgbox GoldenrodCity_Text_FangTutorFireFangWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FIRE_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorIceFang::
	msgbox GoldenrodCity_Text_FangTutorIceFangWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ICE_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorCrunch::
	msgbox GoldenrodCity_Text_FangTutorCrunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_CRUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorHyperFang::
	msgbox GoldenrodCity_Text_FangTutorHyperFangWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HYPER_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorPoisonFang::
	msgbox GoldenrodCity_Text_FangTutorPoisonFangWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_POISON_FANG
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorPsychicFangs::
	msgbox GoldenrodCity_Text_FangTutorPsychicFangsWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_EventScript_FangTutorDeclined
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FaceRight
	msgbox GoldenrodCity_Text_FangTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_FANGTUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 23, GoldenrodCity_EventScript_FangTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 22, GoldenrodCity_EventScript_FangTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR, GoldenrodCity_EventScript_FangTutorFriend
	msgbox GoldenrodCity_Text_FangTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_GOLDENROD_CITY_FANG_TUTOR
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorFriend::
	msgbox GoldenrodCity_Text_FangTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_FangTutorTeachPlayerBelow::
	applymovement LOCALID_GOLDENROD_CITY_FERALIGATR, GoldenrodCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_FERALIGATR, GoldenrodCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

GoldenrodCity_EventScript_FangTutorTeachPlayerLeft::
	applymovement LOCALID_GOLDENROD_CITY_FERALIGATR, GoldenrodCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_GOLDENROD_CITY_FERALIGATR, GoldenrodCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

GoldenrodCity_EventScript_FangTutorDeclined::
	msgbox GoldenrodCity_Text_FangTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_FangTutorDeclined::
	.string "Aww...$"

GoldenrodCity_Text_FangTutorLetMeTeach:
	.string "Me bite things.\n"
	.string "You bite things too?$"

GoldenrodCity_Text_FangTutorWhichMove:
	.string "Mmm! Biting good!\n"
	.string "How you want bite?$"

GoldenrodCity_Text_FangTutorThunderFangWhichMon:
	.string "Uh-huh. Who want learn Thunder Fang?$"			

GoldenrodCity_Text_FangTutorFireFangWhichMon:
	.string "Uh-huh. Who want learn Fire Fang?$"	

GoldenrodCity_Text_FangTutorIceFangWhichMon:
	.string "Uh-huh. Who want learn Ice Fang?$"	

GoldenrodCity_Text_FangTutorCrunchWhichMon:
	.string "Uh-huh. Who want learn Crunch?$"	

GoldenrodCity_Text_FangTutorHyperFangWhichMon:
	.string "Uh-huh. Who want learn HyperFang?$"	

GoldenrodCity_Text_FangTutorPoisonFangWhichMon:
	.string "Uh-huh. Who want learn Poison Fang?$"	

GoldenrodCity_Text_FangTutorPsychicFangsWhichMon:
	.string "Uh-huh. Who want learn Psychic Fangs?$"

GoldenrodCity_Text_FangTutorTeachingMove:
	.string "Feraligatr! Show how bite good!$"

GoldenrodCity_Text_FangTutorMoveTaught:
	.string "Hmm hmm. Good bite.$"

GoldenrodCity_Text_FangTutorFriend:
	.string "Hmm! Great bite!$"

GoldenrodCity_EventScript_Giovanni::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_GOLDENROD_CITY_GIOVANNI, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_GOLDENROD_CITY_GIOVANNI, GoldenrodCity_Movement_GiovanniApproach
	waitmovement 0
	msgbox GoldenrodCity_Text_GiovanniMeetPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_GIOVANNI, Common_Movement_FaceDown
	delay 90
	applymovement LOCALID_GOLDENROD_CITY_GIOVANNI, Common_Movement_FaceLeft
	waitmovement 0
	msgbox GoldenrodCity_Text_GiovanniGiveBasementKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
	msgbox GoldenrodCity_Text_GiovanniGoodLuck, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GOLDENROD_CITY_GIOVANNI, GoldenrodCity_Movement_GiovanniLeave
	waitmovement 0
	setvar VAR_GOLDENROD_SILVER_STATE, 4
	setflag FLAG_HIDE_GOLDENROD_GIOVANNI
	removeobject LOCALID_GOLDENROD_CITY_GIOVANNI
	release
	end

GoldenrodCity_Movement_GiovanniApproach::
	walk_left
	walk_left
	walk_left
	step_end

GoldenrodCity_Movement_GiovanniLeave::
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GoldenrodCity_Text_GiovanniMeetPlayer:
	.string "Psst.\p"
	.string "Hey, kid.\p"
	.string "You wouldn't happen to know of a weasly\n"
	.string "looking guy who's going around\l"
	.string "impersonating people, would you?\p"
	.string "Impersonating myself, to be more\n"
	.string "specific.\p"
	.string "...\p"
	.string "You just battled a guy like that?\p"
	.string "Then you must be trying to stop TEAM\n"
	.string "ROCKET.\p"
	.string "Then I'm afraid you leave me with no\n"
	.string "other option.\p"
	.string "I, GIOVANNI, the BOSS of TEAM ROCKET,\n"
	.string "will have to...$"

GoldenrodCity_Text_GiovanniGiveBasementKey:
	.string "GIOVANNI: Ask for your help, of course!\p"
	.string "Fwahahahaha! Did you expect something\n"
	.string "else?\p"
	.string "Sorry, but my days as a criminal\n"
	.string "mastermind have long since passed.\p"
	.string "Which brings us to the crux of the\n"
	.string "matter.\p"
	.string "Not only is that complete buffoon\n"
	.string "PETREL still going around disguised as\l"
	.string "me, the rest of TEAM ROCKET can't seem\l"
	.string "to accept that I've moved on either.\p"
	.string "I knew they relied on me, but I never\n"
	.string "suspected that they would all be so\l"
	.string "aimless without my guidance.\p"
	.string "It's no wonder that TEAM ROCKET has\n"
	.string "become a shell of its former self.\p"
	.string "Regardless, this is the part where you\n"
	.string "come in.\p"
	.string "I'd expected to see a different kid\n"
	.string "here from the way the TEAM ROCKET\l"
	.string "GRUNTS were whispering about your\l"
	.string "infiltration of the RADIO TOWER, but it\l"
	.string "sounds like you're just as exceptional\l"
	.string "as the one I knew from way back when.\p"
	.string "Since I'm asking you to do my dirty\n"
	.string "work, it's only fair I help you out.\p"
	.string "Here. This should give you access to\n"
	.string "the underground where they've stashed\l"
	.string "away the DIRECTOR.$"

GoldenrodCity_Text_GiovanniGoodLuck:
	.string "Well, best of luck, kid.\p"
	.string "If you're capable of taking down TEAM\n"
	.string "ROCKET, then this probably won't be the\l"
	.string "last we see of each other.\p"
	.string "Give 'em hell for me, yeah?$"

