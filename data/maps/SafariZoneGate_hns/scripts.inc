.set LOCALID_SAFARIZONEGATE_THORTON, 12

SafariZoneGate_hns_MapScripts::
	.byte 0

SafariZoneGate_EventScript_Trigger::
	setflag FLAG_VISITED_SAFARI_ZONE_GATE
	clearflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	setvar VAR_SAFARI_ZONE_GATE_STATE, 3
	setvar VAR_THORTON_STATE, 1
	end

SafariZoneGate_EventScript_BackupTrigger::
	setflag FLAG_VISITED_SAFARI_ZONE_GATE
	setvar VAR_TEMP_0, 1
	end

SafariZoneGate_EventScript_WorkerM::
	lock
	faceplayer
	msgbox SafariZone_Text_ForeignFeeling, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Silent::
	lock
	faceplayer
	msgbox SafariZone_Text_SilentNPC, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox SafariZone_Text_Kangaskhan, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SafariZoneGate_EventScript_Engineer::
	lock
	faceplayer
	msgbox SafariZone_Text_JigglypuffTrainer, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Girl::
	lock
	faceplayer
	msgbox SafariZone_Text_FirstCatch, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_SlowpokeLady::
	lock
	faceplayer
	msgbox SafariZone_Text_SlowpokeFan, MSGBOX_DEFAULT
	closemessage
	release
	end


SafariZone_Text_ForeignFeeling:
	.string "SAFARI ZONE...\n"
	.string "It makes me feel like I am in a\l"
	.string "foreign country.\p"
	.string "It brings up a strange feeling.$"

SafariZone_Text_SilentNPC:
	.string "..................\p"
	.string "(I am not a talker.)$"

SafariZone_Text_Kangaskhan:
	.string "KANGASKHAN: ..................$"

SafariZone_Text_JigglypuffTrainer:
	.string "This SAFARI ZONE is great!\n"
	.string "I just kept going after POKéMON!\p"
	.string "That made my JIGGLYPUFF upset though.$"

SafariZone_Text_FirstCatch:
	.string "I have always wanted to catch my first\n"
	.string "POKéMON at the SAFARI ZONE.$"

SafariZone_Text_SlowpokeFan:
	.string "There are many POKéMON to choose from,\n"
	.string "but nothing beats the cuteness of\l"
	.string "SLOWPOKE.\p"
	.string "People often say that I look like one!$"

SafariZone_Text_CustomSystem:
	.string "You may be under the impression there\n"
	.string "is a sophisticated system to\l"
	.string "customizing the SAFARI ZONE, right?\p"
	.string "The real truth is that...$"

SafariZone_Text_Sign:
	.string "SAFARI ZONE\n"
	.string "This is where everything is thrilling.\p"
	.string "Feel free to come by and experience\n"
	.string "the wild!$"


SafariZoneGate_EventScript_IncenseClerk::
	goto_if_set FLAG_FINITE_TMS, SafariZoneGate_EventScript_IncenseClerkFinite
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SafariZoneGate_Pokemart_Incenses
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_Incenses:
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_NONE
	release
	end


SafariZoneGate_EventScript_IncenseClerkFinite::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SafariZoneGate_Pokemart_Incenses2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_Incenses2:
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_NONE
	release
	end

SafariZoneGate_EventScript_VitaminGuru::
	lock
	faceplayer
	message SafariZoneGate_Text_VitaminGuruSellWhatYouNeed
	waitmessage
	pokemart SafariZoneGate_Pokemart_VitaminGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_VitaminGuru:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE
	release
	end


SafariZoneGate_Text_VitaminGuruSellWhatYouNeed:
	.string "I'm the ENERGY GURU! I'll go for it and\n"
	.string "sell you what you need!$"


SafariZoneGate_EventScript_Pharmacy::
	lock
	msgbox SafariZoneGate_Text_PharmacySign, MSGBOX_SIGN
	closemessage
	release
	end

SafariZoneGate_Text_PharmacySign:
	.string "500 Years of Tradition\p"
	.string "SAFARI ZONE GATE PHARMACY\n"
	.string "(Formerly CIANWOOD CITY PHARMACY)\p"
	.string "We Await Your Medicinal Queries$"

SafariZoneGate_EventScript_Thorton::
	lock
	faceplayer
	playbgm MUS_B_FACTORY, TRUE
	goto_if_eq VAR_THORTON_STATE, 1, SafariZoneGate_EventScript_ThortonState1
	goto_if_eq VAR_THORTON_STATE, 2, SafariZoneGate_EventScript_ThortonState2
	goto_if_eq VAR_THORTON_STATE, 3, SafariZoneGate_EventScript_ThortonState3
	goto_if_eq VAR_THORTON_STATE, 4, SafariZoneGate_EventScript_ThortonState4
	goto_if_eq VAR_THORTON_STATE, 5, SafariZoneGate_EventScript_ThortonState5

SafariZoneGate_EventScript_ThortonState1::
	msgbox SafariZoneGate_Text_ChallengedByThorton, MSGBOX_DEFAULT
	closemessage
	msgbox SafariZoneGate_Text_ChallengedByThortonPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, SafariZone_EventScript_ThortonNormal
	case 1, SafariZone_EventScript_ThortonHard
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZoneGate_EventScript_ThortonState2::
	msgbox SafariZoneGate_Text_ChallengedByThortonPostIntro, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_DAHLIACHALLENGE, FALSE 
	switch VAR_RESULT
	case 0, SafariZone_EventScript_ThortonNormal
	case 1, SafariZone_EventScript_ThortonHard
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZone_EventScript_ThortonNormal::
	msgbox SafariZone_Text_ThortonAreYouSureNormal, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	case 0, SafariZone_EventScript_ThortonChooseNormalFight
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZone_EventScript_ThortonHard::
	msgbox SafariZone_Text_ThortonAreYouSureHard, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	case 0, SafariZone_EventScript_ThortonChooseHardFight
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZone_EventScript_ThortonChooseNormalFight::
	random 3
	goto_if_eq VAR_RESULT, 1, SafariZone_EventScript_ThortonNormalVariantBChosen
	goto_if_eq VAR_RESULT, 2, SafariZone_EventScript_ThortonNormalVariantCChosen
	goto SafariZone_EventScript_ThortonNormalVariantAChosen

SafariZone_EventScript_ThortonNormalVariantAChosen::
	msgbox SafariZone_Text_ThortonRevealVariantA, MSGBOX_DEFAULT
	closemessage
	setvar VAR_THORTON_STATE, 3
	fadedefaultbgm
	release
	end

SafariZoneGate_EventScript_ThortonState3::
	msgbox SafariZone_Text_ThortonNormalChallengeVariantA, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case 0, SafariZone_EventScript_FightNormalVariantA
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZone_EventScript_FightNormalVariantA::
	msgbox SafariZone_Text_ThortonPreFight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, SafariZoneGate_Text_ThortonWin
	playbgm MUS_B_FACTORY, TRUE
	msgbox SafariZoneGate_Text_ThortonNormalAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	msgbox SafariZoneGate_Text_ThortonLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 19, SafariZoneGate_EventScript_ThortonLeave1
	call_if_eq VAR_TEMP_0, 20, SafariZoneGate_EventScript_ThortonLeave2
	waitmovement 0
	setflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	removeobject LOCALID_SAFARIZONEGATE_THORTON
	fadedefaultbgm
	release
	end
	
SafariZone_EventScript_ThortonNormalVariantBChosen::
	msgbox SafariZone_Text_ThortonRevealVariantB, MSGBOX_DEFAULT
	closemessage
	setvar VAR_THORTON_STATE, 4
	fadedefaultbgm
	release
	end

SafariZoneGate_EventScript_ThortonState4::
	msgbox SafariZone_Text_ThortonNormalChallengeVariantB, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	case 0, SafariZone_EventScript_FightNormalVariantB
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZone_EventScript_FightNormalVariantB::
	msgbox SafariZone_Text_ThortonPreFight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_1, SafariZoneGate_Text_ThortonWin
	playbgm MUS_B_FACTORY, TRUE
	msgbox SafariZoneGate_Text_ThortonNormalAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	msgbox SafariZoneGate_Text_ThortonLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 19, SafariZoneGate_EventScript_ThortonLeave1
	call_if_eq VAR_TEMP_0, 20, SafariZoneGate_EventScript_ThortonLeave2
	waitmovement 0
	setflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	removeobject LOCALID_SAFARIZONEGATE_THORTON
	fadedefaultbgm
	release
	end

SafariZone_EventScript_ThortonNormalVariantCChosen::
	msgbox SafariZone_Text_ThortonRevealVariantC, MSGBOX_DEFAULT
	closemessage
	setvar VAR_THORTON_STATE, 5
	fadedefaultbgm
	release
	end

SafariZoneGate_EventScript_ThortonState5::
	msgbox SafariZone_Text_ThortonNormalChallengeVariantC, MSGBOX_DEFAULT
	multichoice 20, 6, MULTI_YESNO, FALSE
	switch VAR_RESULT
	case MULTI_B_PRESSED, SafariZone_EventScript_DeclineThortonChallenge
	case 0, SafariZone_EventScript_FightNormalVariantC
	goto SafariZone_EventScript_DeclineThortonChallenge

SafariZone_EventScript_FightNormalVariantC::
	msgbox SafariZone_Text_ThortonPreFight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_1, SafariZoneGate_Text_ThortonWin
	playbgm MUS_B_FACTORY, TRUE
	msgbox SafariZoneGate_Text_ThortonNormalAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 2
	msgbox SafariZoneGate_Text_ThortonLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 19, SafariZoneGate_EventScript_ThortonLeave1
	call_if_eq VAR_TEMP_0, 20, SafariZoneGate_EventScript_ThortonLeave2
	waitmovement 0
	setflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	removeobject LOCALID_SAFARIZONEGATE_THORTON
	fadedefaultbgm
	release
	end




SafariZone_EventScript_ThortonChooseHardFight::
	random 3
	goto_if_eq VAR_RESULT, 1, SafariZone_EventScript_ThortonHardVariantBChosen
	goto_if_eq VAR_RESULT, 2, SafariZone_EventScript_ThortonHardVariantCChosen
	goto SafariZone_EventScript_ThortonHardVariantAChosen

SafariZone_EventScript_ThortonHardVariantAChosen::
	msgbox SafariZone_Text_ThortonPreFight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_1, SafariZoneGate_Text_ThortonWin
	playbgm MUS_B_FACTORY, TRUE
	msgbox SafariZoneGate_Text_ThortonHardAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox SafariZoneGate_Text_ThortonLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 19, SafariZoneGate_EventScript_ThortonLeave1
	call_if_eq VAR_TEMP_0, 20, SafariZoneGate_EventScript_ThortonLeave2
	waitmovement 0
	setflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	removeobject LOCALID_SAFARIZONEGATE_THORTON
	fadedefaultbgm
	release
	end

SafariZone_EventScript_ThortonHardVariantBChosen::
	msgbox SafariZone_Text_ThortonPreFight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_1, SafariZoneGate_Text_ThortonWin
	playbgm MUS_B_FACTORY, TRUE
	msgbox SafariZoneGate_Text_ThortonHardAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox SafariZoneGate_Text_ThortonLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 19, SafariZoneGate_EventScript_ThortonLeave1
	call_if_eq VAR_TEMP_0, 20, SafariZoneGate_EventScript_ThortonLeave2
	waitmovement 0
	setflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	removeobject LOCALID_SAFARIZONEGATE_THORTON
	fadedefaultbgm
	release
	end

SafariZone_EventScript_ThortonHardVariantCChosen::
	msgbox SafariZone_Text_ThortonPreFight, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_1, SafariZoneGate_Text_ThortonWin
	playbgm MUS_B_FACTORY, TRUE
	msgbox SafariZoneGate_Text_ThortonHardAfter, MSGBOX_DEFAULT
	giveitem ITEM_HEART_SCALE, 4
	msgbox SafariZoneGate_Text_ThortonLeaving, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 19, SafariZoneGate_EventScript_ThortonLeave1
	call_if_eq VAR_TEMP_0, 20, SafariZoneGate_EventScript_ThortonLeave2
	waitmovement 0
	setflag FLAG_HIDE_SAFARIZONEGATE_THORTON
	removeobject LOCALID_SAFARIZONEGATE_THORTON
	fadedefaultbgm
	release
	end


SafariZoneGate_EventScript_ThortonLeave1::
	applymovement LOCALID_SAFARIZONEGATE_THORTON, SafariZoneGate_Movement_ThortonLeave1
	waitmovement 0
	return

SafariZoneGate_EventScript_ThortonLeave2::
	applymovement LOCALID_SAFARIZONEGATE_THORTON, SafariZoneGate_Movement_ThortonLeave2
	waitmovement 0
	return

SafariZoneGate_Movement_ThortonLeave1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SafariZoneGate_Movement_ThortonLeave2:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SafariZone_EventScript_DeclineThortonChallenge::
	msgbox SafariZone_Text_DeclineThortonChallenge, MSGBOX_DEFAULT
	closemessage
	setvar VAR_THORTON_STATE, 2
	fadedefaultbgm
	release
	end



SafariZoneGate_Text_ChallengedByThorton:
	.string "Oh, fancy meeting you here, {PLAYER}!\p"
	.string "Just kidding. My data told me that you'd\n"
	.string "arrive here at this exact time.\p"
	.string "How do I know your name? Let me\n"
	.string "explain.\p"
	.string "My name is THORTON.\p"
	.string "THORTON: I am the head of the BATTLE\n"
	.string "FACTORY.\p"
	.string "It's an environment where trainers use\n"
	.string "rental POKéMON to build makeshift\l"
	.string "teams and prove their mastery of\l"
	.string "battles and adaptation.\p"
	.string "My fellow facility heads DARACH and\n"
	.string "DAHLIA both spoke highly of your\l"
	.string "performance thus far.\p"
	.string "As it so happens, there is a hypothesis\n"
	.string "I would appreciate your help with.\p"
	.string "I have recently created three teams\n"
	.string "that I believe to have perfect balance\l"
	.string "with each other.\p"
	.string "If you are willing, I'd like you to battle\n"
	.string "one of these teams and reveal any\l"
	.string "weakness each of them may have.\p"
	.string "I am confident enough that they are\n"
	.string "powerful in their own right, but I'll\l"
	.string "admit that word of your innovative\l"
	.string "strategy has intrigued me.\p"
	.string "Should you wish to prove yourself one\n"
	.string "step further, why don't we up the\l"
	.string "stakes a little?\p"
	.string "For double the reward, I will instead\n"
	.string "not reveal which team I'm picking.$"

SafariZone_Text_ThortonAreYouSureNormal:
	.string "Ah, so you'd like to challenge a team\n"
	.string "with advanced warning?$"

SafariZone_Text_ThortonAreYouSureHard:
	.string "Oh, fascinating!\p"
	.string "Ready to brave the unknown?\n"
	.string "Or have you prepared for every angle?$"

SafariZone_Text_DeclineThortonChallenge:
	.string "Need more time to prepare, do you?\p"
	.string "Fret not. No one understands the\n"
	.string "desire to work with the largest amount\l"
	.string "of data possible more than myself.$"

SafariZoneGate_Text_ChallengedByThortonPostIntro:
	.string "So, {PLAYER}, demonstrate the results\n"
	.string "of your analysis to me now.\p"
	.string "Which challenge will you undertake?$"

SafariZone_Text_ThortonRevealVariantA:
	.string "Very well, then. The team you will fight\n"
	.string "is Variant A, using VIRIZION.\p"
	.string "Come and speak to me again when your\n"
	.string "preparations are complete.$"

SafariZone_Text_ThortonRevealVariantB:
	.string "Very well, then. The team you will fight\n"
	.string "is Variant B, using TERRAKION.\p"
	.string "Come and speak to me again when your\n"
	.string "preparations are complete.$"

SafariZone_Text_ThortonRevealVariantC:
	.string "Very well, then. The team you will fight\n"
	.string "is Variant C, using COBALION.\p"
	.string "Come and speak to me again when your\n"
	.string "preparations are complete.$"

SafariZone_Text_ThortonNormalChallengeVariantA:
	.string "Are you prepared, {PLAYER}? Remember,\n"
	.string "you will be fighting Variant A.$"

SafariZone_Text_ThortonNormalChallengeVariantB:
	.string "Are you prepared, {PLAYER}? Remember,\n"
	.string "you will be fighting Variant B.$"

SafariZone_Text_ThortonNormalChallengeVariantC:
	.string "Are you prepared, {PLAYER}? Remember,\n"
	.string "you will be fighting Variant C.$"

SafariZone_Text_ThortonPreFight:
	.string "Excellent! Let's get going!$"

SafariZoneGate_Text_ThortonWin:
	.string "Whoa! You sure showed me!$"

SafariZoneGate_Text_ThortonNormalAfter:
	.string "Hmm, impressive. Though I narrowed down\n"
	.string "the potential chain of events for you,\l"
	.string "it is nonetheless a significant feat to\l"
	.string "achieve such a clean victory.\p"
	.string "I believe you have earned these.$"

SafariZoneGate_Text_ThortonHardAfter:
	.string "I see now why the others admired you\n"
	.string "so.\p"
	.string "Your abilities, both in battle and in\n"
	.string "research, extend far beyond any\l"
	.string "traditional measmurement of expertise!\p"
	.string "Allow me to thank you for such a\n"
	.string "captivating display. These are yours to\l"
	.string "keep.$"

SafariZoneGate_Text_ThortonLeaving:
	.string "Losing is an odd feeling. I'm\n"
	.string "frustrated, but I learned more than I\l"
	.string "would have from a win.\l"
	.string "I suppose that's just the way it goes.\p"
	.string "Thank you, {PLAYER}. Oh, and look out\n"
	.string "for the last one of us on your journey.\p"
	.string "Though, be warned. She is a bit of an\n"
	.string "oddball, and that's coming from me...$"
