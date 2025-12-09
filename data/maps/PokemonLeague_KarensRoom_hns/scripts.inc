.set LOCALID_KARENSROOM_KAREN, 1
.set LOCALID_KARENSROOM_MORTY, 2

PokemonLeague_KarensRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_KarensRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague_KarensRoom_OnResume::
	setvar VAR_0x8004, 3
	special DoPokemonLeagueLightingEffect
	clearflag FLAG_DEFEATED_KAREN                                          
	clearflag FLAG_DEFEATED_MORTY
	setvar VAR_KARENS_ROOM_STATE, 1
	end

PokemonLeague_KarensRoom_EventScript_Karen::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_KAREN, PokemonLeague_KarensRoom_EventScript_KarenDefeated
	goto_if_set FLAG_DEFEATED_MORTY, PokemonLeague_KarensRoom_EventScript_KarenDefeatedMorty
	goto_if_eq VAR_KARENS_ROOM_STATE, 2, PokemonLeague_KarensRoom_EventScript_KarenPostIntro
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_KarensRoom_EventScript_KarenRematch
	msgbox PokemonLeague_KarensRoom_Text_BeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KarensRoom_EventScript_KarenDeclined
	case 0, PokemonLeague_KarensRoom_EventScript_KarenFight
	goto PokemonLeague_KarensRoom_EventScript_KarenDeclined

PokemonLeague_KarensRoom_EventScript_KarenDeclined::
	msgbox PokemonLeague_KarensRoom_Text_KarenDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KARENS_ROOM_STATE, 2
	release
	end

PokemonLeague_KarensRoom_EventScript_KarenPostIntro::
	msgbox PokemonLeague_KarensRoom_Text_AfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KarensRoom_EventScript_KarenDeclined
	case 0, PokemonLeague_KarensRoom_EventScript_KarenFight
	goto PokemonLeague_KarensRoom_EventScript_KarenDeclined

PokemonLeague_KarensRoom_EventScript_KarenFight::
	msgbox PokemonLeague_KarensRoom_Text_KarenFightConfirmed, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_KARENSROOM_KAREN, 6, 6
	setobjectxy LOCALID_KARENSROOM_MORTY, 8, 3
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_KARENSROOM_KAREN, Common_Movement_FaceDown
	applymovement LOCALID_KARENSROOM_MORTY, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect
	msgbox PokemonLeague_KarensRoom_Text_KarenPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KAREN_1, PokemonLeague_KarensRoom_Text_Beaten
	goto PokemonLeague_KarensRoom_EventScript_KarenOnDefeat

PokemonLeague_KarensRoom_EventScript_KarenRematch::
	msgbox PokemonLeague_KarensRoom_Text_Rematch, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KAREN_2, PokemonLeague_KarensRoom_Text_Beaten
	goto PokemonLeague_KarensRoom_EventScript_KarenOnDefeat

PokemonLeague_KarensRoom_EventScript_KarenOnDefeat::
    clearflag FLAG_TEMP_5
	msgbox PokemonLeague_KarensRoom_Text_Defeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 5
	setflag FLAG_DEFEATED_KAREN
	release
	end

PokemonLeague_KarensRoom_EventScript_KarenDefeated::
	msgbox PokemonLeague_KarensRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KarensRoom_EventScript_KarenDefeatedMorty::
	msgbox PokemonLeague_KarensRoom_Text_KarenDefeatedMorty, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KarensRoom_Text_Rematch:
    .string "KAREN: Ah, it's you again.\p"
    .string "I trust you haven't forgotten\n"
    .string "my belief:\p"
    .string "True strength arises from trust\n"
    .string "in one's POKéMON.\p"
    .string "Since our last encounter, my\n"
    .string "bond with my POKéMON has\l"
    .string "deepened further.\p"
    .string "Are you ready to face a team\n"
    .string "united by an unbreakable bond?\p"
    .string "Show me the power of the bond\n"
    .string "with your POKéMON.$"

PokemonLeague_KarensRoom_Text_BeforeIntro:
    .string "I am KAREN of the ELITE FOUR.\p"
    .string "You're {PLAYER}? How amusing.\p"
    .string "I love DARK-type POKéMON.\p"
    .string "I find their wild, tough image\n"
    .string "to be so appealing. And they're\l"
    .string "so strong.\p"
    .string "Think you can take them?$"

PokemonLeague_KarensRoom_Text_KarenDeclined:
	.string "Boo, you're no fun.$"

PokemonLeague_KarensRoom_Text_AfterIntro:
	.string "Think you can take on my POKéMON?$"

PokemonLeague_KarensRoom_Text_KarenFightConfirmed:
	.string "Just try to entertain me.$"

PokemonLeague_KarensRoom_Text_KarenPreFight:
	.string "Let's go.$"

PokemonLeague_KarensRoom_Text_Beaten:
    .string "Well, aren't you good. I like that\n"
    .string "in a trainer.$"

PokemonLeague_KarensRoom_Text_Defeat:
    .string "Strong POKéMON.\p"
    .string "Weak POKéMON.\p"
    .string "That is only the selfish\n"
    .string "perception of people.\p"
    .string "Truly skilled trainers should\n"
    .string "try to win with their favorites.\p"
    .string "I like your style. You understand\n"
    .string "what's important.\p"
    .string "Go on--the CHAMPION is waiting.$"

PokemonLeague_KarensRoom_Text_KarenDefeatedMorty:
    .string "Strong POKéMON.\p"
    .string "Weak POKéMON.\p"
    .string "That is only the selfish\n"
    .string "perception of people.\p"
    .string "Truly skilled trainers should\n"
    .string "try to win with their favorites.\p"
    .string "I like your style. You understand\n"
    .string "what's important.\p"
    .string "Go on--the CHAMPION is waiting.$"







PokemonLeague_KarensRoom_EventScript_Morty::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_KAREN, PokemonLeague_KarensRoom_EventScript_MortyDefeatedKaren
	goto_if_set FLAG_DEFEATED_MORTY, PokemonLeague_KarensRoom_EventScript_MortyDefeated
	goto_if_eq VAR_KARENS_ROOM_STATE, 2, PokemonLeague_KarensRoom_EventScript_MortyPostIntro
	msgbox PokemonLeague_KarensRoom_Text_MortyBeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KarensRoom_EventScript_MortyDeclined
	case 0, PokemonLeague_KarensRoom_EventScript_MortyFight
	goto PokemonLeague_KarensRoom_EventScript_MortyDeclined

PokemonLeague_KarensRoom_EventScript_MortyDeclined::
	msgbox PokemonLeague_KarensRoom_Text_MortyDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KARENS_ROOM_STATE, 2
	release
	end

PokemonLeague_KarensRoom_EventScript_MortyPostIntro::
	msgbox PokemonLeague_KarensRoom_Text_MortyAfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_KarensRoom_EventScript_MortyDeclined
	case 0, PokemonLeague_KarensRoom_EventScript_MortyFight
	goto PokemonLeague_KarensRoom_EventScript_MortyDeclined

PokemonLeague_KarensRoom_EventScript_MortyFight::
	msgbox PokemonLeague_KarensRoom_Text_MortyFightConfirmed, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_KARENSROOM_KAREN, 4, 3
	setobjectxy LOCALID_KARENSROOM_MORTY, 6, 6
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_KARENSROOM_KAREN, Common_Movement_FaceDown
	applymovement LOCALID_KARENSROOM_MORTY, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect
	msgbox PokemonLeague_KarensRoom_Text_MortyPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_MORTY_1, PokemonLeague_KarensRoom_Text_MortyBeaten
	goto PokemonLeague_KarensRoom_EventScript_MortyOnDefeat

PokemonLeague_KarensRoom_EventScript_MortyOnDefeat::
    clearflag FLAG_TEMP_5
	msgbox PokemonLeague_KarensRoom_Text_MortyDefeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 5
	setflag FLAG_DEFEATED_MORTY
	release
	end

PokemonLeague_KarensRoom_EventScript_MortyDefeated::
	msgbox PokemonLeague_KarensRoom_Text_MortyDefeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KarensRoom_EventScript_MortyDefeatedKaren::
	msgbox PokemonLeague_KarensRoom_Text_MortyDefeatedKaren, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KarensRoom_Text_MortyBeforeIntro:
    .string "We meet again, {PLAYER}.\p"
	.string "I must say, I was impressed by your\n"
	.string "skill back in BURNED TOWER.\p"
	.string "I would like to say you won because I\n"
	.string "held back, but truthfully, you showed\l"
	.string "me real promise.\p"
	.string "However, do not mistake me for the\n"
	.string "trainer I was back then.\p"
	.string "After a lifetime of preparation, I have\n"
	.string "finally realised the future in which I\l"
	.string "tamed the LEGENDARY POKéMON.\p"
	.string "Tell me, {PLAYER}. Do you still think you\n"
	.string "are on our level?$"

PokemonLeague_KarensRoom_Text_MortyDeclined:
	.string "Ah, so you see it too. My potential is\n"
	.string "just on another level.$"

PokemonLeague_KarensRoom_Text_MortyAfterIntro:
	.string "Tell me, {PLAYER}. Do you still think you\n"
	.string "are on our level?$"

PokemonLeague_KarensRoom_Text_MortyFightConfirmed:
	.string "I respect your confidence. Let us put\n"
	.string "it to the test.$"

PokemonLeague_KarensRoom_Text_MortyPreFight:
	.string "This is where I move one step ahead.\n"
	.string "Just try to keep up with me!$"

PokemonLeague_KarensRoom_Text_MortyBeaten:
	.string "I'm not good enough yet...$"

PokemonLeague_KarensRoom_Text_MortyDefeat:
	.string "I don't think our potentials are so\n"
	.string "different. But you seem to have\l"
	.string "something more than that... So be it.\p"
	.string "The CHAMPION is waiting. Go and show\n"
	.string "him what you're made of.$"

PokemonLeague_KarensRoom_Text_MortyDefeatedKaren:
	.string "The CHAMPION is waiting. Go and show\n"
	.string "him what you're made of.$"
