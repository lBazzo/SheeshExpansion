.set LOCALID_NURSE, 1
.set LOCALID_INDIGOPLATEAU_ABRA, 6
.set LOCALID_INDIGOPLATEAU_SPENCER, 10

IndigoPlateau_PokemonCenter_hns_MapScripts::
	@map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_PokemonCenter_OnFrame 
	.byte 0

IndigoPlateau_PokemonCenter_OnFrame::
	map_script_2 VAR_LEAGUE_STATE, 0, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 2, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 3, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 4, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 5, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 6, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_ROUTE27_STATE, 3, IndigoPlateau_PokemonCenter_MeetSpencer
	.2byte 0

IndigoPlateau_PokemonCenter_Enter::
	setflag FLAG_VISITED_INDIGO_PLATEAU
	setvar VAR_LEAGUE_STATE, 1
	return

IndigoPlateau_EventScript_Cooltrainer::
	msgbox IndigoPlateau_Text_CooltrainerM, MSGBOX_NPC
	end

IndigoPlateau_EventScript_BlackBelt::
	msgbox IndigoPlateau_Text_Blackbelt, MSGBOX_NPC
	end

IndigoPlateau_EventScript_ShigyNinja::
	msgbox IndigoPlateau_Text_ShigyNinja, MSGBOX_NPC
	end

IndigoPlateau_Text_ShigyNinja:
	.string "Congrats on making it here!\p"
	.string "I've seen tons of trainers come\n"
	.string "through here over the years, and\l"
	.string "all of them are wonderfully unique.\p"
	.string "You should be proud of yourself\n"
	.string "for getting this far!\p"
	.string "Now, go get em'!$"

IndigoPlateau_Text_Blackbelt:
	.string "The POKéMON LEAGUE is not taking\n"
	.string "new challengers at the moment.\p"
	.string "Please check back later.$"

IndigoPlateau_Text_CooltrainerM:
    .string "At the POKéMON LEAGUE, you'll get\n"
    .string "tested by the ELITE FOUR.\p"
    .string "You have to beat them all. If you\n"
    .string "lose, you have to start all over!$"

IndigoPlateau_EventScript_Silver::
	lock
	faceplayer 
	goto_if_set FLAG_DAILY_BEAT_SILVER, IndigoPlateau_EventScript_SilverBeat
	msgbox IndigoPlateau_Text_RivalEntrance1, MSGBOX_DEFAULT
	call_if_eq VAR_STARTER_MON, 0, IndigoPlateau_Silver_Battle_Cyndaquil
	call_if_eq VAR_STARTER_MON, 1, IndigoPlateau_Silver_Battle_Totodile
	call_if_eq VAR_STARTER_MON, 2, IndigoPlateau_Silver_Battle_Chikorita
	msgbox IndigoPlateau_Text_RivalAfter, MSGBOX_DEFAULT
	setflag FLAG_DAILY_BEAT_SILVER
	release
	end

IndigoPlateau_EventScript_SilverBeat::
	msgbox IndigoPlateau_Text_RivalAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

IndigoPlateau_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_7, IndigoPlateau_Text_RivalWin
	return

IndigoPlateau_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_7, IndigoPlateau_Text_RivalWin
	return

IndigoPlateau_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_7, IndigoPlateau_Text_RivalWin
	return

IndigoPlateau_Text_RivalEntrance1:
    .string "Hold it.\p"
    .string "You're going to take the POKéMON\n"
    .string "LEAGUE challenge now?\p"
    .string "That's not going to happen.\p"
    .string "My super-well-trained POKéMON\n"
    .string "are going to pound you.\p"
    .string "{PLAYER}!\n"
    .string "I challenge you!$"

IndigoPlateau_Text_RivalWin:
    .string "…\p"
    .string "OK--I lost…$"

IndigoPlateau_Text_RivalAfter:
    .string "…Darn… I still can't win…\p"
    .string "I… I have to think more about my\n"
    .string "POKéMON…\p"
    .string "Humph! Try not to lose!$"

IndigoPlateau_EventScript_Psychic::
	lock
	faceplayer
	msgbox IndigoPlateau_Text_TeleportGuy1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_EventScript_PsychicTeleport
	msgbox IndigoPlateau_Text_TeleportGuyNo, MSGBOX_DEFAULT
	closemessage
	release
	end

IndigoPlateau_EventScript_PsychicTeleport::
	msgbox IndigoPlateau_Text_TeleportGuyYes, MSGBOX_DEFAULT
	closemessage
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	playbgm MUS_HG_NEW_BARK, TRUE
	delay 60
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	applymovement2 LOCALID_INDIGOPLATEAU_ABRA, IndigoPLateau_Movement_Abra
	waitmovement 0
	fadescreen FADE_TO_WHITE
	warpteleport MAP_NEW_BARK_TOWN, 20, 12
	release
	end
	
IndigoPLateau_Movement_Abra:
	jump_in_place_right
	jump_in_place_right
	step_end

IndigoPlateau_EventScript_Abra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	msgbox IndigoPlateau_Text_Abra, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IndigoPlateau_Text_TeleportGuy1:
    .string "Ah! You're challenging the ELITE\n"
    .string "FOUR? Are you sure you're ready?\p"
    .string "If you need to train some more,\n"
    .string "my ABRA can help you.\p"
    .string "It can TELEPORT you home.\p"
    .string "Would you like to go home now?$"

IndigoPlateau_Text_TeleportGuyYes:
    .string "OK, OK. Picture your house in your\n"
    .string "mind…$"

IndigoPlateau_Text_TeleportGuyNo:
    .string "OK, OK. The best of luck to you!$"

IndigoPlateau_Text_Abra:
    .string "ABRA: Aabra…$"

IndigoPlateau_PokemonCenter_MeetSpencer::
	lock
	playse SE_PIN
	applymovement LOCALID_INDIGOPLATEAU_SPENCER, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_INDIGOPLATEAU_SPENCER, IndigoPlateau_PokemonCenter_Movement_SpencerApproachPlayer
	waitmovement 0
	msgbox IndigoPlateau_PokemonCenter_Text_SpencerExplainBP, MSGBOX_DEFAULT
	closemessage
    special CustomGiveBattlePoints
	applymovement LOCALID_INDIGOPLATEAU_SPENCER, IndigoPlateau_PokemonCenter_Movement_SpencerLeavePlayer
	waitmovement 0
	setvar VAR_ROUTE27_STATE, 4
	clearflag FLAG_TALKED_E4_DAHLIA
	clearflag FLAG_TALKED_E4_DARACH
	clearflag FLAG_TALKED_E4_CAITLIN
	clearflag FLAG_TALKED_E4_LUCY
	clearflag FLAG_TALKED_E4_THORTON
	clearflag FLAG_TALKED_E4_SPENCER
	release
	end

IndigoPlateau_PokemonCenter_Movement_SpencerApproachPlayer:
	walk_left
	walk_left
	walk_left
	face_down
	step_end

IndigoPlateau_PokemonCenter_Movement_SpencerLeavePlayer:
	walk_right
	walk_right
	walk_right
	face_down
	step_end

IndigoPlateau_PokemonCenter_Text_SpencerExplainBP:
	.string "Ah, I wondered when we'd be seeing you,\n"
    .string "{PLAYER}.\p"
    .string "Hm?\p"
    .string "Oh, no. Well, I am a trainer, that is true.\n"
    .string "But I'm not here to challenge you.\p"
    .string "I'm SPENCER, the head of the BATTLE\n"
    .string "PALACE.\p"
    .string "SPENCER: I've heard great things about\n"
    .string "your battles with the other facility\l"
    .string "heads.\p"
    .string "While there is some part of me that is\n"
    .string "curious as to how I would fare against\l"
    .string "you, now is not the time for that.\p"
    .string "You're here to challenge the POKéMON\n"
    .string "LEAGUE, aren't you?\p"
    .string "In that case, let us lend you some\n"
    .string "assistance.\p"
    .string "I'm going to give you 32 BATTLE POINTS.\p"
    .string "BATTLE POINTS is a type of currency\n"
    .string "that we use at the BATTLE FRONTIER.\p"
    .string "They can be exchanged for various\n"
    .string "powerful items.\p"
    .string "Since you've already beaten so many of\n"
    .string "us, it's only fair that you be rewarded\l"
    .string "accordingly for your triumphs.\p"
    .string "Plus, it wouldn't be a good look for us\n"
    .string "if you failed to defeat the ELITE FOUR\l"
    .string "now...\p"
    .string "Ohoho! I'm just joking, of course.\p"
    .string "Come and speak to us when you've\n"
    .string "decided on what you want, alright?$"

IndigoPlateau_PokemonCenter_Text_DoneExplaining:
	.string "Go fix that shi.$"

IndigoPlateau_PokemonCenter_Spencer::
	lock
    faceplayer
    goto_if_set FLAG_TALKED_E4_SPENCER, IndigoPlateau_EventScript_SpencerPostIntro
	msgbox IndigoPlateau_Text_SpencerIntro, MSGBOX_DEFAULT
	setflag FLAG_TALKED_E4_SPENCER
	goto IndigoPlateau_EventScript_SpencerPostIntro

IndigoPlateau_EventScript_SpencerPostIntro::
    msgbox IndigoPlateau_Text_SpencerPostIntro, MSGBOX_DEFAULT
    closemessage
    release
    end

IndigoPlateau_Text_SpencerIntro:
    .string "What's that?\p"
    .string "Oh, sorry. I should've said earlier.\n"
    .string "I don't have any items to offer you.\p"
    .string "Unless there was something else you\n"
    .string "wanted to discuss? Hmm, let's see...$"

IndigoPlateau_Text_SpencerPostIntro:
    .string "I'd recommend you think carefully\n"
    .string "about weighing up the value of\l"
    .string "consumable items against repeat use\l"
    .string "items.\p"
    .string "Some cheaper items are more powerful\n"
    .string "during the fight you use them, but you\l"
    .string "won't be able to keep them for all the\l"
    .string "ELITE FOUR. Choose wisely.$"

@Dahlia

IndigoPlateau_EventScript_Dahlia::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_E4_DAHLIA, IndigoPlateau_EventScript_DahliaPostIntro
	msgbox IndigoPlateau_Text_DahliaIntro, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TALKED_E4_DAHLIA
	goto IndigoPlateau_EventScript_DahliaPostIntro

IndigoPlateau_EventScript_DahliaTryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, IndigoPlateau_EventScript_DahliaTryGiveItem
	msgbox IndigoPlateau_Text_DahliaDontHaveEnoughPoints, MSGBOX_DEFAULT
	goto IndigoPlateau_EventScript_DahliaPostIntro
	end

IndigoPlateau_EventScript_DahliaTryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox IndigoPlateau_Text_DahliaHereIsYourPrize, MSGBOX_DEFAULT
	goto IndigoPlateau_EventScript_DahliaPostIntro
	end

IndigoPlateau_EventScript_DahliaPostIntro::

@IndigoPlateau_EventScript_DahliaPostIntro::
	msgbox IndigoPlateau_Text_DahliaPostIntro, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_MULTI_E4_ITEMS_DAHLIA
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, IndigoPlateau_EventScript_ApicotBerry
	case 1, IndigoPlateau_EventScript_GanlonBerry
	case 2, IndigoPlateau_EventScript_LiechiBerry
	case 3, IndigoPlateau_EventScript_PetayaBerry
	case 4, IndigoPlateau_EventScript_SalacBerry
	case 5, IndigoPlateau_EventScript_JabocaBerry
	case 6, IndigoPlateau_EventScript_RowapBerry
	case 7, IndigoPlateau_EventScript_RockyHelmet
	case 8, IndigoPlateau_EventScript_Leftovers
	case 9, IndigoPlateau_EventScript_BlackSludge
	case 10, IndigoPlateau_EventScript_FireGem
	case 11, IndigoPlateau_EventScript_WaterGem
	case 12, IndigoPlateau_EventScript_ElectricGem
	case 13, IndigoPlateau_EventScript_GrassGem
	case 14, IndigoPlateau_EventScript_ExitDahlia
	case MULTI_B_PRESSED, IndigoPlateau_EventScript_ExitDahlia
	end

IndigoPlateau_EventScript_ExitDahlia::
	msgbox IndigoPlateau_Text_DahliaBye, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end



IndigoPlateau_EventScript_ApicotBerry::
    msgbox IndigoPlateau_Text_ConfirmApicotBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_APICOT_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_GanlonBerry::
    msgbox IndigoPlateau_Text_ConfirmGanlonBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_GANLON_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_LiechiBerry::
    msgbox IndigoPlateau_Text_ConfirmLiechiBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_LIECHI_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_PetayaBerry::
    msgbox IndigoPlateau_Text_ConfirmPetayaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_PETAYA_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_SalacBerry::
    msgbox IndigoPlateau_Text_ConfirmSalacBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_SALAC_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_JabocaBerry::
    msgbox IndigoPlateau_Text_ConfirmJabocaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_RowapBerry::
    msgbox IndigoPlateau_Text_ConfirmRowapBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_RockyHelmet::
    msgbox IndigoPlateau_Text_ConfirmRockyHelmet, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_Leftovers::
    msgbox IndigoPlateau_Text_ConfirmLeftovers, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_LEFTOVERS
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_BlackSludge::
    msgbox IndigoPlateau_Text_ConfirmBlackSludge, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_FireGem::
    msgbox IndigoPlateau_Text_ConfirmFireGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_WaterGem::
    msgbox IndigoPlateau_Text_ConfirmWaterGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_ElectricGem::
    msgbox IndigoPlateau_Text_ConfirmElectricGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end

IndigoPlateau_EventScript_GrassGem::
    msgbox IndigoPlateau_Text_ConfirmGrassGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DahliaPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DahliaTryPurchasePrize
    end



IndigoPlateau_Text_DahliaIntro:
	.string "DAHLIA: Well, look who it is! I hope\n"
    .string "you've been keeping well!\p"
    .string "I knew you'd end up here eventually\n"
    .string "since our battle at OLIVINE CITY.\p"
    .string "Have you been thinking about what we\n"
    .string "talked about back then?\p"
    .string "You know, about taking on a harder\n"
    .string "challenge to grow in the moment or\l"
    .string "taking good fortune when you get it?\p"
    .string "Maybe you're regretting the choice you\n"
    .string "made now... Or maybe not!$"

IndigoPlateau_Text_DahliaPostIntro:
	.string "DAHLIA: So, what'll it be?$"

IndigoPlateau_Text_DahliaDontHaveEnoughPoints:
	.string "Whoops! Looks like you spent all your\n"
    .string "points already.$"

IndigoPlateau_Text_DahliaHereIsYourPrize:
	.string "Got it! This'll be sure to turn the tide\n"
    .string "of battle!$"

IndigoPlateau_Text_ConfirmApicotBerry:
	.string "Want the APICOT BERRY, yeah?$"

IndigoPlateau_Text_ConfirmGanlonBerry:
	.string "Want the GANLON BERRY, yeah?$"

IndigoPlateau_Text_ConfirmLiechiBerry:
	.string "Want the LIECHI BERRY, yeah?$"

IndigoPlateau_Text_ConfirmPetayaBerry:
	.string "Want the PETAYA BERRY, yeah?$"

IndigoPlateau_Text_ConfirmSalacBerry:
	.string "Want the SALAC BERRY, yeah?$"

IndigoPlateau_Text_ConfirmJabocaBerry:
	.string "Want the JABOCA BERRY, yeah?$"

IndigoPlateau_Text_ConfirmRowapBerry:
	.string "Want the ROWAP BERRY, yeah?$"

IndigoPlateau_Text_ConfirmRockyHelmet:
	.string "Want the ROCKY HELMET, yeah?$"

IndigoPlateau_Text_ConfirmLeftovers:
	.string "Want the LEFTOVERS, yeah?$"

IndigoPlateau_Text_ConfirmBlackSludge:
	.string "Want the BLACK SLUDGE, yeah?$"

IndigoPlateau_Text_ConfirmFireGem:
	.string "Want the FIRE GEM, yeah?$"

IndigoPlateau_Text_ConfirmWaterGem:
	.string "Want the WATER GEM, yeah?$"

IndigoPlateau_Text_ConfirmElectricGem:
	.string "Want the ELECTRIC GEM, yeah?$"

IndigoPlateau_Text_ConfirmGrassGem:
	.string "Want the GRASS GEM, yeah?$"

IndigoPlateau_Text_DahliaBye:
	.string "No worries! Let me know if anything else\n"
    .string "tickles your fancy. And good luck!$"




@Darach

IndigoPlateau_EventScript_Darach::
    lock
    faceplayer
    goto_if_set FLAG_TALKED_E4_DARACH, IndigoPlateau_EventScript_DarachPostIntro
    msgbox IndigoPlateau_Text_DarachIntro, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_TALKED_E4_DARACH
    goto IndigoPlateau_EventScript_DarachPostIntro
	end

IndigoPlateau_EventScript_DarachTryPurchasePrize::
    specialvar VAR_TEMP_1, GetFrontierBattlePoints
    goto_if_ge VAR_TEMP_1, VAR_0x8008, IndigoPlateau_EventScript_DarachTryGiveItem
    msgbox IndigoPlateau_Text_DarachDontHaveEnoughPoints, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_DarachPostIntro
    end

IndigoPlateau_EventScript_DarachTryGiveItem::
    checkitemspace VAR_0x8009
    goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
    copyvar VAR_0x8004, VAR_0x8008
    special TakeFrontierBattlePoints
    additem VAR_0x8009
    special UpdateBattlePointsWindow
    playse SE_SHOP
    msgbox IndigoPlateau_Text_DarachHereIsYourPrize, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_DarachPostIntro
    end

IndigoPlateau_EventScript_DarachPostIntro::
    msgbox IndigoPlateau_Text_DarachPostIntro, MSGBOX_DEFAULT
    special ShowBattlePointsWindow
    setvar VAR_0x8004, SCROLL_MULTI_E4_ITEMS_DARACH
    special ShowFrontierExchangeCornerItemIconWindow
    special ShowScrollableMultichoice
    waitstate
    special CloseFrontierExchangeCornerItemIconWindow
    switch VAR_RESULT
    case 0, IndigoPlateau_EventScript_BabiriBerry
    case 1, IndigoPlateau_EventScript_ChartiBerry
    case 2, IndigoPlateau_EventScript_ChilanBerry
    case 3, IndigoPlateau_EventScript_ChopleBerry
    case 4, IndigoPlateau_EventScript_CobaBerry
    case 5, IndigoPlateau_EventScript_ColburBerry
    case 6, IndigoPlateau_EventScript_HabanBerry
    case 7, IndigoPlateau_EventScript_KasibBerry
    case 8, IndigoPlateau_EventScript_KebiaBerry
    case 9, IndigoPlateau_EventScript_OccaBerry
    case 10, IndigoPlateau_EventScript_PasshoBerry
    case 11, IndigoPlateau_EventScript_PayapaBerry
    case 12, IndigoPlateau_EventScript_RindoBerry
    case 13, IndigoPlateau_EventScript_RoseliBerry
    case 14, IndigoPlateau_EventScript_ExitDarach
    case MULTI_B_PRESSED, IndigoPlateau_EventScript_ExitDarach
    end

IndigoPlateau_EventScript_ExitDarach::
    msgbox IndigoPlateau_Text_DarachBye, MSGBOX_DEFAULT
    special CloseBattlePointsWindow
    release
    end

IndigoPlateau_EventScript_BabiriBerry::
    msgbox IndigoPlateau_Text_ConfirmBabiriBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_ChartiBerry::
    msgbox IndigoPlateau_Text_ConfirmChartiBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_ChilanBerry::
    msgbox IndigoPlateau_Text_ConfirmChilanBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_ChopleBerry::
    msgbox IndigoPlateau_Text_ConfirmChopleBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_CobaBerry::
    msgbox IndigoPlateau_Text_ConfirmCobaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_ColburBerry::
    msgbox IndigoPlateau_Text_ConfirmColburBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_HabanBerry::
    msgbox IndigoPlateau_Text_ConfirmHabanBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_KasibBerry::
    msgbox IndigoPlateau_Text_ConfirmKasibBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_KebiaBerry::
    msgbox IndigoPlateau_Text_ConfirmKebiaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_OccaBerry::
    msgbox IndigoPlateau_Text_ConfirmOccaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_PasshoBerry::
    msgbox IndigoPlateau_Text_ConfirmPasshoBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_PayapaBerry::
    msgbox IndigoPlateau_Text_ConfirmPayapaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_RindoBerry::
    msgbox IndigoPlateau_Text_ConfirmRindoBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end

IndigoPlateau_EventScript_RoseliBerry::
    msgbox IndigoPlateau_Text_ConfirmRoseliBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_DarachPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_DarachTryPurchasePrize
    end



IndigoPlateau_Text_DarachIntro:
    .string "DARACH: It's a pleasure to be in one\n"
    .string "another's company once more, {PLAYER}.\p"
    .string "I see you've been making quite the\n"
    .string "progress since our last meeting.\l"
    .string "I'd expect nothing less from you.\p"
    .string "As for us, there have been some ups and\n"
    .string "downs. That is life, of course.\p"
    .string "Though I am still in your debt for\n"
    .string "helping CAITLIN and I to work on our\l"
    .string "team synergy.\p"
    .string "Even if it only helps a small amount,\n"
    .string "I hope these items will make a\l"
    .string "difference in your upcoming battles.$"

IndigoPlateau_Text_DarachPostIntro:
    .string "DARACH: So, what can I help you with\n"
    .string "today, {PLAYER}?$"

IndigoPlateau_Text_DarachDontHaveEnoughPoints:
    .string "I'm terribly sorry. I'm afraid you have"
    .string "insufficient points for that.$"

IndigoPlateau_Text_DarachHereIsYourPrize:
    .string "Certainly. I have no doubt that you'll\n"
    .string "make excellent use of this.$"

IndigoPlateau_Text_ConfirmBabiriBerry:
    .string "You want the BABIRI BERRY?$"

IndigoPlateau_Text_ConfirmChartiBerry:
    .string "You want the CHARTI BERRY?$"

IndigoPlateau_Text_ConfirmChilanBerry:
    .string "You want the CHILAN BERRY?$"

IndigoPlateau_Text_ConfirmChopleBerry:
    .string "You want the CHOPLE BERRY?$"

IndigoPlateau_Text_ConfirmCobaBerry:
    .string "You want the COBA BERRY?$"

IndigoPlateau_Text_ConfirmColburBerry:
    .string "You want the COLBUR BERRY?$"

IndigoPlateau_Text_ConfirmHabanBerry:
    .string "You want the HABAN BERRY?$"

IndigoPlateau_Text_ConfirmKasibBerry:
    .string "You want the KASIB BERRY?$"

IndigoPlateau_Text_ConfirmKebiaBerry:
    .string "You want the KEBIA BERRY?$"

IndigoPlateau_Text_ConfirmOccaBerry:
    .string "You want the OCCA BERRY?$"

IndigoPlateau_Text_ConfirmPasshoBerry:
    .string "You want the PASSHO BERRY?$"

IndigoPlateau_Text_ConfirmPayapaBerry:
    .string "You want the PAYAPA BERRY?$"

IndigoPlateau_Text_ConfirmRindoBerry:
    .string "You want the RINDO BERRY?$"

IndigoPlateau_Text_ConfirmRoseliBerry:
    .string "You want the ROSELI BERRY?$"

IndigoPlateau_Text_DarachBye:
    .string "Until next time, then. May you see\n"
    .string "things through to the end.$"




@Caitlin

IndigoPlateau_EventScript_Caitlin::
    lock
    faceplayer
    goto_if_set FLAG_TALKED_E4_CAITLIN, IndigoPlateau_EventScript_CaitlinPostIntro
    msgbox IndigoPlateau_Text_CaitlinIntro, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_TALKED_E4_CAITLIN
    goto IndigoPlateau_EventScript_CaitlinPostIntro
    end

IndigoPlateau_EventScript_CaitlinTryPurchasePrize::
    specialvar VAR_TEMP_1, GetFrontierBattlePoints
    goto_if_ge VAR_TEMP_1, VAR_0x8008, IndigoPlateau_EventScript_CaitlinTryGiveItem
    msgbox IndigoPlateau_Text_CaitlinDontHaveEnoughPoints, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_CaitlinPostIntro
    end

IndigoPlateau_EventScript_CaitlinTryGiveItem::
    checkitemspace VAR_0x8009
    goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
    copyvar VAR_0x8004, VAR_0x8008
    special TakeFrontierBattlePoints
    additem VAR_0x8009
    special UpdateBattlePointsWindow
    playse SE_SHOP
    msgbox IndigoPlateau_Text_CaitlinHereIsYourPrize, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_CaitlinPostIntro
    end

IndigoPlateau_EventScript_CaitlinPostIntro::
    msgbox IndigoPlateau_Text_CaitlinPostIntro, MSGBOX_DEFAULT
    special ShowBattlePointsWindow
    setvar VAR_0x8004, SCROLL_MULTI_E4_ITEMS_CAITLIN
    special ShowFrontierExchangeCornerItemIconWindow
    special ShowScrollableMultichoice
    waitstate
    special CloseFrontierExchangeCornerItemIconWindow
    switch VAR_RESULT
    case 0, IndigoPlateau_EventScript_ShucaBerry
    case 1, IndigoPlateau_EventScript_TangaBerry
    case 2, IndigoPlateau_EventScript_WacanBerry
    case 3, IndigoPlateau_EventScript_YacheBerry
    case 4, IndigoPlateau_EventScript_HeartScale
    case 5, IndigoPlateau_EventScript_ClearAmulet
    case 6, IndigoPlateau_EventScript_AirBalloon
    case 7, IndigoPlateau_EventScript_Snowball
    case 8, IndigoPlateau_EventScript_LuminousMoss
    case 9, IndigoPlateau_EventScript_CellBattery
    case 10, IndigoPlateau_EventScript_AbsorbBulb
    case 11, IndigoPlateau_EventScript_ExpertBelt
    case 12, IndigoPlateau_EventScript_RedCard
    case 13, IndigoPlateau_EventScript_BoosterEnergy
    case 14, IndigoPlateau_EventScript_ExitCaitlin
    case MULTI_B_PRESSED, IndigoPlateau_EventScript_ExitCaitlin
    end

IndigoPlateau_EventScript_ExitCaitlin::
    msgbox IndigoPlateau_Text_CaitlinBye, MSGBOX_DEFAULT
    special CloseBattlePointsWindow
    release
    end

IndigoPlateau_EventScript_ShucaBerry::
    msgbox IndigoPlateau_Text_ConfirmShucaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_TangaBerry::
    msgbox IndigoPlateau_Text_ConfirmTangaBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_WacanBerry::
    msgbox IndigoPlateau_Text_ConfirmWacanBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_YacheBerry::
    msgbox IndigoPlateau_Text_ConfirmYacheBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 1
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_HeartScale::
    msgbox IndigoPlateau_Text_ConfirmHeartScale, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_HEART_SCALE
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_ClearAmulet::
    msgbox IndigoPlateau_Text_ConfirmClearAmulet, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_AirBalloon::
    msgbox IndigoPlateau_Text_ConfirmAirBalloon, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_Snowball::
    msgbox IndigoPlateau_Text_ConfirmSnowball, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_LuminousMoss::
    msgbox IndigoPlateau_Text_ConfirmLuminousMoss, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_CellBattery::
    msgbox IndigoPlateau_Text_ConfirmCellBattery, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_AbsorbBulb::
    msgbox IndigoPlateau_Text_ConfirmAbsorbBulb, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_ExpertBelt::
    msgbox IndigoPlateau_Text_ConfirmExpertBelt, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_RedCard::
    msgbox IndigoPlateau_Text_ConfirmRedCard, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 2
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end

IndigoPlateau_EventScript_BoosterEnergy::
    msgbox IndigoPlateau_Text_ConfirmBoosterEnergy, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_CaitlinPostIntro
    setvar VAR_0x8008, 3
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_CaitlinTryPurchasePrize
    end



IndigoPlateau_Text_CaitlinIntro:
    .string "...\p"
    .string "Hello.\p"
    .string "DARACH said I could watch you battle if\n"
    .string "I came here, so I did.\p"
    .string "Please win, {PLAYER}...\p"
    .string "...$"

IndigoPlateau_Text_CaitlinPostIntro:
    .string "Um...\n"
    .string "Buying something...?$"

IndigoPlateau_Text_CaitlinDontHaveEnoughPoints:
    .string "You don't have enough for that...$"

IndigoPlateau_Text_CaitlinHereIsYourPrize:
    .string "...$"

IndigoPlateau_Text_ConfirmShucaBerry:
    .string "...SHUCA BERRY?$"

IndigoPlateau_Text_ConfirmTangaBerry:
    .string "...TANGA BERRY?$"

IndigoPlateau_Text_ConfirmWacanBerry:
    .string "...WACAN BERRY?$"

IndigoPlateau_Text_ConfirmYacheBerry:
    .string "...YACHE BERRY?$"

IndigoPlateau_Text_ConfirmHeartScale:
    .string "...HEART SCALE?$"

IndigoPlateau_Text_ConfirmClearAmulet:
    .string "...CLEAR AMULET?$"

IndigoPlateau_Text_ConfirmAirBalloon:
    .string "...AIR BALLOON?$"

IndigoPlateau_Text_ConfirmSnowball:
    .string "...SNOWBALL?$"

IndigoPlateau_Text_ConfirmLuminousMoss:
    .string "...LUMINOUS MOSS?$"

IndigoPlateau_Text_ConfirmCellBattery:
    .string "...CELL BATTERY?$"

IndigoPlateau_Text_ConfirmAbsorbBulb:
    .string "...ABSORB BULB?$"

IndigoPlateau_Text_ConfirmExpertBelt:
    .string "...EXPERT BELT?$"

IndigoPlateau_Text_ConfirmRedCard:
    .string "...RED CARD?$"

IndigoPlateau_Text_ConfirmBoosterEnergy:
    .string "...BOOSTER ENERGY?$"

IndigoPlateau_Text_CaitlinBye:
    .string "Okay then... I'll be here...$"



@Lucy

IndigoPlateau_EventScript_Lucy::
    lock
    faceplayer
    goto_if_set FLAG_TALKED_E4_LUCY, IndigoPlateau_EventScript_LucyPostIntro
    msgbox IndigoPlateau_Text_LucyIntro, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_TALKED_E4_LUCY
    goto IndigoPlateau_EventScript_LucyPostIntro
    end

IndigoPlateau_EventScript_LucyTryPurchasePrize::
    specialvar VAR_TEMP_1, GetFrontierBattlePoints
    goto_if_ge VAR_TEMP_1, VAR_0x8008, IndigoPlateau_EventScript_LucyTryGiveItem
    msgbox IndigoPlateau_Text_LucyDontHaveEnoughPoints, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_LucyPostIntro
    end

IndigoPlateau_EventScript_LucyTryGiveItem::
    checkitemspace VAR_0x8009
    goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
    copyvar VAR_0x8004, VAR_0x8008
    special TakeFrontierBattlePoints
    additem VAR_0x8009
    special UpdateBattlePointsWindow
    playse SE_SHOP
    msgbox IndigoPlateau_Text_LucyHereIsYourPrize, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_LucyPostIntro
    end

IndigoPlateau_EventScript_LucyPostIntro::
    msgbox IndigoPlateau_Text_LucyPostIntro, MSGBOX_DEFAULT
    special ShowBattlePointsWindow
    setvar VAR_0x8004, SCROLL_MULTI_E4_ITEMS_LUCY
    special ShowFrontierExchangeCornerItemIconWindow
    special ShowScrollableMultichoice
    waitstate
    special CloseFrontierExchangeCornerItemIconWindow
    switch VAR_RESULT
    case 0, IndigoPlateau_EventScript_IceGem
    case 1, IndigoPlateau_EventScript_FightingGem
    case 2, IndigoPlateau_EventScript_PoisonGem
    case 3, IndigoPlateau_EventScript_GroundGem
    case 4, IndigoPlateau_EventScript_FlyingGem
    case 5, IndigoPlateau_EventScript_PsychicGem
    case 6, IndigoPlateau_EventScript_BugGem
    case 7, IndigoPlateau_EventScript_RockGem
    case 8, IndigoPlateau_EventScript_GhostGem
    case 9, IndigoPlateau_EventScript_DragonGem
    case 10, IndigoPlateau_EventScript_DarkGem
    case 11, IndigoPlateau_EventScript_SteelGem
    case 12, IndigoPlateau_EventScript_NormalGem
    case 13, IndigoPlateau_EventScript_FairyGem
    case 14, IndigoPlateau_EventScript_ExitLucy
    case MULTI_B_PRESSED, IndigoPlateau_EventScript_ExitLucy
    end

IndigoPlateau_EventScript_ExitLucy::
    msgbox IndigoPlateau_Text_LucyBye, MSGBOX_DEFAULT
    special CloseBattlePointsWindow
    release
    end

IndigoPlateau_EventScript_IceGem::
    msgbox IndigoPlateau_Text_ConfirmIceGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_FightingGem::
    msgbox IndigoPlateau_Text_ConfirmFightingGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_PoisonGem::
    msgbox IndigoPlateau_Text_ConfirmPoisonGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_GroundGem::
    msgbox IndigoPlateau_Text_ConfirmGroundGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_FlyingGem::
    msgbox IndigoPlateau_Text_ConfirmFlyingGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_PsychicGem::
    msgbox IndigoPlateau_Text_ConfirmPsychicGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_BugGem::
    msgbox IndigoPlateau_Text_ConfirmBugGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_RockGem::
    msgbox IndigoPlateau_Text_ConfirmRockGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_GhostGem::
    msgbox IndigoPlateau_Text_ConfirmGhostGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_DragonGem::
    msgbox IndigoPlateau_Text_ConfirmDragonGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_DarkGem::
    msgbox IndigoPlateau_Text_ConfirmDarkGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_SteelGem::
    msgbox IndigoPlateau_Text_ConfirmSteelGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_NormalGem::
    msgbox IndigoPlateau_Text_ConfirmNormalGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end

IndigoPlateau_EventScript_FairyGem::
    msgbox IndigoPlateau_Text_ConfirmFairyGem, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_LucyPostIntro
    setvar VAR_0x8008, 5
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_LucyTryPurchasePrize
    end



IndigoPlateau_Text_LucyIntro:
    .string "LUCY: Hmph. Here you are. Not that I'm\n"
    .string "surprised.\p"
    .string "Sorry, but our rematch will have to wait.\n"
    .string "I could beat you right now, but...\p"
    .string "If you beat the ELITE FOUR, and I beat\n"
    .string "you, that makes me the CHAMPION.\p"
    .string "Heh heh...\p"
    .string "Not that I'd struggle to beat LANCE.\p"
    .string "I'd still win if we battled now, just so\n"
    .string "you know.\p"
    .string "Still, I guess I'll let you off for now.\n"
    .string "Lucky you...$"

IndigoPlateau_Text_LucyPostIntro:
    .string "Well? Want something or what?$"

IndigoPlateau_Text_LucyDontHaveEnoughPoints:
    .string "Spent all your points in one place? Hah!$"

IndigoPlateau_Text_LucyHereIsYourPrize:
    .string "Fine then. Take it... Hurry up!$"

IndigoPlateau_Text_ConfirmIceGem:
    .string "The ICE GEM. You sure?$"

IndigoPlateau_Text_ConfirmFightingGem:
    .string "The FIGHTING GEM. You sure?$"

IndigoPlateau_Text_ConfirmPoisonGem:
    .string "The POISON GEM. You sure?$"

IndigoPlateau_Text_ConfirmGroundGem:
    .string "The GROUND GEM. You sure?$"

IndigoPlateau_Text_ConfirmFlyingGem:
    .string "The FLYING GEM. You sure?$"

IndigoPlateau_Text_ConfirmPsychicGem:
    .string "The PSYCHIC GEM. You sure?$"

IndigoPlateau_Text_ConfirmBugGem:
    .string "The BUG GEM. You sure?$"

IndigoPlateau_Text_ConfirmRockGem:
    .string "The ROCK GEM. You sure?$"

IndigoPlateau_Text_ConfirmGhostGem:
    .string "The GHOST GEM. You sure?$"

IndigoPlateau_Text_ConfirmDragonGem:
    .string "The DRAGON GEM. You sure?$"

IndigoPlateau_Text_ConfirmDarkGem:
    .string "The DARK GEM. You sure?$"

IndigoPlateau_Text_ConfirmSteelGem:
    .string "The STEEL GEM. You sure?$"

IndigoPlateau_Text_ConfirmNormalGem:
    .string "The NORMAL GEM. You sure?$"

IndigoPlateau_Text_ConfirmFairyGem:
    .string "The FAIRY GEM. You sure?$"

IndigoPlateau_Text_LucyBye:
    .string "Go, then. Don't forget, I'll be waiting\n"
    .string "for my rematch... Don't you dare lose.$"




@Thorton

IndigoPlateau_EventScript_Thorton::
    lock
    faceplayer
    goto_if_set FLAG_TALKED_E4_THORTON, IndigoPlateau_EventScript_ThortonPostIntro
    msgbox IndigoPlateau_Text_ThortonIntro, MSGBOX_DEFAULT
    closemessage
    setflag FLAG_TALKED_E4_THORTON
    goto IndigoPlateau_EventScript_ThortonPostIntro
    end

IndigoPlateau_EventScript_ThortonTryPurchasePrize::
    specialvar VAR_TEMP_1, GetFrontierBattlePoints
    goto_if_ge VAR_TEMP_1, VAR_0x8008, IndigoPlateau_EventScript_ThortonTryGiveItem
    msgbox IndigoPlateau_Text_ThortonDontHaveEnoughPoints, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_ThortonPostIntro
    end

IndigoPlateau_EventScript_ThortonTryGiveItem::
    checkitemspace VAR_0x8009
    goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
    copyvar VAR_0x8004, VAR_0x8008
    special TakeFrontierBattlePoints
    additem VAR_0x8009
    special UpdateBattlePointsWindow
    playse SE_SHOP
    msgbox IndigoPlateau_Text_ThortonHereIsYourPrize, MSGBOX_DEFAULT
    goto IndigoPlateau_EventScript_ThortonPostIntro
    end

IndigoPlateau_EventScript_ThortonPostIntro::
    msgbox IndigoPlateau_Text_ThortonPostIntro, MSGBOX_DEFAULT
    special ShowBattlePointsWindow
    setvar VAR_0x8004, SCROLL_MULTI_E4_ITEMS_THORTON
    special ShowFrontierExchangeCornerItemIconWindow
    special ShowScrollableMultichoice
    waitstate
    special CloseFrontierExchangeCornerItemIconWindow
    switch VAR_RESULT
    case 0, IndigoPlateau_EventScript_CustapBerry
    case 1, IndigoPlateau_EventScript_CovertCloak
    case 2, IndigoPlateau_EventScript_ThroatSpray
    case 3, IndigoPlateau_EventScript_FocusSash
    case 4, IndigoPlateau_EventScript_EjectPack
    case 5, IndigoPlateau_EventScript_EjectButton
    case 6, IndigoPlateau_EventScript_AssaultVest
    case 7, IndigoPlateau_EventScript_LifeOrb
    case 8, IndigoPlateau_EventScript_WeaknessPolicy
    case 9, IndigoPlateau_EventScript_ChoiceScarf
    case 10, IndigoPlateau_EventScript_ChoiceSpecs
    case 11, IndigoPlateau_EventScript_ChoiceBand
    case 12, IndigoPlateau_EventScript_ExitThorton
    case MULTI_B_PRESSED, IndigoPlateau_EventScript_ExitThorton
    end

IndigoPlateau_EventScript_ExitThorton::
    msgbox IndigoPlateau_Text_ThortonBye, MSGBOX_DEFAULT
    special CloseBattlePointsWindow
    release
    end

IndigoPlateau_EventScript_CustapBerry::
    msgbox IndigoPlateau_Text_ConfirmCustapBerry, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 6
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_CovertCloak::
    msgbox IndigoPlateau_Text_ConfirmCovertCloak, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 6
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_ThroatSpray::
    msgbox IndigoPlateau_Text_ConfirmThroatSpray, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 6
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_FocusSash::
    msgbox IndigoPlateau_Text_ConfirmFocusSash, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 7
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_EjectPack::
    msgbox IndigoPlateau_Text_ConfirmEjectPack, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 7
    setvar VAR_0x8009, ITEM_HEART_SCALE
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_EjectButton::
    msgbox IndigoPlateau_Text_ConfirmEjectButton, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 7
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_AssaultVest::
    msgbox IndigoPlateau_Text_ConfirmAssaultVest, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 10
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_LifeOrb::
    msgbox IndigoPlateau_Text_ConfirmLifeOrb, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 10
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_WeaknessPolicy::
    msgbox IndigoPlateau_Text_ConfirmWeaknessPolicy, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 10
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_ChoiceScarf::
    msgbox IndigoPlateau_Text_ConfirmChoiceScarf, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 16
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_ChoiceSpecs::
    msgbox IndigoPlateau_Text_ConfirmChoiceSpecs, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 16
    setvar VAR_0x8009, ITEM_ORAN_BERRY
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end

IndigoPlateau_EventScript_ChoiceBand::
    msgbox IndigoPlateau_Text_ConfirmChoiceBand, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_ThortonPostIntro
    setvar VAR_0x8008, 16
    setvar VAR_0x8009, ITEM_CHOICE_BAND
    goto IndigoPlateau_EventScript_ThortonTryPurchasePrize
    end



IndigoPlateau_Text_ThortonIntro:
    .string "THORTON: Aaaaaaaaaand now!\p"
    .string "My data predicted you'd talk to me at\n"
    .string "precisely this moment, {PLAYER}.\p"
    .string "I'll bet you've already decided on what\n"
    .string "team you're bringing to challenge the\l"
    .string "POKéMON LEAGUE, haven't you?\p"
    .string "Personally, I've already analysed all of\n"
    .string "their weaknesses.\p"
    .string "It's not very interesting when the\n"
    .string "enemy is so full of holes that you can\l"
    .string "bring whatever you'd like, is it?\p"
    .string "I'm sure you've found the same thing.\p"
    .string "Well, don't worry. You can continue\n"
    .string "helping me in my testing once you're\l"
    .string "crowned the CHAMPION.$"

IndigoPlateau_Text_ThortonPostIntro:
    .string "Tell me then, {PLAYER}. Which of these\n"
    .string "items do you plan on bringing?$"

IndigoPlateau_Text_ThortonDontHaveEnoughPoints:
    .string "Hm? Your calculations are off for once.\n"
    .string "You need more points for that.$"

IndigoPlateau_Text_ThortonHereIsYourPrize:
    .string "Yup, I knew it. I would've picked this\n"
    .string "too.$"

IndigoPlateau_Text_ConfirmCustapBerry:
    .string "Curious! The CUSTAP BERRY, is it?$"

IndigoPlateau_Text_ConfirmCovertCloak:
    .string "Curious! The COVERT CLOAK, is it?$"

IndigoPlateau_Text_ConfirmThroatSpray:
    .string "Curious! The THROAT SPRAY, is it?$"

IndigoPlateau_Text_ConfirmFocusSash:
    .string "Curious! The FOCUS SASH, is it?$"

IndigoPlateau_Text_ConfirmEjectPack:
    .string "Curious! The EJECT PACK, is it?$"

IndigoPlateau_Text_ConfirmEjectButton:
    .string "Curious! The EJECT BUTTON, is it?$"

IndigoPlateau_Text_ConfirmAssaultVest:
    .string "Curious! The ASSAULT VEST, is it?$"

IndigoPlateau_Text_ConfirmLifeOrb:
    .string "Curious! The LIFE ORB, is it?$"

IndigoPlateau_Text_ConfirmWeaknessPolicy:
    .string "Curious! The WEAKNESS POLICY, is it?$"

IndigoPlateau_Text_ConfirmChoiceScarf:
    .string "Curious! The CHOICE SCARF, is it?$"

IndigoPlateau_Text_ConfirmChoiceSpecs:
    .string "Curious! The CHOICE SPECS, is it?$"

IndigoPlateau_Text_ConfirmChoiceBand:
    .string "Curious! The CHOICE BAND, is it?$"

IndigoPlateau_Text_ThortonBye:
    .string "Seems like you're all set. If you want to\n"
    .string "discuss strategy though, let me know.$"











IndigoPlateau_EventScript_Test123::
	lock
	faceplayer
	msgbox Test123_Text_DescGoHere, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_MULTI_TEST123
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, IndigoPlateau_EventScript_Test123Leftovers
	case 1, IndigoPlateau_EventScript_Test123Goodbye
	case MULTI_B_PRESSED, IndigoPlateau_EventScript_Test123Goodbye
	end

IndigoPlateau_EventScript_Test123Leftovers::
	msgbox Test123_Text_LeftoversCheck, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, IndigoPlateau_EventScript_Test123
	setvar VAR_0x8008, 5
	setvar VAR_0x8009, ITEM_LEFTOVERS
	goto Test123_EventScript_TryPurchasePrize
	end

Test123_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, Test123_EventScript_TryGiveItem
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto IndigoPlateau_EventScript_Test123
	end


Test123_EventScript_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox Test123_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto IndigoPlateau_EventScript_Test123
	end

IndigoPlateau_EventScript_Test123Goodbye::
	msgbox Test123_Text_Exit, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	closemessage
	release
	end

Test123_Text_Exit:
	.string "Bye$"

Test123_Text_DescGoHere:
	.string "Hi$"

Test123_Text_HereIsYourPrize:
	.string "Ok have this$"

Test123_Text_LeftoversCheck:
	.string "You want the LEFTOVERS,\n"
	.string "Yeah? TEST123$"















@ItemDescriptions 

IndigoPlateau_Text_OranBerryDesc::
	.string "A hold item that restores 10 HP in\n"
	.string "battle.$"

@Darach

IndigoPlateau_Text_BabiriBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Steel-type attack.$"

IndigoPlateau_Text_ChartiBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Rock-type attack.$"

IndigoPlateau_Text_ChilanBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "Normal-type attack.$"

IndigoPlateau_Text_ChopleBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Fighting-type attack.$"

IndigoPlateau_Text_CobaBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Flying-type attack.$"

IndigoPlateau_Text_ColburBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Dark-type attack.$"

IndigoPlateau_Text_HabanBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Dragon-type attack.$"

IndigoPlateau_Text_KasibBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Ghost-type attack.$"

IndigoPlateau_Text_KebiaBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Poison-type attack.$"

IndigoPlateau_Text_OccaBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Fire-type attack.$"

IndigoPlateau_Text_PasshoBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Water-type attack.$"

IndigoPlateau_Text_PayapaBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Psychic-type attack.$"

IndigoPlateau_Text_RindoBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Grass-type attack.$"

IndigoPlateau_Text_RoseliBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Fairy-type attack.$"


@Caitlin

IndigoPlateau_Text_ShucaBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Ground-type attack.$"

IndigoPlateau_Text_TangaBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Bug-type attack.$"

IndigoPlateau_Text_WacanBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Electric-type attack.$"

IndigoPlateau_Text_YacheBerryDesc::
	.string "If held by a Pokémon, it weakens a foe's\n"
	.string "supereffective Ice-type attack.$"

IndigoPlateau_Text_HeartScaleDesc::
	.string "A lovely scale. It is coveted by\n"
	.string "collectors.$"

IndigoPlateau_Text_ClearAmuletDesc::
	.string "An item that protects the holder from\n"
	.string "having its stats lowered by others.$"

IndigoPlateau_Text_AirBalloonDesc::
	.string "Makes the holder float in the air.\n"
	.string "It bursts if the holder is attacked.$"
	
IndigoPlateau_Text_SnowballDesc::
	.string "Boosts the holder's ATTACK when hit by\n"
	.string "an Ice-type move.$"

IndigoPlateau_Text_LuminousMossDesc::
	.string "Boosts the holder's SP. DEF when hit by\n"
	.string "a Water-type move.$"

IndigoPlateau_Text_CellBatteryDesc::
	.string "Boosts the holder's ATTACK when hit by\n"
	.string "an Electric-type move.$"

IndigoPlateau_Text_AbsorbBulbDesc::
	.string "Boosts the holder's SP. ATK when hit by\n"
	.string "a Water-type move.$"

IndigoPlateau_Text_ExpertBeltDesc::
	.string "Boosts the damage of the holder's\n"
	.string "supereffective moves by 20%.$"

IndigoPlateau_Text_RedCardDesc::
	.string "If holder doesn't faint, switches out\n"
	.string "enemy Pokémon after taking an attack.$"

IndigoPlateau_Text_BoosterEnergyDesc::
	.string "Activates either of Protosynthesis\n"
	.string "or Quark Drive. Consumed on use.$"



@Dahlia

IndigoPlateau_Text_ApicotBerryDesc::
	.string "A hold item that raises SP. DEF in a\n"
	.string "pinch.$"

IndigoPlateau_Text_GanlonBerryDesc::
	.string "A hold item that raises DEFENCE in a\n"
	.string "pinch.$"

IndigoPlateau_Text_LiechiBerryDesc::
	.string "A hold item that raises ATTACK in a\n"
	.string "pinch.$"

IndigoPlateau_Text_PetayaBerryDesc::
	.string "A hold item that raises SP. ATK in a\n"
	.string "pinch.$"

IndigoPlateau_Text_SalacBerryDesc::
	.string "A hold item that raises SPEED in a\n"
	.string "pinch.$"

IndigoPlateau_Text_JabocaBerryDesc::
	.string "When holder is hit by a physical attack,\n"
	.string "the attacker loses 1/8th of its max HP.$"

IndigoPlateau_Text_RowapBerryDesc::
	.string "When holder is hit by a special attack,\n"
	.string "the attacker loses 1/8th of its max HP.$"

IndigoPlateau_Text_RockyHelmetDesc::
	.string "When hit by a physical contact attack,\n"
	.string "the attacker loses 1/6th of its max HP.$"

IndigoPlateau_Text_LeftoversDesc::
	.string "Heals holder for 1/16th max HP\n"
	.string "on turn end.$"

IndigoPlateau_Text_BlackSludgeDesc::
	.string "Heals Poison-types for 1/16th max HP\n"
	.string "on turn end. Damages others for 1/8th.$"

IndigoPlateau_Text_FireGemDesc::
	.string "Increases power of the first Fire-type\n"
	.string "move by 50%. Consumed on use.$"

IndigoPlateau_Text_WaterGemDesc::
	.string "Increases power of the first Water-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_ElectricGemDesc::
	.string "Increases power of the first Electric-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_GrassGemDesc::
	.string "Increases power of the first Grass-\n"
	.string "type move by 50%. Consumed on use.$"


@Lucy

IndigoPlateau_Text_IceGemDesc::
	.string "Increases power of the first Ice-type\n"
	.string "move by 50%. Consumed on use.$"

IndigoPlateau_Text_FightingGemDesc::
	.string "Increases power of the first Fighting-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_PoisonGemDesc::
	.string "Increases power of the first Poison-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_GroundGemDesc::
	.string "Increases power of the first Ground-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_FlyingGemDesc::
	.string "Increases power of the first Flying-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_PsychicGemDesc::
	.string "Increases power of the first Psychic-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_BugGemDesc::
	.string "Increases power of the first Bug-type\n"
	.string "move by 50%. Consumed on use.$"

IndigoPlateau_Text_RockGemDesc::
	.string "Increases power of the first Rock-type\n"
	.string "move by 50%. Consumed on use.$"

IndigoPlateau_Text_GhostGemDesc::
	.string "Increases power of the first Ghost-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_DragonGemDesc::
	.string "Increases power of the first Dragon-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_DarkGemDesc::
	.string "Increases power of the first Dark-type\n"
	.string "move by 50%. Consumed on use.$"

IndigoPlateau_Text_SteelGemDesc::
	.string "Increases power of the first Steel-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_NormalGemDesc::
	.string "Increases power of the first Normal-\n"
	.string "type move by 50%. Consumed on use.$"

IndigoPlateau_Text_FairyGemDesc::
	.string "Increases power of the first Fairy-\n"
	.string "type move by 50%. Consumed on use.$"




@Thorton

IndigoPlateau_Text_CustapBerryDesc::
	.string "Allows the holder to move first in its\n"
	.string "priority bracket when HP is below 1/4.$"

IndigoPlateau_Text_CovertCloakDesc::
	.string "Protects holder from the additional\n"
	.string "effects of damaging moves.$"

IndigoPlateau_Text_ThroatSprayDesc::
	.string "Boosts SP. ATK by one stage after using\n"
	.string "a sound-based move.$"

IndigoPlateau_Text_FocusSashDesc::
	.string "If hit at full HP, allows the holder to\n"
	.string "survive with 1HP.$"

IndigoPlateau_Text_EjectPackDesc::
	.string "Allows the holder to switch out if one\n"
	.string "of its stats are lowered.$"

IndigoPlateau_Text_EjectButtonDesc::
	.string "If holder doesn't faint, allows it to\n"
	.string "switch out after being hit.$"

IndigoPlateau_Text_AssaultVestDesc::
	.string "Raises SP. DEF by 50%, but prevents the\n"
	.string "holder from selecting status moves.$"

IndigoPlateau_Text_LifeOrbDesc::
	.string "Boosts the holder's damage, but also\n"
	.string "damages holder after damaging moves.$"

IndigoPlateau_Text_WeaknessPolicyDesc::
	.string "If hit by a supereffective attack,\n"
	.string "doubles ATTACK and SP. ATK.$"

IndigoPlateau_Text_ChoiceScarfDesc::
	.string "Boosts SPEED by 50%, but only allows\n"
	.string "the use of the first move selected.$"

IndigoPlateau_Text_ChoiceSpecsDesc::
	.string "Boosts SP. ATK by 50%, but only allows\n"
	.string "the use of the first move selected.$"

IndigoPlateau_Text_ChoiceBandDesc::
	.string "Boosts ATTACK by 50%, but only allows\n"
	.string "the use of the first move selected.$"










BattleFrontier_ExchangeServiceCorner2_EventScript_ClerkWelcome::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return

BattleFrontier_ExchangeServiceCorner2_EventScript_ClerkGoodbye::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
	call BattleFrontier_ExchangeServiceCorner2_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner2_EventScript_Leftovers
	case 1, BattleFrontier_ExchangeServiceCorner2_EventScript_WhiteHerb
	case 2, BattleFrontier_ExchangeServiceCorner2_EventScript_QuickClaw
	case 3, BattleFrontier_ExchangeServiceCorner2_EventScript_MentalHerb
	case 4, BattleFrontier_ExchangeServiceCorner2_EventScript_Brightpowder
	case 5, BattleFrontier_ExchangeServiceCorner2_EventScript_ChoiceBand
	case 6, BattleFrontier_ExchangeServiceCorner2_EventScript_KingsRock
	case 7, BattleFrontier_ExchangeServiceCorner2_EventScript_FocusBand
	case 8, BattleFrontier_ExchangeServiceCorner2_EventScript_ScopeLens
	case 9, BattleFrontier_ExchangeServiceCorner2_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner2_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_Leftovers::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmLeftovers, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_LEFTOVERS
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_WhiteHerb::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmWhiteHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_WHITE_HERB
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_QuickClaw::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmQuickClaw, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_MentalHerb::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmMentalHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_MENTAL_HERB
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_Brightpowder::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmBrightpowder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_ChoiceBand::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmChoiceBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_CHOICE_BAND
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_KingsRock::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmKingsRock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_FocusBand::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmFocusBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_FOCUS_BAND
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_ScopeLens::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_ConfirmScopeLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner2_EventScript_TryGivePrize
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_TryGivePrize::
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_TryGiveItem
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto BattleFrontier_ExchangeServiceCorner2_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner2_EventScript_BagFull::
	msgbox BattleFrontier_ExchangeServiceCorner2_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner2_Text_WelcomePleaseChoosePrize:
	.string "Hello, this is the EXCHANGE SERVICE\n"
	.string "CORNER.\p"
	.string "We exchange the Battle Points you\n"
	.string "have collected for lovely prizes.\p"
	.string "Please choose a prize from this list.$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmBrightpowder:
	.string "You've chosen the BRIGHTPOWDER.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmWhiteHerb:
	.string "You've chosen the WHITE HERB.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmQuickClaw:
	.string "You've chosen the QUICK CLAW.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmMentalHerb:
	.string "You've chosen the MENTAL HERB.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmChoiceBand:
	.string "You've chosen the CHOICE BAND.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmKingsRock:
	.string "You've chosen the KING'S ROCK.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmFocusBand:
	.string "You've chosen the FOCUS BAND.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmScopeLens:
	.string "You've chosen the SCOPE LENS.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_ConfirmLeftovers:
	.string "You've chosen the LEFTOVERS.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner2_Text_WellSendItToPC:
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

BattleFrontier_ExchangeServiceCorner2_Text_HereIsYourPrize:
	.string "Here is your prize!$"

BattleFrontier_ExchangeServiceCorner2_Text_DontHaveEnoughPoints:
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

BattleFrontier_ExchangeServiceCorner2_Text_PCIsFull:
	.string "I'm so sorry…\n"
	.string "Your PC appears to be full…$"

BattleFrontier_ExchangeServiceCorner2_Text_DontHaveSpaceToHoldIt:
	.string "I'm so sorry…\n"
	.string "You don't have space to hold it…$"

BattleFrontier_ExchangeServiceCorner2_Text_ThankYouVisitWithPoints:
	.string "Thank you very much.\p"
	.string "Please visit us when you have\n"
	.string "saved up Battle Points.$"

@OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	@applymovement LOCALID_FOLLOWER, Common_Movement_Enter_Pokeball
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
