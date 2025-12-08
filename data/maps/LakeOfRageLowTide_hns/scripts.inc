.set LOCALID_LAKEOFRAGE_GYARADOS, 1
.set LOCALID_LAKEOFRAGE_LANCE, 4
.set LOCALID_LAKEOFRAGE_DRAGONITE, 8
.set LOCALID_LAKEOFRAGE_OLDMAN, 3
.set LOCALID_LAKEOFRAGE_LOIS, 6
.set LOCALID_LAKEOFRAGE_RAYMOND, 5
.set LOCALID_LAKEOFRAGE_SAM, 16
.set LOCALID_LAKEOFRAGE_SID, 17

LakeOfRageLowTide_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeOfRage_OnTransition
	.byte 0

LakeOfRage_OnTransition::
	setflag FLAG_VISITED_LAKE_OF_RAGE
	goto_if_lt VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_EventScript_SetLowTide
	special UpdateShoalTideFlag
	goto_if_set FLAG_SYS_LAKE_OF_RAGE_TIDE, LakeOfRage_EventScript_SetLowTide
	goto LakeOfRage_EventScript_SetLowTide

LakeOfRage_EventScript_SetLowTide::
	setweather WEATHER_NONE
	setmaplayoutindex LAYOUT_LAKE_OF_RAGE_LOW_TIDE
	end

LakeOfRageLowTide_EventScript_Sage::
	msgbox LakeOfRageLowTide_Text_Sage, MSGBOX_NPC
	end

LakeOfRageLowTide_Text_Sage::
	.string "This cave contains a POKéMON\n"
	.string "too strong for an ordinary\l"
	.string "trainer.$"

LakeOfRage_EventScript_Gyarados::
	lock
	faceplayer
	msgbox LakeOfRage_Text_GyaradosCry, MSGBOX_DEFAULT
	waitse
	playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattleshiny SPECIES_GYARADOS, 30
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, LakeOfRage_EventScript_Defeated_Gyarados
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, LakeOfRage_EventScript_Ran_Gyarados
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, LakeOfRage_EventScript_Ran_Gyarados
LakeOfRage_EventScript_Defeated_Gyarados::
	setflag FLAG_HIDE_LAKE_OF_RAGE_GYARADOS
	clearflag FLAG_TEMP_1
	removeobject LOCALID_LAKEOFRAGE_GYARADOS
	clearflag FLAG_HIDE_LAKE_OF_RAGE_LANCE
	addobject LOCALID_LAKEOFRAGE_LANCE
	giveitem ITEM_RED_SCALE
	setobjectxyperm LOCALID_LAKEOFRAGE_OLDMAN, 32, 38
	setvar VAR_MAHOGANY_TOWN_STATE, 2
	release
	end

LakeOfRage_EventScript_Ran_Gyarados::
	release
	end

LakeOfRage_EventScript_Gramps::
	goto_if_ge VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_EventScript_Gramps2
	msgbox LakeOfRage_Text_Gramps, MSGBOX_NPC
	end

LakeOfRage_EventScript_Gramps2::
	msgbox LakeOfRage_Text_GrampsCleared, MSGBOX_NPC
	end

LakeOfRage_EventScript_Lass::
	msgbox LakeOfRage_Text_CooltrainerF, MSGBOX_NPC
	end

LakeOfRage_EventScript_Dragonite::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRAGONITE, CRY_MODE_NORMAL
	msgbox LakeOfRage_Text_Dragonite, MSGBOX_DEFAULT
	waitmoncry
	turnobject LOCALID_LAKEOFRAGE_DRAGONITE, DIR_WEST
	release
	end

LakeOfRage_EventScript_Lance::
	lock
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 3, LakeOfRage_EventScript_Lance_Return
	msgbox LakeOfRage_Text_LanceForcedToEvolve, MSGBOX_DEFAULT
	closemessage
	delay 20
	faceplayer
	turnobject LOCALID_LAKEOFRAGE_OLDMAN, DIR_WEST
	msgbox LakeOfRage_Text_LanceIntro2, MSGBOX_DEFAULT
	setvar VAR_MAHOGANY_TOWN_STATE, 3
	msgbox LakeOfRage_Text_LanceIntro3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_EventScript_LancDeclined
LakeOfRage_EventScript_LanceAccept::
	lock
	msgbox LakeOfRage_Text_LanceRadioSignal, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_FACING, DIR_NORTH, LakeOfRage_EventScript_LanceDragoniteLeaveNorth
	applymovement LOCALID_LAKEOFRAGE_LANCE, LakeOfRage_Movement_LanceLeave
	applymovement LOCALID_LAKEOFRAGE_DRAGONITE, LakeOfRage_Movement_DragoniteLeave
	waitmovement LOCALID_LAKEOFRAGE_LANCE
	waitmovement LOCALID_LAKEOFRAGE_DRAGONITE
LakeOfRage_EventScript_EndScene::
	setflag FLAG_HIDE_LAKE_OF_RAGE_LANCE
	removeobject LOCALID_LAKEOFRAGE_LANCE
	removeobject LOCALID_LAKEOFRAGE_DRAGONITE
	setvar VAR_MAHOGANY_TOWN_STATE, 4
	clearflag FLAG_HIDE_MAHOGANY_TOWN_SHOP_NPCS
	release
	end

LakeOfRage_EventScript_Lance_Return::
	lock
	faceplayer
	msgbox LakeOfRage_Text_LanceAskHelp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, LakeOfRage_EventScript_LanceAccept
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_EventScript_LancDeclined

LakeOfRage_EventScript_LancDeclined::
	msgbox LakeOfRage_Text_LanceRefused, MSGBOX_DEFAULT
	closemessage
	release
	end


LakeOfRage_EventScript_LanceDragoniteLeaveNorth::
	applymovement LOCALID_LAKEOFRAGE_LANCE, LakeOfRage_Movement_LanceLeaveNorth
	applymovement LOCALID_LAKEOFRAGE_DRAGONITE, LakeOfRage_Movement_DragoniteLeaveNorth
	waitmovement LOCALID_LAKEOFRAGE_LANCE
	waitmovement LOCALID_LAKEOFRAGE_DRAGONITE
	goto LakeOfRage_EventScript_EndScene

LakeOfRage_Movement_LanceLeaveNorth:
	walk_left
	walk_down
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Movement_DragoniteLeaveNorth:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Movement_LanceLeave:
	walk_down
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Movement_DragoniteLeave:
	delay_16
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LakeOfRage_Text_Dragonite:
	.string "DRAGONITE: Gyafooha!$"

LakeOfRage_Text_LanceForcedToEvolve:
    .string "This lake is full of GYARADOS\n"
    .string "but nothing else…\p"
    .string "So the MAGIKARP are being forced\n"
    .string "to evolve…$"

LakeOfRage_Text_LanceIntro1:
    .string "Did you come here because of\n"
    .string "the rumors?\p"
    .string "You're {PLAYER}? I'm LANCE, a\n"
    .string "trainer like you.$"

LakeOfRage_Text_LanceIntro2:
    .string "This man here informed me of\n"
    .string "some rumors.\p"
    .string "So we came to investigate…$"

LakeOfRage_Text_LanceIntro3:
    .string "I saw the way you battled\n"
    .string "earlier, {PLAYER}.\p"
    .string "I can tell that you're a trainer\n"
    .string "with considerable skill.\p"
    .string "If you don't mind, could you help\n"
    .string "us investigate?$"

LakeOfRage_Text_LanceRadioSignal:
    .string "LANCE: Excellent!\p"
    .string "It seems that the LAKE's MAGIKARP\n"
    .string "are being forced to evolve.\p"
    .string "A mysterious radio broadcast\n"
    .string "coming from MAHOGANY is the cause.\p"
    .string "We'll be waiting for you,\n"
    .string "{PLAYER}.$"

LakeOfRage_Text_LanceRefused:
    .string "Oh… Well, if you change your mind,\n"
    .string "please help us.$"

LakeOfRage_Text_LanceAskHelp:
    .string "LANCE: Hm? Are you going to help\n"
    .string "us?$"

LakeOfRage_Text_GyaradosCry:
    .string "GYARADOS: Gyashaa!$"

LakeOfRage_Text_Gramps:
    .string "The GYARADOS are angry!\p"
    .string "It's a bad omen!$"

LakeOfRage_Text_GrampsCleared:
    .string "Hahah! The MAGIKARP are biting!$"

LakeOfRage_Text_CooltrainerF:
    .string "Did my eyes deceive me? I saw a\n"
    .string "red GYARADOS in the LAKE…\p"
    .string "But I thought GYARADOS were\n"
    .string "usually blue?$"

LakeOfRage_EventScript_Sign1::
	msgbox LakeOfRage_Text_Sign, MSGBOX_SIGN
	end

LakeOfRage_EventScript_Sign2::
	msgbox LakeOfRage_Text_FishingGuruSign, MSGBOX_SIGN
	end

LakeOfRage_Text_Sign:
    .string "LAKE OF RAGE,\n"
    .string "also known as GYARADOS LAKE.$"

LakeOfRage_Text_FishingGuruSign:
    .string "FISHING GURU'S HOUSE$"

LakeOfRage_Text_FisherRaymondSeen:
    .string "No matter what I do, all I catch\n"
    .string "are the same POKéMON…$"

LakeOfRage_Text_FisherRaymondBeaten:
    .string "My line's all tangled up…$"

LakeOfRage_Text_FisherRaymondAfter:
    .string "Why can't I catch any good\n"
    .string "POKéMON?$"

LakeOfRage_EventScript_Wesley::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BLACK_BELT, LakeOfRage_EventScript_WesleyCompleted
	msgbox LakeOfRage_Text_MeetWesley, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, LakeOfRage_EventScript_WesleyNope
	case 1, LakeOfRage_EventScript_WesleyNope
	case 2, LakeOfRage_EventScript_WesleyNope
	case 3, LakeOfRage_EventScript_WesleyYes
	case 4, LakeOfRage_EventScript_WesleyNope
	case 5, LakeOfRage_EventScript_WesleyNope
	case 6, LakeOfRage_EventScript_WesleyNope
	case 7 LakeOfRage_EventScript_WesleyCancel
	case MULTI_B_PRESSED, LakeOfRage_EventScript_WesleyCancel
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyYes::
	msgbox LakeOfRage_Text_WesleyGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_BLACK_BELT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_BLACK_BELT
	msgbox LakeOfRage_Text_WesleyGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyNope::
	msgbox LakeOfRage_Text_WesleyNotWednesday, MSGBOX_DEFAULT
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyCancel::
	closemessage
	release
	end
LakeOfRage_EventScript_WesleyCompleted::
	msgbox LakeOfRage_Text_WesleyWednesday, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_Text_MeetWesley:
    .string "WESLEY: Well, how do you do?\p"
    .string "I'm a member of the WEEKDAY family!\n"
	.string "Can you guess my favorite day?$"

LakeOfRage_Text_WesleyGivesGift:
    .string "Pleased to meet you. Please take a\n"
    .string "souvenir.$"

LakeOfRage_Text_WesleyGaveGift:
    .string "WESLEY: BLACKBELT beefs up the\n"
    .string "power of fighting moves.$"

LakeOfRage_Text_WesleyWednesday:
    .string "WESLEY: Since you found me, you\n"
    .string "must have met my brothers and\l"
    .string "sisters.\p"
    .string "Or did you just get lucky?$"

LakeOfRage_Text_WesleyNotWednesday:
    .string "WESLEY: Not exactly...$"

LakeOfRage_Text_CooltrainerfLoisSeen:
    .string "What happened to make the red\n"
    .string "GYARADOS... red?$"

LakeOfRage_Text_CooltrainerfLoisBeaten:
    .string "Good going!$"

LakeOfRage_Text_CooltrainerfLoisAfter:
    .string "Come to think of it, I've seen a\n"
    .string "pink BUTTERFREE.$"

LakeOfRage_EventScript_Aaron::
	trainerbattle_single TRAINER_AARON LakeOfRage_Text_CooltrainermAaronSeen, LakeOfRage_Text_CooltrainermAaronBeaten
	msgbox LakeOfRage_Text_CooltrainermAaronAfter, MSGBOX_AUTOCLOSE
	end

LakeOfRage_Text_CooltrainermAaronSeen:
    .string "If a trainer spots another trainer,\n"
    .string "he has to make a challenge.\p"
    .string "That is our destiny.$"

LakeOfRage_Text_CooltrainermAaronBeaten:
    .string "Whew… Good battle.$"

LakeOfRage_Text_CooltrainermAaronAfter:
    .string "POKéMON and their trainer become\n"
    .string "powerful through constant battling.$"

LakeOfRage_EventScript_Hank::
	trainerbattle_single TRAINER_HANK, LakeOfRage_Text_BirdKeeperHank_Seen, LakeOfRage_Text_BirdKeeperHank_Beaten
	msgbox LakeOfRage_Text_BirdKeeperHank_AfterBattle, MSGBOX_AUTOCLOSE
	end

LakeOfRage_Text_BirdKeeperHank_Seen:
	.string "I'm raising my POKéMON. Want to battle\n"
	.string "with me?$"

LakeOfRage_Text_BirdKeeperHank_Beaten:
	.string "Ack! I lost that one…$"

LakeOfRage_Text_BirdKeeperHank_AfterBattle:
	.string "If you have a specific POKéMON that you\n"
	.string "want to raise, put it out first, then\n"
	.string "switch it right away.\p"
	.string "That's how to do it.$"

LakeOfRage_EventScript_Rex::
	trainerbattle_single TRAINER_REX PokefanM_Text_RexSeen, PokefanM_Text_RexBeaten
	msgbox PokefanM_Text_RexAfter, MSGBOX_AUTOCLOSE
	end

PokefanM_Text_RexSeen:
	.string "My POKéMON is the cutest in the\n"
	.string "world.$"

PokefanM_Text_RexBeaten:
	.string "My POKéMON!$"

PokefanM_Text_RexAfter:
	.string "Look how adorable my POKéMON\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"

LakeOfRage_EventScript_Allan::
	trainerbattle_single TRAINER_ALLAN PokefanM_Text_AllanSeen, PokefanM_Text_AllanBeaten
	msgbox PokefanM_Text_AllanAfter, MSGBOX_AUTOCLOSE
	end

PokefanM_Text_AllanSeen:
	.string "My POKéMON is the coolest in the\n"
	.string "world.$"

PokefanM_Text_AllanBeaten:
	.string "My POKéMON!$"

PokefanM_Text_AllanAfter:
	.string "Look how cool my GRANBULL\n"
	.string "acts!\p"
	.string "Isn't it cool enough to make\n"
	.string "your heart race?$"

LakeOfRage_EventScript_Tom::
	trainerbattle_single TRAINER_TOM, LakeOfRage_Text_SupernerdTomSeen, LakeOfRage_Text_SupernerdTomBeaten
	msgbox LakeOfRage_Text_SupernerdTomAfter, MSGBOX_AUTOCLOSE
	end

LakeOfRage_Text_SupernerdTomSeen:
	.string "Hm… You've got many GYM BADGES.$"

LakeOfRage_Text_SupernerdTomBeaten:
	.string "Just as I thought… You're tough!$"

LakeOfRage_Text_SupernerdTomAfter:
	.string "GYM BADGES give you advantages in\n"
	.string "battles.$"

LakeOfRage_EventScript_Sam::
	lock
	faceplayer
	msgbox LakeOfRage_Text_SupernerdSamAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

LakeOfRage_Text_SupernerdSamSeen:
	.string "You came here for the red GYARADOS?\n"
	.string "Me too!$"

LakeOfRage_Text_SupernerdSamBeaten:
	.string "I just want to see the red GYARADOS...$"

LakeOfRage_Text_SupernerdSamAfter:
	.string "The red GYARADOS is awesome!$"

LakeOfRage_EventScript_Sid::
	lock
	faceplayer
	msgbox LakeOfRage_Text_CamperSidAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

LakeOfRage_Text_CamperSidSeen:
	.string "Hey, you! Don't litter!$"

LakeOfRage_Text_CamperSidBeaten:
	.string "I was just pointing out…$"

LakeOfRage_Text_CamperSidAfter:
	.string "Sorry. You weren't littering. It\n"
	.string "was my mistake.$"

LakeOfRage_EventScript_B2B1::
    lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
    playse SE_PIN
	applymovement LOCALID_LAKEOFRAGE_LOIS, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 49, LakeOfRage_EventScript_AdjustLois
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox LakeOfRage_Text_CooltrainerfLoisSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_LOIS, LakeOfRage_Text_CooltrainerfLoisBeaten
    playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
    playse SE_PIN
	applymovement LOCALID_LAKEOFRAGE_RAYMOND, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 48, LakeOfRage_EventScript_AdjustRaymond
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
    msgbox LakeOfRage_Text_FisherRaymondSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_RAYMOND, LakeOfRage_Text_FisherRaymondBeaten
    setvar VAR_ALL_B2B_STATE, 3
    release
    end

LakeOfRage_EventScript_AdjustLois::
	applymovement LOCALID_LAKEOFRAGE_LOIS, Common_Movement_WalkRight1
	waitmovement 0
    return

LakeOfRage_EventScript_AdjustRaymond::
	applymovement LOCALID_LAKEOFRAGE_RAYMOND, Common_Movement_WalkLeft1
	waitmovement 0
    return

LakeOfRage_EventScript_B2B2::
    lock
	playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
    playse SE_PIN
	applymovement LOCALID_LAKEOFRAGE_SAM, Common_Movement_ExclamationMark
	delay 60
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox LakeOfRage_Text_SupernerdSamSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_SAM, LakeOfRage_Text_SupernerdSamBeaten
    playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
    playse SE_PIN
	applymovement LOCALID_LAKEOFRAGE_SID, Common_Movement_ExclamationMark
	delay 60
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
    msgbox LakeOfRage_Text_CamperSidSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_SID, LakeOfRage_Text_CamperSidBeaten
    setvar VAR_ALL_B2B_STATE, 4
    release
    end

LakeOfRage_EventScript_Lois::
	lock
	faceplayer
	msgbox LakeOfRage_Text_CooltrainerfLoisAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

LakeOfRage_EventScript_Raymond::
	lock
	faceplayer
	msgbox LakeOfRage_Text_FisherRaymondAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

LakeOfRage_Text_FirebreatherOtis_Seen:
	.string "Ah! The weather's as fine as ever.$"

LakeOfRage_Text_FirebreatherOtis_Beaten:
	.string "It's sunny, but I'm all wet…$"

LakeOfRage_Text_FirebreatherOtis_AfterBattle:
	.string "When it rains, it's hard to get\n"
	.string "ignition…$"

LakeOfRage_Text_FirebreatherBurt_Seen:
	.string "Step right up and take a look!$"

LakeOfRage_Text_FirebreatherBurt_Beaten:
	.string "Yow! That's hot!$"

LakeOfRage_Text_FirebreatherBurt_AfterBattle:
	.string "The greatest fire-breather in KANTO,\n"
	.string "that's me.\p"
	.string "But not the best trainer…$"

LakeOfRage_EventScript_Otis::
	trainerbattle_single TRAINER_OTIS LakeOfRage_Text_FirebreatherOtis_Seen, LakeOfRage_Text_FirebreatherOtis_Beaten
	msgbox LakeOfRage_Text_FirebreatherOtis_AfterBattle, MSGBOX_AUTOCLOSE
	end

LakeOfRage_EventScript_Burt::
	trainerbattle_single TRAINER_BURT LakeOfRage_Text_FirebreatherBurt_Seen, LakeOfRage_Text_FirebreatherBurt_Beaten
	msgbox LakeOfRage_Text_FirebreatherBurt_AfterBattle, MSGBOX_AUTOCLOSE
	end

