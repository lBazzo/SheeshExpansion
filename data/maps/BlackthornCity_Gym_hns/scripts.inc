.set LOCALID_BLACKTHORNGYM_IRIS, 13
.set LOCALID_BLACKTHORNGYM_DRAYDEN, 14

BlackthornCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BlackthornGym_OnLoad
	.byte 0

BlackthornGym_OnLoad::
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 1, BlackthornGym_MapScript_Var1
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 2, BlackthornGym_MapScript_Var2
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 3, BlackthornGym_MapScript_Var3
	call_if_eq VAR_BLACKTHORN_GYM_STATE, 4, BlackthornGym_MapScript_Var4
	end

BlackthornGym_MapScript_Var1::
	call BlackthornGym_MapScript_BuildBridge1
	end

BlackthornGym_MapScript_Var2::
	call BlackthornGym_MapScript_BuildBridge1
	call BlackthornGym_MapScript_BuildBridge2
	end

BlackthornGym_MapScript_Var3::
	call BlackthornGym_MapScript_BuildBridge1
	call BlackthornGym_MapScript_BuildBridge2
	call BlackthornGym_MapScript_BuildBridge3
	end

BlackthornGym_MapScript_Var4::
	call BlackthornGym_MapScript_BuildBridge1
	call BlackthornGym_MapScript_BuildBridge2
	call BlackthornGym_MapScript_BuildBridge3
	call BlackthornGym_MapScript_BuildBridge4
	end

BlackthornGym_TriggerBridge1::
	call BlackthornGym_MapScript_BuildBridge1
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 1
	end

BlackthornGym_MapScript_BuildBridge1::
	setmetatile 19, 47, 0x35A, FALSE
	setmetatile 19, 48, 0x35A, FALSE
	setmetatile 19, 49, 0x35A, FALSE
	setmetatile 19, 50, 0x35A, FALSE
	setmetatile 19, 51, 0x35A, FALSE
	setmetatile 19, 52, 0x35A, FALSE
	setmetatile 19, 53, 0x35A, FALSE
	setmetatile 19, 54, 0x35A, FALSE
	setmetatile 20, 47, 0x35A, FALSE
	setmetatile 20, 48, 0x35A, FALSE
	setmetatile 20, 49, 0x35A, FALSE
	setmetatile 20, 50, 0x35A, FALSE
	setmetatile 20, 51, 0x35A, FALSE
	setmetatile 20, 52, 0x35A, FALSE
	setmetatile 20, 53, 0x35A, FALSE
	setmetatile 20, 54, 0x35A, FALSE
	setmetatile 21, 47, 0x35A, FALSE
	setmetatile 21, 48, 0x35A, FALSE
	setmetatile 21, 49, 0x35A, FALSE
	setmetatile 21, 50, 0x35A, FALSE
	setmetatile 21, 51, 0x35A, FALSE
	setmetatile 21, 52, 0x35A, FALSE
	setmetatile 21, 53, 0x35A, FALSE
	setmetatile 21, 54, 0x35A, FALSE
	return

BlackthornGym_TriggerBridge2::
	call BlackthornGym_MapScript_BuildBridge2
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 2
	end

BlackthornGym_MapScript_BuildBridge2::
	setmetatile 17, 35, 0x35A, FALSE
	setmetatile 17, 36, 0x35A, FALSE
	setmetatile 17, 37, 0x35A, FALSE
	setmetatile 17, 38, 0x35A, FALSE
	setmetatile 17, 39, 0x35A, FALSE
	setmetatile 17, 40, 0x35A, FALSE
	setmetatile 18, 35, 0x35A, FALSE
	setmetatile 18, 36, 0x35A, FALSE
	setmetatile 18, 37, 0x35A, FALSE
	setmetatile 18, 38, 0x35A, FALSE
	setmetatile 18, 39, 0x35A, FALSE
	setmetatile 18, 40, 0x35A, FALSE
	setmetatile 19, 35, 0x35A, FALSE
	setmetatile 19, 36, 0x35A, FALSE
	setmetatile 19, 37, 0x35A, FALSE
	setmetatile 19, 38, 0x35A, FALSE
	setmetatile 19, 39, 0x35A, FALSE
	setmetatile 19, 40, 0x35A, FALSE
	setmetatile 20, 32, 0x359, FALSE
	setmetatile 21, 32, 0x359, FALSE
	setmetatile 22, 32, 0x359, FALSE
	setmetatile 20, 35, 0x361, TRUE
	setmetatile 21, 35, 0x361, TRUE
	setmetatile 22, 35, 0x361, TRUE
	setmetatile 20, 33, 0x35A, FALSE
	setmetatile 20, 34, 0x35A, FALSE
	setmetatile 21, 33, 0x35A, FALSE
	setmetatile 21, 34, 0x35A, FALSE
	setmetatile 22, 33, 0x35A, FALSE
	setmetatile 22, 34, 0x35A, FALSE
	return

BlackthornGym_TriggerBridge3::
	call BlackthornGym_MapScript_BuildBridge3
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 3
	end

BlackthornGym_MapScript_BuildBridge3::
	setmetatile 17, 26, 0x359, FALSE
	setmetatile 18, 26, 0x359, FALSE
	setmetatile 19, 26, 0x359, FALSE
	setmetatile 20, 26, 0x359, FALSE
	setmetatile 21, 26, 0x359, FALSE
	setmetatile 22, 26, 0x359, FALSE
	setmetatile 23, 26, 0x359, FALSE

	setmetatile 17, 29, 0x361, TRUE
	setmetatile 18, 29, 0x361, TRUE
	setmetatile 19, 29, 0x361, TRUE
	setmetatile 20, 29, 0x361, TRUE
	setmetatile 21, 29, 0x361, TRUE
	setmetatile 22, 29, 0x361, TRUE
	setmetatile 23, 29, 0x361, TRUE

	setmetatile 17, 27, 0x35A, FALSE
	setmetatile 17, 28, 0x35A, FALSE
	setmetatile 18, 27, 0x35A, FALSE
	setmetatile 18, 28, 0x35A, FALSE
	setmetatile 19, 27, 0x35A, FALSE
	setmetatile 19, 28, 0x35A, FALSE
	setmetatile 20, 27, 0x35A, FALSE
	setmetatile 20, 28, 0x35A, FALSE
	setmetatile 21, 27, 0x35A, FALSE
	setmetatile 21, 28, 0x35A, FALSE
	setmetatile 22, 27, 0x35A, FALSE
	setmetatile 22, 28, 0x35A, FALSE
	setmetatile 23, 27, 0x35A, FALSE
	setmetatile 23, 28, 0x35A, FALSE
	return	

BlackthornGym_TriggerBridge4::
	call BlackthornGym_MapScript_BuildBridge4
	playse SE_BANG
	special DrawWholeMapView
	setvar VAR_BLACKTHORN_GYM_STATE, 4
	end

BlackthornGym_MapScript_BuildBridge4::
	setmetatile 19, 11, 0x35A, FALSE
	setmetatile 19, 12, 0x35A, FALSE
	setmetatile 19, 13, 0x35A, FALSE
	setmetatile 19, 14, 0x35A, FALSE
	setmetatile 19, 15, 0x35A, FALSE
	setmetatile 20, 11, 0x35A, FALSE
	setmetatile 20, 12, 0x35A, FALSE
	setmetatile 20, 13, 0x35A, FALSE
	setmetatile 20, 14, 0x35A, FALSE
	setmetatile 20, 15, 0x35A, FALSE
	setmetatile 21, 11, 0x35A, FALSE
	setmetatile 21, 12, 0x35A, FALSE
	setmetatile 21, 13, 0x35A, FALSE
	setmetatile 21, 14, 0x35A, FALSE
	setmetatile 21, 15, 0x35A, FALSE
	return


BlackthornGym_EventScript_Cody::
	trainerbattle_single TRAINER_CODY BlackthornGym_Text_CooltrainermCodySeenText, BlackthornGym_Text_CooltrainermCodyBeatenText
	msgbox BlackthornGym_Text_CooltrainermCodyAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Fran::
	trainerbattle_single TRAINER_FRAN BlackthornGym_Text_CooltrainerfFranSeenText, BlackthornGym_Text_CooltrainerfFranBeatenText
	msgbox BlackthornGym_Text_CooltrainerfFranAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Paul::
	trainerbattle_single TRAINER_PAUL BlackthornGym_Text_CooltrainermPaulSeenText, BlackthornGym_Text_CooltrainermPaulBeatenText
	msgbox BlackthornGym_Text_CooltrainermPaulAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Mike::
	trainerbattle_single TRAINER_MIKE BlackthornGym_Text_CooltrainermMikeSeenText, BlackthornGym_Text_CooltrainermMikeBeatenText
	msgbox BlackthornGym_Text_CooltrainermMikeAfterBattleText, MSGBOX_AUTOCLOSE
	end

BlackthornGym_EventScript_Lola::
	trainerbattle_single TRAINER_LOLA BlackthornGym_Text_CooltrainerfLolaSeenText, BlackthornGym_Text_CooltrainerfLolaBeatenText
	msgbox BlackthornGym_Text_CooltrainerfLolaAfterBattleText, MSGBOX_AUTOCLOSE
	end


BlackthornGym_EventScript_Clair::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, BlackthornGym_EventScript_ClairAfterLeague
	goto_if_ge VAR_BLACKTHORN_CITY_STATE, 4, BlackthornGym_EventScript_Clair_Defeated
	goto_if_eq VAR_BLACKTHORN_CITY_STATE, 2, BlackthornGym_EventScript_ClairDuringChallenge
	msgbox BlackthornGym_Text_ClairIntroText, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CLAIR_1, BlackthornGym_Text_ClairWinText
	msgbox BlackthornGym_Text_ClairText_GoToDragonsDen, MSGBOX_DEFAULT
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	setvar VAR_BLACKTHORN_CITY_STATE, 2
	closemessage
	release
	end

BlackthornGym_EventScript_ClairDuringChallenge::
	msgbox BlackthornGym_Text_ClairText_TooMuchToExpect, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_EventScript_Clair_Defeated::
	msgbox BlackthornGym_Text_ClairText_League, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_EventScript_ClairAfterLeague::
	msgbox BlackthornGym_Text_ClairAfterLeague, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_Text_ClairIntroText:
    .string "I am CLAIR.\p"
    .string "The world's best dragon master.\p"
    .string "I can hold my own against even the\n"
    .string "POKéMON LEAGUE's ELITE FOUR.\p"
    .string "Do you still want to take me on?\p"
    .string "…Fine. Let's do it!\p"
    .string "As a GYM LEADER, I will use my full\n"
    .string "power against any opponent!$"

BlackthornGym_Text_ClairWinText:
    .string "I lost?\p"
    .string "I don't believe it. There must be\n"
    .string "some mistake…$"

BlackthornGym_Text_ClairText_GoToDragonsDen:
    .string "I won't admit this.\p"
    .string "I may have lost, but you're still\n"
    .string "not ready for the POKéMON LEAGUE.\p"
    .string "I know. You should take the dragon\n"
    .string "user challenge.\p"
    .string "Behind this GYM is a place called\n"
    .string "DRAGON'S DEN.\p"
    .string "There is a small shrine at its\n"
    .string "center. Go there.\p"
    .string "If you can prove that you've lost\n"
    .string "your lazy ideals, I will recognize\l"
    .string "you as a trainer worthy of a GYM\l"
    .string "BADGE!$"

BlackthornGym_Text_ClairText_TooMuchToExpect:
    .string "What's the matter?\p"
    .string "Is it too much to expect of you?$"

BlackthornGym_Text_ClairText_YouKeptMeWaiting:
    .string "You've kept me waiting!\p"
    .string "Here! Take this!$"

BlackthornGym_Text_ClairText_DescribeTM:
    .string "That contains DRAGON CLAW.\p"
    .string "You can figure out what it does.$"

BlackthornGym_Text_ClairText_League:
    .string "What's the matter?\p"
    .string "Aren't you headed to the POKéMON\n"
    .string "LEAGUE?\p"
    .string "Don't you know where it is?\p"
    .string "From here, go to NEW BARK TOWN.\p"
    .string "Then SURF east. The route there is\n"
    .string "very tough.\p"
    .string "Don't you dare lose at the POKéMON\n"
    .string "LEAGUE!\p"
    .string "If you do, I'll feel even worse\n"
    .string "about having lost to you!\p"
    .string "Give it everything you've got.$"

BlackthornGym_Text_ClairAfterLeague:
    .string "You did it, huh?\p"
    .string "You are now the JOHTO CHAMP.$"

BlackthornGym_Text_ClairRematchText:
    .string "You did it, huh?\p"
    .string "You are now the JOHTO CHAMP.\p"
    .string "You've proven your strength but can\n"
    .string "you handle me again?\p"
    .string "As a Dragon Master, I won't hold\n"
    .string "back.\p"
    .string "Not this time.\p"
    .string "Want to have a rematch with me?$"

BlackthornGym_Text_ClairRematchDefeatText:
    .string "I lost?\p"
    .string "Again?\p"
    .string "I don't believe it. There must be\n"
    .string "some mistake…$"

BlackthornGym_Text_CooltrainermCodySeenText:
    .string "I just got access to use DRAGON-\n"
    .string "type POKéMON!$"

BlackthornGym_Text_CooltrainermCodyBeatenText:
    .string "Rats! If only I had a DRAGONITE!$"

BlackthornGym_Text_CooltrainermCodyAfterBattleText:
    .string "Members of our dragon-user clan\n"
    .string "can use dragon POKéMON only after\l"
    .string "our MASTER allows it.$"

BlackthornGym_Text_CooltrainerfFranSeenText:
    .string "I can't allow a nameless trainer\n"
    .string "past me!\p"
    .string "CLAIR would be livid if I did!$"

BlackthornGym_Text_CooltrainerfFranBeatenText:
    .string "Awww… I lost…$"

BlackthornGym_Text_CooltrainerfFranAfterBattleText:
    .string "Uh-oh… CLAIR is going to be mad…$"

BlackthornGym_Text_CooltrainermPaulSeenText:
    .string "Your first battle against dragons?\p"
    .string "I'll show you how tough they are!$"

BlackthornGym_Text_CooltrainermPaulBeatenText:
    .string "My dragon POKéMON lost?$"

BlackthornGym_Text_CooltrainermPaulAfterBattleText:
    .string "LANCE told you that he'd like to\n"
    .string "see you again?\p"
    .string "Not a chance!$"

BlackthornGym_Text_CooltrainermMikeSeenText:
    .string "My chance of losing? Not even one\n"
    .string "percent!$"

BlackthornGym_Text_CooltrainermMikeBeatenText:
    .string "That's odd.$"

BlackthornGym_Text_CooltrainermMikeAfterBattleText:
    .string "I know my short-comings now.\p"
    .string "Thanks for showing me!$"

BlackthornGym_Text_CooltrainerfLolaSeenText:
    .string "Dragons are sacred POKéMON.\p"
    .string "They are full of life energy.\p"
    .string "If you're not serious, you won't\n"
    .string "be able to beat them.$"

BlackthornGym_Text_CooltrainerfLolaBeatenText:
    .string "Way to go!$"

BlackthornGym_Text_CooltrainerfLolaAfterBattleText:
    .string "Dragons are weak against DRAGON-\n"
    .string "type moves.$"

BlackthornGym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BLACKTHORN_GYM, EcruteakCity_Gym_EventScript_GymGuy2
	msgbox BlackthornGym_Text_GuideText, MSGBOX_DEFAULT
	closemessage
	release
	end
	
BlackthornGym_EventScript_GymGuy2::
	msgbox BlackthornGym_Text_GuideWinText, MSGBOX_DEFAULT
	release
	end	

BlackthornGym_Text_GuideText:
    .string "Yo! CHAMP in making!\p"
    .string "It's been a long journey, but we\n"
    .string "are almost done! Count on me!\p"
    .string "While CLAIR looks up to the Dragon\n"
    .string "Master, LANCE, she's managed to\l"
    .string "create her own identity with a\l"
    .string "team consisting of dragons from\l"
    .string "the sea.\p"
    .string "Dragons are supposed to be\n"
    .string "weak against ICE-type moves,\l"
    .string "but you'll need some DRAGON-type\l"
	.string "or FAIRY-type moves of your own if\l"
    .string "you want to win.$"
    .string "You got this!$"

BlackthornGym_Text_GuideWinText:
    .string "You were great to beat CLAIR!\p"
    .string "All that's left is the POKéMON\n"
    .string "LEAGUE challenge.\p"
    .string "You're on the way to becoming the\n"
    .string "POKéMON CHAMPION!$"


BlackthornGym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_BLACKTHORN_GYM, BlackthornGym_EventScript_Statue2
	msgbox BlackthornGym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_EventScript_Statue2::
	msgbox BlackthornGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

BlackthornGym_Text_GymStatue:
	.string "BLACKTHORN CITY POKéMON GYM$"

BlackthornGym_Text_GymStatueCertified:
	.string "BLACKTHORN CITY POKéMON GYM\p"
	.string "CLAIR'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"









BlackthornGym_EventScript_B2B::
    lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, TRUE
    playse SE_PIN
	applymovement LOCALID_BLACKTHORNGYM_IRIS, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_1, 27, BlackthornGym_EventScript_AdjustIris1
	call_if_eq VAR_TEMP_1, 28, BlackthornGym_EventScript_AdjustIris2
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0 
	msgbox BlackthornGym_Text_IrisSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_SPENCER, BlackthornGym_Text_IrisBeaten
    playbgm MUS_ENCOUNTER_RICH, TRUE
    playse SE_PIN
	applymovement LOCALID_BLACKTHORNGYM_DRAYDEN, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_1, 27, BlackthornGym_EventScript_AdjustDrayden1
	call_if_eq VAR_TEMP_1, 26, BlackthornGym_EventScript_AdjustDrayden2
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
    msgbox BlackthornGym_Text_DraydenSeen1, MSGBOX_DEFAULT
	closemessage
	msgbox BlackthornGym_Text_DraydenSeen2, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_RON, BlackthornGym_Text_DraydenBeaten
    setvar VAR_ALL_B2B_STATE, 11
    release
    end

BlackthornGym_EventScript_AdjustIris1::
    applymovement LOCALID_BLACKTHORNGYM_IRIS, Common_Movement_WalkDown1
    waitmovement 0
    return

BlackthornGym_EventScript_AdjustIris2::
    applymovement LOCALID_BLACKTHORNGYM_IRIS, BlackthornGym_Movement_AdjustIris2
    waitmovement 0
    return

BlackthornGym_EventScript_AdjustDrayden1::
    applymovement LOCALID_BLACKTHORNGYM_DRAYDEN, Common_Movement_WalkUp1
    waitmovement 0
    return

BlackthornGym_EventScript_AdjustDrayden2::
    applymovement LOCALID_BLACKTHORNGYM_DRAYDEN, BlackthornGym_Movement_AdjustDrayden2
    waitmovement 0
    return

BlackthornGym_Movement_AdjustIris2:
	walk_down
	walk_down
	step_end

BlackthornGym_Movement_AdjustDrayden2:
	walk_up
	walk_up
	step_end

BlackthornGym_EventScript_Iris::
	lock
	faceplayer
	msgbox BlackthornGym_Text_IrisAfter, MSGBOX_AUTOCLOSE
	closemessage
	playse SE_PIN
	applymovement LOCALID_BLACKTHORNGYM_IRIS, Common_Movement_ExclamationMark
	delay 40
	msgbox BlackthornGym_Text_IrisAfter2, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

BlackthornGym_EventScript_Drayden::
	lock
	faceplayer
	msgbox BlackthornGym_Text_DraydenAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

BlackthornGym_Text_IrisSeen:
    .string "IRIS: Man, I'm peeved!\p"
    .string "How is it that CLAIR starts bossing us\n"
	.string "around after WE were the ones offering\l"
	.string "to help HER out by filling in as GYM\l"
	.string "trainers?\p"
	.string "Just who does she think she is?\p"
	.string "Doesn't she know I used to be a GYM\n"
	.string "LEADER too?\p"
	.string "You believe me, right?\p"
	.string "Here, I'll show you. She did ask us to\n"
	.string "battle any challengers, after all!$"

BlackthornGym_Text_IrisBeaten:
    .string "Wow! JOHTO trainers are super strong!$"

BlackthornGym_Text_IrisAfter:
    .string "Hey, do me a favour, would you?\p"
    .string "Wipe the floor with CLAIR when you two\n"
	.string "battle.\p"
	.string "I'll be cheering you on from over here!\p"
	.string "I'll bet you anything she's a sore\n"
	.string "loser...$"

BlackthornGym_Text_IrisAfter2:
	.string "Eek!\p"
	.string "Don't tell grandpa I said that\n"
	.string "though, or he'll chew me out...$"

BlackthornGym_Text_DraydenSeen1:
    .string "DRAYDEN: Welcome. Thank you for coming\n"
    .string "to the GYM.\p"
    .string "Your POKéMON are injured, are they not?\p"
    .string "Please, allow me to heal them for you\n"
	.string "before we fight.$"

BlackthornGym_Text_DraydenSeen2:
    .string "Now then. I hope you'll show me a battle\n"
    .string "exciting enough to get this old man's\l"
    .string "blood pumping again!$"

BlackthornGym_Text_DraydenBeaten:
    .string "Marvellous! Though the sting of defeat\n"
	.string "is raw as ever, it was a treat watching\l"
	.string "your strategy play out!$"

BlackthornGym_Text_DraydenAfter:
    .string "Oh, still interested in chatting, are\n"
    .string "you?\p"
    .string "I appreciate your efforts to humour me.\p"
    .string "Us dragon tamer's like to keep tabs on\n"
	.string "each other, you know.\p"
	.string "It's a more tightly knit community than\n"
	.string "you might think.\p"
	.string "That being said, I'd appreciate if you\n"
	.string "didn't share this with IRIS, but...\p"
	.string "I believe she has a point about this\n"
	.string "city's GYM LEADER.\p"
	.string "She has the talent, but her attitude\n"
	.string "leaves a lot to be desired, in my humble\l"
	.string "opinion.\p"
	.string "LANCE is supposed to be her mentor, is\n"
	.string "he not?\p"
	.string "You have to wonder what sorts of\n"
	.string "things he's been teaching her...$"


