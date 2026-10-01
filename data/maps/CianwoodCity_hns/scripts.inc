.set LOCALID_CIANWOOD_SUICUNE, 1
.set LOCALID_CIANWOOD_EUSINE, 2
.set LOCALID_CIANWOOD_CHUCKSWIFE, 6
.set LOCALID_CIANWOOD_AIPOM, 24
.set LOCALID_CIANWOOD_MULITHIT_TUTOR, 23
.set LOCALID_OLIVINE_ELEMENTAL_TUTOR, 25
.set LOCALID_OLIVINE_CASTFORM, 26

CianwoodCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodCity_EventScript_CityEnter
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CianwoodCity_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, CianwoodCity_EventScript_InitializeSuicune
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

CianwoodCity_RemoveEusine::
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	end

CianwoodCity_OnFrame::
	map_script_2 VAR_GETFLY, 1, CianwoodCity_EventScript_Flytrigger
	.2byte 0

CianwoodCity_EventScript_CityEnter::
	@setflag FLAG_VISITED_CIANWOOD_CITY
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

CianwoodCity_EventScript_InitializeSuicune::
	goto_if_ge VAR_SUICUNE_ENCOUNTERS, 2, CianwoodCity_EventScript_InitializeNothing
	clearflag FLAG_HIDE_CIANWOOD_SUICUNE
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setvar VAR_TEMP_0, 1
	end

CianwoodCity_EventScript_InitializeNothing::
	setvar VAR_TEMP_0, 1
	end

CianwoodCity_EventScript_Flytrigger::
	lock
	playse SE_PIN
	applymovement LOCALID_CIANWOOD_CHUCKSWIFE, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_CIANWOOD_CHUCKSWIFE, CianwoodCity_Movement_ChucksWife
	waitmovement 0
	msgbox CianwoodCity_Text_ChucksWifeGiveHM, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLY
	msgbox CianwoodCity_Text_ChucksWifeFlySpeech, MSGBOX_DEFAULT
	closemessage
	setvar VAR_GETFLY, 2
	release
	end

CianwoodCity_Movement_ChucksWife:
	walk_left
	walk_left
	walk_up
	walk_left
	face_up
	step_end

CianwoodCity_EventScript_Test::
	lock
	random 2
	call_if_eq VAR_RESULT, 1, EventScript_RockSmashHeartscale
	release
	end

CianwoodCity_EventScript_ChucksWife::
	lock
	faceplayer
	checkitem ITEM_HM_FLY
	goto_if_eq VAR_RESULT, TRUE, CianwoodCity_EventScript_ChucksWifeAlreadyHasFly
	msgbox CianwoodCity_Text_ChucksWifeEasierToFly, MSGBOX_DEFAULT
	goto_if_set FLAG_BADGE05_GET, CianwoodCity_EventScript_ChucksWifeGiveFly
	msgbox CianwoodCity_Text_ChucksWifeBeatChuck, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_ChucksWifeGiveFly::
	msgbox CianwoodCity_Text_ChucksWifeGiveHM, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLY
	msgbox CianwoodCity_Text_ChucksWifeFlySpeech, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_ChucksWifeAlreadyHasFly::
	msgbox CianwoodCity_Text_ChucksWifeChubby, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_ChucksWifeEasierToFly:
	.string "You crossed the sea to get here?\p"
	.string "That must have been hard.\p"
	.string "It would be much easier if your\n"
	.string "Pokémon knew how to Fly...$"

CianwoodCity_Text_ChucksWifeBeatChuck:
	.string "But you can't use Fly without this\n"
	.string "city's Gym Badge.\p"
	.string "If you beat the Gym Leader here,\n"
	.string "come see me.\p"
	.string "I'll have a nice gift for you.$"

CianwoodCity_Text_ChucksWifeGiveHM:
	.string "That's Cianwood's Gym Badge!\p"
	.string "Then you should take this HM.$"

CianwoodCity_Text_ChucksWifeFlySpeech:
	.string "Teach Fly to your Pokémon.\p"
	.string "You will be able to Fly instantly\n"
	.string "to anywhere you have visited.$"

CianwoodCity_Text_ChucksWifeChubby:
	.string "My husband lost to you, so he needs\n"
	.string "to train harder.\p"
	.string "That's good, since he was getting\n"
	.string "a little chubby.$"

CianwoodCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_Youngster:
	.string "If you use Fly, you can get back\n"
	.string "to Olivine instantly.$"

CianwoodCity_EventScript_PokefanM::
	lock
	faceplayer
	msgbox CianwoodCity_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_PokefanM:
	.string "Boulders to the north of town can\n"
	.string "be crushed.\p"
	.string "They may be hiding something.\p"
	.string "Your Pokémon could use Rock Smash\n"
	.string "to break them.$"

CianwoodCity_EventScript_Lass::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_Lass:
	.string "Chuck, the Gym Leader, spars with\n"
	.string "his fighting Pokémon.$"

CianwoodCity_EventScript_SuicuneTrigger::
	lock
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	waitmoncry
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune2
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune3
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	playbgm MUS_HG_EUSINE, TRUE
	clearflag FLAG_HIDE_CIANWOOD_EUSINE
	addobject LOCALID_CIANWOOD_EUSINE
	applymovement LOCALID_CIANWOOD_EUSINE, CianwoodCity_Movement_Eusine1
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune4
	waitmovement 0 
	waitmovement 0
	msgbox CianwoodCity_Text_EusineSuicune, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_EUSINE_2, CianwoodCity_Text_EusineBeaten
	playbgm MUS_HG_EUSINE, TRUE
	msgbox CianwoodCity_Text_EusineAfter, MSGBOX_DEFAULT
	giveitem ITEM_LOADED_DICE
	msgbox CianwoodCity_Text_EusineAfter2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_EUSINE, CianwoodCity_Movement_Eusine2
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune5
	waitmovement 0
	waitmovement 0
	delay 60
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Movement_Suicune6
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setflag FLAG_HIDE_CIANWOOD_SUICUNE
	removeobject LOCALID_CIANWOOD_SUICUNE
	removeobject LOCALID_CIANWOOD_EUSINE
	setvar VAR_SUICUNE_ENCOUNTERS, 2
	setvar VAR_CIANWOOD_CITY_STATE, 2
	fadedefaultbgm
	setflag FLAG_VISITED_CIANWOOD_CITY
	call_if_set FLAG_HIDE_ROUTE42_SUICUNE, CianwoodCity_EventScript_DoneJohtoSuicune
	release
	end

CianwoodCity_EventScript_DoneJohtoSuicune::
	setvar VAR_SUICUNE_ENCOUNTERS, 3
	return

CianwoodCity_Movement_Suicune1:
	jump_in_place_right_left
	jump_in_place_right_left
	face_down
	step_end

CianwoodCity_Movement_Suicune2:
	jump_down
	jump_2_down
	jump_right
	face_up
	step_end

CianwoodCity_Movement_Suicune3:
	jump_2_down
	jump_2_down
	jump_2_down
	jump_down
	face_up
	step_end

CianwoodCity_Movement_Eusine1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CianwoodCity_Movement_Suicune4:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	step_end

CianwoodCity_Movement_Eusine2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CianwoodCity_Movement_Suicune5:
	walk_right
	walk_down
	walk_down
	face_up
	step_end

CianwoodCity_Movement_Suicune6:
	jump_2_down
	jump_2_down
	step_end

CianwoodCity_Text_EusineSuicune:
	.string "Eusine: Yo, {PLAYER}!\p"
	.string "We meet again at last.\p"
	.string "You may have bested me the last time we\n"
	.string "met, but things are different now.\p"
	.string "Behold!\p"
	.string "I have convinced Suicune to join my\n"
	.string "side and earned its respect, and I owe\l"
	.string "it all to you!\p"
	.string "I was able to learn a lot in our last\n"
	.string "battle. I'm still not sure if I can beat\l"
	.string "you, {PLAYER}, but I must ask you to\l"
	.string "face me one more time.\p"
	.string "Let's do this, Suicune!$"

CianwoodCity_Text_EusineBeaten:
	.string "I hate to admit it, but you win.$"

CianwoodCity_Text_EusineAfter:
	.string "You're amazing, {PLAYER}!\p"
	.string "No wonder Pokémon gravitate to you.\p"
	.string "I get it now.\p"
	.string "Here's something for impressing me.\n"
	.string "You've earned it.$"

CianwoodCity_Text_EusineAfter2:	
	.string "I'm going to keep training with\n"
	.string "Suicune.\p"
	.string "I'm sure we'll see each other again.\p"
	.string "See you around!$"

CianwoodCity_EventScript_CitySign::
	lock
	msgbox CianwoodCity_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_Text_Sign:
	.string "Cianwood City\p"
	.string "A Port Surrounded by Rough Seas$"

CianwoodCity_EventScript_GymSign::
	lock
	msgbox CianwoodCity_Text_GymSign, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_Text_GymSign:
	.string "Cianwood City Pokémon Gym\p"
	.string "Leader: Chuck\p"
	.string "His Roaring Fists Do the Talking$"

CianwoodCity_EventScript_PharmacyBlocked::
	lock
	msgbox CianwoodCity_Text_PharmacyBlockedSign, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_Text_PharmacyBlockedSign:
	.string "Cianwood Pharmacy\n"
	.string "Notice for visitors:\p"
	.string "We have now moved shop to the Safari\n"
	.string "Zone Gate.\p"
	.string "We apologise for any inconvenience\n"
	.string "caused.$"

CianwoodCity_EventScript_CaveSign::
	lock
	msgbox CianwoodCity_Text_Safari, MSGBOX_SIGN
	closemessage
	release
	end

CianwoodCity_EventScript_Engineer::
	lock
	faceplayer
	msgbox CianwoodCity_Text_Engineer, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_Safari:
	.string "Cliff Edge Gate\n"
	.string "Road to the Safari Zone.$"

CianwoodCity_Text_Engineer:
	.string "This path is under construction.\n"
	.string "We're getting the new Safari Zone\l"
	.string "up and running!$"














@MULTIHIT TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CianwoodCity_EventScript_Aipom::
	lock
	faceplayer
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
	msgbox CianwoodCity_Text_Aipom, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_CIANWOOD_AIPOM, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

CianwoodCity_Text_Aipom:
	.string "Aipom: Aipoo!$"

CianwoodCity_EventScript_MultiHitTutor::
	lock
	faceplayer
	msgbox CianwoodCity_Text_MultiHitTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CianwoodCity_EventScript_MultiHitTutorDeclined
	msgbox CianwoodCity_Text_MultiHitTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_MULTIHIT_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CianwoodCity_EventScript_MultiHitTutorArmThrust
	case 1, CianwoodCity_EventScript_MultiHitTutorBoneRush
	case 2, CianwoodCity_EventScript_MultiHitTutorBulletSeed
	case 3, CianwoodCity_EventScript_MultiHitTutorDoubleSlap
	case 4, CianwoodCity_EventScript_MultiHitTutorIcicleSpear
	case 5, CianwoodCity_EventScript_MultiHitTutorRockBlast
	case 6, CianwoodCity_EventScript_MultiHitTutorPinMissile
	case 7, CianwoodCity_EventScript_MultiHitTutorDeclined
	case MULTI_B_PRESSED, CianwoodCity_EventScript_MultiHitTutorDeclined
	end

CianwoodCity_EventScript_MultiHitTutorArmThrust::
	msgbox CianwoodCity_Text_MultiHitTutorArmThrustWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ARM_THRUST
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorBoneRush::
	msgbox CianwoodCity_Text_MultiHitTutorBoneRushWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BONE_RUSH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorBulletSeed::
	msgbox CianwoodCity_Text_MultiHitTutorBulletSeedWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BULLET_SEED
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorDoubleSlap::
	msgbox CianwoodCity_Text_MultiHitTutorDoubleSlapWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DOUBLE_SLAP
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorIcicleSpear::
	msgbox CianwoodCity_Text_MultiHitTutorIcicleSpearWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorRockBlast::
	msgbox CianwoodCity_Text_MultiHitTutorRockBlastWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROCK_BLAST
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorPinMissile::
	msgbox CianwoodCity_Text_MultiHitTutorPinMissileWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_PIN_MISSILE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_MultiHitTutorDeclined
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_MultiHitTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CIANWOOD_MULITHIT_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR, CianwoodCity_EventScript_MultiHitTutorFriend
	msgbox CianwoodCity_Text_MultiHitTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_CIANWOOD_CITY_MULTIHIT_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorFriend::
	msgbox CianwoodCity_Text_MultiHitTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_MultiHitTutorTeachPlayerBelow::
	applymovement LOCALID_CIANWOOD_AIPOM, CianwoodCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_CIANWOOD_AIPOM, CianwoodCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

@CianwoodCity_Movement_TeachPlayerBelow1::
@	walk_down
@	face_left
@	step_end

@CianwoodCity_Movement_TeachPlayerBelow2::
@	jump_in_place_left
@	jump_in_place_left
@	walk_up
@	face_down
@	step_end

CianwoodCity_EventScript_MultiHitTutorTeachPlayerLeft::
	applymovement LOCALID_CIANWOOD_AIPOM, CianwoodCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_AIPOM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_CIANWOOD_AIPOM, CianwoodCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

@CianwoodCity_Movement_TeachPlayerLeft1::
@	walk_down
@	walk_left
@	walk_left
@	face_up
@	step_end

@CianwoodCity_Movement_TeachPlayerLeft2::
@	jump_in_place_up
@	jump_in_place_up
@	walk_right
@	walk_right
@	walk_up
@	face_down
@	step_end

CianwoodCity_EventScript_MultiHitTutorDeclined::
	msgbox CianwoodCity_Text_MultiHitTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_MultiHitTutorDeclined::
	.string "Tut tut. I suppose the common Olivine\n"
	.string "Diner would suit your tastes, yes?$"

CianwoodCity_Text_MultiHitTutorLetMeTeach:
	.string "The world's greatest meal cannot be\n"
	.string "captured on just a single plate.\p"
	.string "No, that simply won't do.\p"
	.string "You must have many courses to make a\n"
	.string "complete experience.\p"
	.string "Pokémon moves are the same. Many hits\n"
	.string "is always better, don't you agree?$"

CianwoodCity_Text_MultiHitTutorWhichMove:
	.string "Ah, an excellent choice indeed! So, for\n"
	.string "the starter? What will you order?$"

CianwoodCity_Text_MultiHitTutorArmThrustWhichMon:
	.string "Arm Thrust, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorBoneRushWhichMon:
	.string "Bone Rush, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorBulletSeedWhichMon:
	.string "Bullet Seed, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorDoubleSlapWhichMon:
	.string "Double Slap, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorIcicleSpearWhichMon:
	.string "Icicle Spear, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorRockBlastWhichMon:
	.string "Rock Blast, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorPinMissileWhichMon:
	.string "Pin Missile, certainly. And the main\n"
	.string "course? Who shall join us at the table?$"

CianwoodCity_Text_MultiHitTutorTeachingMove:
	.string "Let us begin, Aipom. Remember to follow\n"
	.string "the recipe word for word, yes?$"

CianwoodCity_Text_MultiHitTutorMoveTaught:
	.string "Hmm, not bad! You have excellent taste,\n"
	.string "it seems.\p"
	.string "Next time we will create something even\n"
	.string "more divine, yes? I look forward to it.$"

CianwoodCity_Text_MultiHitTutorFriend:
	.string "Wonderful, wonderful, wonderful!\n"
	.string "Cooked to perfection!\p"
	.string "To dine with you is a pleasure, my\n"
	.string "friend!$"



@ELEMENTAL TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CianwoodCity_EventScript_Castform::
	lock
	faceplayer
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
	msgbox CianwoodCity_Text_Castform, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_OLIVINE_CASTFORM, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

CianwoodCity_Text_Castform:
	.string "Castform: Wapapapapawap!$"

CianwoodCity_EventScript_ElementalTutor::
	lock
	faceplayer
	msgbox CianwoodCity_Text_ElementalTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CianwoodCity_EventScript_ElementalTutorDeclined
	msgbox CianwoodCity_Text_ElementalTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_ELEMENTAL_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CianwoodCity_EventScript_ElementalTutorThunder
	case 1, CianwoodCity_EventScript_ElementalTutorBlizzard
	case 2, CianwoodCity_EventScript_ElementalTutorFireBlast
	case 3, CianwoodCity_EventScript_ElementalTutorHydroPump
	case 4, CianwoodCity_EventScript_ElementalTutorHurricane
	case 5, CianwoodCity_EventScript_ElementalTutorNaturePower
	case 6, CianwoodCity_EventScript_ElementalTutorDeclined
	case MULTI_B_PRESSED, CianwoodCity_EventScript_ElementalTutorDeclined
	end

CianwoodCity_EventScript_ElementalTutorThunder::
	msgbox CianwoodCity_Text_ElementalTutorThunderWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_THUNDER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, CianwoodCity_EventScript_ElementalTutorFriend
	msgbox CianwoodCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorBlizzard::
	msgbox CianwoodCity_Text_ElementalTutorBlizzardWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BLIZZARD
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, CianwoodCity_EventScript_ElementalTutorFriend
	msgbox CianwoodCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorFireBlast::
	msgbox CianwoodCity_Text_ElementalTutorFireBlastWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FIRE_BLAST
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, CianwoodCity_EventScript_ElementalTutorFriend
	msgbox CianwoodCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorHydroPump::
	msgbox CianwoodCity_Text_ElementalTutorHydroPumpWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, CianwoodCity_EventScript_ElementalTutorFriend
	msgbox CianwoodCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorHurricane::
	msgbox CianwoodCity_Text_ElementalTutorHurricaneWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HURRICANE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, CianwoodCity_EventScript_ElementalTutorFriend
	msgbox CianwoodCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorNaturePower::
	msgbox CianwoodCity_Text_ElementalTutorNaturePowerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_NATURE_POWER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, CianwoodCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox CianwoodCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 41, CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 40, CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, CianwoodCity_EventScript_ElementalTutorFriend
	msgbox CianwoodCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorFriend::
	msgbox CianwoodCity_Text_ElementalTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_EventScript_ElementalTutorTeachPlayerBelow::
	applymovement LOCALID_OLIVINE_CASTFORM, CianwoodCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_OLIVINE_CASTFORM, CianwoodCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

CianwoodCity_Movement_TeachPlayerBelow1::
	walk_down
	face_left
	step_end

CianwoodCity_Movement_TeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	walk_up
	face_down
	step_end

CianwoodCity_EventScript_ElementalTutorTeachPlayerLeft::
	applymovement LOCALID_OLIVINE_CASTFORM, CianwoodCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_OLIVINE_CASTFORM, CianwoodCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

CianwoodCity_Movement_TeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

CianwoodCity_Movement_TeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	walk_right
	walk_right
	walk_up
	face_down
	step_end

CianwoodCity_EventScript_ElementalTutorDeclined::
	msgbox CianwoodCity_Text_ElementalTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_ElementalTutorDeclined::
	.string "Quite. The elements will guide you from\n"
	.string "where you are... to where you will be...\l"
	.string "whether you are aware of it or not.$"

CianwoodCity_Text_ElementalTutorLetMeTeach:
	.string "Can you feel it?\p"
	.string "The elements... they're all around us.\n"
	.string "Always changing, always growing...\p"
	.string "Embrace them, and their power may\n"
	.string "become yours. Shall it be so?$"

CianwoodCity_Text_ElementalTutorWhichMove:
	.string "Mmm... I wonder... what is it they have in\n"
	.string "store for you?$"

CianwoodCity_Text_ElementalTutorThunderWhichMon:
	.string "Yes, I see it now. So, for Thunder...\n"
	.string "That means our agent of change is...?$"

CianwoodCity_Text_ElementalTutorBlizzardWhichMon:
	.string "Yes, I see it now. So, for Blizzard...\n"
	.string "That means our agent of change is...?$"

CianwoodCity_Text_ElementalTutorFireBlastWhichMon:
	.string "Yes, I see it now. So, for Fire Blast...\n"
	.string "That means our agent of change is...?$"

CianwoodCity_Text_ElementalTutorHydroPumpWhichMon:
	.string "Yes, I see it now. So, for Hydro Pump...\n"
	.string "That means our agent of change is...?$"

CianwoodCity_Text_ElementalTutorHurricaneWhichMon:
	.string "Yes, I see it now. So, for Hurricane...\n"
	.string "That means our agent of change is...?$"

CianwoodCity_Text_ElementalTutorNaturePowerWhichMon:
	.string "Yes, I see it now. So, for Nature Power...\n"
	.string "That means our agent of change is...?$"

CianwoodCity_Text_ElementalTutorTeachingMove:
	.string "Castform, my dear. May you act as our\n"
	.string "beacon of alteration once more...$"

CianwoodCity_Text_ElementalTutorMoveTaught:
	.string "...You think me mad, do you not?\p"
	.string "It is alright to be sincere. I already\n"
	.string "know it is so.\p"
	.string "Yet as long as the elements call for\n"
	.string "you, I shall be your guide, if they so\l"
	.string "wish it.$"

CianwoodCity_Text_ElementalTutorFriend:
	.string "Curious that we should cross paths so\n"
	.string "frequently, and yet, it will at some\l"
	.string "point be the last time.\p"
	.string "But that's alright. The things most\n"
	.string "worth having in life are often fleeting\l"
	.string "in this way.\p"
	.string "Best enjoy the breeze while it lasts...$"

@special ChooseMonForMoveTutor
