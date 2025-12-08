.set LOCALID_GOLDENROD_ROCKET_SCOUT, 10
.set LOCALID_GOLDENROD_CITY_SILVER, 34
.set LOCALID_GOLDENROD_CITY_LITTLEGIRL, 35
.set LOCALID_GOLDENROD_CITY_AZURILL, 36
.set LOCALID_GOLDENROD_CITY_GAMECORNERGUARD, 37

GoldenrodCity_hns_MapScripts::
	.byte 0
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodCity_OnFrame

GoldenrodCity_EventScript_MoveGameCornerGuard::
	setobjectxyperm LOCALID_GOLDENROD_CITY_GAMECORNERGUARD, 28, 30
	end

GoldenrodCity_OnFrame::
	goto_if_eq VAR_GOLDENROD_SILVER_STATE, 1, GoldenrodCity_MapScript_Hide_Silver
	end

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

