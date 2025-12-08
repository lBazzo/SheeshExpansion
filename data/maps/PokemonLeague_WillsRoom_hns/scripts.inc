.set LOCALID_WILLSROOM_WILL, 1
.set LOCALID_WILLSROOM_BUGSY, 2

PokemonLeague_WillsRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_WillsRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

EliteFourRoom_OnLoad::
	call_if_eq VAR_TEMP_0, 1, EliteFourRoom_CreateDoor
	end

EliteFourRoom_CreateDoor::
	setmetatile 5, 11, 0x29D, TRUE
	setmetatile 6, 11, 0x29E, TRUE
	setmetatile 7, 11, 0x29F, TRUE
	setmetatile 5, 12, 0x2A5, TRUE
	setmetatile 6, 12, 0x2A6, TRUE
	setmetatile 7, 12, 0x2A7, TRUE
	return

PokemonLeague_WillsRoom_OnResume::
	setvar VAR_0x8004, 0
	special DoPokemonLeagueLightingEffect
	end

EliteFourRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, EliteFourRoom_CloseDoor
	.2byte 0

EliteFourRoom_CloseDoor::
	lock
	setflag FLAG_TEMP_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	setmetatile 5, 11, 0x29D, TRUE
	setmetatile 6, 11, 0x29E, TRUE
	setmetatile 7, 11, 0x29F, TRUE
	setmetatile 5, 12, 0x2A5, TRUE
	setmetatile 6, 12, 0x2A6, TRUE
	setmetatile 7, 12, 0x2A7, TRUE
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	setvar VAR_TEMP_0, 1
	clearflag FLAG_DEFEATED_WILL                                          
	clearflag FLAG_DEFEATED_BUGSY
	setvar VAR_WILLS_ROOM_STATE, 1
	release
	end

PokemonLeague_WillsRoom_EventScript_Will::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_WILL, PokemonLeague_WillsRoom_EventScript_WillDefeatedWill
	goto_if_set FLAG_DEFEATED_BUGSY, PokemonLeague_WillsRoom_EventScript_WillDefeatedBugsy
	goto_if_eq VAR_WILLS_ROOM_STATE, 2, PokemonLeague_WillsRoom_EventScript_WillPostIntro
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_WillsRoom_EventScript_WillRematch
	msgbox PokemonLeague_WillsRoom_Text_BeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_WillsRoom_EventScript_WillDeclined
	case 0, PokemonLeague_WillsRoom_EventScript_WillFight
	goto PokemonLeague_WillsRoom_EventScript_WillDeclined

PokemonLeague_WillsRoom_EventScript_WillDeclined::
	msgbox PokemonLeague_WillsRoom_Text_WillDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_WILLS_ROOM_STATE, 2
	release
	end

PokemonLeague_WillsRoom_EventScript_WillPostIntro::
	msgbox PokemonLeague_WillsRoom_Text_AfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_WillsRoom_EventScript_WillDeclined
	case 0, PokemonLeague_WillsRoom_EventScript_WillFight
	goto PokemonLeague_WillsRoom_EventScript_WillDeclined

PokemonLeague_WillsRoom_EventScript_WillFight::
	msgbox PokemonLeague_WillsRoom_Text_WillFight, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_WILLSROOM_WILL, 6, 6
	setobjectxy LOCALID_WILLSROOM_BUGSY, 8, 3
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_WILLSROOM_WILL, Common_Movement_FaceDown
	applymovement LOCALID_WILLSROOM_BUGSY, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect
	msgbox PokemonLeague_WillsRoom_Text_WillPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_WILL_1, PokemonLeague_WillsRoom_Text_Beaten
	goto PokemonLeague_WillsRoom_EventScript_WillOnDefeat

PokemonLeague_WillsRoom_EventScript_WillRematch::
	msgbox PokemonLeague_WillsRoom_Text_RematchBefore, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_WILL_2, PokemonLeague_WillsRoom_Text_Beaten
	goto PokemonLeague_WillsRoom_EventScript_WillOnDefeat

PokemonLeague_WillsRoom_EventScript_WillOnDefeat::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_WillsRoom_Text_WillDefeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 2
	setflag FLAG_DEFEATED_WILL
	release
	end

PokemonLeague_WillsRoom_EventScript_WillDefeatedWill::
	msgbox PokemonLeague_WillsRoom_Text_WillDefeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_WillsRoom_EventScript_WillDefeatedBugsy::
	msgbox PokemonLeague_WillsRoom_Text_WillDefeatedBugsy, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_WillsRoom_Text_BeforeIntro:
    .string "Welcome to POKéMON LEAGUE,\n"
    .string "{PLAYER}.\p"
    .string "Allow me to introduce myself.\n"
    .string "I am WILL.\p"
    .string "I have trained all around the\n"
    .string "world, making my psychic\l"
    .string "POKéMON powerful.\p"
    .string "And, at last, I've been accepted\n"
    .string "into the ELITE FOUR.\p"
    .string "I can only keep getting better!\p"
    .string "Losing is not an option!\p"
    .string "So, {PLAYER}. Are you prepared to face\n"
	.string "me in battle?$"

PokemonLeague_WillsRoom_Text_WillDeclined:
    .string "As you wish. Speak to me again when\n"
	.string "you're ready.$"

PokemonLeague_WillsRoom_Text_AfterIntro:
    .string "So, {PLAYER}. Are you prepared to face\n"
	.string "me in battle?$"

PokemonLeague_WillsRoom_Text_WillFight:
    .string "Prepare yourself!$"

PokemonLeague_WillsRoom_Text_WillPreFight:
    .string "Psychic-type users like me never give\n"
	.string "up, even when we're hanging on by the\l"
	.string "skin of our teeth.\p"
	.string "That's what makes us so formidable!$"

PokemonLeague_WillsRoom_Text_WillDefeatedBugsy:
    .string "A masterful display, I must say.\n"
	.string "Go on and face your next challenge.$"

PokemonLeague_WillsRoom_Text_Beaten:
    .string "I… I can't… believe it…$"

PokemonLeague_WillsRoom_Text_WillDefeat:
    .string "Even though I was defeated, I\n"
    .string "won't change my course.\p"
    .string "I will continue battling until I\n"
    .string "stand above all trainers!\p"
    .string "Now, {PLAYER}, move on and\n"
    .string "experience the true ferocity of\l"
    .string "the ELITE FOUR.$"

PokemonLeague_WillsRoom_Text_RematchBefore:
    .string "WILL: Ah, welcome back.\p"
    .string "I have foreseen this encounter.\p"
    .string "My psychic POKéMON and\n"
    .string "I have evolved, developing\l"
    .string "new tactics.\p"
    .string "Prepare yourself for a battle of\n"
    .string "enhanced strategy and might.\p"
    .string "Let us see if your foresight\n"
    .string "matches mine.$"




PokemonLeague_WillsRoom_EventScript_Bugsy::
	lock 
	faceplayer
	goto_if_set FLAG_DEFEATED_WILL, PokemonLeague_WillsRoom_EventScript_BugsyDefeatedWill
	goto_if_set FLAG_DEFEATED_BUGSY, PokemonLeague_WillsRoom_EventScript_BugsyDefeatedBugsy
	goto_if_eq VAR_WILLS_ROOM_STATE, 2, PokemonLeague_WillsRoom_EventScript_BugsyPostIntro
	msgbox PokemonLeague_WillsRoom_Text_BugsyBeforeIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_WillsRoom_EventScript_BugsyDeclined
	case 0, PokemonLeague_WillsRoom_EventScript_BugsyFight
	goto PokemonLeague_WillsRoom_EventScript_BugsyDeclined

PokemonLeague_WillsRoom_EventScript_BugsyDeclined::
	msgbox PokemonLeague_WillsRoom_Text_BugsyDeclined, MSGBOX_DEFAULT
	closemessage
	setvar VAR_WILLS_ROOM_STATE, 2
	release
	end

PokemonLeague_WillsRoom_EventScript_BugsyPostIntro::
	msgbox PokemonLeague_WillsRoom_Text_BugsyAfterIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, PokemonLeague_WillsRoom_EventScript_BugsyDeclined
	case 0, PokemonLeague_WillsRoom_EventScript_BugsyFight
	goto PokemonLeague_WillsRoom_EventScript_BugsyDeclined

PokemonLeague_WillsRoom_EventScript_BugsyFight::
	msgbox PokemonLeague_WillsRoom_Text_BugsyFight, MSGBOX_DEFAULT
	closemessage
	special StopPokemonLeagueLightingEffectTask
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 7
	setobjectxy LOCALID_WILLSROOM_BUGSY, 6, 6
	setobjectxy LOCALID_WILLSROOM_WILL, 4, 3
	setvar VAR_0x8004, 6
    setvar VAR_0x8005, 7
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_WILLSROOM_WILL, Common_Movement_FaceDown
	applymovement LOCALID_WILLSROOM_BUGSY, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 10
	fadescreen FADE_FROM_BLACK
	special DoPokemonLeagueLightingEffect 
	msgbox PokemonLeague_WillsRoom_Text_BugsyPreFight, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_BUGSY_1, PokemonLeague_WillsRoom_Text_BugsyBeaten
	goto PokemonLeague_WillsRoom_EventScript_BugsyOnDefeat

PokemonLeague_WillsRoom_EventScript_BugsyOnDefeat::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_WillsRoom_Text_BugsyDefeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 2
	setflag FLAG_DEFEATED_BUGSY
	release
	end

PokemonLeague_WillsRoom_EventScript_BugsyDefeatedWill::
	msgbox PokemonLeague_WillsRoom_Text_BugsyDefeatedWill, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_WillsRoom_EventScript_BugsyDefeatedBugsy::
	msgbox PokemonLeague_WillsRoom_Text_BugsyDefeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_WillsRoom_Text_BugsyBeforeIntro:
    .string "Welcome to POKéMON LEAGUE,\n"
    .string "{PLAYER}.\p"
    .string "Thank you again for your help back in\n"
    .string "AZALEA TOWN.\p"
	.string "Though I don't get to visit that much\n"
	.string "now I'm part of the ELITE FOUR, it means\l"
	.string "the world to me to know that there are\l"
	.string "other people watching over my home\l"
	.string "town.\p"
	.string "This is different though. Despite all\n"
	.string "you've done for me, I'm obligated to\l"
	.string "give this everything I've got.\p"
	.string "Are you ready to battle me, {PLAYER}?$"

PokemonLeague_WillsRoom_Text_BugsyDeclined:
    .string "OK. Tell me when you've made up your\n"
	.string "mind.$"

PokemonLeague_WillsRoom_Text_BugsyAfterIntro:
	.string "Are you ready to battle me, {PLAYER}?$"

PokemonLeague_WillsRoom_Text_BugsyFight:
    .string "OK. Let's do it!$"

PokemonLeague_WillsRoom_Text_BugsyPreFight:
    .string "Remember, we're here to decide who the\n"
	.string "strongest trainer is. Don't hold back!$"

PokemonLeague_WillsRoom_Text_BugsyDefeatedWill:
    .string "Wow, you're incredible! Keep fighting\n"
	.string "like that and you might just win it all!$"

PokemonLeague_WillsRoom_Text_BugsyBeaten:
    .string "Amazing! You sure know your stuff!$"

PokemonLeague_WillsRoom_Text_BugsyDefeat:
    .string "That was a fantastic battle. I was\n"
	.string "having so much fun, I forgot just how\l"
	.string "serious this was for a moment!\p"
	.string "But I'm not saying that as an excuse.\n"
	.string "You beat me fair and square. That's all\l"
	.string "there is to it.\p"
	.string "Good luck on the rest of your\n"
	.string "challenge.$"
