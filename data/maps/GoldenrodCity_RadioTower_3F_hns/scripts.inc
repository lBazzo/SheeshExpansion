.set LOCALID_RADIOTOWER_3F_B2B2BGRUNTTOP, 10
.set LOCALID_RADIOTOWER_3F_B2B2BGRUNTRIGHT, 11
.set LOCALID_RADIOTOWER_3F_B2B2BGRUNTBOT, 9
.set LOCALID_RADIOTOWER_3F_B2BGRUNTLEFT, 14
.set LOCALID_RADIOTOWER_3F_B2BGRUNTRIGHT, 15



GoldenrodCity_RadioTower_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_RadioTower_3F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_RadioTower_3F_OnTransition
	.byte 0

GoldenrodCity_RadioTower_3F_OnTransition::
	call_if_ge VAR_ALL_B2B_STATE, 9, GoldenrodRadioTower3_EventScript_MoveBeatenGrunts
	end

GoldenrodCity_RadioTower_3F_OnLoad::
	call_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodCity_RadioTower_3F_HideGate
	end

GoldenrodRadioTower3_EventScript_MoveBeatenGrunts::
	setobjectxyperm LOCALID_RADIOTOWER_3F_B2B2BGRUNTRIGHT, 26, 12
	setobjectxyperm LOCALID_RADIOTOWER_3F_B2B2BGRUNTBOT, 25, 13
	return


GoldenrodCity_RadioTower_3F_HideGate::
	setmetatile 25, 8, 0x335, FALSE
	setmetatile 25, 9, 0x335, FALSE

	setmetatile 26, 8, 0X334, FALSE
	setmetatile 26, 9, 0X334, FALSE

	setmetatile 27, 8, 0X334, FALSE
	setmetatile 27, 9, 0X334, FALSE

	setmetatile 28, 8, 0X334, FALSE
	setmetatile 28, 9, 0X334, FALSE

	setmetatile 29, 8, 0X334, FALSE
	setmetatile 29, 9, 0X334, FALSE

	setmetatile 30, 8, 0X334, FALSE
	setmetatile 30, 9, 0X334, FALSE

	setmetatile 31, 8, 0X334, FALSE
	setmetatile 31, 9, 0X334, FALSE
	return


GoldenrodRaidoTower3_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_6 GoldenrodCity_RadioTower_3F_Text_GruntM7Seen, GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM7After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_7 GoldenrodCity_RadioTower_3F_Text_GruntM8Seen, GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM8After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_8 GoldenrodCity_RadioTower_3F_Text_GruntM9Seen, GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten
	msgbox GoldenrodCity_RadioTower_3F_Text_GruntM9After, MSGBOX_AUTOCLOSE
	end

GoldenrodRaidoTower3_EventScript_Scientist::
	trainerbattle_single TRAINER_MARC GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen, GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten
	msgbox GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter, MSGBOX_AUTOCLOSE
	end


GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SKILL_SWAP, GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer3
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 10, GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer2

	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer2::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_TM_SKILL_SWAP
	setflag FLAG_GOT_SKILL_SWAP
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Cooltrainer3::
	msgbox GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Gate::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_CardKeySlot, MSGBOX_SIGN
	goto_if_set FLAG_HIDE_RADIOTOWER_GATE, GoldenrodCity_RadioTower_3F_EventScript_GateOpened
	checkitem ITEM_CARD_KEY
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_RadioTower_3F_EventScript_OpenGate
	closemessage
	release
	end


GoldenrodCity_RadioTower_3F_EventScript_GateOpened::
	msgbox GoldenrodCity_RadioTower_3F_Text_Open, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_OpenGate::
	msgbox GoldenrodCity_RadioTower_3F_Text_InsertedCardKey, MSGBOX_SIGN
	call GoldenrodCity_RadioTower_3F_HideGate
	playse SE_CLICK
	special DrawWholeMapView
	msgbox GoldenrodCity_RadioTower_3F_Text_Open, MSGBOX_SIGN
	setflag FLAG_HIDE_RADIOTOWER_GATE
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign1::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_PersonnelSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_Sign2::
	lock
	msgbox GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_Text_CardKeySlot:
	.string "It's the CARD KEY slot.$"

GoldenrodCity_RadioTower_3F_Text_InsertedCardKey:
	.string "{PLAYER} inserted the CARD KEY.$"
 
GoldenrodCity_RadioTower_3F_Text_Open:
	.string "The gate is open.$"

GoldenrodCity_RadioTower_3F_Text_PersonnelSign:
	.string "3F PERSONNEL$"

GoldenrodCity_RadioTower_3F_Text_PokemonMusicSign:
	.string "POKéMON MUSIC with Host DJ BEN$"

GoldenrodCity_RadioTower_3F_Text_SuperNerd:
	.string "We have recordings of the cries\n"
	.string "of all POKéMON that have been\l"
	.string "found.\p"
	.string "We must have about 400 kinds.$"

GoldenrodCity_RadioTower_3F_Text_GymGuideRockets:
	.string "To trainers, POKéMON are their\n"
	.string "beloved partners.\p"
	.string "It's terrible how TEAM ROCKET is\n"
	.string "trying to control POKéMON.$"

GoldenrodCity_RadioTower_3F_Text_GymGuide:
	.string "We run 24 hours a day to broadcast\n"
	.string "entertaining programs.\p"
	.string "I'll do my best to run around the\n"
	.string "clock too!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFPleaseSave:
	.string "The TEAM ROCKET boss has locked\n"
	.string "himself in.\p"
	.string "But the DIRECTOR can open it.\p"
	.string "He's up on the fifth floor.\p"
	.string "Please save him!$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFDirectorSafe:
	.string "Is the DIRECTOR safe?$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFHeroGift:
	.string "Thank you! You're my hero!\p"
	.string "This is a token of my appreciation.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFSunnyDay:
	.string "It's SKILL SWAP. It swaps the ability\n"
	.string "of one POKéMON with another's.$"

GoldenrodCity_RadioTower_3F_Text_CooltrainerFMarvelous:
	.string "You were simply marvelous!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Seen:
	.string "I've been given strict orders.\p"
	.string "I'm to crush anyone who challenges\n"
	.string "TEAM ROCKET!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7Beaten:
	.string "What?!$"

GoldenrodCity_RadioTower_3F_Text_GruntM7After:
	.string "I failed in my duties…\p"
	.string "ARCHER will be so upset...$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Seen:
	.string "It feels great ordering POKéMON\n"
	.string "to commit crimes.$"

GoldenrodCity_RadioTower_3F_Text_GruntM8Beaten:
	.string "You're kidding!$"

GoldenrodCity_RadioTower_3F_Text_GruntM8After:
	.string "I feel lousy over losing!\p"
	.string "Darn it! I hate useless POKéMON!$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Seen:
	.string "Why did the shutter open? Did you\n"
	.string "have something to do with this?$"

GoldenrodCity_RadioTower_3F_Text_GruntM9Beaten:
	.string "I'm done for!$"

GoldenrodCity_RadioTower_3F_Text_GruntM9After:
	.string "What?! You made it past our men in\n"
	.string "the UNDERGROUND?\p"
	.string "How could you?$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcSeen:
	.string "An unknown child wandering here?\p"
	.string "Who are you?$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcBeaten:
	.string "Tch! I took you too lightly!$"

GoldenrodCity_RadioTower_3F_Text_ScientistMarcAfter:
	.string "Bwahahaha…\p"
	.string "I can transmit as strong a signal\n"
	.string "as I need from here.$"

GoldenrodCity_RadioTower_3F_EventScript_BlockingRocket::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_BlockingRocket, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_Text_BlockingRocket:
.string "Oh man, oh man, oh man...\p"
.string "It's my first day and I already screwed\n"
.string "up big time!\p"
.string "I think I lost my CARD KEY somewhere in\n"
.string "the underground, and now I can't\l"
.string "actually get to my station.\p"
.string "If ARIANA finds out what I did,\n"
.string "going to- to...\p"
.string "do something!\p"
.string "Do you think you could help me out and,\n"
.string "say, create a big diversion by rescuing\l"
.string "the director or something?\p"
.string "That way, I could say I got beaten by\n"
.string "you before I could make it there.\p"
.string "...What's that? You were already\n"
.string "planning on doing that anyway?\p"
.string "Thank goodness! I'm saved!$"

GoldenrodCity_RadioTower_3F_EventScript_Teru::
	trainerbattle_single TRAINER_TERU GoldenrodCity_RadioTower_3F_Text_SupernerdTeruSeen, GoldenrodCity_RadioTower_3F_Text_SupernerdTeruBeaten
	msgbox GoldenrodCity_RadioTower_3F_Text_SupernerdTeruAfterBattle, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_RadioTower_3F_Text_SupernerdTeruSeen:
    .string "You may have beaten all the earlier\n"
    .string "grunts, but this time will be\l"
    .string "different... for some reason!$"

GoldenrodCity_RadioTower_3F_Text_SupernerdTeruBeaten:
    .string "Ow, ow, ow!$"

GoldenrodCity_RadioTower_3F_Text_SupernerdTeruAfterBattle:
    .string "What an unexpected outcome...$"

GoldenrodCity_RadioTower_3F_EventScript_Issac::
	trainerbattle_single TRAINER_ISSAC GoldenrodCity_RadioTower_3F_Text_PokemaniacIssacSeen, GoldenrodCity_RadioTower_3F_Text_PokemaniacIssacBeaten
	msgbox GoldenrodCity_RadioTower_3F_Text_PokemaniacIssacAfterBattle, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_RadioTower_3F_Text_PokemaniacIssacSeen:
    .string "I'm starting to feel like this plan the\n"
	    .string "executives made isn't as perfect as I\l"
			.string "thought... I'm not crazy right?$"

GoldenrodCity_RadioTower_3F_Text_PokemaniacIssacBeaten:
    .string "It just doesn't make sense.$"

GoldenrodCity_RadioTower_3F_Text_PokemaniacIssacAfterBattle:
    .string "Like... we're basically just building a\n"
	.string "huge megaphone like that one episode\l"
	.string "of The Simpsons where Bart puts like\l"
	.string "ten megaphones together and then says\l"
	.string "'Testing' before creating a super\l"
	.string "shockwave that obliterates the\l"
	.string "entirety of Springfield.\p"
	.string "Does no one see any issues with that?\p"
	.string "And did GIOVANNI just delete\n"
	.string "everyone's number from his POKéGEAR?\l"
	.string "If so, they should really respect his\l"
	.string "privacy and leave him alone.\p"
	.string "That's just my opinion, I guess...$"


GoldenrodCity_RadioTower_3F_EventScript_B2B2B::
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	lock
	playse SE_PIN
	applymovement LOCALID_RADIOTOWER_3F_B2B2BGRUNTRIGHT, Common_Movement_ExclamationMark
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox GoldenrodCity_RadioTower_3F_Text_B2B2BGruntRightPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_RadioTower_3F_Text_B2B2BGruntRightBeaten
	applymovement LOCALID_RADIOTOWER_3F_B2B2BGRUNTRIGHT, GoldenrodCity_RadioTower_3F_Movement_B2B2BGruntRightBeaten
    waitmovement 0
	applymovement LOCALID_RADIOTOWER_3F_B2B2BGRUNTTOP, Common_Movement_WalkInPlaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0 
    waitmovement 0
	msgbox GoldenrodCity_RadioTower_3F_Text_B2B2BGruntTopPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_RadioTower_3F_Text_B2B2BGruntTopBeaten
    applymovement LOCALID_RADIOTOWER_3F_B2B2BGRUNTTOP, Common_Movement_WalkInPlaceDown
    waitmovement 0
    applymovement LOCALID_RADIOTOWER_3F_B2B2BGRUNTBOT, Common_Movement_WalkInPlaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
    waitmovement 0
	msgbox GoldenrodCity_RadioTower_3F_Text_B2B2BGruntBotPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_RadioTower_3F_Text_B2B2BGruntBotBeaten
    applymovement LOCALID_RADIOTOWER_3F_B2B2BGRUNTBOT, GoldenrodCity_RadioTower_3F_Movement_B2B2BGruntBotBeaten
    waitmovement 0
    setobjectxyperm LOCALID_RADIOTOWER_3F_B2B2BGRUNTRIGHT, 27, 11
	setobjectxyperm LOCALID_RADIOTOWER_3F_B2B2BGRUNTBOT, 25, 13
	setvar VAR_ALL_B2B_STATE, 10
	release
	end

GoldenrodCity_RadioTower_3F_Movement_B2B2BGruntRightBeaten::
    lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

GoldenrodCity_RadioTower_3F_Movement_B2B2BGruntBotBeaten::
    lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntRightPreFight:
	.string "Hey! It's you! Remember us? We're the\n"
	.string "ROCKET TRIO!\p"
	.string "...\p"
	.string "What, really? You don't remember-\p"
	.string "You know what, nevermind! The point is,\n"
	.string "we're back and better than ever, and\l"
	.string "we're getting our revenge right here,\l"
	.string "right now!$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntRightBeaten:
	.string "What? But I thought nothing is\n"
	.string "stronger than family...$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntRightAfter:
	.string "I let my brothers down.$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntTopPreFight:
	.string "You know, I just had an idea. Maybe we\n"
    .string "should try fighting you all at once.\l"
    .string "We could call it a 'triple battle'.\p"
	.string "...\p"
	.string "Yeah, you're right. That sounds stupid.$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntTopBeaten:
	.string "Still no good, huh?$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntTopAfter:
	.string "We've been together for so long, I'm not\n"
	.string "sure what I'd do without these guys.\p"
	.string "I'd rather we lose every battle than\n"
    .string "have to go things alone again.$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntBotPreFight:
    .string "I'm the slowest of the GRUNT TRIO!\p"
    .string "Ah wait, that was the intro for last\n"
	.string "time... What was I meant to say again?$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntBotBeaten:
    .string "Aww... it happened again. One of these\n"
    .string "days I'll be ready on time...$"

GoldenrodCity_RadioTower_3F_Text_B2B2BGruntBotAfter:
	.string "I'm a little slow, but my brothers say\n"
	.string "they like having me around because I'm\l"
	.string "the optimist out of us three.\p"
	.string "I have no idea what that word means,\n"
	.string "but it must be a good thing, right?$"

GoldenrodCity_RadioTower_3F_EventScript_B2B2BGruntBot::
	lock
    faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_B2B2BGruntBotAfter, MSGBOX_DEFAULT
	closemessage
	end

GoldenrodCity_RadioTower_3F_EventScript_B2B2BGruntTop::
	lock
    faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_B2B2BGruntTopAfter, MSGBOX_DEFAULT
	closemessage
	end

GoldenrodCity_RadioTower_3F_EventScript_B2B2BGruntRight::
	lock
    faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_B2B2BGruntRightAfter, MSGBOX_DEFAULT
	closemessage
	end









GoldenrodCity_RadioTower_3F_EventScript_B2B::
	lock
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	playse SE_PIN
	applymovement LOCALID_RADIOTOWER_3F_B2BGRUNTLEFT, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 10, GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntLeft1
	call_if_eq VAR_TEMP_0, 11, GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntLeft2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0 
	msgbox GoldenrodCity_RadioTower_3F_Text_B2BGruntLeftPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_RadioTower_3F_Text_B2BGruntLeftBeaten
	playbgm MUS_HG_ENCOUNTER_ROCKET, TRUE
	playse SE_PIN
	applymovement LOCALID_RADIOTOWER_3F_B2BGRUNTRIGHT, Common_Movement_ExclamationMark
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 10, GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntRight1
	call_if_eq VAR_TEMP_0, 9, GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntRight2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0 
	msgbox GoldenrodCity_RadioTower_3F_Text_B2BGruntRightPreFight, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_21, GoldenrodCity_RadioTower_3F_Text_B2BGruntRightBeaten
	playbgm MUS_HG_ROCKET_TAKEOVER, TRUE
	setvar VAR_ALL_B2B_STATE, 6
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntLeft1::
	applymovement LOCALID_RADIOTOWER_3F_B2BGRUNTLEFT, Common_Movement_WalkRight1
	waitmovement 0
	return

GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntLeft2::
	applymovement LOCALID_RADIOTOWER_3F_B2BGRUNTLEFT, GoldenrodCity_RadioTower_3F_Movement_AdjustGruntLeft2
	waitmovement 0
	return

GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntRight1::
	applymovement LOCALID_RADIOTOWER_3F_B2BGRUNTRIGHT, Common_Movement_WalkLeft1
	waitmovement 0
	return

GoldenrodCity_RadioTower_3F_EventScript_AdjustGruntRight2::
	applymovement LOCALID_RADIOTOWER_3F_B2BGRUNTRIGHT, GoldenrodCity_RadioTower_3F_Movement_AdjustGruntRight2
	waitmovement 0
	return

GoldenrodCity_RadioTower_3F_Movement_AdjustGruntLeft2:
	walk_right
	walk_right
	step_end

GoldenrodCity_RadioTower_3F_Movement_AdjustGruntRight2:
	walk_left
	walk_left
	step_end

GoldenrodCity_RadioTower_3F_Text_B2BGruntLeftPreFight:
	.string "I've been given strict orders.\p"
	.string "I'm to crush anyone who challenges\n"
	.string "TEAM ROCKET!$"

GoldenrodCity_RadioTower_3F_Text_B2BGruntLeftBeaten:
	.string "What?!$"

GoldenrodCity_RadioTower_3F_Text_B2BGruntLeftAfter:
	.string "I failed in my duties…\p"
	.string "ARCHER will be so upset...$"

GoldenrodCity_RadioTower_3F_Text_B2BGruntRightPreFight:
	.string "It feels great ordering POKéMON\n"
	.string "to commit crimes.$"

GoldenrodCity_RadioTower_3F_Text_B2BGruntRightBeaten:
	.string "You're kidding!$"

GoldenrodCity_RadioTower_3F_Text_B2BGruntRightAfter:
	.string "I feel lousy over losing!\p"
	.string "Darn it! I hate useless POKéMON!$"

GoldenrodCity_RadioTower_3F_EventScript_B2BGruntLeft::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_B2BGruntLeftAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_3F_EventScript_B2BGruntRight::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_3F_Text_B2BGruntRightAfter, MSGBOX_DEFAULT
	closemessage
	release
	end
