.set LOCALID_ROUTE43_SPENCER, 1
.set LOCALID_ROUTE43_RON, 17

Route43_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route43_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route43_MapScript_OnTransition::
	call_if_set FLAG_HIDE_ROUTE42_SUICUNE, Route42_MapScript_HideTrigger
	callnative SetTimeBasedEncounters
	end

Route43_EventScript_Ben::
	trainerbattle_single TRAINER_BEN Route43_Text_PokemaniacBenSeen, Route43_Text_PokemaniacBenBeaten
	msgbox Route43_Text_PokemaniacBenAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Brent::
	trainerbattle_single TRAINER_BRENT Route43_Text_PokemaniacBrentSeen, Route43_Text_PokemaniacBrentBeaten
	msgbox Route43_Text_PokemaniacBrentAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Marvin::
	trainerbattle_single TRAINER_MARVIN Route43_Text_FisherMarvinSeen, Route43_Text_FisherMarvinBeaten
	msgbox Route43_Text_FisherMarvinAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY Route43_Text_PicnickerTiffanySeen, Route43_Text_PicnickerTiffanyBeaten
	msgbox Route43_Text_PicnickerTiffanyWantsPicnic, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Sign1::
	msgbox Route43_Sign2, MSGBOX_SIGN
	end

Route43_EventScript_Sign2::
	msgbox Route43_TrainerTips, MSGBOX_SIGN
	end

Route43_EventScript_Item_Max_Ether::
	finditem ITEM_MAX_ETHER
	end

Route43_Text_PokemaniacBenSeen:
    .string "I love POKéMON!\p"
    .string "That's why I started--and why I'll\n"
    .string "keep on collecting POKéMON!$"

Route43_Text_PokemaniacBenBeaten:
    .string "How could you do this to me?$"

Route43_Text_PokemaniacBenAfter:
    .string "What else do I like besides\n"
    .string "POKéMON?\p"
    .string "MARY on the radio. I bet she's\n"
    .string "cute!$"

Route43_Text_PokemaniacBrentSeen:
    .string "Hey! Do you have any rare\n"
    .string "POKéMON?$"

Route43_Text_PokemaniacBrentBeaten:
    .string "Oh, my poor POKéMON! Darlings!$"

Route43_Text_PokemaniacBrentAfter:
    .string "I'd be happy just to own a single\n"
    .string "rare POKéMON.$"

Route43_Text_PokemaniacRonSeen:
    .string "Would you get this?\p"
    .string "Some SILVER guy made fun of my\n"
    .string "POKéMON!\p"
    .string "Darn it! My POKéMON's great!$"

Route43_Text_PokemaniacRonBeaten:
    .string "My POKéMON did pretty right on!$"

Route43_Text_PokemaniacRonAfter:
    .string "It's okay for people to like\n"
    .string "different types of POKéMON.\p"
    .string "POKéMON isn't just about having the\n"
    .string "most powerful one.$"

Route43_Text_FisherMarvinSeen:
    .string "I'm in a slump.\p"
    .string "Maybe it's the gear I'm using.\p"
    .string "Let's battle for a change of pace!$"

Route43_Text_FisherMarvinBeaten:
    .string "I lost, but I feel better anyway.$"

Route43_Text_FisherMarvinAfter:
    .string "KURT's LURE BALL is the best for\n"
    .string "catching hooked POKéMON.\p"
    .string "It's much more effective than a\n"
    .string "ULTRA BALL.$"

Route43_Text_CamperSpencerSeen:
    .string "I can do so much with my\n"
    .string "POKéMON--it's super-fun!$"

Route43_Text_CamperSpencerBeaten:
    .string "Losing isn't fun at all…$"

Route43_Text_CamperSpencerAfter:
    .string "What is going on at LAKE OF RAGE?\p"
    .string "We were planning to camp there.$"

Route43_Text_PicnickerTiffanySeen:
    .string "Are you going to LAKE OF RAGE too?\p"
    .string "Let's play for a little while!$"

Route43_Text_PicnickerTiffanyBeaten:
    .string "I played too much!$"

Route43_Text_PicnickerTiffanyWantsPicnic:
    .string "I'm having a picnic with POKéMON.\p"
    .string "Won't you join us?$"

Route43_Sign1:
    .string "ROUTE 43\p"
    .string "LAKE OF RAGE - MAHOGANY TOWN$"

Route43_Sign2:
    .string "ROUTE 43\p"
    .string "LAKE OF RAGE - MAHOGANY TOWN$"

Route43_TrainerTips:
    .string "TRAINER TIPS\p"
    .string "All POKéMON have pros and cons\n"
    .string "depending on their types.\p"
    .string "If their types differ, a higher-\n"
    .string "level POKéMON may lose in battle.\p"
    .string "Learn which types are strong and\n"
    .string "weak against your POKéMON's type.$"

Route43_EventScript_B2B1::
    lock
	playbgm MUS_HG_ENCOUNTER_BOY_1, TRUE
    playse SE_PIN
	applymovement LOCALID_ROUTE43_SPENCER, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 23, Route43_EventScript_AdjustSpencer
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox Route43_Text_CamperSpencerSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_SPENCER, Route43_Text_CamperSpencerBeaten
    playbgm MUS_HG_ENCOUNTER_SUSPICIOUS_1, TRUE
    playse SE_PIN
	applymovement LOCALID_ROUTE43_RON, Common_Movement_ExclamationMark
	delay 60
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    call_if_eq VAR_TEMP_0, 22, Route43_EventScript_AdjustRon
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0 
    msgbox Route43_Text_PokemaniacRonSeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_RON, Route43_Text_PokemaniacRonBeaten
    setvar VAR_ALL_B2B_STATE, 2
    release
    end

Route43_EventScript_AdjustSpencer::
    applymovement LOCALID_ROUTE43_SPENCER, Common_Movement_WalkRight1
    waitmovement 0
    return

Route43_EventScript_AdjustRon::
    applymovement LOCALID_ROUTE43_RON, Common_Movement_WalkLeft1
    waitmovement 0
    return

Route43_EventScript_Spencer::
	lock
	faceplayer
	msgbox Route43_Text_CamperSpencerAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

Route43_EventScript_Ron::
	lock
	faceplayer
	msgbox Route43_Text_PokemaniacRonAfter, MSGBOX_AUTOCLOSE
	closemessage
	release
	end

Route43_EventScript_SchoolboyDanny::
	trainerbattle_single TRAINER_DANNY, Route43_Text_SchoolboyDanny_Seen, Route43_Text_SchoolboyDanny_Beaten
	msgbox Route43_Text_SchoolboyDanny_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route43_Text_SchoolboyDanny_Seen:
	.string "If trainers meet, the first\n"
	.string "thing to do is battle.$"

Route43_Text_SchoolboyDanny_Beaten:
	.string "Awww… I've got a losing record…$"

Route43_Text_SchoolboyDanny_AfterBattle:
	.string "For trainers, it's a given that\n"
	.string "we'll battle whenever we meet.$"

Route43_EventScript_Jimmy::
	trainerbattle_single TRAINER_JIMMY, Route43_Text_YoungsterJimmy_Seen, Route43_Text_YoungsterJimmy_Beaten
	msgbox Route43_Text_YoungsterJimmy_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route43_Text_YoungsterJimmy_Seen:
	.string "I can run like the wind!$"

Route43_Text_YoungsterJimmy_Beaten:
	.string "Blown away!$"

Route43_Text_YoungsterJimmy_AfterBattle:
	.string "I wear shorts the whole year round.\p"
	.string "That's my fashion policy.$"

Route43_EventScript_Warren::
	trainerbattle_single TRAINER_WARREN, Route43_Text_YoungsterWarren_Seen, Route43_Text_YoungsterWarren_Beaten
	msgbox Route43_Text_YoungsterWarren_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route43_Text_YoungsterWarren_Seen:
	.string "Hmmm… I don't know what to do…$"

Route43_Text_YoungsterWarren_Beaten:
	.string "I knew I'd lose…$"

Route43_Text_YoungsterWarren_AfterBattle:
	.string "You looked strong.\p"
	.string "I was afraid to take you on…$"



