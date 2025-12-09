.set LOCALID_MAHOGANY_MERCHANT, 3
.set LOCALID_MAHOGANY_DARACH, 10
.set LOCALID_MAHOGANY_CAITLIN, 11
.set LOCALID_MAHOGANY_CAITLIN_POKEMON, 12

Mahoganytown_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Mahoganytown_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Mahoganytown_OnFrame
	.byte 0

Mahoganytown_OnLoad::
	call_if_ge VAR_MAHOGANY_TOWN_STATE, 13, MahoganyTown_EventScript_FixTree
	end

MahoganyTown_EventScript_FixTree::
	setmetatile 18, 8, 0x378, FALSE
	setmetatile 19, 8, 0x379, FALSE
	end

Mahoganytown_OnFrame::
	map_script_2 VAR_SAFARI_ZONE_GATE_STATE, 1, Mahoganytown_EventScript_SafariZoneTrigger
	.2byte 0

Mahoganytown_EventScript_SafariZoneTrigger::
	lock
	pokenavcall MahoganyTown_Text_Baoba
	waitmessage
	delay 30
	setvar VAR_SAFARI_ZONE_GATE_STATE, 2
	release
	end

MahoganyTown_EventScript_TownTrigger::
	clearflag FLAG_HIDE_LAKE_OF_RAGE_GYARADOS
	clearflag FLAG_HIDE_MAHOGANY_TOWN_FATMAN
	clearflag FLAG_HIDE_MAHOGANY_ROCKETS
	clearflag FLAG_GOT_TM_FROM_MAHOGANY_COP
	clearflag FLAG_GOT_BLACK_BELT
	clearflag FLAG_ROCKETHIDEOUT_SWITCH
	clearflag FLAG_HIDE_ROCKETHIDEOUT2_LANCE_DRAGONITE
	clearflag FLAG_HIDE_ROCKETHIDEOUT2_GATE
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_GATE
	clearflag FLAG_GOT_PASSWORD_FROM_ETO
	clearflag FLAG_GOT_PASSWORD_FROM_GRUNTF 
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_MURKROW
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_GIOVANNI
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ELECTRODE1 
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ELECTRODE2
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ELECTRODE3 
	clearflag FLAG_GOT_HIDDEN_POWER
	clearflag FLAG_HIDE_ICE_PATH_KIMONO
	clearflag FLAG_HIDE_CLIFF_EDGE_GATE_ENGINEERS

	setflag FLAG_VISITED_MAHOGANY_TOWN
	setflag FLAG_HIDE_LAKE_OF_RAGE_LANCE
	setflag FLAG_HIDE_MAHOGANY_TOWN_SHOP_NPCS
	setflag FLAG_HIDE_MAHOGANY_COP
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	setflag FLAG_HIDE_ROCKETHIDEOUT3_SILVER
	setflag FLAG_HIDE_ROCKETHIDEOUT3_PETREL
	setflag FLAG_HIDE_ROCKETHIDEOUT2_MURKROWSTAIRS
	setflag FLAG_HIDE_ROCKETHIDEOUT2_MURKROWGATE
	setflag FLAG_HIDE_ROCKETHIDEOUT3_MURKROWSTAIRS
	setflag FLAG_HIDE_ROCKETHIDEOUT2_ARIANA_AND_GRUNT
	setflag FLAG_HIDE_MAHOGANY_TOWN_FRONTIER_NPCS

	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 0
	setvar VAR_ROCKET_PASSWORD, 0
	setvar VAR_ELECTRODES_FAINTED, 0
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 0
	setvar VAR_ICE_PATH_STATE, 0
	setvar VAR_ROUTE27_BAOBA_CALL, 0
	setvar VAR_ALL_B2B_STATE, 1
	setvar VAR_GYM_WEATHER_STATE, 1

	setvar VAR_MAHOGANY_TOWN_STATE, 1

	@blackthorn flagheap
	setvar VAR_BLACKTHORN_CITY_STATE, 1
    setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_SILVER
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_LANCE
	setflag FLAG_HIDE_DRAGONS_DEN_SHRINE_CLAIR
	clearflag FLAG_GOT_SPELL_TAG
	clearflag FLAG_GOT_DRATINI
	setvar VAR_BLACKTHORN_GYM_STATE, 0
	setvar VAR_DRAGONS_DEN_QUIZ, 0
	end

MahoganyTown_EventScript_MerchantTrigger::
	lock
	turnobject LOCALID_MAHOGANY_MERCHANT, DIR_SOUTH
	playse SE_PIN
	applymovement LOCALID_MAHOGANY_MERCHANT, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 14, MahoganyTown_EventScript_WalkUp2
	call_if_eq VAR_TEMP_1, 13, MahoganyTown_EventScript_WalkUp1
	showmoneybox 0, 0
	msgbox MahoganyTown_Text_RageCandyBarMerchantTryOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, MahoganyTown_EventScript_MerchantRefused
	checkmoney 300, 0
	goto_if_eq VAR_RESULT, FALSE, MahoganyTown_EventScript_MerchantBroke
	removemoney 300
	updatemoneybox 0
	playse SE_SHOP
	msgbox MahoganyTown_Text_RageCandyBarMerchantSavorIt, MSGBOX_DEFAULT
	giveitem ITEM_RAGE_CANDY_BAR
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	hidemoneybox
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, MahoganyTown_EventScript_PushPlayer
	release
	end

MahoganyTown_EventScript_WalkUp1::
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Movement_PlayerMerchant1
	waitmovement 0
	return

MahoganyTown_EventScript_WalkUp2::
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Movement_PlayerMerchant2
	waitmovement 0
	return

MahoganyTown_EventScript_Merchant::
	lock
	faceplayer
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 17, MahoganyTown_EventScript_MerchantAfter
	showmoneybox 0, 0
	msgbox MahoganyTown_Text_RageCandyBarMerchantTryOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, MahoganyTown_EventScript_MerchantRefused
	checkmoney 300, 0
	goto_if_eq VAR_RESULT, FALSE, MahoganyTown_EventScript_MerchantBroke
	removemoney 300
	updatemoneybox 0
	msgbox MahoganyTown_Text_RageCandyBarMerchantSavorIt, MSGBOX_DEFAULT
	giveitem ITEM_RAGE_CANDY_BAR
	hidemoneybox
	closemessage
	release
	end

MahoganyTown_EventScript_MerchantRefused::
	msgbox MahoganyTown_Text_RageCandyBarMerchantRefused, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, MahoganyTown_EventScript_PushPlayer
	release
	end

MahoganyTown_EventScript_MerchantBroke::
	msgbox MahoganyTown_Text_RageCandyBarMerchantNotEnoughMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, MahoganyTown_EventScript_PushPlayer
	release
	end

MahoganyTown_EventScript_NotEnoughSpace:
	msgbox MahoganyTown_Text_RageCandyBarMerchantRefused, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, MahoganyTown_EventScript_PushPlayer
	release
	return

MahoganyTown_EventScript_MerchantAfter::
	msgbox MahoganyTown_Text_RageCandyBarMerchantSoldOut, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_PushPlayer::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

MahoganyTown_EventScript_Gramps::
	lock
	faceplayer
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 6, MahoganyTown_EventScript_GrampsAfter
	msgbox MahoganyTown_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_GrampsAfter::
	msgbox MahoganyTown_Text_GrampsClearedRocketHideout, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_Fisher::
	lock
	faceplayer
	msgbox MahoganyTown_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_Lass::
	lock
	faceplayer
	msgbox MahoganyTown_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_Sign::
	lock
	msgbox MahoganyTown_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

MahoganyTown_EventScript_CandybarSign::
	lock
	msgbox MahoganyTown_Text_RagecandybarSign, MSGBOX_SIGN
	closemessage
	release
	end

MahoganyTown_EventScript_GymSign::
	lock
	msgbox MahoganyTown_Text_GymSign, MSGBOX_SIGN
	closemessage
	release
	end

MahoganyTown_Movement_PlayerMerchant1:
	walk_up
	step_end

MahoganyTown_Movement_PlayerMerchant2:
	walk_up
	walk_up
	step_end

MahoganyTown_Text_RageCandyBarMerchantTryOne:
	.string "Hiya, kid!\p"
	.string "I see you're new in MAHOGANY TOWN.\p"
	.string "Since you're new, you should try a\n"
	.string "yummy RAGECANDYBAR!\p"
	.string "Right now, it can be yours for just\n"
	.string "¥300! Want one?$"

MahoganyTown_Text_RageCandyBarMerchantSavorIt:
    .string "Good! Savor it!$"

MahoganyTown_Text_RageCandyBarMerchantNotEnoughMoney:
    .string "You don't have enough money.$"

MahoganyTown_Text_RageCandyBarMerchantRefused:
    .string "Oh, fine then…$"

MahoganyTown_Text_RageCandyBarMerchantSoldOut:
    .string "RAGECANDYBAR's sold out.\p"
    .string "I'm packing up. Don't bother me,\n"
    .string "kiddo.$"

MahoganyTown_Text_Gramps:
    .string "Are you off to see the GYARADOS\n"
    .string "rampage at the LAKE?$"

MahoganyTown_Text_GrampsClearedRocketHideout:
    .string "MAGIKARP have returned to LAKE\n"
    .string "OF RAGE.\p"
    .string "That should be good news for the\n"
    .string "anglers there.$"

MahoganyTown_Text_Fisher:
    .string "Since you came this far, take the\n"
    .string "time to do some sightseeing.\p"
    .string "You should head north and check\n"
    .string "out LAKE OF RAGE right now.$"

MahoganyTown_Text_Lass:
    .string "Visit Grandma's shop. She sells\n"
    .string "stuff that nobody else has.$"

MahoganyTown_Text_Sign:
    .string "MAHOGANY TOWN\p"
    .string "Welcome to the Home of the Ninja$"

MahoganyTown_Text_RagecandybarSign:
    .string "While visiting MAHOGANY TOWN, try\n"
    .string "a RAGECANDYBAR!$"

MahoganyTown_Text_GymSign:
    .string "MAHOGANY TOWN POKéMON GYM\p"
    .string "LEADER: PRYCE\p"
    .string "The Teacher of Winter's Harshness$"

MahoganyTown_Text_Baoba:
	.string "{PLAYER}!\p"
	.string "This is WARDEN BAOBA.\p"
	.string "Sorry to have kept you waiting.\n"
	.string "We've finally opened the\l"
	.string "SAFARI ZONE!\p"
	.string "Do you know where it is?\p"
	.string "You know the GATE inside the cavern\n"
	.string "in CIANWOOD CITY?\p"
	.string "If you go through there and walk for\n"
	.string "a short while, you should soon see\l"
	.string "the SAFARI ZONE!\p"
	.string "We're a little out of the way, but\n"
	.string "please come visit!$"







MahoganyTown_Text_CaitlinPokemonIntro:
	.string "POKEMON: Zig Zag!$"

MahoganyTown_Text_CaitlinIntro:
	.string "CAITLIN: ...$"

MahoganyTown_Text_CaitlinIntroPart2:
	.string "Darach...\p"
	.string "This person is staring at me...$"

MahoganyTown_Text_DarachIntro:
	.string "DARACH: Greetings, fellow trainer.\n"
	.string "My name is DARACH.\p"
	.string "I am fortunate enough to have served\n"
	.string "as the BATTLE CASTLE valet for some time.\p"
	.string "I have heard great tales of your\n"
	.string "battling skill from my dear friend,\l"
	.string "DAHLIA, and hoped you might humble me\l"
	.string "in fulfilling a request of mine.\p"
	.string "You see, Lady Caitlin here has recently\n"
	.string "taken to battling again.\p"
	.string "While I am of the opinion that we would\n"
	.string "be at our strongest working as a team,\l"
	.string "Lady Caitlin believes our styles would\l"
	.string "be too difficult to fit together.\p"
	.string "I therefore hoped you might do us the\n"
	.string "honour of helping us reach a\l"
	.string "conclusion, one way or the other.\p"
	.string "Naturally, you will be compensated for\n"
	.string "your efforts.\p"
	.string "As it is my duty to appease her ladyship\n"
	.string "first and foremost, the reward will be\l"
	.string "more handsome should you choose to\l"
	.string "face us one at a time.$"


MahoganyTown_Text_DarachPostIntro:
	.string "So, what say you, {PLAYER}? How would\n"
	.string "you fight us both in this instance?$"

MahoganyTown_Text_DarachPreBattleNormal:
	.string "A double battle it shall be, then.\n"
	.string "En Garde, {PLAYER}!$"

MahoganyTown_Text_DarachWin:
	.string "Bravo! What an incredible show!$"

MahoganyTown_Text_CaitlinWin:
	.string "...$"

MahoganyTown_Text_DarachNormalGiveNormalReward:
	.string "DARACH: It seems that I was wrong.\p"
	.string "Or...\n"
	.string "No, that isn't right.\p"
	.string "I believe we displayed great strength\n"
	.string "in our teamwork. And yet, your own\l"
	.string "brilliance managed to shine even\l"
	.string "brighter. Remarkable!\p"
	.string "As promised, here is your reward. Don't\n"
	.string "be shy, you have more than earned it.$"

MahoganyTown_Text_DarachLeaving:
	.string "Please, do come and visit us at the\n"
	.string "BATTLE CASTLE whenever you can.\p"
	.string "Lady Caitlin seems quite taken with\n"
	.string "your fighting style. I'm sure she would\l"
	.string "appreciate seeing it once more.$"

MahoganyTown_Text_CaitlinLeaving:
	.string "CAITLIN: See you, {PLAYER}...\n"
	.string "Let us battle again someday.$"

MahoganyTown_Text_DarachPreBattleHard:
	.string "Two single battles it shall be, then.\n"
	.string "You'll be fighting me first.\p"
	.string "En Garde, {PLAYER}!$"

MahoganyTown_Text_DarachHardAfter:
	.string "DARACH: A fantastic battle. Let us see\n"
	.string "if you can maintain that valiant spirit.$"

MahoganyTown_Text_CaitlinPreBattleHard:
	.string "CAITLIN: I'm up next.\p"
	.string "...Good luck.$"

MahoganyTown_Text_DarachHardGiveHardReward:
	.string "DARACH: I don't believe it.\p"
	.string "Lady Caitlin's theory was indeed true,\n"
	.string "and yet, you still managed to blow us\l"
	.string "away with your masterful display.\p"
	.string "For your commendable efforts, please\n"
	.string "accept this reward from us both.$"

MahoganyTown_Text_DeclineDarachChallenge:
	.string "Oh, my apologies. You require more time\n"
	.string "to prepare?\p"
	.string "We will be waiting here for you,\n"
	.string "whenever you are ready.$"

MahoganyTown_Text_CaitlinDisappointed:
	.string "CAITLIN: But I want to battle now...$"

MahoganyTown_Text_DarachCaitlinDoubleIntro:
	.string "DARACH: Prepare for trouble.\p"
	.string "CAITLIN: Make it double.$"

MahoganyTown_Text_DarachCaitlinDoubleDefeat:
	.string "DARACH: G\n"
	.string "CAITLIN: G$"

MahoganyTown_Text_DarachCaitlinWin:
	.string "DARACH: DARACH: Bravo! What an incredible show!\n"
	.string "CAITLIN: ...$"

MahoganyTown_Text_DarachCaitlinNeedTwoMons:
	.string "DARACH: I respect your enthusiasm,\n"
	.string "but...\p"
	.string "It appears you don't have enough\n"
	.string "POKéMON on you battle us in this way.\p"
	.string "Perhaps if you make some additions to\n"
	.string "your party, we may do as you wish.$"

MahoganyTown_EventScript_CaitlinLeave1::
	walk_right
	walk_right
	face_left
	step_end

MahoganyTown_EventScript_DarachLeave1::
	walk_down
	walk_right
	walk_right
	walk_up
	step_end

MahoganyTown_EventScript_AllLeave::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MahoganyTown_EventScript_CaitlinPokemonIntro::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
	msgbox MahoganyTown_Text_CaitlinPokemonIntro, MSGBOX_DEFAULT
	waitmoncry
	release
	end

MahoganyTown_EventScript_CaitlinIntro::
	lock
	faceplayer
	msgbox MahoganyTown_Text_CaitlinIntro, MSGBOX_DEFAULT
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_FaceUp
	waitmovement 0
	msgbox MahoganyTown_Text_CaitlinIntroPart2, MSGBOX_DEFAULT
	faceplayer
	closemessage
	release
	end

MahoganyTown_EventScript_DarachIntro::
	lock
	faceplayer
	playbgm MUS_HG_B_CASTLE, TRUE
	goto_if_eq VAR_DAHLIA_STATE, 4, MahoganyTown_EventScript_DarachPostIntro
	msgbox MahoganyTown_Text_DarachIntro, MSGBOX_DEFAULT
	closemessage
	msgbox MahoganyTown_Text_DarachPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DARACH_CAITLIN, FALSE 
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_DarachCaitlinBattleNormal
	case 1, MahoganyTown_EventScript_DarachCaitlinBattleHard
	case MULTI_B_PRESSED, MahoganyTown_EventScript_DeclineDarachChallenge
	goto MahoganyTown_EventScript_DeclineDarachChallenge

MahoganyTown_EventScript_DarachPostIntro::
	msgbox MahoganyTown_Text_DarachPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DARACH_CAITLIN, FALSE 
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_DarachCaitlinBattleNormal
	case 1, MahoganyTown_EventScript_DarachCaitlinBattleHard
	case MULTI_B_PRESSED, MahoganyTown_EventScript_DeclineDarachChallenge
	goto MahoganyTown_EventScript_DeclineDarachChallenge

MahoganyTown_EventScript_DarachCaitlinBattleNormal::
	msgbox MahoganyTown_Text_DarachPreBattleNormal, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_WalkRight1
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, Common_Movement_WalkRight1
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_FaceUp
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 0
	trainerbattle_no_intro TRAINER_ANN_AND_ANNE, MahoganyTown_Text_DarachCaitlinWin
	playbgm MUS_HG_B_CASTLE, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement LOCALID_MAHOGANY_DARACH, Common_Movement_WalkInPlaceRight
	waitmovement 0
	waitmovement 0
	msgbox MahoganyTown_Text_DarachNormalGiveNormalReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	msgbox MahoganyTown_Text_DarachLeaving, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_WalkInPlaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	msgbox MahoganyTown_Text_CaitlinLeaving, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, MahoganyTown_EventScript_CaitlinLeave1
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, MahoganyTown_EventScript_CaitlinLeave1
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_MAHOGANY_DARACH, MahoganyTown_EventScript_DarachLeave1
	waitmovement 0
	applymovement LOCALID_MAHOGANY_DARACH, Common_Movement_WalkRight1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	delay 14
	applymovement LOCALID_MAHOGANY_DARACH, MahoganyTown_EventScript_AllLeave
	applymovement LOCALID_MAHOGANY_CAITLIN, MahoganyTown_EventScript_AllLeave
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, MahoganyTown_EventScript_AllLeave
	waitmovement 0
	waitmovement 0
	waitmovement 0
	setflag FLAG_HIDE_MAHOGANY_TOWN_FRONTIER_NPCS
	removeobject LOCALID_MAHOGANY_DARACH
	removeobject LOCALID_MAHOGANY_CAITLIN
	removeobject LOCALID_MAHOGANY_CAITLIN_POKEMON
	fadedefaultbgm
	release
	end

MahoganyTown_EventScript_DarachCaitlinBattleHard::
	msgbox MahoganyTown_Text_DarachPreBattleHard, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_1, MahoganyTown_Text_DarachWin
	playbgm MUS_HG_B_CASTLE, TRUE
	msgbox MahoganyTown_Text_DarachHardAfter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox MahoganyTown_Text_CaitlinPreBattleHard, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_WalkRight1
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, Common_Movement_WalkRight1
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_FaceUp
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 0
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_1, MahoganyTown_Text_CaitlinWin
	playbgm MUS_HG_B_CASTLE, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement LOCALID_MAHOGANY_DARACH, Common_Movement_WalkInPlaceRight
	waitmovement 0
	waitmovement 0
	msgbox MahoganyTown_Text_DarachHardGiveHardReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox MahoganyTown_Text_DarachLeaving, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_WalkInPlaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	msgbox MahoganyTown_Text_CaitlinLeaving, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, MahoganyTown_EventScript_CaitlinLeave1
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, MahoganyTown_EventScript_CaitlinLeave1
	waitmovement 0
	waitmovement 0
	applymovement LOCALID_MAHOGANY_DARACH, MahoganyTown_EventScript_DarachLeave1
	waitmovement 0
	applymovement LOCALID_MAHOGANY_DARACH, Common_Movement_WalkRight1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	delay 14
	applymovement LOCALID_MAHOGANY_DARACH, MahoganyTown_EventScript_AllLeave
	applymovement LOCALID_MAHOGANY_CAITLIN, MahoganyTown_EventScript_AllLeave
	applymovement LOCALID_MAHOGANY_CAITLIN_POKEMON, MahoganyTown_EventScript_AllLeave
	waitmovement 0
	waitmovement 0
	waitmovement 0
	setflag FLAG_HIDE_MAHOGANY_TOWN_FRONTIER_NPCS
	removeobject LOCALID_MAHOGANY_DARACH
	removeobject LOCALID_MAHOGANY_CAITLIN
	removeobject LOCALID_MAHOGANY_CAITLIN_POKEMON
	fadedefaultbgm
	release
	end

MahoganyTown_EventScript_DeclineDarachChallenge::
	msgbox MahoganyTown_Text_DeclineDarachChallenge, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_CAITLIN, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox MahoganyTown_Text_CaitlinDisappointed, MSGBOX_DEFAULT
	closemessage
	setvar VAR_DAHLIA_STATE, 4
	fadedefaultbgm
	release
	end






