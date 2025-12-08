.set LOCALID_KOGASROOM_KOGA, 1
.set LOCALID_KOGASROOM_GIOVANNI, 2

PokemonLeague_KogasRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_KogasRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague_KogasRoom_OnResume::
	setvar VAR_0x8004, 1
	special DoPokemonLeagueLightingEffect
	clearflag FLAG_DEFEATED_KOGA                                          
	clearflag FLAG_DEFEATED_GIOVANNI
	setvar VAR_KOGAS_ROOM_STATE, 1
	end

PokemonLeague_KogasRoom_EventScript_Koga::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_KOGA, PokemonLeague_KogasRoom_EventScript_KogaDefeated
	goto_if_set FLAG_DEFEATED_GIOVANNI, PokemonLeague_KogasRoom_EventScript_KogaDefeatedGiovanni
	goto_if_eq VAR_KOGAS_ROOM_STATE, 2, PokemonLeague_KogasRoom_EventScript_KogaPostIntro
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_KogasRoom_EventScript_KogaRematch
	msgbox PokemonLeague_KogasRoom_Text_BeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KogasRoom_EventScript_KogaDeclined
	case 0, PokemonLeague_KogasRoom_EventScript_KogaFight
	goto PokemonLeague_KogasRoom_EventScript_KogaDeclined

PokemonLeague_KogasRoom_EventScript_KogaDeclined::
	msgbox PokemonLeague_KogasRoom_Text_KogaDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KOGAS_ROOM_STATE, 2
	release
	end

PokemonLeague_KogasRoom_EventScript_KogaPostIntro::
	msgbox PokemonLeague_KogasRoom_Text_KogaAfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KogasRoom_EventScript_KogaDeclined
	case 0, PokemonLeague_KogasRoom_EventScript_KogaFight
	goto PokemonLeague_KogasRoom_EventScript_KogaDeclined

PokemonLeague_KogasRoom_EventScript_KogaFight::
	msgbox PokemonLeague_KogasRoom_Text_KogaFightConfirmed, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_KOGASROOM_KOGA, 6, 6
	setobjectxy LOCALID_KOGASROOM_GIOVANNI, 8, 3
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_KOGASROOM_KOGA, Common_Movement_FaceDown
	applymovement LOCALID_KOGASROOM_GIOVANNI, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect 
	msgbox PokemonLeague_KogasRoom_Text_KogaPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KOGA_1, PokemonLeague_KogasRoom_Text_Beaten
	goto PokemonLeague_KogasRoom_EventScript_KogaOnDefeat

PokemonLeague_KogasRoom_EventScript_KogaRematch::
	msgbox PokemonLeague_KogasRoom_Text_Rematch, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KOGA_2, PokemonLeague_KogasRoom_Text_Beaten
	goto PokemonLeague_KogasRoom_EventScript_KogaOnDefeat

PokemonLeague_KogasRoom_EventScript_KogaOnDefeat::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_KogasRoom_Text_Defeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 3
	setflag FLAG_DEFEATED_KOGA
	release
	end

PokemonLeague_KogasRoom_EventScript_KogaDefeated::
	msgbox PokemonLeague_KogasRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KogasRoom_EventScript_KogaDefeatedGiovanni::
	msgbox PokemonLeague_KogasRoom_Text_KogaDefeatedGiovanni, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KogasRoom_Text_Rematch:
    .string "KOGA: Fwahahahaha!\p"
    .string "You return, brave challenger.\p"
    .string "My ninja skills have sharpened.\p"
    .string "New sinister traps await you.\p"
    .string "Poison, sleep, and more...\n"
    .string "Be ready!\p"
    .string "Fwahahahaha!\p"
    .string "Show me how you've grown!$"

PokemonLeague_KogasRoom_Text_KogaDeclined:
    .string "So be it. No amount of planning will\n"
	.string "prepare you for what's to come!$"

PokemonLeague_KogasRoom_Text_BeforeIntro:
    .string "Fwahahahaha!\p"
    .string "I am KOGA of the ELITE FOUR.\p"
    .string "I live in shadows, a ninja!\p"
    .string "My intricate style will confound\n"
    .string "and destroy you!\p"
    .string "Confusion, sleep, poison…\p"
    .string "Prepare to be the victim of my\n"
    .string "sinister technique!\p"
    .string "Fwahahahaha!\p"
    .string "POKéMON is not merely about brute\n"
    .string "force--you shall see soon enough!\p"
	.string "Are you ready to experience the dark\n"
	.string "arts? Fwahahaha!$"

PokemonLeague_KogasRoom_Text_KogaAfterIntro:
	.string "Are you ready to experience the dark\n"
	.string "arts? Fwahahaha!$"

PokemonLeague_KogasRoom_Text_KogaFightConfirmed:
	.string "Fool! You will see how wrong you were to\n"
	.string "choose me soon enough!$"

PokemonLeague_KogasRoom_Text_KogaPreFight:
	.string "No turning back now! There's no escape!$"

PokemonLeague_KogasRoom_Text_Beaten:
    .string "Ah!\n"
    .string "You have proven your worth!$"

PokemonLeague_KogasRoom_Text_Defeat:
    .string "I subjected you to everything I\n"
    .string "could muster.\p"
    .string "But my efforts failed. I must hone\n"
    .string "my skills.\p"
    .string "Go on to the next room, and put\n"
    .string "your abilities to test!$"

PokemonLeague_KogasRoom_Text_KogaDefeatedGiovanni:
    .string "I see. Though I did not experience it\n"
	.string "for myself, you have clearly honed your\l"
	.string "skills through intense training.\p"
    .string "Go on to the next room, and put\n"
    .string "your abilities to test!$"

PokemonLeague_KogasRoom_EventScript_Giovanni::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_KOGA, PokemonLeague_KogasRoom_EventScript_GiovanniDefeatedKoga
	goto_if_set FLAG_DEFEATED_GIOVANNI, PokemonLeague_KogasRoom_EventScript_GiovanniDefeated
	goto_if_eq VAR_KOGAS_ROOM_STATE, 2, PokemonLeague_KogasRoom_EventScript_GiovanniPostIntro
	msgbox PokemonLeague_KogasRoom_Text_GiovanniBeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KogasRoom_EventScript_GiovanniDeclined
	case 0, PokemonLeague_KogasRoom_EventScript_GiovanniFight
	goto PokemonLeague_KogasRoom_EventScript_GiovanniDeclined

PokemonLeague_KogasRoom_EventScript_GiovanniDeclined::
	msgbox PokemonLeague_KogasRoom_Text_GiovanniDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KOGAS_ROOM_STATE, 2
	release
	end

PokemonLeague_KogasRoom_EventScript_GiovanniPostIntro::
	msgbox PokemonLeague_KogasRoom_Text_GiovanniAfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KogasRoom_EventScript_GiovanniDeclined
	case 0, PokemonLeague_KogasRoom_EventScript_GiovanniFight
	goto PokemonLeague_KogasRoom_EventScript_GiovanniDeclined

PokemonLeague_KogasRoom_EventScript_GiovanniFight::
	msgbox PokemonLeague_KogasRoom_Text_GiovanniFightConfirmed, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_KOGASROOM_GIOVANNI, 6, 6
	setobjectxy LOCALID_KOGASROOM_KOGA, 4, 3
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_KOGASROOM_KOGA, Common_Movement_FaceDown
	applymovement LOCALID_KOGASROOM_GIOVANNI, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect 
	msgbox PokemonLeague_KogasRoom_Text_GiovanniPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_GIOVANNI, PokemonLeague_KogasRoom_Text_GiovanniBeaten
	goto PokemonLeague_KogasRoom_EventScript_GiovanniOnDefeat

PokemonLeague_KogasRoom_EventScript_GiovanniOnDefeat::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_KogasRoom_Text_GiovanniDefeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 3
	setflag FLAG_DEFEATED_GIOVANNI
	release
	end

PokemonLeague_KogasRoom_EventScript_GiovanniDefeated::
	msgbox PokemonLeague_KogasRoom_Text_GiovanniDefeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KogasRoom_EventScript_GiovanniDefeatedKoga::
	msgbox PokemonLeague_KogasRoom_Text_GiovanniDefeatedKoga, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KogasRoom_Text_GiovanniBeforeIntro:
    .string "Hah! What have we here? A child dares\n"
	.string "to challenge the ELITE FOUR?\p"
	.string "I jest, of course. I have had my fair\n"
	.string "share of run-ins with child prodigies.\p"
	.string "Hmm? You believe you know me?\p"
	.string "Your assumption is correct. I am the\n"
	.string "former BOSS of TEAM ROCKET.\p"
	.string "I have spent the last three years\n"
	.string "training in isolation, but it has not\l"
	.string "been to return to that organisation.\p"
	.string "I simply wish to enjoy the highs and\n"
	.string "lows of POKéMON battles as I did once\l"
	.string "before.\p"
	.string "You managed to clear the first room, so\n"
	.string "clearly there is something in you that\l"
	.string "is worth getting invested for.\p"
	.string "That, and you remind me of someone else\n"
	.string "I fought before...\p"
	.string "Ha! Alright! I'm really feeling it now!\n"
	.string "Are you ready to go, {PLAYER}?$"

PokemonLeague_KogasRoom_Text_GiovanniDeclined:
	.string "What? How disappointing!$"

PokemonLeague_KogasRoom_Text_GiovanniAfterIntro:
	.string "Ha! Alright! I'm really feeling it now!\n"
	.string "Are you ready to go, {PLAYER}?$"

PokemonLeague_KogasRoom_Text_GiovanniFightConfirmed:
	.string "Haha! Bring it on!$"

PokemonLeague_KogasRoom_Text_GiovanniPreFight:
	.string "You may have beaten TEAM ROCKET, but\n"
	.string "fighting me is another story! I'll show\l"
	.string "you the results of my training!$"

PokemonLeague_KogasRoom_Text_GiovanniBeaten:
	.string "What!? That's outrageous! There's no\n"
	.string "way I lost!$"

PokemonLeague_KogasRoom_Text_GiovanniDefeat:
	.string "Fine. I'll admit it. You're tough.\p"
	.string "Hehehe...\p"
	.string "I should feel crushed that I lost after\n"
	.string "all my hard work, but now, I only feel\l"
	.string "inspired to work even harder.\p"
	.string "The next room won't pull any punches.\n"
	.string "Give it everything you've got!$"

PokemonLeague_KogasRoom_Text_GiovanniDefeatedKoga:
	.string "I see you're strong, {PLAYER}.\n"
	.string "Congratulations on your victory.\p"
	.string "The next room won't pull any punches.\n"
	.string "Give it everything you've got!$"
