.set LOCALID_MAHOGANY_MERCHANT, 3
.set LOCALID_MAHOGANY_DARACH, 10
.set LOCALID_MAHOGANY_CAITLIN, 11
.set LOCALID_MAHOGANY_CAITLIN_POKEMON, 12
.set LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, 13
.set LOCALID_MAHOGANY_MURKROW, 14

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
	clearflag FLAG_GOT_MAHOGANY_GEMS
	clearflag FLAG_HEALED_VS_DARACH_CAITLIN
	clearflag FLAG_DID_NOTHING_VS_DARACH_CAITLIN

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
	.string "Gothitelle: ...$"

MahoganyTown_Text_CaitlinIntro:
	.string "Caitlin: ...$"

MahoganyTown_Text_CaitlinIntroPart2:
	.string "Darach...\p"
	.string "This person is staring at me...$"

MahoganyTown_Text_DarachIntro:
	.string "Greetings, fellow trainer.\n"
	.string "My name is Darach.\p"
	.string "Darach: I am fortunate enough to have\n"
	.string "served as the Battle Castle valet for\l"
	.string "quite some time now.\p"
	.string "I have heard great tales of your\n"
	.string "battling skill from my dear friend,\l"
	.string "Dahlia, and hoped you might humble me\l"
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
	.string "face us one at a time.\p"
	.string "In the event you do elect to face us\n"
	.string "one by one, I have an exciting twist\l"
	.string "prepared for you, which mimics the\l"
	.string "style of the Battle Castle we call home.\p"
	.string "Between battles, I will offer you the\n"
	.string "opportunity to heal one party member,\l"
	.string "equip a specific item to a party member\l"
	.string "who is neither fainted nor holding an\l"
	.string "item, or do nothing at all.\p"
	.string "Should you not use an item during\n"
	.string "battle, you are of course permitted to\l"
	.string "take it with you on your journey.$"


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
	.string "Darach: It seems that I was wrong.\p"
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
	.string "Battle Castle whenever you can.\p"
	.string "Lady Caitlin seems quite taken with\n"
	.string "your fighting style. I'm sure she would\l"
	.string "appreciate seeing it once more.$"

MahoganyTown_Text_CaitlinLeaving:
	.string "Caitlin: See you, {PLAYER}...\n"
	.string "Let us battle again someday.$"

MahoganyTown_Text_DarachPreBattleHard:
	.string "Two single battles it shall be, then.\n"
	.string "You'll be fighting me first.\p"
	.string "En Garde, {PLAYER}!$"

MahoganyTown_Text_DarachHardAfter:
	.string "Darach: A fantastic battle. Truly a\n"
	.string "commendable performance.\p"
	.string "Now, before you commence your battle\n"
	.string "with Lady Caitlin, may I present to you\l"
	.string "the options we discussed earlier?\p"
	.string "How would you like to proceed before\n"
	.string "your next fight?$"

MahoganyTown_Text_DarachHealWhichMon:
	.string "You wish to heal a POKéMON?\n"
	.string "Of course. Who would you like to heal?$"

MahoganyTown_Text_DarachMonHealed:
	.string "Your POKéMON has been restored to full\n"
	.string "health.$"
	.string "I'll give you a small bonus for choosing\n"
	.string "this option later as well, of course.$"

MahoganyTown_Text_DarachCantHealFaintedMon:
	.string "I'm afraid that's not possible. I cannot\n"
	.string "heal a fainted POKéMON.$"

MahoganyTown_Text_DarachGiveWhichItem:
	.string "You'd like to equip an item to a\n"
	.string "POKéMON? Which item would you like?$"

MahoganyTown_Text_DarachGiveItemToWhichMon:
	.string "Of course. And which POKéMON should\n"
	.string "hold it?$"

MahoganyTown_Text_DarachItemAndMonConfirmation:
	.string "The {STR_VAR_2} for {STR_VAR_1}?\n"
	.string "Do I have that right?$"

MahoganyTown_Text_DarachItemGiven:
	.string "There we are. The item has been\n"
	.string "equipped for you.$"

MahoganyTown_Text_DarachCantGiveItemToFaintedMon:
	.string "I'm afraid that's not possible. I cannot\n"
	.string "give an item to a fainted POKéMON.$"

MahoganyTown_Text_DarachCantGiveItemToMonHoldingAnItem:
	.string "I'm afraid that's not possible. I cannot\n"
	.string "give an item to a POKéMON holding one.$"

MahoganyTown_Text_DarachConfirmDoNothing:
	.string "You don't want me do anything for you?\n"
	.string "Are you quite certain that is the case?$"

MahoganyTown_Text_DarachPlayerChoseDoNothing:
	.string "Well, if that's what you really want...\p"
	.string "In that case, I'll be sure to\n"
	.string "compensate you for this appropriately,\l"
	.string "should you still manage to win.$"

MahoganyTown_Text_DarachHardGoodLuckOnNextBattle:
	.string "That will be all from me for now.\p"
	.string "Let us hope you have chosen wisely,\n"
	.string "and I wish you luck in your next battle.$"

MahoganyTown_Text_CaitlinPreBattleHard:
	.string "Caitlin: I'm next.\p"
	.string "...Let's go.$"

MahoganyTown_Text_DarachHardGiveHardReward:
	.string "Darach: I don't believe it.\p"
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
	.string "Caitlin: But I want to battle now...$"

MahoganyTown_Text_DarachCaitlinDoubleIntro:
	.string "Darach: Prepare for trouble.\p"
	.string "Caitlin: Make it double.$"

MahoganyTown_Text_DarachCaitlinDoubleDefeat:
	.string "Darach: G\n"
	.string "Caitlin: G$"

MahoganyTown_Text_DarachCaitlinWin:
	.string "Darach: Darach: Bravo! What an incredible show!\n"
	.string "Caitlin: ...$"

MahoganyTown_Text_DarachCaitlinNeedTwoMons:
	.string "Darach: I respect your enthusiasm,\n"
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
	playmoncry SPECIES_GOTHITELLE, CRY_MODE_NORMAL
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
	dynmultipush MahoganyTown_Text_Double, 0
	dynmultipush MahoganyTown_Text_BackToBack, 1
	dynmultipush MahoganyTown_Text_Exit, 2
	dynmultistack 20, 5, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_DarachCaitlinBattleNormal
	case 1, MahoganyTown_EventScript_DarachCaitlinBattleHard
	case 2, MahoganyTown_EventScript_DeclineDarachChallenge
	case MULTI_B_PRESSED, MahoganyTown_EventScript_DeclineDarachChallenge
	end
	@multichoice 20, 6, MULTI_DARACH_CAITLIN, FALSE 
	@switch VAR_RESULT
	@case 0, MahoganyTown_EventScript_DarachCaitlinBattleNormal
	@case 1, MahoganyTown_EventScript_DarachCaitlinBattleHard
	@case MULTI_B_PRESSED, MahoganyTown_EventScript_DeclineDarachChallenge
	@goto MahoganyTown_EventScript_DeclineDarachChallenge

MahoganyTown_EventScript_DarachPostIntro::
	msgbox MahoganyTown_Text_DarachPostIntro, MSGBOX_DEFAULT
	dynmultipush MahoganyTown_Text_Double, 0
	dynmultipush MahoganyTown_Text_BackToBack, 1
	dynmultipush MahoganyTown_Text_Exit, 2
	dynmultistack 20, 5, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_DarachCaitlinBattleNormal
	case 1, MahoganyTown_EventScript_DarachCaitlinBattleHard
	case 2, MahoganyTown_EventScript_DeclineDarachChallenge
	case MULTI_B_PRESSED, MahoganyTown_EventScript_DeclineDarachChallenge
	end
	@multichoice 20, 6, MULTI_DARACH_CAITLIN, FALSE 
	@switch VAR_RESULT
	@case 0, MahoganyTown_EventScript_DarachCaitlinBattleNormal
	@case 1, MahoganyTown_EventScript_DarachCaitlinBattleHard
	@case MULTI_B_PRESSED, MahoganyTown_EventScript_DeclineDarachChallenge
	@goto MahoganyTown_EventScript_DeclineDarachChallenge

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
	@playbgm MUS_HG_B_CASTLE, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement LOCALID_MAHOGANY_DARACH, Common_Movement_WalkInPlaceRight
	waitmovement 0
	waitmovement 0
	msgbox MahoganyTown_Text_DarachNormalGiveNormalReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	giveitem ITEM_SERIOUS_MINT
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
	@playbgm MUS_HG_B_CASTLE, TRUE
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	end

MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption::	
	msgbox MahoganyTown_Text_DarachHardAfter, MSGBOX_DEFAULT
	dynmultipush MahoganyTown_Text_HealPokemon, 0
	dynmultipush MahoganyTown_Text_GiveItem, 1
	dynmultipush MahoganyTown_Text_DoNothing, 2
	dynmultistack 20, 5, TRUE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_DarachHealMon
	case 1, MahoganyTown_EventScript_DarachGiveItem
	case 2, MahoganyTown_EventScript_DarachDoNothing
	end

MahoganyTown_EventScript_DarachHealMon::
	msgbox MahoganyTown_Text_DarachHealWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantHealFaintedMon
	special HealSpecificPokemonInSlot
	msgbox MahoganyTown_Text_DarachMonHealed, MSGBOX_DEFAULT
	setflag FLAG_HEALED_VS_DARACH_CAITLIN
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachCantHealFaintedMon::
	msgbox MahoganyTown_Text_DarachCantHealFaintedMon, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	end

MahoganyTown_EventScript_DarachGiveItem::
	msgbox MahoganyTown_Text_DarachGiveWhichItem, MSGBOX_DEFAULT
	dynmultipush MahoganyTown_Text_CustapBerry, 0
	dynmultipush MahoganyTown_Text_EjectButton, 1
	dynmultipush MahoganyTown_Text_EjectPack, 2
	dynmultipush MahoganyTown_Text_FocusSash, 3
	dynmultipush MahoganyTown_Text_BottleCap, 4
	dynmultipush MahoganyTown_Text_Exit, 5
	dynmultistack 20, 4, FALSE, 4, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_DarachCustapBerry
	case 1, MahoganyTown_EventScript_DarachEjectButton
	case 2, MahoganyTown_EventScript_DarachEjectPack
	case 3, MahoganyTown_EventScript_DarachFocusSash
	case 4, MahoganyTown_EventScript_DarachBottleCap
	case 5, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	case MULTI_B_PRESSED, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	end

MahoganyTown_EventScript_DarachCustapBerry::
	setvar VAR_0x8006, ITEM_CUSTAP_BERRY
	msgbox MahoganyTown_Text_DarachGiveItemToWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate 
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToFaintedMon
	specialvar VAR_RESULT, CheckSpecificMonHasAnyHeldItem
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToMonHoldingAnItem
	special BufferPokemonNicknameAndCastleItem
	msgbox MahoganyTown_Text_DarachItemAndMonConfirmation, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	special GiveMonSelectedCastleItem
	msgbox MahoganyTown_Text_DarachItemGiven, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachEjectButton::
	setvar VAR_0x8006, ITEM_EJECT_BUTTON
	msgbox MahoganyTown_Text_DarachGiveItemToWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate 
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToFaintedMon
	specialvar VAR_RESULT, CheckSpecificMonHasAnyHeldItem
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToMonHoldingAnItem
	special BufferPokemonNicknameAndCastleItem
	msgbox MahoganyTown_Text_DarachItemAndMonConfirmation, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	special GiveMonSelectedCastleItem
	msgbox MahoganyTown_Text_DarachItemGiven, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachEjectPack::
	setvar VAR_0x8006, ITEM_EJECT_PACK
	msgbox MahoganyTown_Text_DarachGiveItemToWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate 
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToFaintedMon
	specialvar VAR_RESULT, CheckSpecificMonHasAnyHeldItem
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToMonHoldingAnItem
	special BufferPokemonNicknameAndCastleItem
	msgbox MahoganyTown_Text_DarachItemAndMonConfirmation, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	special GiveMonSelectedCastleItem
	msgbox MahoganyTown_Text_DarachItemGiven, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachFocusSash::
	setvar VAR_0x8006, ITEM_FOCUS_SASH
	msgbox MahoganyTown_Text_DarachGiveItemToWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate 
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToFaintedMon
	specialvar VAR_RESULT, CheckSpecificMonHasAnyHeldItem
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToMonHoldingAnItem
	special BufferPokemonNicknameAndCastleItem
	msgbox MahoganyTown_Text_DarachItemAndMonConfirmation, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	special GiveMonSelectedCastleItem
	msgbox MahoganyTown_Text_DarachItemGiven, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachBottleCap::
	setvar VAR_0x8006, ITEM_BOTTLE_CAP
	msgbox MahoganyTown_Text_DarachGiveItemToWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate 
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToFaintedMon
	specialvar VAR_RESULT, CheckSpecificMonHasAnyHeldItem
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_DarachCantGiveItemToMonHoldingAnItem
	special BufferPokemonNicknameAndCastleItem
	msgbox MahoganyTown_Text_DarachItemAndMonConfirmation, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	special GiveMonSelectedCastleItem
	msgbox MahoganyTown_Text_DarachItemGiven, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachCantGiveItemToFaintedMon::
	msgbox MahoganyTown_Text_DarachCantGiveItemToFaintedMon, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	end

MahoganyTown_EventScript_DarachCantGiveItemToMonHoldingAnItem::
	msgbox MahoganyTown_Text_DarachCantGiveItemToMonHoldingAnItem, MSGBOX_DEFAULT
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	end

MahoganyTown_EventScript_DarachDoNothing::
	msgbox MahoganyTown_Text_DarachConfirmDoNothing, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_DarachCaitlinBattleHardChooseCastleOption
	msgbox MahoganyTown_Text_DarachPlayerChoseDoNothing, MSGBOX_DEFAULT
	setflag FLAG_DID_NOTHING_VS_DARACH_CAITLIN
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen
	end

MahoganyTown_EventScript_DarachCaitlinBattleHardCastleOptionChosen::
	msgbox MahoganyTown_Text_DarachHardGoodLuckOnNextBattle, MSGBOX_DEFAULT
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
	@playbgm MUS_HG_B_CASTLE, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement LOCALID_MAHOGANY_DARACH, Common_Movement_WalkInPlaceRight
	waitmovement 0
	waitmovement 0
	goto_if_set FLAG_HEALED_VS_DARACH_CAITLIN, MahoganyTown_EventScript_DarachAdditionalHealReward
	goto_if_set FLAG_DID_NOTHING_VS_DARACH_CAITLIN, MahoganyTown_EventScript_DarachAdditionalDoNothingReward
	msgbox MahoganyTown_Text_DarachHardGiveHardReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardRewardAlreadyGiven
	end

MahoganyTown_EventScript_DarachAdditionalHealReward::
	msgbox MahoganyTown_Text_DarachHardGiveHardReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardRewardAlreadyGiven
	end

MahoganyTown_EventScript_DarachAdditionalDoNothingReward::
	msgbox MahoganyTown_Text_DarachHardGiveHardReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 3
	goto MahoganyTown_EventScript_DarachCaitlinBattleHardRewardAlreadyGiven
	end

MahoganyTown_EventScript_DarachCaitlinBattleHardRewardAlreadyGiven::	
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





@MULTIHIT TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

MahoganyTown_EventScript_Murkrow::
	lock
	faceplayer
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox MahoganyTown_Text_Murkrow, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_MAHOGANY_MURKROW, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

MahoganyTown_Text_Murkrow:
	.string "Murkrow: Murkrow!$"

MahoganyTown_EventScript_HighCritTutor::
	lock
	faceplayer
	msgbox MahoganyTown_Text_HighCritTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MahoganyTown_EventScript_HighCritTutorDeclined
	msgbox MahoganyTown_Text_HighCritTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_HIGH_CRIT_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_HighCritTutorAquaCutter
	case 1, MahoganyTown_EventScript_HighCritTutorAirCutter
	case 2, MahoganyTown_EventScript_HighCritTutorCrossPoison
	case 3, MahoganyTown_EventScript_HighCritTutorDrillRun
	case 4, MahoganyTown_EventScript_HighCritTutorLeafBlade
	case 5, MahoganyTown_EventScript_HighCritTutorNightSlash
	case 6, MahoganyTown_EventScript_HighCritTutorPsychoCut
	case 7, MahoganyTown_EventScript_HighCritTutorShadowClaw
	case 8, MahoganyTown_EventScript_HighCritTutorSlash
	case 9, MahoganyTown_EventScript_HighCritTutorBlazeKick
	case 10, MahoganyTown_EventScript_HighCritTutorDeclined
	case MULTI_B_PRESSED, MahoganyTown_EventScript_HighCritTutorDeclined
	end

MahoganyTown_EventScript_HighCritTutorAquaCutter::
	msgbox MahoganyTown_Text_HighCritTutorAquaCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_AQUA_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorAirCutter::
	msgbox MahoganyTown_Text_HighCritTutorAirCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_AIR_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorCrossPoison::
	msgbox MahoganyTown_Text_HighCritTutorCrossPoisonWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_CROSS_POISON
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorDrillRun::
	msgbox MahoganyTown_Text_HighCritTutorDrillRunWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DRILL_RUN
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorLeafBlade::
	msgbox MahoganyTown_Text_HighCritTutorLeafBladeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_LEAF_BLADE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorNightSlash::
	msgbox MahoganyTown_Text_HighCritTutorNightSlashWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_NIGHT_SLASH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorPsychoCut::
	msgbox MahoganyTown_Text_HighCritTutorPsychoCutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorShadowClaw::
	msgbox MahoganyTown_Text_HighCritTutorShadowClawWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SHADOW_CLAW
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorSlash::
	msgbox MahoganyTown_Text_HighCritTutorSlashWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SLASH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorBlazeKick::
	msgbox MahoganyTown_Text_HighCritTutorBlazeKickWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BLAZE_KICK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MahoganyTown_EventScript_HighCritTutorDeclined
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FaceRight
	msgbox MahoganyTown_Text_HighCritTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAHOGANY_HIGH_CRIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 10, MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 9, MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR, MahoganyTown_EventScript_HighCritTutorFriend
	msgbox MahoganyTown_Text_HighCritTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_MAHOGANY_TOWN_HIGH_CRIT_TUTOR
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorFriend::
	msgbox MahoganyTown_Text_HighCritTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_HighCritTutorTeachPlayerBelow::
	applymovement LOCALID_MAHOGANY_MURKROW, MahoganyTown_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_MAHOGANY_MURKROW, MahoganyTown_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

MahoganyTown_Movement_TeachPlayerBelow1::
	walk_down
	face_left
	step_end

MahoganyTown_Movement_TeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	walk_up
	face_down
	step_end

MahoganyTown_EventScript_HighCritTutorTeachPlayerLeft::
	applymovement LOCALID_MAHOGANY_MURKROW, MahoganyTown_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_MAHOGANY_MURKROW, MahoganyTown_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

MahoganyTown_Movement_TeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

MahoganyTown_Movement_TeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	walk_right
	walk_right
	walk_up
	face_down
	step_end

MahoganyTown_EventScript_HighCritTutorDeclined::
	msgbox MahoganyTown_Text_HighCritTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_Text_HighCritTutorDeclined::
	.string "It's a dud... Womp-womp...$"

MahoganyTown_Text_HighCritTutorLetMeTeach:
	.string "Ding ding ding!\n"
	.string "And the slots are rolling!\p"
	.string "Behind door number one...\p"
	.string "7!\p"
	.string "Behind door number two...\p"
	.string "7!\p"
	.string "Behind door number three...?$"

MahoganyTown_Text_HighCritTutorWhichMove:
	.string "777! It's a critical hit!\n"
	.string "Congratulations! You've won...?$"

MahoganyTown_Text_HighCritTutorAquaCutterWhichMon:
	.string "Aqua Cutter! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorAirCutterWhichMon:
	.string "Air Cutter! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorCrossPoisonWhichMon:
	.string "Cross Poison! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorDrillRunWhichMon:
	.string "Drill Run! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorLeafBladeWhichMon:
	.string "Leaf Blade! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorNightSlashWhichMon:
	.string "Night Slash! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorPsychoCutWhichMon:
	.string "Psycho Cut! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorShadowClawWhichMon:
	.string "Shadow Claw! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorSlashWhichMon:
	.string "Slash! Applying the bonus\n"
	.string "multiplier to...?$"

MahoganyTown_Text_HighCritTutorBlazeKickWhichMon:
	.string "Blaze Kick! Applying the bonus\n"
	.string "multiplier to...?$"


MahoganyTown_Text_HighCritTutorTeachingMove:
	.string "New high score! Murkrow, pay out the\n"
	.string "winnings, go go go!$"

MahoganyTown_Text_HighCritTutorMoveTaught:
	.string "Want to play again? (INSERT 1 COIN)$"

MahoganyTown_Text_HighCritTutorFriend:
	.string "Want to play again? (FREE!)$"









@GEM GIRL
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

MahoganyTown_EventScript_GemGirl::
	lock
	faceplayer
	goto_if_set FLAG_GOT_MAHOGANY_GEMS, MahoganyTown_EventScript_GemGirlAlreadyGivenGems
	msgbox MahoganyTown_Text_GemGirlBeforeGivingGems, MSGBOX_DEFAULT
	giveitem ITEM_FIRE_GEM
	giveitem ITEM_WATER_GEM
	giveitem ITEM_ELECTRIC_GEM
	giveitem ITEM_GRASS_GEM
	giveitem ITEM_ICE_GEM
	giveitem ITEM_FIGHTING_GEM
	giveitem ITEM_POISON_GEM
	giveitem ITEM_GROUND_GEM
	giveitem ITEM_FLYING_GEM
	giveitem ITEM_PSYCHIC_GEM
	giveitem ITEM_BUG_GEM
	giveitem ITEM_ROCK_GEM
	giveitem ITEM_GHOST_GEM
	giveitem ITEM_DRAGON_GEM
	giveitem ITEM_DARK_GEM
	giveitem ITEM_STEEL_GEM
	giveitem ITEM_NORMAL_GEM
	giveitem ITEM_FAIRY_GEM
	setflag FLAG_GOT_MAHOGANY_GEMS
	goto MahoganyTown_EventScript_GemGirlAlreadyGivenGems
	end

MahoganyTown_EventScript_GemGirlAlreadyGivenGems::
	msgbox MahoganyTown_Text_GemGirlAlreadyGivenGems, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_Drilbur::
	lock
	faceplayer
	playmoncry SPECIES_DRILBUR, CRY_MODE_NORMAL
	msgbox MahoganyTown_Text_Drilbur, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	release
	end

MahoganyTown_Text_Drilbur:
	.string "Drilbur: Buh.$"

MahoganyTown_Text_GemGirlBeforeGivingGems:
	.string "My Drilbur keeps digging up gems for\n"
	.string "some reason.\p"
	.string "I keep telling her to look for stones\n"
	.string "and shards, but all she ever digs up is\l"
	.string "gems and more gems.\p"
	.string "Do you think you could take some of\n"
	.string "these gems off my hands?$"

MahoganyTown_Text_GemGirlAlreadyGivenGems:
	.string "I guess I shouldn't be surprised.\p"
	.string "Gems look much prettier than stones\n"
	.string "and shards, don't they?\p"
	.string "Maybe my Drilbur's trying to get me to\n"
	.string "sign her up for a beauty contest.$"

@CASTLE ITEM TESTER
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

MahoganyTown_EventScript_CastleTester::
	lock
	faceplayer
	msgbox MahoganyTown_Text_CastleTesterWhatDo, MSGBOX_DEFAULT
	dynmultipush MahoganyTown_Text_HealPokemon, 0
	dynmultipush MahoganyTown_Text_GiveItem, 1
	dynmultipush MahoganyTown_Text_Exit, 2
	dynmultistack 2, 2, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_CastleTesterHealMon
	case 1, MahoganyTown_EventScript_CastleTesterGiveItem
	case 2, MahoganyTown_EventScript_CastleTesterExit
	case MULTI_B_PRESSED, MahoganyTown_EventScript_CastleTesterExit
	end

MahoganyTown_EventScript_CastleTesterExit::
	msgbox MahoganyTown_Text_CastleTesterExit, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_CastleTesterHealMon::
	msgbox MahoganyTown_Text_CastleTesterWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_CastleTesterExit
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_CastleTesterExit
	special HealSpecificPokemonInSlot
	msgbox MahoganyTown_Text_CastleTesterMonHealed, MSGBOX_DEFAULT
	closemessage
	release
	end

MahoganyTown_EventScript_CastleTesterGiveItem::
	msgbox MahoganyTown_Text_CastleTesterGiveWhichItem, MSGBOX_DEFAULT
	dynmultipush MahoganyTown_Text_CustapBerry, 0
	dynmultipush MahoganyTown_Text_EjectButton, 1
	dynmultipush MahoganyTown_Text_EjectPack, 2
	dynmultipush MahoganyTown_Text_FocusSash, 3
	dynmultipush MahoganyTown_Text_BottleCap, 4
	dynmultipush MahoganyTown_Text_Exit, 5
	dynmultistack 2, 2, FALSE, 4, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, MahoganyTown_EventScript_CastleTesterCustapBerry
	case 1, MahoganyTown_EventScript_CastleTesterEjectButton
	case 2, MahoganyTown_EventScript_CastleTesterEjectPack
	case 3, MahoganyTown_EventScript_CastleTesterFocusSash
	case 4, MahoganyTown_EventScript_CastleTesterBottleCap
	case 5, MahoganyTown_EventScript_CastleTesterExit
	case MULTI_B_PRESSED, MahoganyTown_EventScript_CastleTesterExit
	end

MahoganyTown_EventScript_CastleTesterCustapBerry::
	setvar VAR_0x8006, ITEM_CUSTAP_BERRY
	msgbox MahoganyTown_Text_CastleTesterWhichMon, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate 
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MahoganyTown_EventScript_CastleTesterExit
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, CheckIfMonFainted
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_CastleTesterExit
	specialvar VAR_RESULT, CheckSpecificMonHasAnyHeldItem
	goto_if_eq VAR_RESULT, TRUE, MahoganyTown_EventScript_CastleTesterExit
	special BufferPokemonNicknameAndCastleItem
	msgbox MahoganyTown_Text_CastleTesterItemAndMonConfirmation, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, MahoganyTown_EventScript_CastleTesterExit
	special GiveMonSelectedCastleItem
	msgbox MahoganyTown_Text_CastleTesterItemGiven, MSGBOX_DEFAULT
	closemessage
	release
	end









MahoganyTown_EventScript_CastleTesterEjectButton::


MahoganyTown_EventScript_CastleTesterEjectPack::


MahoganyTown_EventScript_CastleTesterFocusSash::


MahoganyTown_EventScript_CastleTesterBottleCap::



@dynmulti text
MahoganyTown_Text_HealPokemon:
	.string "Heal Pokemon$"
MahoganyTown_Text_GiveItem:
	.string "Give Item$"
MahoganyTown_Text_Exit:
	.string "Exit$"
MahoganyTown_Text_CustapBerry:
	.string "Custap Berry$"
MahoganyTown_Text_EjectButton:
	.string "Eject Button$"
MahoganyTown_Text_EjectPack:
	.string "Eject Pack$"
MahoganyTown_Text_FocusSash:
	.string "Focus Sash$"
MahoganyTown_Text_BottleCap:
	.string "Bottle Cap$"
MahoganyTown_Text_DoNothing:
	.string "Do Nothing$"
MahoganyTown_Text_BackToBack:
	.string "Back to Back$"
MahoganyTown_Text_Double:
	.string "Double$"

MahoganyTown_Text_CastleTesterExit:
	.string "Exit$"

MahoganyTown_Text_CastleTesterWhatDo:
	.string "What do?$"

MahoganyTown_Text_CastleTesterWhichMon:
	.string "Which mon?$"

MahoganyTown_Text_CastleTesterMonHealed:
	.string "Mon healed$"

MahoganyTown_Text_CastleTesterItemAndMonConfirmation:
	.string "Give {STR_VAR_1} the {STR_VAR_2}?$"

MahoganyTown_Text_CastleTesterItemGiven:
	.string "Item given$"

MahoganyTown_Text_CastleTesterGiveWhichItem:
	.string "Which item?$"
