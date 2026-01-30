.set LOCALID_BATTLETOWER_DAHLIA, 16
.set LOCALID_BATTLETOWER_ENGINEER, 9
.set LOCALID_BATTLETOWER_LINDA, 21
.set LOCALID_BATTLETOWER_CINDY, 22
.set LOCALID_BATTLETOWER_LIZZIE, 24
.set LOCALID_BATTLETOWER_MIRANDA, 25
.set LOCALID_BATTLETOWER_GORDO, 26

BattleTower_Outside_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleTower_Outside_OnTransition
	.byte 0

BattleTower_Outside_OnTransition::
	call_if_set FLAG_LIGHTHOUSE_TOO_DARK, BattleTower_Outside_MapScript_UnsetLighthouseTooDarkFlag
	call_if_ge VAR_TERA_B2B_COUNTER, 3, BattleTower_Outside_MapScript_MoveLizzie
	goto_if_set FLAG_DEFEATED_DAHLIA, BattleTower_Outside_MapScript_ClearWeather
	end

BattleTower_Outside_MapScript_UnsetLighthouseTooDarkFlag::
	clearflag FLAG_LIGHTHOUSE_TOO_DARK
	return

BattleTower_Outside_MapScript_MoveLizzie::
	setobjectxyperm LOCALID_BATTLETOWER_LIZZIE, 13, 19
	setobjectmovementtype LOCALID_BATTLETOWER_LIZZIE, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_BATTLETOWER_MIRANDA, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_BATTLETOWER_GORDO, MOVEMENT_TYPE_FACE_LEFT
	return

BattleTower_Outside_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

BattleTower_Outside_EventScript_BattleTowerSign::
	lock
	msgbox BattleTowerOutsideSignText, MSGBOX_SIGN	
	closemessage	
	release
	end

BattleTower_Outside_EventScript_PreBattleTowerSign::
	lock
	msgbox PreBattleTowerOutsideSignText, MSGBOX_SIGN	
	closemessage	
	release
	end

BattleTower_Outside_EventScript_Engineer::
	lock
	faceplayer
	msgbox BattleTowerOutsideText_Closed, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Youngster::
	lock
	faceplayer
	msgbox BattleTowerOutsideYoungsterText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Beauty::
	lock
	faceplayer
	msgbox BattleTowerOutsideBeautyText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Sailor::
	lock
	faceplayer
	msgbox BattleTowerOutsideSailorText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOutsideYoungsterText:
	.string "Wow, the BATTLE TOWER is huge!\p"
	.string "There must be many kinds of\n"
	.string "POKéMON in there!$"

BattleTowerOutsideBeautyText:
	.string "You can use only three POKéMON.\p"
	.string "It's so hard to decide which\n"
	.string "three should go into battle…$"

BattleTowerOutsideSailorText:
	.string "Hehehe, I snuck out from work.\p"
	.string "I can't bail out until I've won!\p"
	.string "I have to win it all. That I must!$"

BattleTowerOutsideSignText:
	.string "BATTLE TOWER\p"
	.string "Take the Ultimate Trainer\n"
	.string "Challenge!$"

PreBattleTowerOutsideSignText:
	.string "Up Ahead:\n"
	.string "The BATTLE TOWER$"

BattleTowerOutsideText_Closed:
	.string "The BATTLE TOWER is currently\n"
	.string "closed for repairs.$"


BattleTower_Outside_EventScript_LeftMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleTower_Outside_EventScript_AlreadyMetLeftTutor
	msgbox BattleTower_Outside_Text_LeftTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleTower_Outside_EventScript_ChooseLeftTutorMove
	end

BattleTower_Outside_EventScript_AlreadyMetLeftTutor::
	msgbox BattleTower_Outside_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseLeftTutorMove
	end

BattleTower_Outside_EventScript_ChooseLeftTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_Softboiled
	case 1, BattleTower_Outside_EventScript_SeismicToss
	case 2, BattleTower_Outside_EventScript_DreamEater
	case 3, BattleTower_Outside_EventScript_MegaPunch
	case 4, BattleTower_Outside_EventScript_MegaKick
	case 5, BattleTower_Outside_EventScript_BodySlam
	case 6, BattleTower_Outside_EventScript_RockSlide
	case 7, BattleTower_Outside_EventScript_Counter
	case 8, BattleTower_Outside_EventScript_ThunderWave
	case 9, BattleTower_Outside_EventScript_SwordsDance
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_ChooseNewLeftTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_Softboiled
	case 1, BattleTower_Outside_EventScript_SeismicToss
	case 2, BattleTower_Outside_EventScript_DreamEater
	case 3, BattleTower_Outside_EventScript_MegaPunch
	case 4, BattleTower_Outside_EventScript_MegaKick
	case 5, BattleTower_Outside_EventScript_BodySlam
	case 6, BattleTower_Outside_EventScript_RockSlide
	case 7, BattleTower_Outside_EventScript_Counter
	case 8, BattleTower_Outside_EventScript_ThunderWave
	case 9, BattleTower_Outside_EventScript_SwordsDance
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_Softboiled::
	setvar VAR_0x8008, 16
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_SeismicToss::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_DreamEater::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_MegaPunch::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_MegaKick::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_BodySlam::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_RockSlide::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Counter::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ThunderWave::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_SwordsDance::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_RightMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleTower_Outside_EventScript_AlreadyMetRightTutor
	msgbox BattleTower_Outside_Text_RightTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleTower_Outside_EventScript_ChooseRightTutorMove
	end

BattleTower_Outside_EventScript_AlreadyMetRightTutor::
	msgbox BattleTower_Outside_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseRightTutorMove
	end

BattleTower_Outside_EventScript_ChooseRightTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_DefenseCurl
	case 1, BattleTower_Outside_EventScript_Snore
	case 2, BattleTower_Outside_EventScript_MudSlap
	case 3, BattleTower_Outside_EventScript_Swift
	case 4, BattleTower_Outside_EventScript_IcyWind
	case 5, BattleTower_Outside_EventScript_Endure
	case 6, BattleTower_Outside_EventScript_PsychUp
	case 7, BattleTower_Outside_EventScript_IcePunch
	case 8, BattleTower_Outside_EventScript_ThunderPunch
	case 9, BattleTower_Outside_EventScript_FirePunch
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_ChooseNewRightTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_DefenseCurl
	case 1, BattleTower_Outside_EventScript_Snore
	case 2, BattleTower_Outside_EventScript_MudSlap
	case 3, BattleTower_Outside_EventScript_Swift
	case 4, BattleTower_Outside_EventScript_IcyWind
	case 5, BattleTower_Outside_EventScript_Endure
	case 6, BattleTower_Outside_EventScript_PsychUp
	case 7, BattleTower_Outside_EventScript_IcePunch
	case 8, BattleTower_Outside_EventScript_ThunderPunch
	case 9, BattleTower_Outside_EventScript_FirePunch
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_DefenseCurl::
	setvar VAR_0x8008, 16
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Snore::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_MudSlap::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Swift::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_IcyWind::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Endure::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_PsychUp::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_IcePunch::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ThunderPunch::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_FirePunch::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ElementalMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_3
	goto_if_set FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR, BattleTower_Outside_EventScript_AlreadyMetElementalTutor
	msgbox BattleTower_Outside_Text_ElementalTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR
	goto BattleTower_Outside_EventScript_ChooseElementalTutorMove
	end

BattleTower_Outside_EventScript_AlreadyMetElementalTutor::
	msgbox BattleTower_Outside_Text_ElementalTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseElementalTutorMove
	end

BattleTower_Outside_EventScript_ChooseElementalTutorMove::
	message BattleTower_Outside_Text_TeachWhichMoveElemental
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_FrenzyPlant
	case 1, BattleTower_Outside_EventScript_BlastBurn
	case 2, BattleTower_Outside_EventScript_HydroCannon
	case 3, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_ChooseNewElementalTutorMove::
	message BattleTower_Outside_Text_TeachWhichMoveElemental
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_FrenzyPlant
	case 1, BattleTower_Outside_EventScript_BlastBurn
	case 2, BattleTower_Outside_EventScript_HydroCannon
	case 3, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_FrenzyPlant::
	setvar VAR_0x8008, 64
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_BlastBurn::
	setvar VAR_0x8008, 64
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_HydroCannon::
	setvar VAR_0x8008, 64
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleTower_Outside_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleTower_Outside_EventScript_CancelChooseMon::
	msgbox BattleTower_Outside_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
BattleTower_Outside_EventScript_ConfirmMoveSelection::
	copyvar VAR_0x8004, VAR_TEMP_FRONTIER_TUTOR_SELECTION
	copyvar VAR_0x8005, VAR_TEMP_FRONTIER_TUTOR_ID
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	copyvar VAR_0x8004, VAR_TEMP_C
	msgbox BattleTower_Outside_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleTower_Outside_EventScript_TeachTutorMove
	msgbox BattleTower_Outside_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseNewMove
	end

BattleTower_Outside_EventScript_TeachTutorMove::
	msgbox BattleTower_Outside_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	special GetBattleFrontierTutorMoveIndex
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, BattleTower_Outside_EventScript_CancelChooseMon
	msgbox BattleTower_Outside_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BattleTower_Outside_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleTower_Outside_EventScript_ChooseNewLeftTutorMove
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 2, BattleTower_Outside_EventScript_ChooseNewElementalTutorMove
	goto BattleTower_Outside_EventScript_ChooseNewRightTutorMove
	end

BattleTower_Outside_Text_LeftTutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON special and\l"
	.string "yet cute moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleTower_Outside_Text_LeftTutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute POKéMON moves?$"

BattleTower_Outside_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

BattleTower_Outside_Text_MoveWillBeXBattlePoints:
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

BattleTower_Outside_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

BattleTower_Outside_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

BattleTower_Outside_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

BattleTower_Outside_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

BattleTower_Outside_Text_RightTutorIntro:
	.string "Ihihihi!\p"
	.string "I know it's hard to see now, but I used\n"
	.string "to be one fantastic TRAINER.\p"
	.string "I had a reputation as the most\n"
	.string "invincible SWIMMER around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What's wrong?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that buffoonish woman over\n"
	.string "there. I'm actually experienced!\p"
	.string "I can prove it to you.\n"
	.string "I can teach your POKéMON hard and\l"
	.string "yet pretty moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleTower_Outside_Text_RightTutorWelcomeBack:
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty POKéMON moves?$"

BattleTower_Outside_Text_ThinkLadiesDontGetAlong:
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"

BattleTower_Outside_Text_LadiesWereStrongAndBeautiful:
	.string "When I was just a wee YOUNGSTER,\n"
	.string "those ladies were strong and beautiful.\p"
	.string "They were idols among us TRAINERS.\p"
	.string "Even now, age hasn't dulled their\n"
	.string "abilities.\p"
	.string "In fact, their POKéMON moves have\n"
	.string "grown even more polished.\p"
	.string "But… For some reason, I can't help\n"
	.string "but feel this…\p"
	.string "Time is so cruel…$"

BattleTower_Outside_Text_SoftboiledDesc::
	.string "Recovers up to\n"
	.string "half the user's\n"
	.string "maximum HP.$"

BattleTower_Outside_Text_SeismicTossDesc::
	.string "Inflicts damage\n"
	.string "identical to the\n"
	.string "user's level.$"

BattleTower_Outside_Text_DreamEaterDesc::
	.string "Recovers half the\n"
	.string "damage inflicted\n"
	.string "on a sleeping foe.$"

BattleTower_Outside_Text_MegaPunchDesc::
	.string "A strong punch\n"
	.string "thrown with\n"
	.string "incredible power.$"

BattleTower_Outside_Text_MegaKickDesc::
	.string "An extremely\n"
	.string "powerful kick with\n"
	.string "intense force.$"

BattleTower_Outside_Text_BodySlamDesc::
	.string "A full-body slam\n"
	.string "that may cause\n"
	.string "paralysis.$"

BattleTower_Outside_Text_RockSlideDesc::
	.string "Large boulders\n"
	.string "are hurled. May\n"
	.string "cause flinching.$"

BattleTower_Outside_Text_CounterDesc::
	.string "Retaliates any\n"
	.string "physical hit with\n"
	.string "double the power.$"

BattleTower_Outside_Text_ThunderWaveDesc::
	.string "A weak jolt of\n"
	.string "electricity that\n"
	.string "paralyzes the foe.$"

BattleTower_Outside_Text_SwordsDanceDesc::
	.string "A fighting dance\n"
	.string "that sharply\n"
	.string "raises ATTACK.$"

BattleTower_Outside_Text_DefenseCurlDesc::
	.string "Curls up to con-\n"
	.string "ceal weak spots\n"
	.string "and raise DEFENSE.$"

BattleTower_Outside_Text_SnoreDesc::
	.string "A loud attack\n"
	.string "that can be used\n"
	.string "only while asleep.$"

BattleTower_Outside_Text_MudSlapDesc::
	.string "Hurls mud in the\n"
	.string "foe's face to re-\n"
	.string "duce its accuracy.$"

BattleTower_Outside_Text_SwiftDesc::
	.string "Sprays star-\n"
	.string "shaped rays\n"
	.string "that never miss.$"

BattleTower_Outside_Text_IcyWindDesc::
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's SPEED.$"

BattleTower_Outside_Text_EndureDesc::
	.string "Endures any at-\n"
	.string "tack for 1 turn,\n"
	.string "leaving 1HP.$"

BattleTower_Outside_Text_PsychUpDesc::
	.string "Copies the foe's\n"
	.string "effect(s) and\n"
	.string "gives to the user.$"

BattleTower_Outside_Text_IcePunchDesc::
	.string "An icy punch\n"
	.string "that may\n"
	.string "freeze the foe.$"

BattleTower_Outside_Text_ThunderPunchDesc::
	.string "An electrified\n"
	.string "punch that may\n"
	.string "paralyze the foe.$"

BattleTower_Outside_Text_FirePunchDesc::
	.string "A fiery punch\n"
	.string "that may burn\n"
	.string "the foe.$"

BattleTower_Outside_Text_ElementalTutorIntro::
	.string "Zzzzzz…\p"
	.string "What, how, what?\p"
	.string "Oh, sorry, I was snoozing a bit.\p"
	.string "I'm the ELEMENTAL TUTOR.\p"
	.string "I have the power to teach the most\n"
	.string "powerful moves to GRASS, FIRE and\l"
	.string "WATER TYPE POKéMON.\p"
	.string "Did you come to learn such a strong\n"
	.string "power?$"

BattleTower_Outside_Text_ElementalTutorWelcomeBack:
	.string "Zzzzzz…\p"
	.string "What, how, what, who?\p"
	.string "Oh, did you come to learn the\n"
	.string "power of my strongest moves?$"

BattleTower_Outside_Text_TeachWhichMoveElemental::
	.string "Which move do you think is suitable\n"
	.string "for your POKéMON?$"

BattleTower_Outside_Text_StrongElementalMoveDesc::
	.string "Powerful, but\n"
	.string "leaves the user\n"
	.string "immobile one turn.$"

BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return

BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGivePrize
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveDecor::
	checkdecorspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleTower_Outside_ExchangeServiceCorner_EventScript_NoRoomForDecor
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	adddecoration VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_NoRoomForDecor::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleTower_Outside_ExchangeServiceCorner_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_BagFull::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_KissPoster
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_KissCushion
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_SmoochumDoll
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_TogepiDoll
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_MeowthDoll
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClefairyDoll
	case 6, BattleTower_Outside_ExchangeServiceCorner_EventScript_DittoDoll
	case 7, BattleTower_Outside_ExchangeServiceCorner_EventScript_CyndaquilDoll
	case 8, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChikoritaDoll
	case 9, BattleTower_Outside_ExchangeServiceCorner_EventScript_TotodileDoll
	case 10, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_KissPoster::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissPoster, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, DECOR_KISS_POSTER
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_KissCushion::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissCushion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, DECOR_KISS_CUSHION
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_SmoochumDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSmoochumDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, DECOR_SMOOCHUM_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TogepiDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTogepiDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_TOGEPI_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_MeowthDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMeowthDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_MEOWTH_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ClefairyDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmClefairyDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_CLEFAIRY_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_DittoDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmDittoDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_DITTO_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_CyndaquilDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_CYNDAQUIL_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChikoritaDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChikoritaDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_CHIKORITA_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TotodileDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTotodileDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_TOTODILE_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_LaprasDoll
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_SnorlaxDoll
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_VenusaurDoll
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_CharizardDoll
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_BlastoiseDoll
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_LaprasDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLaprasDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 128
	setvar VAR_0x8009, DECOR_LAPRAS_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_SnorlaxDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 128
	setvar VAR_0x8009, DECOR_SNORLAX_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_VenusaurDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmVenusaurDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_VENUSAUR_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_CharizardDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCharizardDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_CHARIZARD_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_BlastoiseDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_BLASTOISE_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_VitaminClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_Protein
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_Calcium
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_Iron
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_Zinc
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_Carbos
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_HpUp
	case 6, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_YouAlreadyHaveThis, MSGBOX_DEFAULT
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Protein::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmProtein, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_PROTEIN
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Calcium::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCalcium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_CALCIUM
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Iron::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmIron, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_IRON
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Zinc::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmZinc, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_ZINC
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Carbos::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCarbos, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_CARBOS
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_HpUp::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmHpUp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_HP_UP
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_Leftovers
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_WhiteHerb
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_QuickClaw
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_MentalHerb
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_Brightpowder
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChoiceBand
	case 6, BattleTower_Outside_ExchangeServiceCorner_EventScript_KingsRock
	case 7, BattleTower_Outside_ExchangeServiceCorner_EventScript_FocusBand
	case 8, BattleTower_Outside_ExchangeServiceCorner_EventScript_ScopeLens
	case 9, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Leftovers::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLeftovers, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_LEFTOVERS
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_WhiteHerb::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmWhiteHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_WHITE_HERB
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_QuickClaw::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmQuickClaw, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_MentalHerb::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMentalHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_MENTAL_HERB
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Brightpowder::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBrightpowder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChoiceBand::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChoiceBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_CHOICE_BAND
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_KingsRock::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKingsRock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_FocusBand::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmFocusBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_FOCUS_BAND
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ScopeLens::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmScopeLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Man::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Sailor::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Girl::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_OldWTMan::
	msgbox BattleTower_Outside_ExchangeServiceCorner_EventScript_OldWTMan_Text, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_Text_YouAlreadyHaveThis:
	.string "You already have this item.$"

BattleTower_Outside_ExchangeServiceCorner_EventScript_OldWTMan_Text:
	.string "Hi! If you are looking for the\n"
	.string "WONDERTRADE, they're now located in\l"
	.string "every POKéMON CENTER. Have fun!$"

BattleTower_Outside_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
	.string "Hello, this is the EXCHANGE SERVICE\n"
	.string "CORNER.\p"
	.string "We exchange the Battle Points you\n"
	.string "have collected for lovely prizes.\p"
	.string "Please choose a prize from this list.$"

@ Unused
BattleTower_Outside_ExchangeServiceCorner_Text_PleaseChoosePrize:
	.string "Please choose a prize from this list.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissPoster:
	.string "You've chosen the KISS POSTER.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissCushion:
	.string "You've chosen the KISS CUSHION.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSmoochumDoll:
	.string "You've chosen the SMOOCHUM DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTogepiDoll:
	.string "You've chosen the TOGEPI DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMeowthDoll:
	.string "You've chosen the MEOWTH DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmClefairyDoll:
	.string "You've chosen the CLEFAIRY DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmDittoDoll:
	.string "You've chosen the DITTO DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll:
	.string "You've chosen the CYNDAQUIL DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChikoritaDoll:
	.string "You've chosen the CHIKORITA DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTotodileDoll:
	.string "You've chosen the TOTODILE DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLaprasDoll:
	.string "You've chosen the LAPRAS DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll:
	.string "You've chosen the SNORLAX DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmVenusaurDoll:
	.string "You've chosen the VENUSAUR DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCharizardDoll:
	.string "You've chosen the CHARIZARD DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll:
	.string "You've chosen the BLASTOISE DOLL.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmProtein:
	.string "You've chosen the PROTEIN.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCalcium:
	.string "You've chosen the CALCIUM.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmIron:
	.string "You've chosen the IRON.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmZinc:
	.string "You've chosen the ZINC.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCarbos:
	.string "You've chosen the CARBOS.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmHpUp:
	.string "You've chosen the HP UP.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBrightpowder:
	.string "You've chosen the BRIGHTPOWDER.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmWhiteHerb:
	.string "You've chosen the WHITE HERB.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmQuickClaw:
	.string "You've chosen the QUICK CLAW.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMentalHerb:
	.string "You've chosen the MENTAL HERB.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChoiceBand:
	.string "You've chosen the CHOICE BAND.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKingsRock:
	.string "You've chosen the KING'S ROCK.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmFocusBand:
	.string "You've chosen the FOCUS BAND.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmScopeLens:
	.string "You've chosen the SCOPE LENS.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLeftovers:
	.string "You've chosen the LEFTOVERS.\n"
	.string "Is that correct?$"

BattleTower_Outside_ExchangeServiceCorner_Text_WellSendItToPC:
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

BattleTower_Outside_ExchangeServiceCorner_Text_HereIsYourPrize:
	.string "Here is your prize!$"

BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

BattleTower_Outside_ExchangeServiceCorner_Text_PCIsFull:
	.string "I'm so sorry…\n"
	.string "Your PC appears to be full…$"

BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
	.string "I'm so sorry…\n"
	.string "You don't have space to hold it…$"

BattleTower_Outside_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
	.string "Thank you very much.\p"
	.string "Please visit us when you have\n"
	.string "saved up Battle Points.$"

BattleTower_Outside_ExchangeServiceCorner_Text_WishIHadAllDolls:
	.string "Oh, they're so nice!\n"
	.string "I wish I had them!\l"
	.string "Cute cushions!\l"
	.string "Big plush DOLLS!\l"
	.string "Little plush DOLLS!\l"
	.string "I wish I had them all!$"

BattleTower_Outside_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
	.string "Leave it to your mommy!\p"
	.string "If it's anything you want, I'll go\n"
	.string "through anything to get it, honey!$"

BattleTower_Outside_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
	.string "If I can get hold of the items here,\n"
	.string "my POKéMON will get tougher.\p"
	.string "You bet they will!\n"
	.string "No question about it!$"

BattleTower_Outside_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
	.string "Hah?\n"
	.string "What are you gawking at?\p"
	.string "I don't like you staring at my plush\n"
	.string "doll like that.\p"
	.string "If you want it, go get one yourself!\n"
	.string "Isn't that right, SMOOCHUM?$"

BattleTower_Outside_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
	.string "Did you know?\p"
	.string "If you stretch your record at any of\n"
	.string "the BATTLE facilities, they start\l"
	.string "giving you more and more Battle Points.$"

BattleTower_Outside_ExchangeServiceCorner_Text_KissPosterDesc::
	.string "A large poster with a SMOOCHUM print.$"

BattleTower_Outside_ExchangeServiceCorner_Text_KissCushionDesc::
	.string "A SMOOCHUM cushion.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_SmoochumDollDesc::
	.string "A SMOOCHUM DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_TogepiDollDesc::
	.string "A TOGEPI DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_MeowthDollDesc::
	.string "A MEOWTH DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ClefairyDollDesc::
	.string "A CLEFAIRY DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_DittoDollDesc::
	.string "A DITTO DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_CyndaquilDollDesc::
	.string "A CYNDAQUIL DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ChikoritaDollDesc::
	.string "A CHIKORITA DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_TotodileDollDesc::
	.string "A TOTODILE DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_LargeDollDesc::
	.string "A large DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ProteinDesc::
	.string "A strange ticket that will get\n"
	.string "you to an abandoned island.$"

BattleTower_Outside_ExchangeServiceCorner_Text_CalciumDesc::
	.string "A strange ticket that will get\n"
	.string "you to an abandoned island.$"

BattleTower_Outside_ExchangeServiceCorner_Text_IronDesc::
	.string "A strange ticket that will get\n"
	.string "you to an abandoned island.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ZincDesc::
	.string "An… old map? Maybe\n"
	.string "it will get you somewhere.$"

BattleTower_Outside_ExchangeServiceCorner_Text_CarbosDesc::
	.string "x10 EV gain, but halves speed.$"

BattleTower_Outside_ExchangeServiceCorner_Text_HPUpDesc::
	.string "A peculiar box made\n"
	.string "by SILPH CO.$"  

BattleTower_Outside_ExchangeServiceCorner_Text_LeftoversDesc::
	.string "A hold item that gradually restores\n"
	.string "HP in battle.$"

BattleTower_Outside_ExchangeServiceCorner_Text_WhiteHerbDesc::
	.string "A hold item that restores any\n"
	.string "lowered stat.$"

BattleTower_Outside_ExchangeServiceCorner_Text_QuickClawDesc::
	.string "A hold item that occasionally allows\n"
	.string "the first strike.$"

BattleTower_Outside_ExchangeServiceCorner_Text_MentalHerbDesc::
	.string "A hold item that snaps POKéMON out\n"
	.string "of infatuation.$"

BattleTower_Outside_ExchangeServiceCorner_Text_BrightpowderDesc::
	.string "A hold item that casts a glare to\n"
	.string "reduce accuracy.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ChoiceBandDesc::
	.string "Raises a move's power, but permits\n"
	.string "only that move.$"

BattleTower_Outside_ExchangeServiceCorner_Text_KingsRockDesc::
	.string "A hold item that may cause flinching\n"
	.string "when the foe is hit.$"

BattleTower_Outside_ExchangeServiceCorner_Text_FocusBandDesc::
	.string "A hold item that occasionally\n"
	.string "prevents fainting.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ScopeLensDesc::
	.string "A hold item that raises the\n"
	.string "critical-hit rate.$"



BattleTower_Outside_EventScript_Jeffrey::
	trainerbattle_single TRAINER_JEFFREY SageJeffreySeenText, SageJeffreyBeatenText
	msgbox SageJeffreyAfterBattleText, MSGBOX_AUTOCLOSE
	end
	
BattleTower_Outside_EventScript_Ping::
	trainerbattle_single TRAINER_PING SagePingSeenText, SagePingBeatenText
	msgbox SagePingAfterBattleText, MSGBOX_AUTOCLOSE
	end

BattleTower_Outside_EventScript_Martha::
	trainerbattle_single TRAINER_MARTHA MediumMarthaSeenText, MediumMarthaBeatenText
	msgbox MediumMarthaAfterBattleText, MSGBOX_AUTOCLOSE
	end

BattleTower_Outside_EventScript_Grace::
	trainerbattle_single TRAINER_GRACE MediumGraceSeenText, MediumGraceBeatenText
	msgbox MediumGraceAfterBattleText, MSGBOX_AUTOCLOSE
	end

SageJeffreySeenText:
	.string "I spent the spring with my\n"
	.string "POKéMON.\p"
	.string "Then summer, fall, and winter...\p"
	.string "Then spring came again.\n"
	.string "We've been together a long time.$"

SageJeffreyBeatenText:
	.string "Wins and losses--I've known\n"
	.string "them both.$"

SageJeffreyAfterBattleText:
	.string "Where did POKéMON come from?$"

SagePingSeenText:
	.string "Terastallization adds a whole new level\n"
	.string "of depth to battles.\p"
	.string "Only a master can use it correctly.$"

SagePingBeatenText:
	.string "Ah! Well done!$"

SagePingAfterBattleText:
	.string "You truly are an expert in using\n"
	.string "terastallization. I have much to learn.$"

MediumMarthaSeenText:
	.string "I shall win!$"

MediumMarthaBeatenText:
	.string "I... I... I lost!$"

MediumMarthaAfterBattleText:
	.string "The one who wants to win the\n"
	.string "most is the one who will!$"

MediumGraceSeenText:
	.string "Kekekekeke! You? Beat the two of us?\n"
	.string "Impossible!$"

MediumGraceBeatenText:
	.string "Ack! It was possible after all!$"

MediumGraceAfterBattleText:
	.string "Are you some kind of miracle worker?$"

BattleTower_Outside_EventScript_Linda::
	lock
	faceplayer
	msgbox BattleTower_Outside_Text_LassLinda_After, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Cindy::
	lock
	faceplayer
	msgbox BattleTower_Outside_Text_PicnickerCindy_After, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_Text_LassLinda_Before:
	.string "Oh, you look weak. Lucky me!$"

BattleTower_Outside_Text_LassLinda_Beaten:
	.string "Ooh… I lost… You're not weak…$"

BattleTower_Outside_Text_LassLinda_After:
	.string "Walking around so quietly when you're\n"
	.string "so strong... It's false advertising, no?$"

BattleTower_Outside_Text_PicknickerCindy_Before:
	.string "Take this!\n"
	.string "Let's battle!$"

BattleTower_Outside_Text_PicnickerCindy_Beaten:
	.string "Darn it! I wanted to win!$"

BattleTower_Outside_Text_PicnickerCindy_After:
	.string "You must be getting tired.$"


BattleTower_Outside_EventScript_Renji::
	trainerbattle_single TRAINER_RIVAL_CYNDAQUIL_1 BattleTower_Outside_Text_CooltrainermRenjiSeen, BattleTower_Outside_Text_CooltrainermRenjiBeaten
	msgbox BattleTower_Outside_Text_CooltrainermRenjiAfter, MSGBOX_AUTOCLOSE
	end

BattleTower_Outside_Text_CooltrainermRenjiSeen:
    .string "By experiencing tough battles, you\n"
    .string "gain power.$"

BattleTower_Outside_Text_CooltrainermRenjiBeaten:
    .string "Gaah! Life is even tougher!$"

BattleTower_Outside_Text_CooltrainermRenjiAfter:
    .string "To get to DAHLIA, you have\n"
    .string "to be tough!$"




BattleTower_Outside_EventScript_B2B::
	lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
    playse SE_PIN
	applymovement LOCALID_BATTLETOWER_LINDA, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 45, BattleTower_Outside_EventScript_AdjustLinda
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox BattleTower_Outside_Text_LassLinda_Before, MSGBOX_DEFAULT
	playbgm MUS_HG_B_TOWER, TRUE
	trainerbattle_no_intro TRAINER_LINDA, BattleTower_Outside_Text_LassLinda_Beaten
	playbgm MUS_HG_ENCOUNTER_GIRL_2, TRUE
	playse SE_PIN
	applymovement LOCALID_BATTLETOWER_CINDY, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 44, BattleTower_Outside_EventScript_AdjustCindy
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox BattleTower_Outside_Text_PicknickerCindy_Before, MSGBOX_DEFAULT
	playbgm MUS_HG_B_TOWER, TRUE
	trainerbattle_no_intro TRAINER_CINDY, BattleTower_Outside_Text_PicnickerCindy_Beaten
	setvar VAR_TERA_B2B_COUNTER, 2
	release
	end
	
BattleTower_Outside_EventScript_Lizzie::
	lock
	faceplayer
	goto_if_ge VAR_TERA_B2B_COUNTER, 3, BattleTower_Outside_EventScript_LizziePostB2B2B
	msgbox BattleTower_Outside_Text_LizzieAskIfReady, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BattleTower_Outside_EventScript_B2B2B
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_EventScript_LizzieDeclined
	end

BattleTower_Outside_EventScript_LizzieDeclined::
	msgbox BattleTower_Outside_Text_LizzieDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end 

BattleTower_Outside_EventScript_B2B2B::
	msgbox BattleTower_Outside_Text_LizziePreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, BattleTower_Outside_Text_LizzieBeaten
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement LOCALID_BATTLETOWER_MIRANDA, Common_Movement_WalkInPlaceRight
	waitmovement 0
	waitmovement 0
	msgbox BattleTower_Outside_Text_MirandaPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, BattleTower_Outside_Text_MirandaBeaten
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_BATTLETOWER_GORDO, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	waitmovement 0
	msgbox BattleTower_Outside_Text_GordoPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, BattleTower_Outside_Text_GordoBeaten
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_BATTLETOWER_LIZZIE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	waitmovement 0
	msgbox BattleTower_Outside_Text_LizzieGoFightDahlia, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TERA_B2B_COUNTER, 3
	applymovement LOCALID_BATTLETOWER_LIZZIE, BattleTower_Outside_Movement_LizzieGetOutTheWay
	applymovement LOCALID_BATTLETOWER_MIRANDA, Common_Movement_FaceRight
	applymovement LOCALID_BATTLETOWER_GORDO, Common_Movement_FaceLeft
	waitmovement 0
	waitmovement 0
	waitmovement 0
	setobjectxyperm LOCALID_BATTLETOWER_LIZZIE, 13, 19
	release
	end

BattleTower_Outside_EventScript_LizziePostB2B2B::
	lock
	faceplayer
	msgbox BattleTower_Outside_Text_LizzieGoFightDahlia, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Miranda::
	lock 
	faceplayer
	goto_if_ge VAR_TERA_B2B_COUNTER, 3, BattleTower_Outside_EventScript_MirandaPostB2B2B
	msgbox BattleTower_Outside_Text_MirandaTalkToLizzie, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_MirandaPostB2B2B::
	msgbox BattleTower_Outside_Text_MirandaGoFightDahlia, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Gordo::
	lock 
	faceplayer
	goto_if_ge VAR_TERA_B2B_COUNTER, 3, BattleTower_Outside_EventScript_GordoPostB2B2B
	msgbox BattleTower_Outside_Text_GordoTalkToLizzie, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_GordoPostB2B2B::
	msgbox BattleTower_Outside_Text_GordoGoFightDahlia, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_Movement_LizzieGetOutTheWay::
	walk_left
	face_right
	step_end

BattleTower_Outside_Text_LizzieAskIfReady:
	.string "Halt, trainer.\p"
	.string "We've been tasked with testing you.\p"
	.string "If you're planning on challenging\n"
	.string "DAHLIA, you have to get through the\l"
	.string "three of us first.\p"
	.string "How about it? Think you can take all of\n"
	.string "us on?$"

BattleTower_Outside_Text_LizzieDeclined:
	.string "What's the matter? Scared?$"

BattleTower_Outside_Text_LizziePreFight:
	.string "You're gutsy, I'll give you that. Hope\n"
	.string "you can back that talk up!$"

BattleTower_Outside_Text_LizzieBeaten:
	.string "Well, I'll be! You really weren't lying!$"

BattleTower_Outside_Text_MirandaPreFight:
	.string "I'm up next. Think you can keep up?$"

BattleTower_Outside_Text_MirandaBeaten:
	.string "Wow! Incredible! No wonder you beat\n"
	.string "LIZZIE!$"

BattleTower_Outside_Text_GordoPreFight:
	.string "You beat LIZZIE and MIRANDA...\n"
	.string "Could you maybe go easy on me?$"

BattleTower_Outside_Text_GordoBeaten:
	.string "Oh well. That was to be expected, I\n"
	.string "guess.$"

BattleTower_Outside_Text_LizzieGoFightDahlia:
	.string "To earn DAHLIA's respect is an\n"
	.string "achievement in and of itself.\p"
	.string "You should be very proud.$"

BattleTower_Outside_Text_MirandaTalkToLizzie:
	.string "Uhh, if you want to fight DAHLIA, you'd\n"
	.string "better talk to LIZZIE first...$"

BattleTower_Outside_Text_MirandaGoFightDahlia:
	.string "Man, it feels a different kind of\n"
	.string "depressing to lose in a three on one...$"

BattleTower_Outside_Text_GordoTalkToLizzie:
	.string "Apologies, trainer. I have been\n"
	.string "instructed by our great leader that\l"
	.string "you must first converse with her\l"
	.string "before we may consider entertaining\l"
	.string "your wishes.\p"
	.string "Please do so thusly.\p"
	.string "Er, did that last bit make sense?$"

BattleTower_Outside_Text_GordoGoFightDahlia:
	.string "So... how about this weather we're\n"
	.string "having, huh?$"

BattleTower_Outside_EventScript_AdjustLinda::
	applymovement LOCALID_BATTLETOWER_LINDA, Common_Movement_WalkDown1
	waitmovement 0
	return

BattleTower_Outside_EventScript_AdjustCindy::
	applymovement LOCALID_BATTLETOWER_CINDY, Common_Movement_WalkUp1
	waitmovement 0
	return

@DAHLIA START
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@





BattleTower_Outside_ChallengedByDahlia::
	lock
	faceplayer
	playbgm MUS_HG_B_ARCADE, TRUE
	goto_if_eq VAR_DAHLIA_STATE, 3, BattleTower_Outside_EventScript_ChallengedByDahliaPostIntro
	setvar VAR_DAHLIA_STATE, 3
	msgbox BattleTower_Outside_Text_DahliaIntro, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChallengedByDahliaPostIntro
	end

BattleTower_Outside_EventScript_ChallengedByDahliaPostIntro::
	msgbox BattleTower_Outside_Text_DahliaEncounterPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_DahliaBattleNormal
	case 1, BattleTower_Outside_EventScript_DahliaBattleHard
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_DeclineDahliaChallenge
	goto BattleTower_Outside_EventScript_DeclineDahliaChallenge

BattleTower_Outside_EventScript_DahliaBattleNormal::
	msgbox BattleTower_Outside_Text_DahliaBattleNormal, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DAHLIA_NORMAL, BattleTower_Outside_Text_DahliaWin
	setweather WEATHER_NONE
	msgbox BattleTower_Outside_Text_DahliaNormalAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	giveitem ITEM_SERIOUS_MINT
	msgbox BattleTower_Outside_Text_DahliaLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 13, BattleTower_Outside_EventScript_DahliaLeavePlayerLeft
	call_if_eq VAR_TEMP_0, 14, BattleTower_Outside_EventScript_DahliaLeavePlayerRightOrDown
	call_if_eq VAR_TEMP_0, 15, BattleTower_Outside_EventScript_DahliaLeavePlayerRightOrDown
	waitmovement 0
	setflag FLAG_DEFEATED_DAHLIA
	removeobject LOCALID_BATTLETOWER_DAHLIA
	setvar VAR_DAHLIA_STATE, 3
	fadedefaultbgm
	release
	end

BattleTower_Outside_EventScript_DahliaBattleHard::
	msgbox BattleTower_Outside_Text_DahliaBattleHard, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DAHLIA_HARD, BattleTower_Outside_Text_DahliaWin
	setweather WEATHER_NONE
	msgbox BattleTower_Outside_Text_DahliaHardAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox BattleTower_Outside_Text_DahliaLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 13, BattleTower_Outside_EventScript_DahliaLeavePlayerLeft
	call_if_eq VAR_TEMP_0, 14, BattleTower_Outside_EventScript_DahliaLeavePlayerRightOrDown
	call_if_eq VAR_TEMP_0, 15, BattleTower_Outside_EventScript_DahliaLeavePlayerRightOrDown
	setflag FLAG_DEFEATED_DAHLIA
	removeobject LOCALID_BATTLETOWER_DAHLIA
	setvar VAR_DAHLIA_STATE, 3
	fadedefaultbgm
	release
	end

BattleTower_Outside_EventScript_DeclineDahliaChallenge::
	msgbox BattleTower_Outside_Text_DeclineDahliaChallenge, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	release
	end

BattleTower_Outside_EventScript_DahliaLeavePlayerRightOrDown::
	applymovement LOCALID_BATTLETOWER_DAHLIA, BattleTower_Outside_Movement_DahliaMoveToEngineerPlayerRightOrDown
	waitmovement 0
	applymovement LOCALID_BATTLETOWER_ENGINEER, Common_Movement_FaceDown
	waitmovement 0
	msgbox BattleTower_Outside_Text_DahliaInstructEngineer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BATTLETOWER_DAHLIA, BattleTower_Outside_Movement_DahliaLeave
	waitmovement 0
	applymovement LOCALID_BATTLETOWER_ENGINEER, BattleTower_Outside_Movement_EngineerBlockDoorPlayerRightOrDown
	waitmovement 0
	return

BattleTower_Outside_EventScript_DahliaLeavePlayerLeft::
	applymovement LOCALID_BATTLETOWER_DAHLIA, BattleTower_Outside_Movement_DahliaMoveToEngineerPlayerLeft
	waitmovement 0
	applymovement LOCALID_BATTLETOWER_ENGINEER, Common_Movement_FaceDown
	waitmovement 0
	msgbox BattleTower_Outside_Text_DahliaInstructEngineer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BATTLETOWER_DAHLIA, BattleTower_Outside_Movement_DahliaLeave
	waitmovement 0
	applymovement LOCALID_BATTLETOWER_ENGINEER, BattleTower_Outside_Movement_EngineerBlockDoorPlayerLeft
	waitmovement 0
	return



BattleTower_Outside_Movement_DahliaMoveToEngineerPlayerRightOrDown::
	walk_left
	walk_down
	walk_left
	face_up
	step_end

BattleTower_Outside_Movement_EngineerBlockDoorPlayerRightOrDown::
	walk_right
	walk_right
	face_down
	step_end

BattleTower_Outside_Movement_DahliaMoveToEngineerPlayerLeft::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

BattleTower_Outside_Movement_EngineerBlockDoorPlayerLeft::
	walk_down
	walk_right
	walk_right
	walk_up
	face_down
	step_end

BattleTower_Outside_Movement_DahliaLeave::
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

BattleTower_Outside_Text_DahliaIntro:
	.string "DAHLIA: I knew you'd make it here\n"
	.string "without an issue.\p"
	.string "You remind me of a trainer I met back at\n"
	.string "my BATTLE ARCADE in SINNOH.\p"
	.string "The BATTLE ARCADE is a facility I run\n"
	.string "where trainers battle under randomly\l"
	.string "chosen conditions, testing both their\l"
	.string "luck and skill.\p"
	.string "...Or so I thought.\p"
	.string "Recently, I lost to an incredibly\n"
	.string "strong trainer, who managed to win even\l"
	.string "when the conditions were against him.\p"
	.string "Afterwards, he said to me, 'A tougher\n"
	.string "fight simply means I come out the other\l"
	.string "side a stronger trainer.'\p"
	.string "In other words, he was willing to\n"
	.string "undergo greater adversity in order to\l"
	.string "hone his skills for the journey ahead.\p"
	.string "...\p"
	.string "I promise to make this worth your while,\n"
	.string "{PLAYER}, so answer honestly.$"

BattleTower_Outside_Text_DahliaEncounterPostIntro:
	.string "Would you prefer to always have good\n"
	.string "luck and an easy path to victory?\p"
	.string "Or does bad luck and struggle make us\n"
	.string "stronger in the long run?\p"
	.string "Say we were to battle right now...\p"
	.string "Would you wish for a hard opponent,\n"
	.string "or a normal opponent?$"

BattleTower_Outside_Text_DeclineDahliaChallenge:
	.string "Oh, you want to think over your answer?\n"
	.string "Guess that makes two of us!\p"
	.string "I'll be waiting here for when you're\n"
	.string "ready then.$"

BattleTower_Outside_Text_DahliaBattleNormal:
	.string "Hoping your good luck lasts forever,\n"
	.string "are you? We'll see about that!$"

BattleTower_Outside_Text_DahliaBattleHard:
	.string "Interesting! So you're the type to opt\n"
	.string "into adversity, are you? Ha!\p"
	.string "Then let's see just how strong the\n"
	.string "hardship you've endured has made you!$"

BattleTower_Outside_Text_DahliaWin:
	.string "Incredible! No matter the source of\n"
	.string "your strength, I can't deny that you\l"
	.string "are one skilled trainer!$"

BattleTower_Outside_Text_DahliaNormalAfter:
	.string "So that's that, then.\p"
	.string "You know, I think you're right. If you\n"
	.string "take on the more difficult challenge\l"
	.string "every time, eventually you will lose\l"
	.string "more than you would have otherwise by\l"
	.string "letting luck take its natural course.\p"
	.string "Thank you for showing me your point of\n"
	.string "view. Here, I want you to have these.$"

BattleTower_Outside_Text_DahliaHardAfter:
	.string "So that's that, then.\p"
	.string "You know, I think you're right. If you\n"
	.string "take on the more difficult challenge\l"
	.string "every time, eventually you will learn\l"
	.string "how to overcome mountains you\l"
	.string "otherwise would never be able to climb.\p"
	.string "Thank you for showing me your point of\n"
	.string "view. Here, I want you to have these.$"

BattleTower_Outside_Text_DahliaLeaving:	
	.string "The real luck I had was running into you\n"
	.string "today, {PLAYER}.\p"
	.string "You know, I think the other FRONTIER\n"
	.string "BRAINS would love to meet you.\p"
	.string "Maybe keep an eye out for them on the\n"
	.string "rest of your journey.\p"
	.string "Who knows? Maybe I'll be lucky enough\n"
	.string "to run into you again someday.\l"
	.string "Bye bye for now!$"

BattleTower_Outside_Text_DahliaInstructEngineer:
	.string "It looks like the OLIVINE LIGHTHOUSE\n"
	.string "has sorted out its emergency power\l"
	.string "now, so we might get an influx of people\l"
	.string "coming over here soon.\p"
	.string "Make sure you keep this place locked up\n"
	.string "until it's ready, okay? Thanks a bunch!$"

