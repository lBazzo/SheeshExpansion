.set LOCALID_GOLDENROD_CITY_GYM_CARRIE, 2
.set LOCALID_GOLDENROD_CITY_GYM_VICTORIA, 3
.set LOCALID_GOLDENROD_CITY_GYM_SAMANTHA, 5
.set LOCALID_GOLDENROD_CITY_GYM_BRIDGET, 6
.set LOCALID_GOLDENROD_CITY_GYM_HILLARY, 7
.set LOCALID_GOLDENROD_CITY_GYM_COLETTE, 8

GoldenrodCity_Gym_hns_MapScripts::
	.byte 0
@Carrie, Bridget, Victoria, Samantha, gym guy


GoldenrodCity_Gym_EventScript_Bridget::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_LassBridgetAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Victoria::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_BeautyVictoriaAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Samantha::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_BeautySamanthaAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Carrie::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_LassCarrieAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Colette::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_TeacherColetteAfterBattle, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Hillary::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_TeacherHillaryAfterBattle, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Gym_Guy::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, GoldenrodCity_Gym_EventScript_Gym_Guy_After
	msgbox GoldenrodCity_Gym_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Gym_Guy_After::
	msgbox GoldenrodCity_Gym_Text_GymGuideWin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Whitney::
	lock
	faceplayer
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 3, GoldenrodCity_Gym_EventScript_WhitneyCrying
	goto_if_eq VAR_GOLDENROD_CITY_STATE, 4, GoldenrodCity_Gym_EventScript_WhitneyBadge
	goto_if_set FLAG_DEFEATED_GOLDENROD_CITY_GYM, GoldenrodCity_Gym_EventScript_WhitneyDefeated
	msgbox GoldenrodCity_Gym_Text_WhitneyBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WHITNEY_1, GoldenrodCity_Gym_Text_WhitneyShouldntBeSoSerious
	msgbox GoldenrodCity_Gym_Text_WhitneyYouMeanie, MSGBOX_DEFAULT
	setvar VAR_GOLDENROD_CITY_STATE, 3
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyCrying::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_WhitneyYouMeanie, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyBadge::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_WhitneyWhatDoYouWant, MSGBOX_DEFAULT
	closemessage
	message GoldenrodCity_Gym_Text_PlayerReceivedPlainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox GoldenrodCity_Gym_Text_WhitneyPlainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE03_GET
	setflag FLAG_DEFEATED_GOLDENROD_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_HEART_SCALE, 4
	giveitem ITEM_TM_ATTRACT
	msgbox GoldenrodCity_Gym_Text_WhitneyAttract, MSGBOX_DEFAULT
	setvar VAR_GOLDENROD_CITY_STATE, 5
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyDefeated::
	lock
	faceplayer
	msgbox GoldenrodCity_Gym_Text_WhitneyGoodCry, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Trigger::	
	turnobject LOCALID_GOLDENROD_CITY_GYM_BRIDGET DIR_WEST
	msgbox GoldenrodCity_Gym_Text_BridgetWhitneyCries, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	setvar VAR_GOLDENROD_CITY_STATE, 4
	closemessage
	release
	end


GoldenrodCity_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_GOLDENROD_CITY_GYM, GoldenrodCity_Gym_EventScript_Statue2
	msgbox GoldenrodCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_EventScript_Statue2::
	msgbox GoldenrodCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Gym_Text_GymStatue:
	.string "GOLDENROD POKéMON GYM$"

GoldenrodCity_Gym_Text_GymStatueCertified:
	.string "GOLDENROD TOWN POKéMON GYM\p"
	.string "WHITNEY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

GoldenrodCity_Gym_Text_WhitneyBefore:
    .string "Hi! I'm WHITNEY!\p"
    .string "Everyone was into POKéMON, so I got\n"
    .string "into it too!\p"
    .string "POKéMON are super-cute!\p"
    .string "You want to battle? I'm warning\n"
    .string "you- I'm good!$"

GoldenrodCity_Gym_Text_WhitneyShouldntBeSoSerious:
    .string "Sob…\p"
    .string "…Waaaaaaah! You're mean!\p"
    .string "You shouldn't be so serious! You…\n"
    .string "you child, you!$"

GoldenrodCity_Gym_Text_WhitneyYouMeanie:
    .string "Waaaaah!\p"
    .string "Waaaaah!\p"
    .string "…Snivel, hic… …You meanie!$"

GoldenrodCity_Gym_Text_WhitneyWhatDoYouWant:
    .string "…Sniff…\p"
    .string "What? What do you want? A BADGE?\p"
    .string "Oh, right. I forgot. Here's\n"
    .string "PLAINBADGE.$"

GoldenrodCity_Gym_Text_PlayerReceivedPlainBadge:
    .string "{PLAYER} received PLAINBADGE.$"

GoldenrodCity_Gym_Text_WhitneyPlainBadge:
    .string "PLAINBADGE lets your POKéMON use\n"
    .string "STRENGTH outside of battle.\p"
    .string "It also boosts your POKéMON's\n"
	.string "DEFENSE.\p"
    .string "Oh, you can have this too!$"

GoldenrodCity_Gym_Text_WhitneyAttract:
    .string "It's ATTRACT! It makes full use of a\n"
    .string "POKéMON's charm.\p"
    .string "Isn't it just perfect for a cutie\n"
    .string "like me?$"

GoldenrodCity_Gym_Text_WhitneyGoodCry:
    .string "Ah, that was a good cry!$"

GoldenrodCity_Gym_Text_WhitneyRematch:
    .string "Hi! It's you!\p"
    .string "Wow, JOHTO CHAMPION now?\p"
    .string "You really are amazing!\p"
    .string "I want to see how strong you are.\p"
    .string "Want to have a rematch with me?$"

GoldenrodCity_Gym_Text_WhitneyRematchDefeat:
    .string "Waaaaah!\p"
    .string "Waaaaah!\p"
    .string "…Snivel, hic… …You meanie!$"

GoldenrodCity_Gym_Text_LassCarrieSeen:
    .string "Don't let my POKéMON's cute looks\n"
    .string "fool you.\p"
    .string "They can whip you!$"

GoldenrodCity_Gym_Text_LassCarrieBeaten:
    .string "Darn… I thought you were weak…$"

GoldenrodCity_Gym_Text_LassCarrieAfter:
    .string "Do my POKéMON think I'm cute?$"

GoldenrodCity_Gym_Text_LassBridgetSeen:
    .string "I like cute POKéMON better than\n"
    .string "strong POKéMON.\p"
    .string "But I have strong and cute POKéMON!$"

GoldenrodCity_Gym_Text_LassBridgetBeaten:
    .string "Oh, no, no, no!$"

GoldenrodCity_Gym_Text_LassBridgetAfter:
    .string "I'm trying to beat WHITNEY, but…\n"
    .string "It's depressing.\p"
    .string "I'm okay! If I lose, I'll just try\n"
    .string "harder next time!$"

GoldenrodCity_Gym_Text_BridgetWhitneyCries:
    .string "Oh, no. You made WHITNEY cry.\p"
    .string "It's OK. She'll stop soon. She\n"
    .string "always cries when she loses.$"

GoldenrodCity_Gym_Text_BeautyVictoriaSeen:
    .string "Oh, you are a cute little trainer!\p"
    .string "I like you, but I won't hold back!$"

GoldenrodCity_Gym_Text_BeautyVictoriaBeaten:
    .string "Let's see… Oops, it's over?$"

GoldenrodCity_Gym_Text_BeautyVictoriaAfter:
    .string "Wow, you must be good to beat me!\n"
    .string "Keep it up!$"

GoldenrodCity_Gym_Text_BeautySamanthaSeen:
    .string "Give it your best shot, or I'll take\n"
    .string "you down!$"

GoldenrodCity_Gym_Text_BeautySamanthaBeaten:
    .string "No! Oh, MEOWTH, I'm so sorry!$"

GoldenrodCity_Gym_Text_BeautySamanthaAfter:
    .string "I taught MEOWTH moves for taking on\n"
    .string "any type…$"

GoldenrodCity_Gym_Text_GymGuide:
    .string "Yo! CHAMP in making!\p"
    .string "This GYM is home to WHITNEY, the\n"
    .string "master of NORMAL-type POKéMON.\p"
    .string "Be cautious of her cute team.\p"
    .string "Some of the POKéMON in this gym\n"
    .string "have the newly discovered FAIRY\l"
    .string "type as well.\p"
    .string "Check ROUTE 34 if you need a\n"
    .string "FIGHTING-type or POISON-type.$"

GoldenrodCity_Gym_Text_GymGuideWin:
    .string "You won? Great! I was busy admiring\n"
    .string "the ladies here.$"

GoldenrodCity_Gym_Text_TeacherColetteSeen:
	.string "Have you forgotten anything?$"

GoldenrodCity_Gym_Text_TeacherColetteBeaten:
	.string "Kyaaah!$"

GoldenrodCity_Gym_Text_TeacherColetteAfterBattle:
	.string "Before I became a teacher, I used\n"
	.string "to forget a lot of things.$"

GoldenrodCity_Gym_Text_TeacherHillarySeen:
	.string "On sunny days, I think that the\n"
	.string "kids would rather be playing in the\l"
	.string "schoolyard than studying in class.$"

GoldenrodCity_Gym_Text_TeacherHillaryBeaten:
	.string "I didn't want to lose…$"

GoldenrodCity_Gym_Text_TeacherHillaryAfterBattle:
	.string "Studying is important, but\n"
	.string "exercise is just as vital.$"

GoldenrodCity_Gym_EventScript_B2B1::
	lock
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_GYM_SAMANTHA, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0 
	msgbox GoldenrodCity_Gym_Text_BeautySamanthaSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SAMANTHA, GoldenrodCity_Gym_Text_BeautySamanthaBeaten
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_GYM_CARRIE, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
	msgbox GoldenrodCity_Gym_Text_LassCarrieSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CARRIE, GoldenrodCity_Gym_Text_LassCarrieBeaten
	setvar VAR_WHITNEY_GYM_B2B_STATE, 2
	release
	end

GoldenrodCity_Gym_EventScript_B2B2::
	lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_GYM_HILLARY, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0 
	msgbox GoldenrodCity_Gym_Text_TeacherHillarySeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_HILLARY, GoldenrodCity_Gym_Text_TeacherHillaryBeaten
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_GYM_COLETTE, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
	msgbox GoldenrodCity_Gym_Text_TeacherColetteSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_COLETTE, GoldenrodCity_Gym_Text_TeacherColetteBeaten
	setvar VAR_WHITNEY_GYM_B2B_STATE, 3
	release
	end

GoldenrodCity_Gym_EventScript_B2B3::
	lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_GYM_VICTORIA, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
	msgbox GoldenrodCity_Gym_Text_BeautyVictoriaSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_VICTORIA, GoldenrodCity_Gym_Text_BeautyVictoriaBeaten
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_GYM_BRIDGET, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
	msgbox GoldenrodCity_Gym_Text_LassBridgetSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BRIDGET, GoldenrodCity_Gym_Text_LassBridgetBeaten
	setvar VAR_WHITNEY_GYM_B2B_STATE, 4
	release
	end
