.set LOCALID_DRAGONSDEN2_CLAIR, 5
.set LOCALID_DEN_CLAIR, 35
.set LOCALID_DRAGONSDEN_WANDA, 46
.set LOCALID_DRAGONSDEN_COSMO, 47
.set LOCALID_DRAGONSDEN_AIMI, 40
.set LOCALID_DRAGONSDEN_ESTELLE, 39
.set LOCALID_DRAGONSDEN_ATLAS, 38
.set LOCALID_DRAGONSDEN_DUBU, 37
.set LOCALID_DRAGONSDEN_ERA, 36
.set LOCALID_DRAGONSDEN_SPENSER, 48
.set LOCALID_DRAGONSDEN_TERAGUY, 49
.set LOCALID_DRAGONSDEN_KECLEON, 50

DragonsDen_Cavern_hns_MapScripts::
	@map_script MAP_SCRIPT_ON_FRAME_TABLE, DragonsDen_Cavern_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, DragonsDen_Cavern_OnTransition
	.byte 0

DragonsDen_Cavern_OnTransition::
	call_if_ge VAR_TERA_B2B_COUNTER, 6, DragonsDen_Cavern_EventScript_MoveB2B2B2B2BTrainers
	end

DragonsDen_Cavern_OnFrame::
	map_script_2 VAR_BLACKTHORN_CITY_STATE, 3, DragonsDen_Cavern_EventScript_Clair
	.2byte 0

DragonsDen_Cavern_EventScript_MoveB2B2B2B2BTrainers::
	setobjectxyperm LOCALID_DRAGONSDEN_AIMI, 28, 37
	setobjectxyperm LOCALID_DRAGONSDEN_ATLAS, 28, 38
	setobjectxyperm LOCALID_DRAGONSDEN_ESTELLE, 34, 37
	setobjectxyperm LOCALID_DRAGONSDEN_DUBU, 34, 38
	setobjectmovementtype LOCALID_DRAGONSDEN_ATLAS, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_DRAGONSDEN_DUBU, MOVEMENT_TYPE_FACE_LEFT
	return

DragonsDen_EventScript_ClairRematch::
    lock
    faceplayer
    msgbox DragonsDen_Text_Clair, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_DEN_CLAIR
    removeobject LOCALID_DEN_CLAIR
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_CLAIR
    release
    end

DragonsDen_Text_Clair:
    .string "{PLAYER}… So you're here.\p"
	.string "If you think you can keep up,\n"
	.string "with me, come to the FIGHTING\l"
	.string "DOJO in SAFFRON.$"

DragonsDen_Cavern_Trigger_ClairLeft::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	call DragonsDen_Cavern_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen_Cavern_Movement_ClairLeaveLeft
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	release
	end

DragonsDen_Cavern_Trigger_ClairMid::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	call DragonsDen_Cavern_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen_Cavern_Movement_ClairLeaveMid
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end

DragonsDen_Cavern_Trigger_ClairRight::
	lock 
	playse SE_PIN
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_ExclamationMark
	delay 60
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, Common_Movement_WalkRight1
	call DragonsDen_Cavern_EventScript_Clair
	applymovement2 LOCALID_DRAGONSDEN2_CLAIR, DragonsDen_Cavern_Movement_ClairLeaveRight
	waitmovement 0
	setflag FLAG_HIDE_DRAGONS_DEN_CAVERN_CLAIR
	removeobject LOCALID_DRAGONSDEN2_CLAIR
	playse SE_EXIT
	setvar VAR_BLACKTHORN_CITY_STATE, 4
	release
	end


DragonsDen_Cavern_EventScript_Clair::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox DragonsDen_Cavern_Text_ClairGiveDragonclaw, MSGBOX_DEFAULT
	giveitem ITEM_TM_DRACO_METEOR
	giveitem ITEM_HM_WHIRLPOOL
	setflag FLAG_RECEIVED_HM_WHIRLPOOL
	setflag FLAG_RECEIVED_HM_DIVE
	msgbox DragonsDen_Cavern_Text_ClairDescribeDragonclaw, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox DragonsDen_Cavern_Text_ClairWhatsTheMatter, MSGBOX_DEFAULT
	closemessage
	delay 10
	clearflag FLAG_GOT_DRATINI
	return

DragonsDen_Cavern_Movement_ClairLeaveLeft:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen_Cavern_Movement_ClairLeaveMid:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen_Cavern_Movement_ClairLeaveRight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DragonsDen_Cavern_Text_ClairGiveDragonclaw:
    .string "Clair: Wait!\p"
	.string "I'm sorry about this.\n"
    .string "Here, take these as my apology.$"

DragonsDen_Cavern_Text_ClairDescribeDragonclaw:
    .string "That contains Draco Meteor.\p"
    .string "It's one of the most powerful Dragon\n"
    .string "moves there is.\p"
	.string "The other one is Whirlpool. It will\n"
	.string "allow you to cross whirlpools at sea.$"

DragonsDen_Cavern_Text_ClairWhatsTheMatter:
    .string "What's the matter? Aren't\n"
    .string "you going on to the Pokémon\l"
    .string "League?\p"
    .string "After you become Champion, you\n"
    .string "can rematch any Gym League you\l"
    .string "want.\p"
    .string "Go to the Pokémon League.\p"
    .string "Do you know how to get there?\p"
    .string "From here, go to New Bark Town.\p"
    .string "Then Surf east to Pokémon League.\p"
    .string "The route there is very tough.\p"
    .string "Don't you dare lose at the Pokémon\n"
    .string "League!\p"
    .string "If you do, I'll feel even worse\n"
    .string "about having lost to you!\p"
    .string "Give it everything you've got.$"

DragonsDen_Cavern_EventScript_Darin::
	trainerbattle_single TRAINER_DARIN DragonsDen_Cavern_Text_CooltrainermDarinSeen, DragonsDen_Cavern_Text_CooltrainermDarinBeaten
	msgbox DragonsDen_Cavern_Text_CooltrainermDarinAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_EventScript_Cara::
	trainerbattle_single TRAINER_CARA DragonsDen_Cavern_Text_CooltrainerfCaraSeen, DragonsDen_Cavern_Text_CooltrainerfCaraBeaten
	msgbox DragonsDen_Cavern_Text_CooltrainerfCaraAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_EventScript_TwinLea::
	trainerbattle_double TRAINER_LEA_AND_PIA, DragonsDen_Cavern_Text_TwinsLeaandPia1Seen, DragonsDen_Cavern_Text_TwinsLeaandPia1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox DragonsDen_Cavern_Text_TwinsLeaandPia1After, MSGBOX_DEFAULT
	release
	end
	
DragonsDen_Cavern_EventScript_TwinPia::
	trainerbattle_double TRAINER_LEA_AND_PIA, DragonsDen_Cavern_Text_TwinsLeaandPia2Seen, DragonsDen_Cavern_Text_TwinsLeaandPia2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox DragonsDen_Cavern_Text_TwinsLeaandPia2After, MSGBOX_DEFAULT
	release
	end

DragonsDen_Cavern_EventScript_Item_Dragon_Fang::
	finditem ITEM_DRAGON_FANG
	end
DragonsDen_Cavern_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end
DragonsDen_Cavern_EventScript_Item_PP_Max::
	finditem ITEM_PP_MAX
	end



DragonsDen_Cavern_Text_DragonShrineSign:
    .string "Dragon Shrine\p"
    .string "A shrine honoring the dragon\n"
    .string "Pokémon\p"
    .string "said to have lived in Dragon'S\n"
    .string "Den.$"

DragonsDen_Cavern_Text_SilverTraining1:
    .string "…\n"
    .string "What? {PLAYER}?\p"
    .string "…No, I won't battle you now…\p"
    .string "My Pokémon aren't ready to beat\n"
    .string "you.\p"
    .string "I can't push them too hard now.\p"
    .string "I have to be disciplined to become\n"
    .string "the greatest Pokémon trainer…$"

DragonsDen_Cavern_Text_SilverTraining2:
    .string "…\p"
    .string "Whew…\p"
    .string "Learn to stay out of my way…$"

DragonsDen_Cavern_Text_CooltrainermDarinSeen:
    .string "You! How dare you enter\n"
    .string "uninvited!$"

DragonsDen_Cavern_Text_CooltrainermDarinBeaten:
    .string "S-strong!$"

DragonsDen_Cavern_Text_CooltrainermDarinAfter:
    .string "The Shrine ahead is home to the\n"
    .string "Master of our dragon-user clan.\p"
    .string "You're not allowed to just go in!$"

DragonsDen_Cavern_Text_CooltrainerfCaraSeen:
    .string "You shouldn't be in here!$"

DragonsDen_Cavern_Text_CooltrainerfCaraBeaten:
    .string "Oh yikes, I lost!$"

DragonsDen_Cavern_Text_CooltrainerfCaraAfter:
    .string "Soon I'm going to get permission\n"
    .string "from our Master to use dragons.\p"
    .string "When I do, I'm going to become an\n"
    .string "admirable dragon trainer and gain\l"
    .string "our Master's approval.$"

DragonsDen_Cavern_Text_TwinsLeaandPia1Seen:
    .string "It's a stranger we don't know.$"

DragonsDen_Cavern_Text_TwinsLeaandPia1Beaten:
    .string "Ouchies.$"

DragonsDen_Cavern_Text_TwinsLeaandPia1After:
    .string "It was like having to battle\n"
    .string "Lance.$"

DragonsDen_Cavern_Text_TwinsLeaandPia2Seen:
    .string "Who are you?$"

DragonsDen_Cavern_Text_TwinsLeaandPia2Beaten:
    .string "Meanie.$"

DragonsDen_Cavern_Text_TwinsLeaandPia2After:
    .string "We'll tell on you.\p"
    .string "Master will be angry with you.$"

@ NEWLY ADDED 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DragonsDen_Cavern_EventScript_Ed::
	trainerbattle_single TRAINER_ED, DragonsDen_Cavern_Text_BugCatcherEd_Seen, DragonsDen_Cavern_Text_BugCatcherEd_Beaten
	msgbox DragonsDen_Cavern_Text_BugCatcherEd_AfterBattle, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_EventScript_Doug::
	trainerbattle_single TRAINER_DOUG, DragonsDen_Cavern_Text_BugCatcherDoug_Seen, DragonsDen_Cavern_Text_BugCatcherDoug_Beaten
	msgbox DragonsDen_Cavern_Text_BugCatcherDoug_AfterBattle, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_Text_BugCatcherEd_Seen:
	.string "If you walk in gravel wearing\n"
	.string "no shoes, do you get nicks and cuts?$"

DragonsDen_Cavern_Text_BugCatcherEd_Beaten:
	.string "Ouch, ouch, ouch!$"

DragonsDen_Cavern_Text_BugCatcherEd_AfterBattle:
	.string "They'll really sting when you take a\n"
	.string "bath.$"

DragonsDen_Cavern_Text_BugCatcherDoug_Seen:
	.string "Why don't girls like my Pokémon?$"

DragonsDen_Cavern_Text_BugCatcherDoug_Beaten:
	.string "No good!$"

DragonsDen_Cavern_Text_BugCatcherDoug_AfterBattle:
	.string "My Pokémon are cool. My mum says so.\n"
	.string "You believe me, right...?$"

DragonsDen_Cavern_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH DragonsDen_Cavern_Text_FisherJonahSeen, DragonsDen_Cavern_Text_FisherJonahBeaten
	msgbox DragonsDen_Cavern_Text_FisherJonahAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_Text_FisherJonahSeen:
	.string "This is boring! Let's battle!$"

DragonsDen_Cavern_Text_FisherJonahBeaten:
	.string "I… I'm not bored anymore…$"

DragonsDen_Cavern_Text_FisherJonahAfter:
	.string "I plan to fish off\n"
	.string "Vermilion's pier.$"

DragonsDen_Cavern_EventScript_Miller::
	trainerbattle_single TRAINER_MILLER DragonsDen_Cavern_Text_PokemaniacMillerSeen, DragonsDen_Cavern_Text_PokemaniacMillerBeaten
	msgbox DragonsDen_Cavern_Text_PokemaniacMillerAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_EventScript_Markus::
	trainerbattle_single TRAINER_MARKUS DragonsDen_Cavern_Text_SupernerdMarkusSeen, DragonsDen_Cavern_Text_SupernerdMarkusBeaten
	msgbox DragonsDen_Cavern_Text_SupernerdMarkusAfter, MSGBOX_AUTOCLOSE
	end

DragonsDen_Cavern_Text_PokemaniacMillerSeen:
	.string "I'm not losing this time!$"

DragonsDen_Cavern_Text_PokemaniacMillerBeaten:
	.string "I lost to some kid...?$"

DragonsDen_Cavern_Text_PokemaniacMillerAfter:
	.string "A while back, this karate dude\n"
	.string "wanted to battle.\p"
	.string "He was ridiculously good.\n"
	.string "He just thrashed us silly.\p"
	.string "He went in deeper saying it\n"
	.string "was for his training.\p"
	.string "I wonder how he is?$"

DragonsDen_Cavern_Text_SupernerdMarkusSeen:
	.string "Hey! Hugh!$"

DragonsDen_Cavern_Text_SupernerdMarkusBeaten:
	.string "I mistook you for someone\n"
	.string "else…$"

DragonsDen_Cavern_Text_SupernerdMarkusAfter:
	.string "You look a lot like Hugh...$"

DragonsDen_Cavern_EventScript_B2B::
	lock
	playbgm MUS_HG_ENCOUNTER_GIRL_1, FALSE
    playse SE_PIN
	applymovement LOCALID_DRAGONSDEN_WANDA, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 41, DragonsDen_Cavern_EventScript_AdjustWandaMiddle
	call_if_eq VAR_TEMP_0, 42, DragonsDen_Cavern_EventScript_AdjustWandaRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_CooltrainerWanda_Before, MSGBOX_DEFAULT
	playbgm MUS_HG_DRAGONS_DEN, FALSE
	trainerbattle_no_intro TRAINER_WANDA, DragonsDen_Cavern_Text_CooltrainerWanda_Beaten
	playbgm MUS_HG_ENCOUNTER_BOY_1, FALSE
	playse SE_PIN
	applymovement LOCALID_DRAGONSDEN_COSMO, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 41, DragonsDen_Cavern_EventScript_AdjustCosmoMiddle
	call_if_eq VAR_TEMP_0, 40, DragonsDen_Cavern_EventScript_AdjustCosmoLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_CooltrainerCosmo_Before, MSGBOX_DEFAULT
	playbgm MUS_HG_DRAGONS_DEN, FALSE
	trainerbattle_no_intro TRAINER_COSMO, DragonsDen_Cavern_Text_CooltrainerCosmo_Beaten
	setvar VAR_TERA_B2B_COUNTER, 4
	release
	end

DragonsDen_Cavern_EventScript_AdjustWandaMiddle::
	applymovement LOCALID_DRAGONSDEN_WANDA, Common_Movement_WalkRight1
	waitmovement 0
	return

DragonsDen_Cavern_EventScript_AdjustWandaRight::
	applymovement LOCALID_DRAGONSDEN_WANDA, DragonsDen_Cavern_Movement_WandaRight
	waitmovement 0
	return

DragonsDen_Cavern_Movement_WandaRight::
	walk_right
	walk_right
	step_end

DragonsDen_Cavern_EventScript_Wanda::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_CooltrainerWanda_After, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_Cosmo::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_CooltrainerCosmo_After, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_Text_CooltrainerWanda_Before:
	.string "Life is like a sandwich. No matter which\n"
	.string "way you flip it, the bread comes first.$"

DragonsDen_Cavern_Text_CooltrainerWanda_Beaten:
	.string "You look like a printer warning light\n"
	.string "the way you be low on paper.$"

DragonsDen_Cavern_Text_CooltrainerWanda_After:
	.string "I must be an unexpected item\n"
	.string "the way I'm always in the bagging area.$"

DragonsDen_Cavern_EventScript_AdjustCosmoMiddle::
	applymovement LOCALID_DRAGONSDEN_COSMO, Common_Movement_WalkLeft1
	waitmovement 0
	return

DragonsDen_Cavern_EventScript_AdjustCosmoLeft:
	applymovement LOCALID_DRAGONSDEN_COSMO, DragonsDen_Cavern_Movement_CosmoLeft
	waitmovement 0
	return

DragonsDen_Cavern_Movement_CosmoLeft::
	walk_left
	walk_left
	step_end

DragonsDen_Cavern_Text_CooltrainerCosmo_Before:
	.string "Do you think there are Pokémon in\n"
	.string "space?$"

DragonsDen_Cavern_Text_CooltrainerCosmo_Beaten:
	.string "Wow! Your skills are out of this world!$"

DragonsDen_Cavern_Text_CooltrainerCosmo_After:
	.string "Do you ever wonder where the meteors\n"
	.string "from Meteor Beam come from?$"


@B2B2B2B2B
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DragonsDen_Cavern_EventScript_ChallengedToB2B2B2B2B::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_B2B2B2B2BAdjustPlayerLeft
	call_if_eq VAR_TEMP_0, 32, DragonsDen_Cavern_EventScript_B2B2B2B2BAdjustPlayerRight
	applymovement LOCALID_DRAGONSDEN_ERA, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_EraChallengedToB2B2B2B2B, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DragonsDen_Cavern_EventScript_AcceptedB2B2B2B2B
	goto_if_eq VAR_RESULT, NO, DragonsDen_Cavern_EventScript_DeclinedB2B2B2B2B
	end

DragonsDen_Cavern_EventScript_DeclinedB2B2B2B2B::
	msgbox DragonsDen_Cavern_Text_DeclinedB2B2B2B2B, MSGBOX_DEFAULT
	closemessage 
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

DragonsDen_Cavern_EventScript_AcceptedB2B2B2B2B::
	msgbox DragonsDen_Cavern_Text_AcceptedB2B2B2B2B, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DRAGONSDEN_AIMI, DragonsDen_Cavern_Movement_AimiApproachPlayer
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_AimiBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_AIMI, DragonsDen_Cavern_EventScript_AimiBeaten
	applymovement LOCALID_DRAGONSDEN_AIMI, DragonsDen_Cavern_Movement_AimiStandAside
	waitmovement 0
	applymovement LOCALID_DRAGONSDEN_ESTELLE, DragonsDen_Cavern_Movement_EstelleApproachPlayer
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_EstelleBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ESTELLE, DragonsDen_Cavern_EventScript_EstelleBeaten
	applymovement LOCALID_DRAGONSDEN_ESTELLE, DragonsDen_Cavern_Movement_EstelleStandAside
	waitmovement 0
	applymovement LOCALID_DRAGONSDEN_ATLAS, DragonsDen_Cavern_Movement_AtlasApproachPlayer
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_AtlasBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ATLAS, DragonsDen_Cavern_EventScript_AtlasBeaten
	applymovement LOCALID_DRAGONSDEN_ATLAS, DragonsDen_Cavern_Movement_AtlasStandAside
	waitmovement 0
	applymovement LOCALID_DRAGONSDEN_DUBU, DragonsDen_Cavern_Movement_DubuApproachPlayer
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_DubuBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DUBU, DragonsDen_Cavern_EventScript_DubuBeaten
	applymovement LOCALID_DRAGONSDEN_DUBU, DragonsDen_Cavern_Movement_DubuStandAside
	waitmovement 0
	applymovement LOCALID_DRAGONSDEN_ERA, DragonsDen_Cavern_Movement_EraApproachPlayer
	waitmovement 0
	msgbox DragonsDen_Cavern_Text_EraBefore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERA, DragonsDen_Cavern_EventScript_EraBeaten
	msgbox DragonsDen_Cavern_Text_EraReadyForSpenser, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DRAGONSDEN_ERA, DragonsDen_Cavern_Movement_EraStandAside
	waitmovement 0
	setobjectxyperm LOCALID_DRAGONSDEN_AIMI, 28, 37
	setobjectxyperm LOCALID_DRAGONSDEN_ATLAS, 28, 38
	setobjectxyperm LOCALID_DRAGONSDEN_ESTELLE, 34, 37
	setobjectxyperm LOCALID_DRAGONSDEN_DUBU, 34, 38
	setobjectmovementtype LOCALID_DRAGONSDEN_ATLAS, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_DRAGONSDEN_DUBU, MOVEMENT_TYPE_FACE_LEFT
	setvar VAR_TERA_B2B_COUNTER, 6
	release
	end

DragonsDen_Cavern_EventScript_B2B2B2B2BAdjustPlayerLeft::
	applymovement OBJ_EVENT_ID_PLAYER, DragonsDen_Cavern_Movement_AdjustPlayerLeft
	waitmovement 0
	return

DragonsDen_Cavern_Movement_AdjustPlayerLeft::
	walk_right
	face_down
	step_end

DragonsDen_Cavern_EventScript_B2B2B2B2BAdjustPlayerRight::
	applymovement OBJ_EVENT_ID_PLAYER, DragonsDen_Cavern_Movement_AdjustPlayerRight
	waitmovement 0
	return

DragonsDen_Cavern_Movement_AdjustPlayerRight::
	walk_left
	face_down
	step_end

DragonsDen_Cavern_Movement_AimiApproachPlayer::
	walk_right
	walk_right
	face_up
	step_end

DragonsDen_Cavern_Movement_AimiStandAside::
	walk_left
	walk_left
	walk_left
	face_right
	step_end

DragonsDen_Cavern_Movement_EstelleApproachPlayer::
	walk_left
	walk_left
	face_up
	step_end

DragonsDen_Cavern_Movement_EstelleStandAside::
	walk_right
	walk_right
	walk_right
	face_left
	step_end

DragonsDen_Cavern_Movement_AtlasApproachPlayer::
	walk_up
	walk_right
	face_up
	step_end

DragonsDen_Cavern_Movement_AtlasStandAside::
	walk_left
	walk_down
	walk_left
	walk_left
	face_right
	step_end

DragonsDen_Cavern_Movement_DubuApproachPlayer::
	walk_up
	walk_left
	face_up
	step_end

DragonsDen_Cavern_Movement_DubuStandAside::
	walk_right
	walk_down
	walk_right
	walk_right
	face_left
	step_end

DragonsDen_Cavern_Movement_EraApproachPlayer::
	walk_up
	step_end

DragonsDen_Cavern_Movement_EraStandAside::
	walk_down
	face_up
	step_end

DragonsDen_Cavern_EventScript_Aimi::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_AimiDone, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_Text_AimiBefore:
	.string "Really? You're the challenger Clair is\n"
	.string "so worried about?\p"
	.string "Sigh... I guess I'll have to make do and\n"
	.string "use you as a warm up then.$"

DragonsDen_Cavern_EventScript_AimiBeaten:
	.string "Nyaah! Don't you dare think that means\n"
	.string "anything! I just wasn't being serious!$"

DragonsDen_Cavern_Text_AimiDone:
	.string "I bet you think you're real cool right\n"
	.string "now, don't you?\p"
	.string "Well... maybe so! But Clair is still the\n"
	.string "coolest!$"

DragonsDen_Cavern_EventScript_Estelle::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_EstelleDone, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_Text_EstelleBefore:
	.string "You're not half bad, but don't get\n"
	.string "comfortable just yet.\p"
	.string "You'll need to do better than that for\n"
	.string "me to even break a sweat.$"

DragonsDen_Cavern_EventScript_EstelleBeaten:
	.string "But...\n"
	.string "But I was going to become champion...$"

DragonsDen_Cavern_Text_EstelleDone:
	.string "You're right. Reaching the top won't be\n"
	.string "that easy.\p"
	.string "If it were, none of us would bother\n"
	.string "chasing it in the first place.$"

DragonsDen_Cavern_EventScript_Atlas::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_AtlasDone, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_Text_AtlasBefore:
	.string "You battle well now, but what about\n"
	.string "when the pressure amps up?\p"
	.string "Can you still perform with the weight of\n"
	.string "the world on your shoulders?$"

DragonsDen_Cavern_EventScript_AtlasBeaten:
	.string "I see. Your power is truly an unwavering\n"
	.string "force after all.$"

DragonsDen_Cavern_Text_AtlasDone:
	.string "You know, you seem so sure of yourself,\n"
	.string "it's almost unnerving.\p"
	.string "I feel as though you've calculated your\n"
	.string "victory before we've even started.$"

DragonsDen_Cavern_EventScript_Dubu::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_DubuDone, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_Text_DubuBefore:
	.string "Dubu, Dubu!$"

DragonsDen_Cavern_EventScript_DubuBeaten:
	.string "Du... bu.$"

DragonsDen_Cavern_Text_DubuDone:
	.string "Dubu. Dubu, Dubu Dubu, Dubu.$"

DragonsDen_Cavern_EventScript_Era::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_EraDone, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_Text_EraChallengedToB2B2B2B2B:
	.string "Wait.\p"
	.string "I know why you're here.\p"
	.string "The only outsiders permitted to enter\n"
	.string "are trainers who have beaten Clair.\p"
	.string "Sorry, but we're going to have to test\n"
	.string "you once more.\p"
	.string "It's easier this way than trying to\n"
	.string "convince Clair she's wrong. Trust me.\p"
	.string "So then, champion-to-be... It's five\n"
	.string "versus one. Still fancy your odds here?$"

DragonsDen_Cavern_Text_DeclinedB2B2B2B2B:
	.string "...\p"
	.string "Oh. Okay.\p"
	.string "Sorry, I just- I thought the trainer\n"
	.string "that beat Clair would have a bit more\l"
	.string "confidence than that.$"

DragonsDen_Cavern_Text_AcceptedB2B2B2B2B:
	.string "I'm impressed. Most people would back\n"
	.string "down in your position.\p"
	.string "Then let us commence the test at once.$"

DragonsDen_Cavern_Text_EraBefore:
	.string "You beat all four of the others...\p"
	.string "But that means nothing unless all five\n"
	.string "of us are down.\p"
	.string "Prepare yourself for the fifth and\n"
	.string "final hurdle!$"

DragonsDen_Cavern_EventScript_EraBeaten:
	.string "N-no way...$"

DragonsDen_Cavern_Text_EraDone:
	.string "That old man out front...\n"
	.string "Did you deal with him yet?$"

DragonsDen_Cavern_Text_EraReadyForSpenser:
	.string "To be honest, I'm sort of relieved.\p"
	.string "It's not my way of doing things to gang\n"
	.string "up on one person this way, but now not\l"
	.string "even Clair can dispute your potential.\p"
	.string "...\p"
	.string "Although... there's one more thing.\p"
	.string "There's some pushy old man in front of\n"
	.string "the den that said he wanted to see you.\p"
	.string "It's not part of the official test,\n"
	.string "but...\p"
	.string "Could you please deal with him? He's so\n"
	.string "stubborn, we can't get him to leave...$"

@SPENSER 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DragonsDen_Cavern_EventScript_Spenser::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SPENSER, DragonsDen_Cavern_EventScript_SpenserAlreadyDefeated
	playbgm MUS_B_PALACE, FALSE
	goto_if_set FLAG_TALKED_DRAGONSDEN_SPENSER, DragonsDen_Cavern_EventScript_SpenserPostIntro
	setflag FLAG_TALKED_DRAGONSDEN_SPENSER
	msgbox DragonsDen_Cavern_Text_SpenserIntro, MSGBOX_DEFAULT
	goto DragonsDen_Cavern_EventScript_SpenserPostIntro
	end

DragonsDen_Cavern_EventScript_SpenserPostIntro::
	msgbox DragonsDen_Cavern_Text_SpenserPostIntro, MSGBOX_DEFAULT
	dynmultipush DragonsDen_Cavern_Text_One, 0
	dynmultipush DragonsDen_Cavern_Text_Two, 1
	dynmultipush DragonsDen_Cavern_Text_Three, 2
	dynmultipush DragonsDen_Cavern_Text_Four, 3
	dynmultipush DragonsDen_Cavern_Text_Five, 4
	dynmultipush DragonsDen_Cavern_Text_Six, 5
	dynmultipush DragonsDen_Cavern_Text_Exit, 6
	dynmultistack 2, 2, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, DragonsDen_Cavern_EventScript_SpenserOneTeraFight
	case 1, DragonsDen_Cavern_EventScript_SpenserTwoTeraFight
	case 2, DragonsDen_Cavern_EventScript_SpenserThreeTeraFight
	case 3, DragonsDen_Cavern_EventScript_SpenserFourTeraFight
	case 4, DragonsDen_Cavern_EventScript_SpenserFiveTeraFight
	case 5, DragonsDen_Cavern_EventScript_SpenserSixTeraFight
	case 6, DragonsDen_Cavern_EventScript_SpenserDeclined
	case MULTI_B_PRESSED, DragonsDen_Cavern_EventScript_SpenserDeclined

DragonsDen_Cavern_EventScript_SpenserDeclined::
	msgbox DragonsDen_Cavern_Text_SpenserDeclined, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_SpenserAlreadyDefeated::
	msgbox DragonsDen_Cavern_Text_SpenserAlreadyDefeated, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_SpenserOneTeraFight::
	msgbox DragonsDen_Cavern_Text_SpenserOnlyOneTera, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_1, DragonsDen_Cavern_Text_SpenserBeaten
	msgbox DragonsDen_Cavern_Text_SpenserNoReward, MSGBOX_DEFAULT
	msgbox DragonsDen_Cavern_Text_SpenserTakeTheFinalTest, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft
	call_if_ge VAR_TEMP_0, 31, DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight
	setflag FLAG_DEFEATED_SPENSER
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_SpenserTwoTeraFight::
	msgbox DragonsDen_Cavern_Text_SpenserTwoToFiveTera, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_2, DragonsDen_Cavern_Text_SpenserBeaten
	msgbox DragonsDen_Cavern_Text_SpenserNormalReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE
	msgbox DragonsDen_Cavern_Text_SpenserTakeTheFinalTest, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft
	call_if_ge VAR_TEMP_0, 31, DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight
	setflag FLAG_DEFEATED_SPENSER
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_SpenserThreeTeraFight::
	msgbox DragonsDen_Cavern_Text_SpenserTwoToFiveTera, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_3, DragonsDen_Cavern_Text_SpenserBeaten
	msgbox DragonsDen_Cavern_Text_SpenserNormalReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 3
	msgbox DragonsDen_Cavern_Text_SpenserTakeTheFinalTest, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft
	call_if_ge VAR_TEMP_0, 31, DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight
	setflag FLAG_DEFEATED_SPENSER
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_SpenserFourTeraFight::
	msgbox DragonsDen_Cavern_Text_SpenserTwoToFiveTera, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_4, DragonsDen_Cavern_Text_SpenserBeaten
	msgbox DragonsDen_Cavern_Text_SpenserNormalReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 5
	msgbox DragonsDen_Cavern_Text_SpenserTakeTheFinalTest, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft
	call_if_ge VAR_TEMP_0, 31, DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight
	setflag FLAG_DEFEATED_SPENSER
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_SpenserFiveTeraFight::
	msgbox DragonsDen_Cavern_Text_SpenserTwoToFiveTera, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_5, DragonsDen_Cavern_Text_SpenserBeaten
	msgbox DragonsDen_Cavern_Text_SpenserNormalReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 7
	msgbox DragonsDen_Cavern_Text_SpenserTakeTheFinalTest, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft
	call_if_ge VAR_TEMP_0, 31, DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight
	setflag FLAG_DEFEATED_SPENSER
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_SpenserSixTeraFight::
	msgbox DragonsDen_Cavern_Text_SpenserSixTera, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_6, DragonsDen_Cavern_Text_SpenserBeaten
	msgbox DragonsDen_Cavern_Text_SpenserFullReward, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 7
	giveitem ITEM_SAPPHIRE
	msgbox DragonsDen_Cavern_Text_SpenserTakeTheFinalTest, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 30, DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft
	call_if_ge VAR_TEMP_0, 31, DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight
	setflag FLAG_DEFEATED_SPENSER
	fadedefaultbgm
	release
	end

DragonsDen_Cavern_EventScript_MoveSpenserPlayerLeft::
	applymovement LOCALID_DRAGONSDEN_SPENSER, DragonsDen_Cavern_Movement_MoveSpenserPlayerLeft
	waitmovement 0
	return

DragonsDen_Cavern_Movement_MoveSpenserPlayerLeft::
	walk_right
	face_left
	step_end

DragonsDen_Cavern_EventScript_MoveSpenserPlayerMiddleOrRight::
	applymovement LOCALID_DRAGONSDEN_SPENSER, DragonsDen_Cavern_Movement_MoveSpenserPlayerMiddleOrRight
	waitmovement 0
	return

DragonsDen_Cavern_Movement_MoveSpenserPlayerMiddleOrRight::
	walk_left
	face_right
	step_end




DragonsDen_Cavern_Text_SpenserIntro:
	.string "Oho!\p"
	.string "It's you!\p"
	.string "I knew it would be. I can sense a strong\n"
	.string "spirit from miles away.\p"
	.string "...\p"
	.string "What's that?\p"
	.string "No, don't be ridiculous. I'm not part of\n"
	.string "whatever silly scheme that Clair girl\l"
	.string "likes to call a test of character.\p"
	.string "I'm here of my own accord.\p"
	.string "I am Spenser, head of the Battle\n"
	.string "Palace.\p"
	.string "Spenser: Trainers are far too obsessed\n"
	.string "with perfect strategy these days.\p"
	.string "They forget that in the heat of battle,\n"
	.string "those who can think on their feet and\l"
	.string "trust their minds are synched with\l"
	.string "their Pokémon used to reign supreme.$"

DragonsDen_Cavern_Text_SpenserPostIntro:
	.string "I came here to wait because I believed\n"
	.string "you thought the same as me.\p"
	.string "You want my challenge, do you?\n"
	.string "Then here are my terms.\p"
	.string "Pick a number from one to six.\n"
	.string "The higher the number you pick,\l"
	.string "the more Pokémon I'll trust to use\l"
	.string "terastallization of their own accord,\l"
	.string "and the bigger your reward will be.\p"
	.string "If you trust your Pokémon, prove it to\n"
	.string "me here and now!$"

DragonsDen_Cavern_Text_SpenserDeclined:
	.string "Gwahahahaha! I have nothing to fear!\n"
	.string "Come back when you have some gusto!$"

DragonsDen_Cavern_Text_SpenserBeaten:
	.string "Ah... Now this is something else...$"

DragonsDen_Cavern_Text_SpenserOnlyOneTera:
	.string "Hm! You're wimpier than I expected, but\n"
	.string "fine.\p"
	.string "Come at me with everything you and your\n"
	.string "Pokémon have! Kaaah!$"

DragonsDen_Cavern_Text_SpenserTwoToFiveTera:
	.string "Hm! Good answer! I knew I was right\n"
	.string "about you!\p"
	.string "Come at me with everything you and your\n"
	.string "Pokémon have! Kaaah!$"

DragonsDen_Cavern_Text_SpenserSixTera:
	.string "Grahaha! Now you're just being cocky!\n"
	.string "Not that I mind at all!\p"
	.string "Come at me with everything you and your\n"
	.string "Pokémon have! Kaaah!$"

DragonsDen_Cavern_Text_SpenserNoReward:
	.string "Well, you won. Not that you deserve\n"
	.string "anything for your victory, given how\l"
	.string "little belief you've shown in your\l"
	.string "Pokémon. How shameful...\p"
	.string "Grahaha! Only joking. A win is a win.\p"
	.string "I lost and you won. That's all there is\n"
	.string "to it.$"

DragonsDen_Cavern_Text_SpenserNormalReward:
	.string "Hm! You've some courage in you, that's\n"
	.string "for sure.\p"
	.string "Though there's room for improvement,\n"
	.string "the bond between you and your Pokémon\l"
	.string "is still worthy of some praise.\p"
	.string "Well? Don't just stand there, take this\n"
	.string "with you!$"

DragonsDen_Cavern_Text_SpenserFullReward:
	.string "I'm beat! After such a sound thrashing,\n"
	.string "there's nothing more for me to say.\p"
	.string "Go on. Take this whole lot with you! It's\n"
	.string "been a while since I fought someone\l"
	.string "with as much vigor as you!$"

DragonsDen_Cavern_Text_SpenserTakeTheFinalTest:
	.string "I believe we're done here. Take the old\n"
	.string "man's test when you're ready.\p"
	.string "If you're serious about becoming\n"
	.string "strong, then you'd better give it all\l"
	.string "you've got! No half assing it!$"

DragonsDen_Cavern_Text_SpenserAlreadyDefeated:
	.string "What? Still here? Time doesn't grow on\n"
	.string "trees, you know.\p"
	.string "Do something useful with yourself!\n"
	.string "Grahaha!$"

DragonsDen_Cavern_Text_One:
	.string "One$"
DragonsDen_Cavern_Text_Two:
	.string "Two$"
DragonsDen_Cavern_Text_Three:
	.string "Three$"
DragonsDen_Cavern_Text_Four:
	.string "Four$"
DragonsDen_Cavern_Text_Five:
	.string "Five$"
DragonsDen_Cavern_Text_Six:
	.string "Six$"
DragonsDen_Cavern_Text_Exit:
	.string "Exit$"

@TERA GUY 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

DragonsDen_Cavern_EventScript_Kecleon::
	lock
	faceplayer
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox DragonsDen_Cavern_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_DRAGONSDEN_KECLEON, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuy::
	lock
	faceplayer
	msgbox DragonsDen_Cavern_Text_TeraGuyWhatWouldYouLike, MSGBOX_DEFAULT
	dynmultipush DragonsDen_Cavern_Text_TeachTeraBlast, 0 
	dynmultipush DragonsDen_Cavern_Text_ChangeTeraType, 1
	dynmultipush DragonsDen_Cavern_Text_Exit, 2
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, DragonsDen_Cavern_EventScript_TeraGuyTeachTeraBlast
	case 1, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraType
	case 2, DragonsDen_Cavern_EventScript_TeraGuyExit
	case MULTI_B_PRESSED, DragonsDen_Cavern_EventScript_TeraGuyExit
	end

DragonsDen_Cavern_EventScript_TeraGuyTeachTeraBlast::
	msgbox DragonsDen_Cavern_Text_TeraGuyWhoWantsToLearn, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_TERA_BLAST
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, DragonsDen_Cavern_EventScript_TeraGuyExit
	applymovement LOCALID_DRAGONSDEN_TERAGUY, Common_Movement_FaceRight
	msgbox DragonsDen_Cavern_Text_TeraGuyTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DRAGONSDEN_TERAGUY, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 7, DragonsDen_Cavern_EventScript_TeraGuyTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 6, DragonsDen_Cavern_EventScript_TeraGuyTeachPlayerLeft
	msgbox DragonsDen_Cavern_Text_TeraGuyMoveTaught, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyTeachPlayerBelow::
	applymovement LOCALID_DRAGONSDEN_KECLEON, DragonsDen_Cavern_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_DRAGONSDEN_KECLEON, DragonsDen_Cavern_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

DragonsDen_Cavern_Movement_TeachPlayerBelow1::
	walk_down
	face_left
	step_end

DragonsDen_Cavern_Movement_TeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	walk_up
	face_down
	step_end

DragonsDen_Cavern_EventScript_TeraGuyTeachPlayerLeft::
	applymovement LOCALID_DRAGONSDEN_KECLEON, DragonsDen_Cavern_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_DRAGONSDEN_KECLEON, DragonsDen_Cavern_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

DragonsDen_Cavern_Movement_TeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

DragonsDen_Cavern_Movement_TeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	walk_right
	walk_right
	walk_up
	face_down
	step_end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraType::
	msgbox DragonsDen_Cavern_Text_TeraGuyChangeWhichMonType, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DragonsDen_Cavern_EventScript_TeraGuyExit
	msgbox DragonsDen_Cavern_Text_TeraGuyWhatNewTeraTypeToBe, MSGBOX_DEFAULT
	dynmultipush DragonsDen_Cavern_Text_Normal, 0
	dynmultipush DragonsDen_Cavern_Text_Fighting, 1
	dynmultipush DragonsDen_Cavern_Text_Flying, 2
	dynmultipush DragonsDen_Cavern_Text_Poison, 3
	dynmultipush DragonsDen_Cavern_Text_Ground, 4
	dynmultipush DragonsDen_Cavern_Text_Rock, 5
	dynmultipush DragonsDen_Cavern_Text_Bug, 6
	dynmultipush DragonsDen_Cavern_Text_Ghost, 7
	dynmultipush DragonsDen_Cavern_Text_Steel, 8
	dynmultipush DragonsDen_Cavern_Text_Fire, 9
	dynmultipush DragonsDen_Cavern_Text_Water, 10
	dynmultipush DragonsDen_Cavern_Text_Grass, 11
	dynmultipush DragonsDen_Cavern_Text_Electric, 12
	dynmultipush DragonsDen_Cavern_Text_Psychic, 13
	dynmultipush DragonsDen_Cavern_Text_Ice, 14
	dynmultipush DragonsDen_Cavern_Text_Dragon, 15
	dynmultipush DragonsDen_Cavern_Text_Dark, 16
	dynmultipush DragonsDen_Cavern_Text_Fairy, 17
	dynmultipush DragonsDen_Cavern_Text_Exit, 18
	dynmultistack 2, 2, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToNormal
	case 1, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFighting
	case 2, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFlying
	case 3, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToPoison
	case 4, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToGround
	case 5, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToRock
	case 6, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToBug
	case 7, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToGhost
	case 8, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToSteel
	case 9, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFire
	case 10, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToWater
	case 11, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToGrass
	case 12, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToElectric
	case 13, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToPsychic
	case 14, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToIce
	case 15, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToDragon
	case 16, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToDark
	case 17, DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFairy
	case 18, DragonsDen_Cavern_EventScript_TeraGuyExit
	case MULTI_B_PRESSED, DragonsDen_Cavern_EventScript_TeraGuyExit
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToNormal::
	SetTeraType TYPE_NORMAL, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFighting::
	SetTeraType TYPE_FIGHTING, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFlying::
	SetTeraType TYPE_FLYING, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToPoison::
	SetTeraType TYPE_POISON, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToGround::
	SetTeraType TYPE_GROUND, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToRock::
	SetTeraType TYPE_ROCK, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToBug::
	SetTeraType TYPE_BUG, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToGhost::
	SetTeraType TYPE_GHOST, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToSteel::
	SetTeraType TYPE_STEEL, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFire::
	SetTeraType TYPE_FIRE, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToWater::
	SetTeraType TYPE_WATER, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToGrass::
	SetTeraType TYPE_GRASS, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToElectric::
	SetTeraType TYPE_ELECTRIC, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToPsychic::
	SetTeraType TYPE_PSYCHIC, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToIce::
	SetTeraType TYPE_ICE, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToDragon::
	SetTeraType TYPE_DRAGON, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToDark::
	SetTeraType TYPE_DARK, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyChangeTeraTypeToFairy::
	SetTeraType TYPE_FAIRY, VAR_0x8004
	msgbox DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

DragonsDen_Cavern_EventScript_TeraGuyExit::
	msgbox DragonsDen_Cavern_Text_TeraGuyExit, MSGBOX_DEFAULT
	closemessage
	release
	end


DragonsDen_Cavern_Text_TeachTeraBlast:
	.string "Teach Move$"
DragonsDen_Cavern_Text_ChangeTeraType:
	.string "Change Type$"
DragonsDen_Cavern_Text_Normal:
	.string "Normal$"
DragonsDen_Cavern_Text_Fighting:
	.string "Fighting$"
DragonsDen_Cavern_Text_Flying:
	.string "Flying$"
DragonsDen_Cavern_Text_Poison:
	.string "Poison$"
DragonsDen_Cavern_Text_Ground:
	.string "Ground$"
DragonsDen_Cavern_Text_Rock:
	.string "Rock$"
DragonsDen_Cavern_Text_Bug:
	.string "Bug$"
DragonsDen_Cavern_Text_Ghost:
	.string "Ghost$"
DragonsDen_Cavern_Text_Steel:
	.string "Steel$"
DragonsDen_Cavern_Text_Fire:
	.string "Fire$"
DragonsDen_Cavern_Text_Water:
	.string "Water$"
DragonsDen_Cavern_Text_Grass:
	.string "Grass$"
DragonsDen_Cavern_Text_Electric:
	.string "Electric$"
DragonsDen_Cavern_Text_Psychic:
	.string "Psychic$"
DragonsDen_Cavern_Text_Ice:
	.string "Ice$"
DragonsDen_Cavern_Text_Dragon:
	.string "Dragon$"
DragonsDen_Cavern_Text_Dark:
	.string "Dark$"
DragonsDen_Cavern_Text_Fairy:
	.string "Fairy$"

DragonsDen_Cavern_Text_Kecleon:
	.string "Kecleon: ...?$"

DragonsDen_Cavern_Text_TeraGuyWhatWouldYouLike:
	.string "Hello there, young one.\p"
	.string "Would you like some help in preparing\n"
	.string "for your next terastal battle?\p"
	.string "I can help you to change the tera type\n"
	.string "of your team, or my friend Kecleon here\l"
	.string "can teach your team Tera Blast.\p"
	.string "So, what do you say? Shall I teach a\n"
	.string "move or change a type for you?$"

DragonsDen_Cavern_Text_TeraGuyWhoWantsToLearn:
	.string "Jolly good! So then, who would like to\n"
	.string "learn Tera Blast?$"

DragonsDen_Cavern_Text_TeraGuyTeachingMove:
	.string "Well then, my partner. Would you care to\n"
	.string "demonstrate the technique for us?$"

DragonsDen_Cavern_Text_TeraGuyMoveTaught:
	.string "How was that? Not too tricky, yes? Do\n"
	.string "let me know if you'd like to see it again.$"

DragonsDen_Cavern_Text_TeraGuyChangeWhichMonType:
	.string "A change of tera type, yes? Who would\n"
	.string "you have change their tera type?$"

DragonsDen_Cavern_Text_TeraGuyWhatNewTeraTypeToBe:
	.string "OK! I hear you loud and clear. And what\n"
	.string "should their new tera type be?$"

DragonsDen_Cavern_Text_TeraGuyTeraTypeChanged:
	.string "Good show! I've changed their tera type\n"
	.string "for you. I hope it will help you out!$"

DragonsDen_Cavern_Text_TeraGuyExit:
	.string "Ah, so it's like that, then...\p"
	.string "In that case, remember to stay out of\n"
	.string "trouble, little rascal! Ho-ho-ho!$"
