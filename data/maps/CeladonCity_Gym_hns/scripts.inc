CeladonCity_Gym_hns_MapScripts::
	.byte 0


CeladonCity_Gym_EventScript_Erika::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, CeladonCity_Gym_EventScript_Erika_Defeated
	msgbox CeladonCity_Gym_Text_ErikaBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERIKA, CeladonCity_Gym_Text_ErikaBeaten
	message Text_ReceivedFogBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CeladonCity_Gym_Text_ErikaExplainTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
	setvar VAR_ECRUTEAK_CITY_STATE, 5
	setflag FLAG_BADGE04_GET
	setflag FLAG_DEFEATED_ECRUTEAK_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_FOUNTAIN_ERIKA
	closemessage
	release
	end

CeladonCity_Gym_EventScript_Erika_Defeated::
	msgbox CeladonCity_Gym_Text_ErikaAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonCity_Gym_Text_ErikaBeforeBattle:
	.string "ERIKA: Hello… Lovely weather,\n"
	.string "isn't it? It's so pleasant…\p"
	.string "…I'm afraid I may doze off…\p"
	.string "My name is ERIKA. I am the temporary\n"
	.string "LEADER of ECRUTEAK GYM.\p"
	.string "A little bird told me you managed to\n"
	.string "defeat MORTY in battle...\p"
	.string "An incredible achievement, considering\n"
	.string "I have taken his place as GYM LEADER\l"
	.string "here so he may chase greater ambitions.\p"
	.string "However, don't mistake me for a\n"
	.string "pushover just because I'm covering for\l"
	.string "him.\p"
	.string "My grass POKéMON and I have honed our\n"
	.string "elegant fighting style in KANTO.\l"
	.string "Allow me to demonstrate it to you now.$"

CeladonCity_Gym_Text_ErikaBeaten:
	.string "ERIKA: Oh! I concede defeat…\p"
	.string "You are remarkably strong…\p"
	.string "I shall give you the FOGBADGE…$"

Text_ReceivedFogBadge:
	.string "{PLAYER} received the FOGBADGE.$"

ErikaText_FogBadgeSpeech:
	.string "ERIKA: That was a delightful\n"
	.string "match. I felt inspired.\p" 
	.string "Now you have the FOGBADGE, POKéMON up\n"
	.string "to Level 50 will obey you.\p"
	.string "Also, any POKéMON that knows\n"
	.string "SURF will be able to use it\l"
	.string "anytime.\p"
	.string "I want you to have this too.$"

CeladonCity_Gym_Text_PlayerReceivedRainbowBadge:
	.string "{PLAYER} received FOGBADGE.$"

CeladonCity_Gym_Text_ErikaExplainTM:
	.string "ERIKA: That was a delightful\n"
	.string "match. I felt inspired.\p"
	.string "Now you have the FOGBADGE, POKéMON up\n"
	.string "to Level 50 will obey you.\p"
	.string "Also, any POKéMON that knows\n"
	.string "SURF will be able to use it\l"
	.string "anytime.\p"
	.string "I want you to have this too.\n"
	.string "It is GIGA DRAIN.\p"
	.string "It is a wonderful move that\n"
	.string "drains half the damage it inflicts\l"
	.string "to heal your POKéMON.\p"
	.string "Please use it if it pleases you…$"

CeladonCity_Gym_Text_ErikaAfterBattle:
	.string "ERIKA: Losing leaves a bitter\n"
	.string "aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"

CeladonCity_Gym_Text_ErikaRematch:
	.string "ERIKA: Oh, hello.\p"
	.string "What a surprise, KANTO CHAMPION!\p"
	.string "It's so lovely to see you again.\p"
	.string "Your journey must have been so\n"
	.string "exciting.\p"
	.string "Even champions enjoy a challenge.\p"
	.string "Want to have a rematch with me?$"

CeladonCity_Gym_Text_ErikaRematchDefeat:
	.string "ERIKA: Losing still leaves a\n"
	.string "bitter aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"

CeladonCity_Gym_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE CeladonCity_Gym_Text_LassMichelleSeen, CeladonCity_Gym_Text_LassMichelleBeaten
	msgbox CeladonCity_Gym_Text_LassMichelleAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_LassMichelleSeen:
	.string "Do you think a girls-only GYM is\n"
	.string "rare?$"

CeladonCity_Gym_Text_LassMichelleBeaten:
	.string "Oh, bleah!$"

CeladonCity_Gym_Text_LassMichelleAfter:
	.string "I just got careless, that's all!$"


CeladonCity_Gym_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA CeladonCity_Gym_Text_PicnickerTanyaSeen, CeladonCity_Gym_Text_PicnickerTanyaBeaten
	msgbox CeladonCity_Gym_Text_PicnickerTanyaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_PicnickerTanyaSeen:
	.string "Oh, a battle? That's kind of scary,\n"
	.string "but OK!$"

CeladonCity_Gym_Text_PicnickerTanyaBeaten:
	.string "Oh, that's it?$"

CeladonCity_Gym_Text_PicnickerTanyaAfter:
	.string "Oh, look at all your BADGES. No\n"
	.string "wonder I couldn't win!$"

CeladonCity_Gym_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA CeladonCity_Gym_Text_BeautyJuliaSeen, CeladonCity_Gym_Text_BeautyJuliaBeaten
	msgbox CeladonCity_Gym_Text_BeautyJuliaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_BeautyJuliaSeen:
	.string "Were you looking at these flowers\n"
	.string "or at me?$"

CeladonCity_Gym_Text_BeautyJuliaBeaten:
	.string "How annoying!$"

CeladonCity_Gym_Text_BeautyJuliaAfter:
	.string "How do I go about becoming\n"
	.string "ladylike like ERIKA?$"

CeladonCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Text_GymStatue::
    .string "ECRUTEAK POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "BOFA, SUGMA$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
    .string "ECRUTEAK POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
	.string "BOFA, SUGMA, {PLAYER}$"

CeladonCity_Gym_EventScript_Quinn::
	trainerbattle_single TRAINER_QUINN, CeladonCity_Gym_Text_CooltrainerFQuinn_Seen, CeladonCity_Gym_Text_CooltrainerFQuinn_Beaten
	msgbox CeladonCity_Gym_Text_CooltrainerFQuinn_AfterBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_CooltrainerFQuinn_Seen:
	.string "You there! Want to battle?$"

CeladonCity_Gym_Text_CooltrainerFQuinn_Beaten:
	.string "Down and out…$"

CeladonCity_Gym_Text_CooltrainerFQuinn_AfterBattle:
	.string "You're strong.\p"
	.string "You obviously must have trained\n"
	.string "hard.$"

CeladonCity_Gym_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE, CeladonCity_Gym_Text_PicnickerHope_Seen, CeladonCity_Gym_Text_PicnickerHope_Beaten
	msgbox CeladonCity_Gym_Text_PicnickerHope_AfterBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Sharon::
	trainerbattle_single TRAINER_SHARON, CeladonCity_Gym_Text_PicnickerSharon_Seen, CeladonCity_Gym_Text_PicnickerSharon_Beaten
	msgbox CeladonCity_Gym_Text_PicnickerSharon_AfterBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_PicnickerHope_Seen:
	.string "I have a feeling that I can win.\p"
	.string "Let's see if I'm right!$"

CeladonCity_Gym_Text_PicnickerHope_Beaten:
	.string "Aww, you are too strong.$"

CeladonCity_Gym_Text_PicnickerHope_AfterBattle:
	.string "Sigh... being a GYM trainer is hard work.$"

CeladonCity_Gym_Text_PicnickerSharon_Seen:
	.string "Um…\n"
	.string "I…$"

CeladonCity_Gym_Text_PicnickerSharon_Beaten:
	.string "…$"

CeladonCity_Gym_Text_PicnickerSharon_AfterBattle:
	.string "……I'll go train some more…$"

