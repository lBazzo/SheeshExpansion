.set LOCALID_BRUNOSROOM_BRUNO, 1
.set LOCALID_BRUNOSROOM_JASMINE, 2

PokemonLeague_BrunosRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague_BrunosRoom_OnResume::
	setvar VAR_0x8004, 2
	special DoPokemonLeagueLightingEffect
	clearflag FLAG_DEFEATED_BRUNO                                          
	clearflag FLAG_DEFEATED_JASMINE
	setvar VAR_BRUNOS_ROOM_STATE, 1
	end

PokemonLeague_BrunosRoom_EventScript_Bruno::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_BrunoDefeated
	goto_if_set FLAG_DEFEATED_JASMINE, PokemonLeague_BrunosRoom_EventScript_BrunoDefeatedJasmine
	goto_if_eq VAR_BRUNOS_ROOM_STATE, 2, PokemonLeague_BrunosRoom_EventScript_BrunoPostIntro
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_BrunoRematch
	msgbox PokemonLeague_BrunosRoom_Text_BeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_BrunosRoom_EventScript_BrunoDeclined
	case 0, PokemonLeague_BrunosRoom_EventScript_BrunoFight
	goto PokemonLeague_BrunosRoom_EventScript_BrunoDeclined

PokemonLeague_BrunosRoom_EventScript_BrunoDeclined::
	msgbox PokemonLeague_BrunosRoom_Text_BrunoDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_BRUNOS_ROOM_STATE, 2
	release
	end

PokemonLeague_BrunosRoom_EventScript_BrunoPostIntro::
	msgbox PokemonLeague_BrunosRoom_Text_AfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_BrunosRoom_EventScript_BrunoDeclined
	case 0, PokemonLeague_BrunosRoom_EventScript_BrunoFight
	goto PokemonLeague_BrunosRoom_EventScript_BrunoDeclined

PokemonLeague_BrunosRoom_EventScript_BrunoFight::
	msgbox PokemonLeague_BrunosRoom_Text_BrunoFightConfirmed, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_BRUNOSROOM_BRUNO, 6, 6
	setobjectxy LOCALID_BRUNOSROOM_JASMINE, 8, 3
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_BRUNOSROOM_BRUNO, Common_Movement_FaceDown
	applymovement LOCALID_BRUNOSROOM_JASMINE, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect
	msgbox PokemonLeague_BrunosRoom_Text_BrunoPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_BRUNO_1, PokemonLeague_BrunosRoom_Text_Beaten
	goto PokemonLeague_BrunosRoom_EventScript_BrunoOnDefeat

PokemonLeague_BrunosRoom_EventScript_BrunoRematch::
	msgbox PokemonLeague_BrunosRoom_Text_Rematch, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_BRUNO_2, PokemonLeague_BrunosRoom_Text_Beaten
	goto PokemonLeague_BrunosRoom_EventScript_BrunoOnDefeat

PokemonLeague_BrunosRoom_EventScript_BrunoOnDefeat::
	clearflag FLAG_TEMP_5	
	msgbox PokemonLeague_BrunosRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x28E, FALSE
	setmetatile 6, 2, 0x296, FALSE	
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	setvar VAR_LEAGUE_STATE, 4
	setflag FLAG_DEFEATED_BRUNO
	release
	end

PokemonLeague_BrunosRoom_EventScript_BrunoDefeated::
	msgbox PokemonLeague_BrunosRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_BrunosRoom_EventScript_BrunoDefeatedJasmine::
	msgbox PokemonLeague_BrunosRoom_Text_BrunoDefeatedJasmine, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_BrunosRoom_Text_Rematch:
    .string "BRUNO: Welcome back, young\n"
    .string "warrior.\p"
    .string "Through rigorous training, we have\n"
    .string "grown stronger.\p"
    .string "My rock-hard will is even more firm\n"
    .string "and unyielding.\p"
    .string "Are you prepared to face an even\n"
    .string "greater challenge?\p"
    .string "Show me the results of your\n"
    .string "training.\p"
    .string "Hoo hah!$"

PokemonLeague_BrunosRoom_Text_BeforeIntro:
    .string "I am BRUNO of the ELITE FOUR.\p"
    .string "I always train to the extreme be-\n"
    .string "cause I believe in our potential.\p"
    .string "That is how we became strong.\p"
    .string "Can you withstand our power?\p"
    .string "Hm? I see no fear in you. You look\n"
    .string "determined. Perfect for battle!\p"
    .string "Ready, {PLAYER}?$"

PokemonLeague_BrunosRoom_Text_BrunoDeclined:
	.string "Hoo Hah! Scared after all!$"

PokemonLeague_BrunosRoom_Text_AfterIntro:
    .string "Ready, {PLAYER}?$"

PokemonLeague_BrunosRoom_Text_BrunoFightConfirmed:
	.string "Hm! You also have belief in yourself!$"

PokemonLeague_BrunosRoom_Text_BrunoPreFight:
	.string "You will bow down\n"
    .string "to our overwhelming power!\p"
    .string "Hoo hah!$"

PokemonLeague_BrunosRoom_Text_Beaten:
    .string "Why? How could we lose?$"

PokemonLeague_BrunosRoom_Text_Defeat:
    .string "Having lost, I have no right to\n"
    .string "say anything…\p"
    .string "Go face your next challenge!$"

PokemonLeague_BrunosRoom_Text_BrunoDefeatedJasmine:
    .string "There is a strong will inside you.\n"
	.string "Hone it, and you will go far.$"






PokemonLeague_BrunosRoom_EventScript_Jasmine::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_JasmineDefeatedBruno
	goto_if_set FLAG_DEFEATED_JASMINE, PokemonLeague_BrunosRoom_EventScript_JasmineDefeated
	goto_if_eq VAR_BRUNOS_ROOM_STATE, 2, PokemonLeague_BrunosRoom_EventScript_JasminePostIntro
	msgbox PokemonLeague_BrunosRoom_Text_JasmineBeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_BrunosRoom_EventScript_JasmineDeclined
	case 0, PokemonLeague_BrunosRoom_EventScript_JasmineFight
	goto PokemonLeague_BrunosRoom_EventScript_JasmineDeclined

PokemonLeague_BrunosRoom_EventScript_JasmineDeclined::
	msgbox PokemonLeague_BrunosRoom_Text_JasmineDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_BRUNOS_ROOM_STATE, 2
	release
	end

PokemonLeague_BrunosRoom_EventScript_JasminePostIntro::
	msgbox PokemonLeague_BrunosRoom_Text_JasmineAfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_BrunosRoom_EventScript_JasmineDeclined
	case 0, PokemonLeague_BrunosRoom_EventScript_JasmineFight
	goto PokemonLeague_BrunosRoom_EventScript_JasmineDeclined

PokemonLeague_BrunosRoom_EventScript_JasmineFight::
	msgbox PokemonLeague_BrunosRoom_Text_JasmineFightConfirmed, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_BRUNOSROOM_BRUNO, 4, 3
	setobjectxy LOCALID_BRUNOSROOM_JASMINE, 6, 6
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_BRUNOSROOM_BRUNO, Common_Movement_FaceDown
	applymovement LOCALID_BRUNOSROOM_JASMINE, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect
	msgbox PokemonLeague_BrunosRoom_Text_JasminePreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_JASMINE_1, PokemonLeague_BrunosRoom_Text_JasmineBeaten
	goto PokemonLeague_BrunosRoom_EventScript_JasmineOnDefeat

PokemonLeague_BrunosRoom_EventScript_JasmineOnDefeat::
	clearflag FLAG_TEMP_5	
	msgbox PokemonLeague_BrunosRoom_Text_JasmineDefeat, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x28E, FALSE
	setmetatile 6, 2, 0x296, FALSE	
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	setvar VAR_LEAGUE_STATE, 4
	setflag FLAG_DEFEATED_JASMINE
	release
	end

PokemonLeague_BrunosRoom_EventScript_JasmineDefeated::
	msgbox PokemonLeague_BrunosRoom_Text_JasmineDefeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_BrunosRoom_EventScript_JasmineDefeatedBruno::
	msgbox PokemonLeague_BrunosRoom_Text_JasmineDefeatedBruno, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_BrunosRoom_Text_JasmineBeforeIntro:
    .string "Thank you for your help at the\n"
    .string "Lighthouse... But this is different.\p"
	.string "Please allow me to introduce myself.\p"
	.string "I'm Jasmine, a former GYM LEADER.\n"
	.string "I use the...clang! Steel type!\p"
	.string "...Do you know about the Steel type?\p"
	.string "They are very hard, cold, sharp, and\n"
	.string "really strong!\p"
	.string "Um... May we begin?$"

PokemonLeague_BrunosRoom_Text_JasmineDeclined:
    .string "Oh... Okay. Talk to me again when you\n"
	.string "want to battle.$"

PokemonLeague_BrunosRoom_Text_JasmineAfterIntro:
	.string "Um... May we begin?$"

PokemonLeague_BrunosRoom_Text_JasmineFightConfirmed:
    .string "My steel types are strong. Um... I'm not\n"
	.string "lying.$"

PokemonLeague_BrunosRoom_Text_JasminePreFight:
    .string "Properly tempered steel won't rust\n"
	.string "easily!$"

PokemonLeague_BrunosRoom_Text_JasmineBeaten:
    .string "Well done...$"

PokemonLeague_BrunosRoom_Text_JasmineDefeat:
    .string "You are a better Trainer than me, in\n"
	.string "both skill and kindness.\p"
	.string "Um... I don't know how to say this, but\n"
	.string "good luck...$"

PokemonLeague_BrunosRoom_Text_JasmineDefeatedBruno:
	.string "Um... I don't know how to say this, but\n"
	.string "good luck...$"

