.set LOCALID_BURNED_TOWER_SILVER, 3
.set LOCALID_BURNED_TOWER_EUSINE, 1
.set LOCALID_BURNED_TOWER_MORTY, 2



BurnedTower_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BurnedTower_1F_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BurnedTower_1F_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BurnedTower_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

BurnedTower_1F_OnTransition: 
	callnative SetTimeBasedEncounters
	end

BurnedTower_1F_OnLoad::
	goto_if_ge VAR_ECRUTEAK_CITY_STATE, 4, BurnedTower_1F_MapScript_CreateHole
	end

BurnedTower_1F_MapScript_CreateHole::
	setmetatile 16, 12, 0x37E, FALSE
	end

BurnedTower_1F_OnFrame::
	map_script_2 VAR_ECRUTEAK_CITY_STATE, 1, BurnedTower_1F_EventScript_MeetSilver
	.2byte 0

BurnedTower_1F_EventScript_MeetSilver::
	lock
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_SILVER, Common_Movement_ExclamationMark
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	delay 60
	applymovement LOCALID_BURNED_TOWER_SILVER, BurnedTower_Movement_Silver1
	waitmovement 0
	msgbox BurnedTower_1FSilverIntroText, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, BurnedTower_Movement_PlayerPushedBySilver
	waitmovement 30
	applymovement LOCALID_BURNED_TOWER_SILVER, BurnedTower_Movement_Silver2
	waitmovement 0
	removeobject LOCALID_BURNED_TOWER_SILVER
	playse SE_EXIT
	fadedefaultbgm
	setvar VAR_ECRUTEAK_CITY_STATE, 2
	setflag FLAG_HIDE_BURNED_TOWER_NPCS
	setflag FLAG_HIDE_BURNED_TOWER_SILVER
	removeobject LOCALID_BURNED_TOWER_SILVER
	clearflag FLAG_HIDE_BURNED_TOWER_NPCS
	release
	end

BurnedTower_Movement_Silver1:
	walk_down
	walk_down
	step_end

BurnedTower_Movement_PlayerPushedBySilver:
	walk_fast_left
	face_right
	step_end

BurnedTower_Movement_Silver2:
	walk_down
	step_end

BurnedTower_1FSilverIntroText:
	.string "..............................\p"
	.string "...Oh, it's you.\p"
	.string "I came looking for some\n"
	.string "legendary POKéMON they say\l"
	.string "roost here.\p"
	.string "But there's nothing here!\p"
	.string "Nothing, after all the effort\n"
	.string "of coming to this dump?\p"
	.string "Hmph. It doesn't matter.\p"
	.string "One way or another, I will get my hands\n"
	.string "on a legendary POKéMON.\p"
	.string "And when I do, I'm getting my revenge.\n"
	.string "You stay out of my way until then.$"

BurnedTower_1F_EventScript_Eusine::
	lock
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_ExclamationMark
	delay 60
	playbgm MUS_HG_EUSINE, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_WalkLeft1
	waitmovement 0
	waitmovement 0
	msgbox BurnedTower_1FEusineIntroText, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_BURNED_TOWER_MORTY, Common_Movement_WalkInPlaceDown
	waitmovement 0
	waitmovement 0
	msgbox BurnedTower_1FMortyIntroText, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	waitmovement 0
	msgbox BurnedTower_1FEusineIntroText2, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_BURNED_TOWER_MORTY, Common_Movement_WalkInPlaceDown
	waitmovement 0
	waitmovement 0
	msgbox BurnedTower_1FMortyIntroText2, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	waitmovement 0
	msgbox BurnedTower_1FEusineIntroText3, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_EUSINE, BurnedTower_1FEusineBeatenText
	msgbox BurnedTowerEusine_AfterText1, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_BURNED_TOWER_MORTY, Common_Movement_WalkInPlaceDown
	waitmovement 0
	waitmovement 0
	msgbox BurnedTower_1FMortyBeforeText, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MORTY_1, MortyWinLossText2
	msgbox BurnedTower_1FMortyAfterText, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	playse SE_CLICK
	setmetatile 16, 12, 0x37E, FALSE
	special DrawWholeMapView
	waitse
	delay 60
	special SpawnCameraObject
	removeobject OBJ_EVENT_ID_PLAYER
	playse SE_FALL
	delay 60
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_ExclamationMark
	applymovement LOCALID_BURNED_TOWER_MORTY, Common_Movement_ExclamationMark
	delay 30
	delay 30
	msgbox BurnedTowerEusine_AfterText2, MSGBOX_AUTOCLOSE
	waitmessage
	warphole MAP_BURNED_TOWER_B1F
	setvar VAR_ECRUTEAK_CITY_STATE, 3
	release
	end

BurnedTower_1FEusineIntroText:
	.string "EUSINE: My name's EUSINE.\p"
	.string "I'm on the trail of a POKéMON\n"
	.string "called SUICUNE.\p"
	.string "And you are...?\p"
	.string "{PLAYER}? Glad to meet you!\p"
	.string "I heard SUICUNE might be in\n"
	.string "this BURNED TOWER, so I came\l"
	.string "to check it out with my friend here,\l"
	.string "MORTY.\p"
	.string "But where exactly could it be?$"

BurnedTower_1FMortyIntroText:
	.string "MORTY: As EUSINE says, my name is\n"
	.string "MORTY. I'm a trainer, just like you.\p"
	.string "It's said that legendary POKéMON will\n"
	.string "appear to the truly powerful trainers.\p"
	.string "Then again...\p"
	.string "Does the fact that the legendary\n"
	.string "POKéMON haven't appeared yet mean\l"
	.string "that we are not worthy of their\l"
	.string "respect...?$"

BurnedTower_1FEusineIntroText2:
	.string "EUSINE: Maybe what we need is a way to\n"
	.string "demonstrate our skill to them.\p"
	.string "Say, {PLAYER}, you're a trainer, aren't\n"
	.string "you?\p"
	.string "Why don't we have a battle to see who is\n"
	.string "the most deserving to meet SUICUNE out\l"
	.string "of the three of us?\p"
	.string "Let's fight two on one.\p"
	.string "We'll only use three POKéMON each to\n"
	.string "make things even, of course.$"

BurnedTower_1FMortyIntroText2:
	.string "MORTY: I would say this seems unfair,\n"
	.string "but...\p"
	.string "That look in your eye tells me there's\n"
	.string "something different about you.\l"
	.string "How intriguing.$"

BurnedTower_1FEusineIntroText3:
	.string "EUSINE: Get ready, {PLAYER}!\n"
	.string "When it comes to anything involving\l"
	.string "SUICUNE, I won't hold back!$"

BurnedTower_1FEusineBeatenText:
	.string "I hate to admit it, but you win.$"

BurnedTowerEusine_AfterText1:
	.string "EUSINE: Whew...\p"
	.string "Even with a full team behind me, I'm not\n"
	.string "sure I could beat you.$"

BurnedTower_1FMortyBeforeText:
	.string "MORTY: Impressive. EUSINE is a skilled\n"
	.string "trainer, yet you still look as though\l"
	.string "you have something more to prove.\p"
	.string "Very well.\p"
	.string "In that case, allow me to see your\n"
	.string "abilities for myself!$"

BurnedTower_1FMortyAfterText:
	.string "MORTY: Both of us fighting together,\n"
	.string "and we still lost...\p"
	.string "What can this mean?$"

MortyWinLossText2:
	.string "So my eyes didn't deceive me...\p"
	.string "You really are strong.$"

BurnedTowerEusine_AfterText2:
	.string "EUSINE: {PLAYER}!\p"
	.string "Are you all right!?\p"
	.string "Stay right where you are!\n"
	.string "We're coming to help you!$"

BurnedTower_1F_EventScript_Item_HpUp::
	finditem ITEM_HP_UP
	end

BurnedTower_1F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

BurnedTower_1FEusineText:
	.string "EUSINE: I heard SUICUNE might\n"
	.string "be in this BURNED TOWER, so I\l"
	.string "came to check it out.\p"
	.string "But where exactly could it be?$"

BurnedTower_1FMortyText:
	.string "MORTY: ECRUTEAK's GYM LEADER\n"
	.string "has to study what are said to\l"
	.string "be the legendary POKéMON--\l"
	.string "SUICUNE, ENTEI and RAIKOU.\p"
	.string "EUSINE is here, so I've\n"
	.string "decided to investigate the\l"
	.string "TOWER with him.$"

BurnedTower_1F_EventScript_Nard::
	trainerbattle_single TRAINER_NARD BurnedTower_Text_NardSeen, BurnedTower_Text_NardBeaten
	msgbox BurnedTower_Text_NardAfter, MSGBOX_AUTOCLOSE
	end

BurnedTower_1F_EventScript_Richardo::
	trainerbattle_single TRAINER_RICHARDO BurnedTower_Text_RichardoSeen, BurnedTower_Text_RichardoBeaten
	msgbox BurnedTower_Text_RichardoAfter, MSGBOX_AUTOCLOSE
	end

BurnedTower_Text_NardSeen:
	.string "Don't worry!\p"
	.string "We fire-breathers know the true\n"
	.string "power of fire better than anyone!$"
BurnedTower_Text_NardBeaten:
	.string "Thanks for such a heated battle!$"
BurnedTower_Text_NardAfter:
	.string "The reason this tower's burned is\n"
	.string "that it was hit by lightning.\p"
	.string "The fire I'm breathing is tiny\n"
	.string "in comparison...$"

BurnedTower_Text_RichardoSeen:
	.string "I'm practicing my stealing in the\n"
	.string "BURNED TOWER! Don't try this at\p"
	.string "home!$"
BurnedTower_Text_RichardoBeaten:
	.string "Pfffffffffffffff.$"
BurnedTower_Text_RichardoAfter:
	.string "Maybe a life of crime isn't for\n"
	.string "me...$"
