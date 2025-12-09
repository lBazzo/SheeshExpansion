.set LOCALID_OLIVINE_CITY_GYM_NPC1, 3
.set LOCALID_OLIVINE_CITY_GYM_NPC2, 2
.set LOCALID_OLIVINE_CITY_GYM_BLAINE, 5
.set LOCALID_OLIVINE_CITY_GYM_SURGE, 6

OlivineCity_Gym_hns_MapScripts::
	.byte 0

OlivineCity_Gym_EventScript_Gent::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_Gent2
	msgbox OlivineCity_Gym_Text_Gent, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_EventScript_Gent2::
	msgbox OlivineCity_Gym_Text_Gent2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_TriggerRow1::
	lock
	setvar VAR_TEMP_0, LOCALID_OLIVINE_CITY_GYM_NPC1
	playse SE_PIN
	applymovement VAR_TEMP_0, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_1, 6, OlivineCity_Gym_EventScript_MoveLeft4
	call_if_eq VAR_TEMP_1, 7, OlivineCity_Gym_EventScript_MoveLeft3
	call_if_eq VAR_TEMP_1, 8, OlivineCity_Gym_EventScript_MoveLeft2
	call_if_eq VAR_TEMP_1, 9, OlivineCity_Gym_EventScript_MoveLeft1
	call_if_eq VAR_TEMP_1, 10, OlivineCity_Gym_EventScript_MoveLeft0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox OlivineCity_Gym_Text_Gent, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 6
	release
	end

OlivineCity_Gym_EventScript_MoveLeft0::
	turnobject VAR_TEMP_0, DIR_WEST
	return

OlivineCity_Gym_EventScript_MoveLeft1::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineCity_Gym_EventScript_MoveLeft2::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineCity_Gym_EventScript_MoveLeft3::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineCity_Gym_EventScript_MoveLeft4::
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkLeft1
	waitmovement 0
	return

OlivineCity_Gym_Text_Gent:
	.string "I knew you'd come here.\p"
	.string "Thank you for helping the GYM LEADER,\n"
	.string "but battle is a separate matter.\p"
	.string "Go for it!$"

OlivineCity_Gym_Text_Gent2:
	.string "Impressive!\n"
	.string "You should continue your journey to\l"
	.string "different places.\p"
	.string "Since you can use SURF, why don't you\n"
	.string "try it on the LAKE OF RAGE?$"

OlivineCity_Gym_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_Lass2
	msgbox OlivineCity_Gym_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_EventScript_Lass2::
	msgbox OlivineCity_Gym_Text_Lass2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_TriggerRow2::
	lock
	setvar VAR_TEMP_0, LOCALID_OLIVINE_CITY_GYM_NPC2
	playse SE_PIN
	applymovement VAR_TEMP_0, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_1, 6, OlivineCity_Gym_EventScript_MoveRight0
	call_if_eq VAR_TEMP_1, 7, OlivineCity_Gym_EventScript_MoveRight1
	call_if_eq VAR_TEMP_1, 8, OlivineCity_Gym_EventScript_MoveRight2
	call_if_eq VAR_TEMP_1, 9, OlivineCity_Gym_EventScript_MoveRight3
	call_if_eq VAR_TEMP_1, 10, OlivineCity_Gym_EventScript_MoveRight4
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox OlivineCity_Gym_Text_Lass, MSGBOX_DEFAULT
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 7
	release
	end

OlivineCity_Gym_EventScript_MoveRight0::
	turnobject VAR_TEMP_0, DIR_EAST
	return

OlivineCity_Gym_EventScript_MoveRight1::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineCity_Gym_EventScript_MoveRight2::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineCity_Gym_EventScript_MoveRight3::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineCity_Gym_EventScript_MoveRight4::
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	applymovement VAR_TEMP_0, Common_Movement_WalkRight1
	waitmovement 0
	return

OlivineCity_Gym_Text_Lass:
	.string "Giggle...\n"
	.string "I know how capable you are\l"
	.string "from the LIGHTHOUSE.\p"
	.string "It's time you showed that side of\n"
	.string "yourself to JASMINE! Good luck!$"

OlivineCity_Gym_Text_Lass2:
	.string "You are amazing...\n"
	.string "You should aim even higher, since\l"
	.string "you have such potential.\p"
	.string "Have you been to MAHOGANY TOWN?$"

OlivineCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_lt VAR_OLIVINE_CITY_STATE, 5, OlivineCity_Gym_EventScript_GymGuideSick
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_GymGuideAfter
	msgbox OlivineCity_Gym_Text_GymGuideText, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_EventScript_GymGuideSick::
	msgbox OlivineCity_Gym_Text_GymGuidePreText, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_EventScript_GymGuideAfter::
	msgbox OlivineCity_Gym_Text_GymGuideWinText, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_Text_GymGuideText:
	.string "You know, to tell you the truth, I\n"
	.string "looked the old gym leader a lot more\l"
	.string "than these two newcomers...$"

OlivineCity_Gym_Text_GymGuideWinText:
	.string "That was awesome!\p"
	.string "Maybe that'll put a dent in the egos of\n"
	.string "those two!$"

OlivineCity_Gym_Text_GymGuidePreText:
	.string "JASMINE, the old GYM LEADER, is at\n"
	.string "the LIGHTHOUSE.\p"
	.string "She's been tending to a sick POKéMON.\p"
	.string "A strong trainer has to be\n"
	.string "compassionate.\p"
	.string "The replacement leaders?\n"
	.string "I'm afraid I can't say.\p"
	.string "I'm not convinced they take their\n"
	.string "posts very seriously...$"

OlivineCity_Gym_EventScript_Jasmine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_Jasmine_Defeated
	msgbox OlivineCity_Gym_Text_JasmineSteelTypeIntro, MSGBOX_DEFAULT
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, OlivineCity_Gym_EventScript_CianwoodCheckMahog
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, OlivineCity_Gym_EventScript_MahogCheckCianwood
	goto OlivineCity_Gym_EventScript_Jasmine_Battle1

OlivineCity_Gym_EventScript_JasmineVictory::
	message OlivineCity_Gym_Text_ReceivedMineralBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox OlivineCity_Gym_Text_JasmineBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE06_GET
	setflag FLAG_DEFEATED_OLIVINE_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_IRON_TAIL
	msgbox OlivineCity_Gym_Text_JasmineIronTailSpeech, MSGBOX_DEFAULT
	setvar VAR_OLIVINE_CITY_STATE, 8
	setvar VAR_MAHOGANY_TOWN_STATE, 17
	closemessage
	release
	end

OlivineCity_Gym_EventScript_CianwoodCheckMahog::
	goto_if_set FLAG_DEFEATED_MAHOGANY_TOWN_GYM, OlivineCity_Gym_EventScript_Jasmine_Battle3
	goto OlivineCity_Gym_EventScript_Jasmine_Battle2

OlivineCity_Gym_EventScript_MahogCheckCianwood::
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, OlivineCity_Gym_EventScript_Jasmine_Battle3
	goto OlivineCity_Gym_EventScript_Jasmine_Battle2
	
OlivineCity_Gym_EventScript_Jasmine_Battle1::
	trainerbattle_no_intro TRAINER_JASMINE_1, OlivineCity_Gym_Text_JasmineBetterTrainer
	goto OlivineCity_Gym_EventScript_JasmineVictory

OlivineCity_Gym_EventScript_Jasmine_Battle2::
	trainerbattle_no_intro TRAINER_JASMINE_1_2, OlivineCity_Gym_Text_JasmineBetterTrainer
	goto OlivineCity_Gym_EventScript_JasmineVictory

OlivineCity_Gym_EventScript_Jasmine_Battle3::
	trainerbattle_no_intro TRAINER_JASMINE_1_3, OlivineCity_Gym_Text_JasmineBetterTrainer
	goto OlivineCity_Gym_EventScript_JasmineVictory

OlivineCity_Gym_EventScript_Jasmine_Defeated::
	msgbox OlivineCity_Gym_Text_JasmineGoodLuck, MSGBOX_DEFAULT
	closemessage
	release
	end


OlivineCity_Gym_Text_JasmineSteelTypeIntro:
	.string "…Thank you for your help at the\n"
	.string "LIGHTHOUSE…\p"
	.string "But this is different.\n"
	.string "Please allow me to introduce myself.\p"
	.string "I am JASMINE, a GYM LEADER.\n"
	.string "I use the STEEL-type.\p"
	.string "…Do you know about the STEEL-type?\p"
	.string "It's a type that was only recently\n"
	.string "discovered.\p"
	.string "…Um… May I begin?$"

OlivineCity_Gym_Text_JasmineBetterTrainer:
	.string "…You are a better trainer than me,\n"
	.string "in both skill and kindness.\p"
	.string "In accordance with LEAGUE rules,\n"
	.string "I confer upon you this BADGE.$"

OlivineCity_Gym_Text_ReceivedMineralBadge:
	.string "{PLAYER} received MINERALBADGE.$"

OlivineCity_Gym_Text_JasmineBadgeSpeech:
	.string "MINERALBADGE raises POKéMON's \n"
	.string "SPECIAL DEFENSE.\p"
	.string "…Um… Please take this too…$"

OlivineCity_Gym_Text_JasmineIronTailSpeech:
	.string "…You could use that TM to teach\n"
	.string "IRON TAIL.$"

OlivineCity_Gym_Text_JasmineGoodLuck:
	.string "Um… I don't know how to say this,\n"
	.string "but good luck…$"

OlivineCity_Gym_Text_JasmineRematchText:
	.string "…Congratulations, JOHTO CHAMPION.\p"
	.string "You have become so strong…\p"
	.string "I wonder if I have improved.\p"
	.string "Would you like to test that?\p"
	.string "Want to have a rematch with me?$"

OlivineCity_Gym_Text_JasmineRematchDefeatText:
	.string "…You are a better trainer than me,\n"
	.string "in both skill and kindness.$"

OlivineCity_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_Statue2
	msgbox OlivineCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_EventScript_Statue2::
	msgbox OlivineCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_Text_GymStatue:
	.string "OLIVINE CITY POKéMON GYM$"

OlivineCity_Gym_Text_GymStatueCertified:
	.string "OLIVINE CITY POKéMON GYM\p"
	.string "CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"




OlivineCity_Gym_Text_BlainePostLoss:
	.string "What, still here? Haven't you got\n"
	.string "better things to do than gloat about\l"
	.string "your victory to an old man?$"

OlivineCity_Gym_Text_BlaineIntro:
	.string "BLAINE: Hmm... You're a little young to\n"
	.string "be taking this challenge, aren't you?\p"
	.string "Bah, who cares? Maybe the new JOHTO\n"
	.string "generation has a stronger spine than\l"
	.string "the other sorry challengers we've had\l"
	.string "here thus far.\p"
	.string "Here's the deal, kid.\p"
	.string "If you want to get a BADGE from us,\n"
	.string "you'll have to take us both on, one\l"
	.string "after the other.\p"
	.string "We'll heal your POKéMON between fights,\n"
	.string "but any fainted POKéMON stay down, so\l"
	.string "make sure you don't overcommit early.$"

OlivineCity_Gym_Text_BlainePostIntro:
	.string "Right then, down to business. Who gets\n"
	.string "the honour of the first challenge?$"

OlivineCity_Gym_Text_BlaineAskBlaineFirst:
	.string "Reckon you have what it takes to beat\n"
	.string "this old timer, do you?$"

OlivineCity_Gym_Text_BlaineDeclineChallenge:
	.string "Hm? Is that so? Don't wait around too\n"
	.string "long, then.\p"
	.string "You may have all the time in the world,\n"
	.string "but I certainly don't. Wahahaha!$"

OlivineCity_Gym_Text_BlaineReactionToBeingFirst:
	.string "Wicked! Let's turn up the heat!$"

OlivineCity_Gym_Text_BlaineAskSurgeFirst:
	.string "Fancy fighting G.I. Joe over here first,\n"
	.string "do ya?$"

OlivineCity_Gym_Text_BlaineReactionToBeingSecond:
	.string "Ah, I understand. Save the toughest\n"
	.string "fight for last, eh, kid? You got it.$"

OlivineCity_Gym_Text_BlainePreFirstFight:
	.string "Wahaha! You better have brought some\n"
	.string "BURN HEAL!$"

OlivineCity_Gym_Text_BlaineWin:
	.string "Dang. Blown to smithereens.$"

OlivineCity_Gym_Text_BlainePostFirstFight:
	.string "Heh, I like you! You're tougher than you\n"
	.string "look.\p"
	.string "Just a shame I'll be relying on this guy\n"
	.string "here to save my behind...$"

OlivineCity_Gym_Text_BlainePreTMLine:
	.string "BLAINE: Here, take this. You've got\n"
	.string "enough fiery hot passion to handle it.$"

OlivineCity_Gym_Text_BlaineFirstTMSpeech:
	.string "You'd better get that last BADGE, you\n"
	.string "hear? We can't be having folks thinking\l"
	.string "that us KANTO leaders are just all talk!$"

OlivineCity_Gym_Text_BlainePreSecondFight:
	.string "BLAINE: Heh, you've got style kid, I'll\n"
	.string "give you that.\p"
	.string "Let's see if you can still keep up when\n"
	.string "things start to get hot!$"

OlivineCity_Gym_Text_BlainePostSecondFight:
	.string "Man, what a battle! Alright, that made\n"
	.string "me feel alive again. Take this BADGE.$"

OlivineCity_Gym_Text_BlaineBadgeSpeech:
	.string "Here, take this too. You've got enough\n"
	.string "fiery hot passion to handle it.$"




OlivineCity_Gym_Text_SurgePostLoss:
	.string "You already got a BADGE, what else do\n"
	.string "you want?\p"
	.string "Scram! Learn when to get lost!$"

OlivineCity_Gym_Text_SurgeIntro:
	.string "SURGE: Aww, did the little JOHTO baby\n"
	.string "get lost? Want me to walk you back to\l"
	.string "the TRAINER SCHOOL?\p"
	.string "...\p"
	.string "Those badges- You beat ERIKA and\n"
	.string "MISTY?\p"
	.string "Fine then. Let me give you the rundown.\n"
	.string "There's two of us, one of you.\p"
	.string "You'll fight us in a row. I'll heal your\n"
	.string "POKéMON that are still standing between\l"
	.string "between battles, but anyone down for\l"
	.string "the count will be left on the\l"
	.string "battlefield.\p"
	.string "Not that I'm planning on letting you go\n"
	.string "until all your POKéMON are zapped into\l"
	.string "submission!$"

OlivineCity_Gym_Text_SurgePostIntro:
	.string "Let's get to it then. Me or grandpa,\n"
	.string "who's it gonna be first?$"

OlivineCity_Gym_Text_SurgePreSecondFight:
	.string "SURGE: Hahaha! No more delaying to save\n"
	.string "you now. You're gonna get fried!$"

OlivineCity_Gym_Text_SurgeDeclineChallenge:
	.string "What, you scared? Go cry to your mummy\n"
	.string "about it!$"

OlivineCity_Gym_Text_SurgeWin:
	.string "Huh? What a shock! You're the real deal!$"

OlivineCity_Gym_Text_SurgePostSecondFight:
	.string "I hate to admit it, but you're crazy\n"
	.string "strong. Fine then.\l"
	.string "Take this BADGE and wear it with pride.$"

OlivineCity_Gym_Text_SurgeBadgeSpeech:
	.string "While we're at it, take this too.\p"
	.string "Let the whole world know how terrifying\n"
	.string "electric POKéMON can be.$"

OlivineCity_Gym_Text_SurgeSecondTMSpeech:
	.string "Now get out of here. You've got that\n"
	.string "last BADGE to earn, don't ya?\p"
	.string "If you lose before taking on the\n"
	.string "POKéMON LEAGUE, I'll never forgive you.\l"
	.string "Give em' hell for me, yeah?$"

OlivineCity_Gym_Text_SurgeAskBlaineFirst:
	.string "You wanna go at gramps first, eh?$"

OlivineCity_Gym_Text_SurgeReactionToBeingSecond:
	.string "Pfft.\p"
	.string "If you were so scared to fight me, you\n"
	.string "should've ran while you had the chance!$"

OlivineCity_Gym_Text_SurgeAskSurgeFirst:
	.string "Hah! You got guts, I'll say that much.\n"
	.string "Sure you want to take me on first?$"

OlivineCity_Gym_Text_SurgeReactionToBeingFirst:
	.string "You're on! You'll learn to regret this,\n"
	.string "but you've got my respect!$"

OlivineCity_Gym_Text_SurgePreFirstFight:
	.string "Here I come! Get ready for the most\n"
	.string "electrifying battle you've ever had!$"

OlivineCity_Gym_Text_SurgePostFirstFight:
	.string "Ugh, what gives? It's not like I eased\n"
	.string "up on the gas.\p"
	.string "You'd better not lose to the pensioner\n"
	.string "here, or I'm gonna get really mad...$"

OlivineCity_Gym_Text_SurgePreTMLine:
	.string "Have this TM.$"

OlivineCity_Gym_Text_SurgeFirstTMSpeech:
	.string "This TM does this.\p"
	.string "OK cya.$"


OlivineCity_Gym_EventScript_Blaine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_Blaine_Defeated
	goto_if_set FLAG_OLIVINE_GYM_EXPLAINED, OlivineCity_Gym_EventScript_BlaineIntroExplained
	msgbox OlivineCity_Gym_Text_BlaineIntro, MSGBOX_DEFAULT
	closemessage
	msgbox OlivineCity_Gym_Text_BlainePostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_OLIVINE_GYM_CHALLENGE, FALSE
	switch VAR_RESULT
	case 0, OlivineCity_Gym_EventScript_BlaineAskFightBlaineFirst
	case 1, OlivineCity_Gym_EventScript_BlaineAskFightSurgeFirst
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_BlaineDeclineChallenge
	goto OlivineCity_Gym_EventScript_BlaineDeclineChallenge

OlivineCity_Gym_EventScript_BlaineIntroExplained::
	msgbox OlivineCity_Gym_Text_BlainePostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_OLIVINE_GYM_CHALLENGE, FALSE
	switch VAR_RESULT
	case 0, OlivineCity_Gym_EventScript_BlaineAskFightBlaineFirst
	case 1, OlivineCity_Gym_EventScript_BlaineAskFightSurgeFirst
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_BlaineDeclineChallenge
	goto OlivineCity_Gym_EventScript_BlaineDeclineChallenge

OlivineCity_Gym_EventScript_BlaineAskFightBlaineFirst::
	msgbox OlivineCity_Gym_Text_BlaineAskBlaineFirst, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_BlaineDeclineChallenge
	case 0, OlivineCity_Gym_EventScript_BlaineConfirmedFightBlaineFirst
	goto OlivineCity_Gym_EventScript_BlaineDeclineChallenge

OlivineCity_Gym_EventScript_BlaineConfirmedFightBlaineFirst::
	msgbox OlivineCity_Gym_Text_BlaineReactionToBeingFirst, MSGBOX_DEFAULT
	closemessage
	goto OlivineCity_Gym_EventScript_GymFightBlaineFirst

OlivineCity_Gym_EventScript_BlaineAskFightSurgeFirst::
	msgbox OlivineCity_Gym_Text_BlaineAskSurgeFirst, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_BlaineDeclineChallenge
	case 0, OlivineCity_Gym_EventScript_BlaineConfirmedFightSurgeFirst
	goto OlivineCity_Gym_EventScript_BlaineDeclineChallenge

OlivineCity_Gym_EventScript_BlaineConfirmedFightSurgeFirst::
	msgbox OlivineCity_Gym_Text_BlaineReactionToBeingSecond, MSGBOX_DEFAULT
	closemessage
	goto OlivineCity_Gym_EventScript_GymFightSurgeFirst

OlivineCity_Gym_EventScript_GymFightBlaineFirst::
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 8, 8
	setvar VAR_0x8004, 8
    setvar VAR_0x8005, 8
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, Common_Movement_FaceDown
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, Common_Movement_WalkInPlaceDown
	waitmovement 0 
	msgbox OlivineCity_Gym_Text_BlainePreFirstFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, OlivineCity_Gym_Movement_BlaineForwardMovement
	waitmovement 0
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, OlivineCity_Gym_Text_BlaineWin
	msgbox OlivineCity_Gym_Text_BlainePostFirstFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, OlivineCity_Gym_Movement_BlaineBackMovement
	waitmovement 0
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox OlivineCity_Gym_Text_SurgePreSecondFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, OlivineCity_Gym_Movement_SurgeForwardMovement
	waitmovement 0
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_1, OlivineCity_Gym_Text_SurgeWin
	msgbox OlivineCity_Gym_Text_SurgePostSecondFight, MSGBOX_DEFAULT
	message OlivineCity_Gym_Text_ReceivedMineralBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox OlivineCity_Gym_Text_SurgeBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE06_GET
	setflag FLAG_DEFEATED_OLIVINE_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_IRON_TAIL
	msgbox OlivineCity_Gym_Text_SurgeSecondTMSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, OlivineCity_Gym_Movement_SurgeBackMovement
	waitmovement 0
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, OlivineCity_Gym_Movement_BlaineForwardMovement
	waitmovement 0
	msgbox OlivineCity_Gym_Text_BlainePreTMLine, MSGBOX_DEFAULT
	giveitem ITEM_TM_IRON_TAIL
	msgbox OlivineCity_Gym_Text_BlaineFirstTMSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, OlivineCity_Gym_Movement_BlaineBackMovement
	waitmovement 0
	setvar VAR_OLIVINE_CITY_STATE, 8
	setvar VAR_MAHOGANY_TOWN_STATE, 17
	closemessage
	release
	end





OlivineCity_Gym_EventScript_Surge::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_OLIVINE_CITY_GYM, OlivineCity_Gym_EventScript_Surge_Defeated
	goto_if_set FLAG_OLIVINE_GYM_EXPLAINED, OlivineCity_Gym_EventScript_SurgeIntroExplained
	msgbox OlivineCity_Gym_Text_SurgeIntro, MSGBOX_DEFAULT
	closemessage
	msgbox OlivineCity_Gym_Text_SurgePostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_OLIVINE_GYM_CHALLENGE, FALSE
	switch VAR_RESULT
	case 0, OlivineCity_Gym_EventScript_SurgeAskFightBlaineFirst
	case 1, OlivineCity_Gym_EventScript_SurgeAskFightSurgeFirst
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_SurgeDeclineChallenge
	goto OlivineCity_Gym_EventScript_SurgeDeclineChallenge

OlivineCity_Gym_EventScript_SurgeIntroExplained::
	msgbox OlivineCity_Gym_Text_SurgePostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_OLIVINE_GYM_CHALLENGE, FALSE
	switch VAR_RESULT
	case 0, OlivineCity_Gym_EventScript_SurgeAskFightBlaineFirst
	case 1, OlivineCity_Gym_EventScript_SurgeAskFightSurgeFirst
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_SurgeDeclineChallenge
	goto OlivineCity_Gym_EventScript_SurgeDeclineChallenge

OlivineCity_Gym_EventScript_SurgeAskFightBlaineFirst::
	msgbox OlivineCity_Gym_Text_SurgeAskBlaineFirst, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_SurgeDeclineChallenge
	case 0, OlivineCity_Gym_EventScript_SurgeConfirmedFightBlaineFirst
	goto OlivineCity_Gym_EventScript_SurgeDeclineChallenge

OlivineCity_Gym_EventScript_SurgeConfirmedFightBlaineFirst::
	msgbox OlivineCity_Gym_Text_SurgeReactionToBeingSecond, MSGBOX_DEFAULT
	closemessage
	goto OlivineCity_Gym_EventScript_GymFightBlaineFirst

OlivineCity_Gym_EventScript_SurgeAskFightSurgeFirst::
	msgbox OlivineCity_Gym_Text_SurgeAskSurgeFirst, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, OlivineCity_Gym_EventScript_SurgeDeclineChallenge
	case 0, OlivineCity_Gym_EventScript_SurgeConfirmedFightSurgeFirst
	goto OlivineCity_Gym_EventScript_SurgeDeclineChallenge

OlivineCity_Gym_EventScript_SurgeConfirmedFightSurgeFirst::
	msgbox OlivineCity_Gym_Text_SurgeReactionToBeingFirst, MSGBOX_DEFAULT
	closemessage
	goto OlivineCity_Gym_EventScript_GymFightSurgeFirst

OlivineCity_Gym_EventScript_GymFightSurgeFirst::
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	setobjectxy OBJ_EVENT_ID_PLAYER, 8, 8
	setvar VAR_0x8004, 8
    setvar VAR_0x8005, 8
    special TeleportCamera
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, Common_Movement_FaceDown
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, Common_Movement_FaceDown
	waitmovement 0
	waitmovement 0
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox OlivineCity_Gym_Text_SurgePreFirstFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, OlivineCity_Gym_Movement_SurgeForwardMovement
	waitmovement 0
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_1, OlivineCity_Gym_Text_SurgeWin
	msgbox OlivineCity_Gym_Text_SurgePostFirstFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, OlivineCity_Gym_Movement_SurgeBackMovement
	waitmovement 0
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox OlivineCity_Gym_Text_BlainePreSecondFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, OlivineCity_Gym_Movement_BlaineForwardMovement
	waitmovement 0
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, OlivineCity_Gym_Text_BlaineWin
	msgbox OlivineCity_Gym_Text_BlainePostSecondFight, MSGBOX_DEFAULT
	message OlivineCity_Gym_Text_ReceivedMineralBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox OlivineCity_Gym_Text_BlaineBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE06_GET
	setflag FLAG_DEFEATED_OLIVINE_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_IRON_TAIL
	msgbox OlivineCity_Gym_Text_BlaineFirstTMSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_BLAINE, OlivineCity_Gym_Movement_BlaineBackMovement
	waitmovement 0
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, OlivineCity_Gym_Movement_SurgeForwardMovement
	waitmovement 0
	msgbox OlivineCity_Gym_Text_SurgeBadgeSpeech, MSGBOX_DEFAULT
	giveitem ITEM_TM_IRON_TAIL
	msgbox OlivineCity_Gym_Text_SurgeSecondTMSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_CITY_GYM_SURGE, OlivineCity_Gym_Movement_SurgeBackMovement
	waitmovement 0
	setvar VAR_OLIVINE_CITY_STATE, 8
	setvar VAR_MAHOGANY_TOWN_STATE, 17
	closemessage
	release
	end







OlivineCity_Gym_Movement_SurgeForwardMovement:
	walk_left
	walk_down
	step_end

OlivineCity_Gym_Movement_SurgeBackMovement:
	walk_up
	walk_right
	face_down
	step_end

OlivineCity_Gym_Movement_BlaineBackMovement:
	walk_up
	walk_left
	face_down
	step_end

OlivineCity_Gym_Movement_BlaineForwardMovement:
	walk_right
	walk_down
	step_end

OlivineCity_Gym_EventScript_SurgeDeclineChallenge::
	msgbox OlivineCity_Gym_Text_SurgeDeclineChallenge, MSGBOX_DEFAULT
	setflag FLAG_OLIVINE_GYM_EXPLAINED
	closemessage
	release
	end

OlivineCity_Gym_EventScript_BlaineDeclineChallenge::
	msgbox OlivineCity_Gym_Text_BlaineDeclineChallenge, MSGBOX_DEFAULT
	setflag FLAG_OLIVINE_GYM_EXPLAINED
	closemessage
	release
	end

OlivineCity_Gym_EventScript_Surge_Defeated::
	msgbox OlivineCity_Gym_Text_SurgePostLoss, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Gym_EventScript_Blaine_Defeated::
	msgbox OlivineCity_Gym_Text_BlainePostLoss, MSGBOX_DEFAULT
	closemessage
	release
	end


OlivineCity_Gym_EventScript_Pat::
	trainerbattle_single TRAINER_PAT OlivineCity_Gym_Text_SupernerdPatSeen, OlivineCity_Gym_Text_SupernerdPatBeaten
	msgbox OlivineCity_Gym_Text_SupernerdPatAfter, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_EventScript_Kevin::
	trainerbattle_single TRAINER_KEVIN OlivineCity_Gym_Text_CooltrainerKevinSeen, OlivineCity_Gym_Text_CooltrainerKevinBeaten
	msgbox OlivineCity_Gym_Text_CooltrainerKevinAfter, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_Text_SupernerdPatSeen:
	.string "Mufufufu…$"

OlivineCity_Gym_Text_SupernerdPatBeaten:
	.string "Aren't you tired at all?$"

OlivineCity_Gym_Text_SupernerdPatAfter:
	.string "Aw man…$"

OlivineCity_Gym_Text_CooltrainerKevinSeen:
	.string "Let me take you on.$"

OlivineCity_Gym_Text_CooltrainerKevinBeaten:
	.string "I've never had a battle this\n"
	.string "good!$"

OlivineCity_Gym_Text_CooltrainerKevinAfter:
	.string "That was a great battle!\p"
	.string "You and your POKéMON are truly\n"
	.string "outstanding!$"

OlivineCity_Gym_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_MAY, OlivineCity_Gym_Text_TwinsAmyMay1Seen, OlivineCity_Gym_Text_TwinsAmyMay1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox OlivineCity_Gym_Text_TwinsAmyMay1After, MSGBOX_DEFAULT
	release
	end
	
OlivineCity_Gym_EventScript_May::
	trainerbattle_double TRAINER_AMY_AND_MAY, OlivineCity_Gym_Text_TwinsAmyMay2Seen, OlivineCity_Gym_Text_TwinsAmyMay2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox OlivineCity_Gym_Text_TwinsAmyMay2After, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_Text_TwinsAmyMay1Seen:
	.string "AMY: Hi! Are you challenging\n"
	.string "the LEADER? No way!$"

OlivineCity_Gym_Text_TwinsAmyMay1Beaten:
	.string "AMY & MAY: Oh, double\n"
	.string "goodness!$"

OlivineCity_Gym_Text_TwinsAmyMay1After:
	.string "AMY: You're really strong!$"

OlivineCity_Gym_Text_TwinsAmyMay2Seen:
	.string "MAY: You want to see the\n"
	.string "LEADER? Good luck!$"

OlivineCity_Gym_Text_TwinsAmyMay2Beaten:
	.string "AMY & MAY: Oh, double\n"
	.string "goodness!$"

OlivineCity_Gym_Text_TwinsAmyMay2After:
	.string "MAY: Our  POKéMON lost!\n"
	.string "Oh, what a shame.$"

OlivineCity_Gym_Text_BugCatcherBennySeen:
	.string "POKéMON that evolve young\n"
	.string "get stronger much faster.$"

OlivineCity_Gym_Text_BugCatcherBennyBeaten:
	.string "Just evolving isn't enough!$"

OlivineCity_Gym_Text_BugCatcherBennyAfter:
	.string "POKéMON become stronger\n"
	.string "if they evolve. Really!$"

OlivineCity_Gym_Text_BugCatcherAlSeen:
	.string "My POKéMON are cool and tough!\n"
	.string "I'll prove it to you!$"

OlivineCity_Gym_Text_BugCatcherAlBeaten:
	.string "You proved how tough you are…$"

OlivineCity_Gym_Text_BugCatcherAlAfter:
	.string "They're so cool, but most girls\n"
	.string "don't like my POKéMON.\p"
	.string "I don't know why…$"

OlivineCity_Gym_Text_BugCatcherJoshSeen:
	.string "Whew, you look mighty!\p"
	.string "But my grown-up POKéMON are\n"
	.string "pretty tough too!$"

OlivineCity_Gym_Text_BugCatcherJoshBeaten:
	.string "Urrgggh!$"

OlivineCity_Gym_Text_BugCatcherJoshAfter:
	.string "I guess I should teach them\n"
	.string "better moves…$"

OlivineCity_Gym_EventScript_Al::
	trainerbattle_single TRAINER_AL OlivineCity_Gym_Text_BugCatcherAlSeen, OlivineCity_Gym_Text_BugCatcherAlBeaten
	msgbox OlivineCity_Gym_Text_BugCatcherAlAfter, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH OlivineCity_Gym_Text_BugCatcherJoshSeen, OlivineCity_Gym_Text_BugCatcherJoshBeaten
	msgbox OlivineCity_Gym_Text_BugCatcherJoshAfter, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_EventScript_Benny::
	trainerbattle_single TRAINER_BENNY OlivineCity_Gym_Text_BugCatcherBennySeen, OlivineCity_Gym_Text_BugCatcherBennyBeaten
	msgbox OlivineCity_Gym_Text_BugCatcherBennyAfter, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_EventScript_Stephen::
	trainerbattle_single TRAINER_STEPHEN OlivineCity_Gym_Text_FisherStephenSeen, OlivineCity_Gym_Text_FisherStephenBeaten
	msgbox OlivineCity_Gym_Text_FisherStephenAfterBattle, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_Text_FisherStephenSeen:
	.string "I feel so content, chilling while\n"
	.string "listening to some tunes on my\l"
	.string "radio.$"

OlivineCity_Gym_Text_FisherStephenBeaten:
	.string "My stupid radio distracted me!$"

OlivineCity_Gym_Text_FisherStephenAfterBattle:
	.string "Have you checked out JOHTO's radio\n"
	.string "programs? We get a good variety\l"
	.string "here.$"
