.set LOCALID_ROUTE26_LOLA, 17
.set LOCALID_ROUTE26_MIKE, 18

Route26_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route26_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route26_EventScript_Jake::
	trainerbattle_single TRAINER_JAKE Route26_Text_CooltrainermJakeSeen, Route26_Text_CooltrainermJakeBeaten
	msgbox Route26_Text_CooltrainermJakeAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Gaven::
	trainerbattle_single TRAINER_GAVEN Route26_Text_CooltrainermGavenSeen, Route26_Text_CooltrainermGavenBeaten
	msgbox Route26_Text_CooltrainermGavenAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Joyce::
	trainerbattle_single TRAINER_JOYCE Route26_Text_CooltrainerfJoyceSeen, Route26_Text_CooltrainerfJoyceBeaten
	msgbox Route26_Text_CooltrainerfJoyceAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Beth::
	trainerbattle_single TRAINER_BETH Route26_Text_CooltrainerfBethSeen, Route26_Text_CooltrainerfBethBeaten
	msgbox Route26_Text_CooltrainerfBethAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Richard::
	trainerbattle_single TRAINER_RICHARD Route26_Text_PsychicRichardSeen, Route26_Text_PsychicRichardBeaten
	msgbox Route26_Text_PsychicRichardAfter, MSGBOX_AUTOCLOSE
	end

Route26_Text_CooltrainermJakeSeen:
    .string "I'm making my final preparations\n"
    .string "for the POKéMON LEAGUE.$"

Route26_Text_CooltrainermJakeBeaten:
    .string "I blew it!$"

Route26_Text_CooltrainermJakeAfter:
    .string "It's going to be tough to win at\n"
    .string "the LEAGUE.\p"
    .string "I need to do some more training.\p"
    .string "I hear that the LEAGUE's ELITE\n"
    .string "FOUR are tougher than GYM LEADERS.$"

Route26_Text_CooltrainermGavenSeen:
    .string "By experiencing tough battles, you\n"
    .string "gain power.$"

Route26_Text_CooltrainermGavenBeaten:
    .string "Gaah! Life is even tougher!$"

Route26_Text_CooltrainermGavenAfter:
    .string "To get to POKéMON LEAGUE, you have\n"
    .string "to get through VICTORY ROAD.\p"
    .string "But VICTORY ROAD is tough.\p"
    .string "Practically nobody goes there!$"

Route26_Text_CooltrainerfJoyceSeen:
    .string "Since you've come this far,\n"
    .string "you must be good.\p"
    .string "I'm going to give this battle\n"
    .string "everything I've got!$"

Route26_Text_CooltrainerfJoyceBeaten:
    .string "No! I don't believe this!$"

Route26_Text_CooltrainerfJoyceAfter:
    .string "I've defeated eight GYM LEADERS,\n"
    .string "so I was feeling confident.\p"
    .string "I'll have to try harder next time.$"

Route26_Text_CooltrainerfBethSeen:
    .string "I lost to a trainer named SILVER.\p"
    .string "He was really strong, but…\p"
    .string "It was as if he absolutely had to\n"
    .string "win at any cost.\p"
    .string "I felt sorry for his POKéMON.$"

Route26_Text_CooltrainerfBethBeaten:
    .string "POKéMON aren't tools of war.$"

Route26_Text_CooltrainerfBethAfter:
    .string "POKéMON are in-valuable, lifelong\n"
    .string "partners.$"

Route26_Text_PsychicRichardSeen:
    .string "Wow, look at all those BADGES!\n"
    .string "I'm impressed.\p"
    .string "But you're not satisfied by just\n"
    .string "collecting them, right?$"

Route26_Text_PsychicRichardBeaten:
    .string "Good battle!$"

Route26_Text_PsychicRichardAfter:
    .string "People and POKéMON grow from their\n"
    .string "experiences.\p"
    .string "Don't get lazy and complacent.$"

Route26_Text_Sign:
    .string "ROUTE 26\p"
    .string "POKéMON LEAGUE\n"
    .string "RECEPTION GATE$"









Route26_EventScript_B2B::
    lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
    playse SE_PIN
	applymovement LOCALID_ROUTE26_LOLA, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_1, 65, Route26_EventScript_AdjustLola1
	call_if_eq VAR_TEMP_1, 66, Route26_EventScript_AdjustLola2
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0 
	msgbox Route26_Text_LolaSeenText, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_LOLA, Route26_Text_LolaBeatenText
    playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
    playse SE_PIN
	applymovement LOCALID_ROUTE26_MIKE, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_1, 65, Route26_EventScript_AdjustMike1
	call_if_eq VAR_TEMP_1, 64, Route26_EventScript_AdjustMike2
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
    msgbox Route26_Text_MikeSeenText, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_MIKE, Route26_Text_MikeBeatenText
    setvar VAR_ALL_B2B_STATE, 13
    release
    end

Route26_EventScript_AdjustLola1::
    applymovement LOCALID_ROUTE26_LOLA, Common_Movement_WalkDown1
    waitmovement 0
    return

Route26_EventScript_AdjustLola2::
    applymovement LOCALID_ROUTE26_LOLA, Route26_Movement_AdjustLola2
    waitmovement 0
    return

Route26_EventScript_AdjustMike1::
    applymovement LOCALID_ROUTE26_MIKE, Common_Movement_WalkUp1
    waitmovement 0
    return

Route26_EventScript_AdjustMike2::
    applymovement LOCALID_ROUTE26_MIKE, Route26_Movement_AdjustMike2
    waitmovement 0
    return

Route26_Movement_AdjustLola2:
	walk_down
	walk_down
	step_end

Route26_Movement_AdjustMike2:
	walk_up
	walk_up
	step_end

Route26_EventScript_Mike::
	lock
    faceplayer
	msgbox Route26_Text_MikeAfterBattleText, MSGBOX_AUTOCLOSE
    closemessage
    release
	end

Route26_EventScript_Lola::
	lock
    faceplayer
	msgbox Route26_Text_LolaAfterBattleText, MSGBOX_AUTOCLOSE
    closemessage
    release
	end

Route26_Text_MikeSeenText:
    .string "My chance of losing? Not even one\n"
    .string "percent!$"

Route26_Text_MikeBeatenText:
    .string "That's odd.$"

Route26_Text_MikeAfterBattleText:
    .string "I know my short-comings now.\p"
    .string "Thanks for showing me!$"

Route26_Text_LolaSeenText:
    .string "If you're not serious, you won't\n"
    .string "be able to beat me.$"

Route26_Text_LolaBeatenText:
    .string "Way to go!$"

Route26_Text_LolaAfterBattleText:
    .string "I'd expect nothing less from someone\n"
    .string "aiming for the POKéMON LEAGUE.$"







