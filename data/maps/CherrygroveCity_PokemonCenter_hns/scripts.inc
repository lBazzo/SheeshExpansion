.set LOCALID_NURSE, 1

CherrygroveCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherryGrove_Pokecenter_OnTransition
	.byte 0

CherryGrove_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

CherryGrove_Pokecenter_EventScript_Fisher::
	lock
	faceplayer
	msgbox CherryGrove_Pokecenter_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox CherryGrove_Pokecenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_Lass::
	lock
	faceplayer
	msgbox CherryGrove_Pokecenter_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Chansey::
	lock
	faceplayer
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox CherryGrove_Pokecenter_Text_Chansey, MSGBOX_DEFAULT
	delay 40
	waitmoncry
	closemessage
	end

CherrygroveCity_PokemonCenter_EventScript_Nurse::
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_Enter_Pokeball
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CherryGrove_Pokecenter_Text_Fisher:
	.string "It's great. I can store any number\n"
	.string "of Pokémon, and it's all free.$"

CherryGrove_Pokecenter_Text_Gentleman:
	.string "That PC is free for any\n"
	.string "trainer to use.$"

CherryGrove_Pokecenter_Text_Lass:
	.string "They say a watched pot never\n"
	.string "boils. But watching the clock\l"
	.string "in the Pokécenter makes time fly!$"

CherryGrove_Pokecenter_Text_Chansey:
	.string "Chansey: Chaan! Sii!$"






CherryGrove_Pokecenter_EventScript_ScaleAttendant::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_SCALE_ATTENDANT, CherryGrove_Pokecenter_EventScript_ScaleAttendantPostIntro
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIntro, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TALKED_SCALE_ATTENDANT
	goto CherryGrove_Pokecenter_EventScript_ScaleAttendantPostIntro
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPostIntro::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantPostIntro, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_SCALE_ATTENDANT
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeNickname
	case 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantPreStatus
	case 2, CherryGrove_Pokecenter_EventScript_ScaleAttendantForgetMove
	case 3, CherryGrove_Pokecenter_EventScript_ScaleAttendantRelearnMove
	case 4, CherryGrove_Pokecenter_EventScript_ScaleAttendantAdjustIVLower
	case 5, CherryGrove_Pokecenter_EventScript_ScaleAttendantAdjustIVHigher
	case 6, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchaseTwoOrThreeCostMint
	case 7, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchaseFourCostMint
	case 8, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

@CHANGE NICKNAME PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeNickname::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantChangeNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lock
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantAttemptToChangeNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantDeclineToChangeNickname
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantDeclineToChangeNickname::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantDeclineToChangeNickname, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantAttemptToChangeNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, CherryGrove_Pokecenter_EventScript_ScaleAttendantCantNicknameEgg
	special BufferMonNickname
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantChangeThisName, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmedChangeNickname
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantDeclineToChangeNickname
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantCantNicknameEgg::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantCantNicknameEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmedChangeNickname::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantLetsChangeName, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	special BufferMonNickname
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantNameHasBeenChanged, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantIntro::
    .string "Oh, you...\p"
	.string "I don't recognise you.\n"
	.string "Are you a new trainer by any chance?\p"
	.string "My fellow attendants and I can provide\n"
	.string "you with a number of services to aid\l"
	.string "you in your travels.\p"
	.string "Some of these we are happy to do for\n"
	.string "free, while others will require\l"
	.string "exchanging some Heart Scales.\p"
	.string "Heart Scales can be hard to come by\n"
	.string "these days, so be sure to think\l"
	.string "carefully before you spend them.\p"
	.string "If you need any more information, don't\n"
	.string "be afraid to ask. You can find us in any\l"
	.string "Pokémon Center.$"

CherryGrove_Pokecenter_Text_ScaleAttendantPostIntro::
    .string "So, how may I help you today, {PLAYER}?$"

CherryGrove_Pokecenter_Text_ScaleAttendantChangeNickname::
    .string "You want to change a nickname? Which\n"
	.string "Pokémon's nickname needs changing?$"

CherryGrove_Pokecenter_Text_ScaleAttendantDeclineToChangeNickname::	
	.string "That's perfectly fine. I think your\n"
	.string "Pokémon's current name suits it too.$"

CherryGrove_Pokecenter_Text_ScaleAttendantChangeThisName::
	.string "Its current name is {STR_VAR_1}.\n"	
	.string "Would you like to give it a new name?$"	

CherryGrove_Pokecenter_Text_ScaleAttendantLetsChangeName::
	.string "I see. And what would you like its new\n"
	.string "name to be?$"

CherryGrove_Pokecenter_Text_ScaleAttendantNameHasBeenChanged::
	.string "Splendid. Then it shall be done. Your\n"	
	.string "Pokémon's new name is {STR_VAR_1}.$"

CherryGrove_Pokecenter_Text_ScaleAttendantCantNicknameEgg::
	.string "Oh, dear me. I'm afraid that an EGG\n"
	.string "cannot have a nickname.$"








@PRESTATUS PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantPreStatus::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantApplyWhatStatus, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_SCALE_ATTENDANT_APPLY_STATUS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyPoison
	case 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyToxic
	case 2, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyParalysis
	case 3, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplySleep
	case 4, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyBurn
	case 5, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyFreeze
	case 6, CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyFrostbite
	case 7, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyPoison::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckPoisonIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_POISON, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyToxic::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckPoisonIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_TOXIC_POISON, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyParalysis::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckParalysisIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplySleep::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckSleepIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_SLEEP, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyBurn::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckBurnIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_BURN, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyFreeze::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckFreezeIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_FREEZE, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantApplyFrostbite::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	special CheckFreezeIsLegal
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied, MSGBOX_DEFAULT
	closemessage
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantCouldntApplyStatus::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantCouldntApplyStatus, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantApplyWhatStatus::
	.string "Which status effect would you like me\n"
	.string "to apply to your Pokémon?$"

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused::
	.string "I see. And which Pokémon would you like\n"
	.string "me to apply said status to?$"

CherryGrove_Pokecenter_Text_ScaleAttendantStatusHasBeenApplied::
	.string "Splendid. Then it shall be done. The\n"
	.string "status you requested has been applied.$"

CherryGrove_Pokecenter_Text_ScaleAttendantCouldntApplyStatus::
	.string "Oh, dear me. I'm afraid I cannot apply\n"
	.string "that status.$"








@DELETE MOVE PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantForgetMove::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantMonOnlyKnowsOneMove
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, CherryGrove_Pokecenter_EventScript_ScaleAttendantForgetMove
	special BufferMoveDeleterNicknameAndMove
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantMonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantTryForgetMove
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantForgetMoves::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantEggCantForgetMoves, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantMonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantMonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantTryForgetMove::
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantMonHasForgottenMove, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldForget::
	.string "Which Pokémon would you like forget\n"
	.string "a move?$"

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMoveShouldBeForgotten::
	.string "I see. And which move would you have\n"
	.string "them forget?$"

CherryGrove_Pokecenter_Text_ScaleAttendantMonsMoveShouldBeForgotten::
	.string "I see. So, {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"

CherryGrove_Pokecenter_Text_ScaleAttendantMonHasForgottenMove::
	.string "Splendid. Then it shall be done.\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"

CherryGrove_Pokecenter_Text_ScaleAttendantEggCantForgetMoves::
	.string "Oh, dear me. I'm afraid that an Egg\n"
	.string "cannot delete any moves.$"

CherryGrove_Pokecenter_Text_ScaleAttendantMonOnlyKnowsOneMove::
	.string "Sorry. {STR_VAR_1} knows only one\n"
	.string "move, so it can't be forgotten…$"









@RELEARN MOVE PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantRelearnMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantComeBackWithHeartScale
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantChooseRelearnMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE,  CherryGrove_Pokecenter_EventScript_ScaleAttendantCantTeachEgg
	goto_if_eq VAR_0x8005, 0,  CherryGrove_Pokecenter_EventScript_ScaleAttendantNoMoveToTeachMon
	goto CherryGrove_Pokecenter_EventScript_ScaleAttendantChooseMove
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChooseMove::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantTeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantRelearnMove
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantNoMoveToTeachMon::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantDontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantComeBackWithHeartScale::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantComeBackWithHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantCantTeachEgg::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantCantTeachEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantChooseRelearnMon::
	.string "Which Pokémon would you like to teach a\n"
	.string "move to?$"

CherryGrove_Pokecenter_Text_ScaleAttendantTeachWhichMove::
	.string "I see. And which move would you like\n"
	.string "your Pokémon to learn?$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale::
	.string "{PLAYER} handed over one Heart Scale\n"
	.string "in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantDontHaveMoveToTeachPokemon::
	.string "Oh, dear me. I'm afraid that Pokémon has\n"
	.string "no old moves that it can learn.$"

CherryGrove_Pokecenter_Text_ScaleAttendantComeBackWithHeartScale::
	.string "Oh, dear me. I'm afraid that you need a\n"
	.string "Heart Scale to teach a move.$"

CherryGrove_Pokecenter_Text_ScaleAttendantCantTeachEgg::
	.string "Oh, dear me. I'm afraid that an Egg\n"
	.string "cannot learn any moves.$"



@ADJUST IV 0-18 PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantAdjustIVLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantAdjustIVLowerConfirmIVRange, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantTryAdjustIVLower
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantTryAdjustIVLower::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantComeBackWithHeartScale
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichIVShouldBeAdjusted, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_SCALE_ATTENDANT_ADJUST_IVS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeHPIVsLower
	case 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeAttackIVsLower
	case 2, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeDefenseIVsLower
	case 3, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialAttackIVsLower
	case 4, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialDefenseIVsLower
	case 5, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpeedIVsLower
	case 6, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeHPIVsLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_0, 0
	dynmultipush CherryGrove_Pokecenter_Text_1, 1
	dynmultipush CherryGrove_Pokecenter_Text_2, 2
	dynmultipush CherryGrove_Pokecenter_Text_3, 3
	dynmultipush CherryGrove_Pokecenter_Text_4, 4
	dynmultipush CherryGrove_Pokecenter_Text_5, 5
	dynmultipush CherryGrove_Pokecenter_Text_6, 6
	dynmultipush CherryGrove_Pokecenter_Text_7, 7
	dynmultipush CherryGrove_Pokecenter_Text_8, 8
	dynmultipush CherryGrove_Pokecenter_Text_9, 9
	dynmultipush CherryGrove_Pokecenter_Text_10, 10
	dynmultipush CherryGrove_Pokecenter_Text_11, 11
	dynmultipush CherryGrove_Pokecenter_Text_12, 12
	dynmultipush CherryGrove_Pokecenter_Text_13, 13
	dynmultipush CherryGrove_Pokecenter_Text_14, 14
	dynmultipush CherryGrove_Pokecenter_Text_15, 15
	dynmultipush CherryGrove_Pokecenter_Text_16, 16
	dynmultipush CherryGrove_Pokecenter_Text_17, 17
	dynmultipush CherryGrove_Pokecenter_Text_18, 18
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberLower
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmHPIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonHPIV
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeAttackIVsLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_0, 0
	dynmultipush CherryGrove_Pokecenter_Text_1, 1
	dynmultipush CherryGrove_Pokecenter_Text_2, 2
	dynmultipush CherryGrove_Pokecenter_Text_3, 3
	dynmultipush CherryGrove_Pokecenter_Text_4, 4
	dynmultipush CherryGrove_Pokecenter_Text_5, 5
	dynmultipush CherryGrove_Pokecenter_Text_6, 6
	dynmultipush CherryGrove_Pokecenter_Text_7, 7
	dynmultipush CherryGrove_Pokecenter_Text_8, 8
	dynmultipush CherryGrove_Pokecenter_Text_9, 9
	dynmultipush CherryGrove_Pokecenter_Text_10, 10
	dynmultipush CherryGrove_Pokecenter_Text_11, 11
	dynmultipush CherryGrove_Pokecenter_Text_12, 12
	dynmultipush CherryGrove_Pokecenter_Text_13, 13
	dynmultipush CherryGrove_Pokecenter_Text_14, 14
	dynmultipush CherryGrove_Pokecenter_Text_15, 15
	dynmultipush CherryGrove_Pokecenter_Text_16, 16
	dynmultipush CherryGrove_Pokecenter_Text_17, 17
	dynmultipush CherryGrove_Pokecenter_Text_18, 18
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberLower
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmAttackIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonAttackIV
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeDefenseIVsLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_0, 0
	dynmultipush CherryGrove_Pokecenter_Text_1, 1
	dynmultipush CherryGrove_Pokecenter_Text_2, 2
	dynmultipush CherryGrove_Pokecenter_Text_3, 3
	dynmultipush CherryGrove_Pokecenter_Text_4, 4
	dynmultipush CherryGrove_Pokecenter_Text_5, 5
	dynmultipush CherryGrove_Pokecenter_Text_6, 6
	dynmultipush CherryGrove_Pokecenter_Text_7, 7
	dynmultipush CherryGrove_Pokecenter_Text_8, 8
	dynmultipush CherryGrove_Pokecenter_Text_9, 9
	dynmultipush CherryGrove_Pokecenter_Text_10, 10
	dynmultipush CherryGrove_Pokecenter_Text_11, 11
	dynmultipush CherryGrove_Pokecenter_Text_12, 12
	dynmultipush CherryGrove_Pokecenter_Text_13, 13
	dynmultipush CherryGrove_Pokecenter_Text_14, 14
	dynmultipush CherryGrove_Pokecenter_Text_15, 15
	dynmultipush CherryGrove_Pokecenter_Text_16, 16
	dynmultipush CherryGrove_Pokecenter_Text_17, 17
	dynmultipush CherryGrove_Pokecenter_Text_18, 18
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberLower
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmDefenseIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonDefenseIV
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialAttackIVsLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_0, 0
	dynmultipush CherryGrove_Pokecenter_Text_1, 1
	dynmultipush CherryGrove_Pokecenter_Text_2, 2
	dynmultipush CherryGrove_Pokecenter_Text_3, 3
	dynmultipush CherryGrove_Pokecenter_Text_4, 4
	dynmultipush CherryGrove_Pokecenter_Text_5, 5
	dynmultipush CherryGrove_Pokecenter_Text_6, 6
	dynmultipush CherryGrove_Pokecenter_Text_7, 7
	dynmultipush CherryGrove_Pokecenter_Text_8, 8
	dynmultipush CherryGrove_Pokecenter_Text_9, 9
	dynmultipush CherryGrove_Pokecenter_Text_10, 10
	dynmultipush CherryGrove_Pokecenter_Text_11, 11
	dynmultipush CherryGrove_Pokecenter_Text_12, 12
	dynmultipush CherryGrove_Pokecenter_Text_13, 13
	dynmultipush CherryGrove_Pokecenter_Text_14, 14
	dynmultipush CherryGrove_Pokecenter_Text_15, 15
	dynmultipush CherryGrove_Pokecenter_Text_16, 16
	dynmultipush CherryGrove_Pokecenter_Text_17, 17
	dynmultipush CherryGrove_Pokecenter_Text_18, 18
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberLower
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpecialAttackIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonSpecialAttackIV
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialDefenseIVsLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_0, 0
	dynmultipush CherryGrove_Pokecenter_Text_1, 1
	dynmultipush CherryGrove_Pokecenter_Text_2, 2
	dynmultipush CherryGrove_Pokecenter_Text_3, 3
	dynmultipush CherryGrove_Pokecenter_Text_4, 4
	dynmultipush CherryGrove_Pokecenter_Text_5, 5
	dynmultipush CherryGrove_Pokecenter_Text_6, 6
	dynmultipush CherryGrove_Pokecenter_Text_7, 7
	dynmultipush CherryGrove_Pokecenter_Text_8, 8
	dynmultipush CherryGrove_Pokecenter_Text_9, 9
	dynmultipush CherryGrove_Pokecenter_Text_10, 10
	dynmultipush CherryGrove_Pokecenter_Text_11, 11
	dynmultipush CherryGrove_Pokecenter_Text_12, 12
	dynmultipush CherryGrove_Pokecenter_Text_13, 13
	dynmultipush CherryGrove_Pokecenter_Text_14, 14
	dynmultipush CherryGrove_Pokecenter_Text_15, 15
	dynmultipush CherryGrove_Pokecenter_Text_16, 16
	dynmultipush CherryGrove_Pokecenter_Text_17, 17
	dynmultipush CherryGrove_Pokecenter_Text_18, 18
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberLower
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpecialDefenseIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonSpecialDefenseIV
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpeedIVsLower::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_0, 0
	dynmultipush CherryGrove_Pokecenter_Text_1, 1
	dynmultipush CherryGrove_Pokecenter_Text_2, 2
	dynmultipush CherryGrove_Pokecenter_Text_3, 3
	dynmultipush CherryGrove_Pokecenter_Text_4, 4
	dynmultipush CherryGrove_Pokecenter_Text_5, 5
	dynmultipush CherryGrove_Pokecenter_Text_6, 6
	dynmultipush CherryGrove_Pokecenter_Text_7, 7
	dynmultipush CherryGrove_Pokecenter_Text_8, 8
	dynmultipush CherryGrove_Pokecenter_Text_9, 9
	dynmultipush CherryGrove_Pokecenter_Text_10, 10
	dynmultipush CherryGrove_Pokecenter_Text_11, 11
	dynmultipush CherryGrove_Pokecenter_Text_12, 12
	dynmultipush CherryGrove_Pokecenter_Text_13, 13
	dynmultipush CherryGrove_Pokecenter_Text_14, 14
	dynmultipush CherryGrove_Pokecenter_Text_15, 15
	dynmultipush CherryGrove_Pokecenter_Text_16, 16
	dynmultipush CherryGrove_Pokecenter_Text_17, 17
	dynmultipush CherryGrove_Pokecenter_Text_18, 18
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberLower
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpeedIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonSpeedIV
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_0:
	.string "0$"
CherryGrove_Pokecenter_Text_1:
	.string "1$"
CherryGrove_Pokecenter_Text_2:
	.string "2$"
CherryGrove_Pokecenter_Text_3:
	.string "3$"
CherryGrove_Pokecenter_Text_4:
	.string "4$"
CherryGrove_Pokecenter_Text_5:
	.string "5$"
CherryGrove_Pokecenter_Text_6:
	.string "6$"
CherryGrove_Pokecenter_Text_7:
	.string "7$"
CherryGrove_Pokecenter_Text_8:
	.string "8$"
CherryGrove_Pokecenter_Text_9:
	.string "9$"
CherryGrove_Pokecenter_Text_10:
	.string "10$"
CherryGrove_Pokecenter_Text_11:
	.string "11$"
CherryGrove_Pokecenter_Text_12:
	.string "12$"
CherryGrove_Pokecenter_Text_13:
	.string "13$"
CherryGrove_Pokecenter_Text_14:
	.string "14$"
CherryGrove_Pokecenter_Text_15:
	.string "15$"
CherryGrove_Pokecenter_Text_16:
	.string "16$"
CherryGrove_Pokecenter_Text_17:
	.string "17$"
CherryGrove_Pokecenter_Text_18:
	.string "18$"
CherryGrove_Pokecenter_Text_19:
	.string "19$"
CherryGrove_Pokecenter_Text_20:
	.string "20$"
CherryGrove_Pokecenter_Text_21:
	.string "21$"
CherryGrove_Pokecenter_Text_22:
	.string "22$"
CherryGrove_Pokecenter_Text_23:
	.string "23$"
CherryGrove_Pokecenter_Text_24:
	.string "24$"
CherryGrove_Pokecenter_Text_25:
	.string "25$"
CherryGrove_Pokecenter_Text_26:
	.string "26$"
CherryGrove_Pokecenter_Text_27:
	.string "27$"
CherryGrove_Pokecenter_Text_28:
	.string "28$"
CherryGrove_Pokecenter_Text_29:
	.string "29$"
CherryGrove_Pokecenter_Text_30:
	.string "30$"
CherryGrove_Pokecenter_Text_31:
	.string "31$"

CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantCantAdjustIVsForEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantCantAdjustIVsForEgg::
	.string "Oh, dear me. I'm afraid that an Egg\n"
	.string "does not have any IVs.$"

CherryGrove_Pokecenter_Text_ScaleAttendantAdjustIVLowerConfirmIVRange::
	.string "It costs one Heart Scale to change an\n"
	.string "IV to a number from 0-18. Is that OK?$"

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV::
	.string "I see. and who should have their IVs\n"
	.string "adjusted?$"

CherryGrove_Pokecenter_Text_ScaleAttendantWhichIVShouldBeAdjusted::
	.string "In that case, which stat's IV would\n"
	.string "you like to adjust?$"

CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe::
	.string "Certainly. And what would you like the\n"
	.string "new IV to be?$"

CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged::
	.string "Well, there we are. The selected IV has\n"
	.string "been changed.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmHPIVChange::
	.string "You want {STR_VAR_1}'s HP IV changed\n"
	.string "to {STR_VAR_2}, is that right?$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmAttackIVChange::
	.string "You want {STR_VAR_1}'s Attack IV\n"
	.string "changed to {STR_VAR_2}, is that right?$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmDefenseIVChange::
	.string "You want {STR_VAR_1}'s Defense IV\n"
	.string "changed to {STR_VAR_2}, is that right?$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpecialAttackIVChange::
	.string "You want {STR_VAR_1}'s SpAtk IV\n"
	.string "changed to {STR_VAR_2}, is that right?$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpecialDefenseIVChange::
	.string "You want {STR_VAR_1}'s SpDef IV\n"
	.string "changed to {STR_VAR_2}, is that right?$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpeedIVChange::
	.string "You want {STR_VAR_1}'s Speed IV\n"
	.string "changed to {STR_VAR_2}, is that right?$"










@ADJUST IV 19-31 PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantAdjustIVHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantAdjustIVHigherConfirmIVRange, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantTryAdjustIVHigher
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantTryAdjustIVHigher::
	checkitem ITEM_HEART_SCALE, 2
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichIVShouldBeAdjusted, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_SCALE_ATTENDANT_ADJUST_IVS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeHPIVsHigher
	case 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeAttackIVsHigher
	case 2, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeDefenseIVsHigher
	case 3, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialAttackIVsHigher
	case 4, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialDefenseIVsHigher
	case 5, CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpeedIVsHigher
	case 6, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeHPIVsHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_19, 0
	dynmultipush CherryGrove_Pokecenter_Text_20, 1
	dynmultipush CherryGrove_Pokecenter_Text_21, 2
	dynmultipush CherryGrove_Pokecenter_Text_22, 3
	dynmultipush CherryGrove_Pokecenter_Text_23, 4
	dynmultipush CherryGrove_Pokecenter_Text_24, 5
	dynmultipush CherryGrove_Pokecenter_Text_25, 6
	dynmultipush CherryGrove_Pokecenter_Text_26, 7
	dynmultipush CherryGrove_Pokecenter_Text_27, 8
	dynmultipush CherryGrove_Pokecenter_Text_28, 9
	dynmultipush CherryGrove_Pokecenter_Text_29, 10
	dynmultipush CherryGrove_Pokecenter_Text_30, 11
	dynmultipush CherryGrove_Pokecenter_Text_31, 12
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberHigher
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmHPIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonHPIVHigher
	removeitem ITEM_HEART_SCALE, 2
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeAttackIVsHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_19, 0
	dynmultipush CherryGrove_Pokecenter_Text_20, 1
	dynmultipush CherryGrove_Pokecenter_Text_21, 2
	dynmultipush CherryGrove_Pokecenter_Text_22, 3
	dynmultipush CherryGrove_Pokecenter_Text_23, 4
	dynmultipush CherryGrove_Pokecenter_Text_24, 5
	dynmultipush CherryGrove_Pokecenter_Text_25, 6
	dynmultipush CherryGrove_Pokecenter_Text_26, 7
	dynmultipush CherryGrove_Pokecenter_Text_27, 8
	dynmultipush CherryGrove_Pokecenter_Text_28, 9
	dynmultipush CherryGrove_Pokecenter_Text_29, 10
	dynmultipush CherryGrove_Pokecenter_Text_30, 11
	dynmultipush CherryGrove_Pokecenter_Text_31, 12
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberHigher
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmAttackIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonAttackIVHigher
	removeitem ITEM_HEART_SCALE, 2
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeDefenseIVsHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_19, 0
	dynmultipush CherryGrove_Pokecenter_Text_20, 1
	dynmultipush CherryGrove_Pokecenter_Text_21, 2
	dynmultipush CherryGrove_Pokecenter_Text_22, 3
	dynmultipush CherryGrove_Pokecenter_Text_23, 4
	dynmultipush CherryGrove_Pokecenter_Text_24, 5
	dynmultipush CherryGrove_Pokecenter_Text_25, 6
	dynmultipush CherryGrove_Pokecenter_Text_26, 7
	dynmultipush CherryGrove_Pokecenter_Text_27, 8
	dynmultipush CherryGrove_Pokecenter_Text_28, 9
	dynmultipush CherryGrove_Pokecenter_Text_29, 10
	dynmultipush CherryGrove_Pokecenter_Text_30, 11
	dynmultipush CherryGrove_Pokecenter_Text_31, 12
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberHigher
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmDefenseIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonDefenseIVHigher
	removeitem ITEM_HEART_SCALE, 2
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialAttackIVsHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_19, 0
	dynmultipush CherryGrove_Pokecenter_Text_20, 1
	dynmultipush CherryGrove_Pokecenter_Text_21, 2
	dynmultipush CherryGrove_Pokecenter_Text_22, 3
	dynmultipush CherryGrove_Pokecenter_Text_23, 4
	dynmultipush CherryGrove_Pokecenter_Text_24, 5
	dynmultipush CherryGrove_Pokecenter_Text_25, 6
	dynmultipush CherryGrove_Pokecenter_Text_26, 7
	dynmultipush CherryGrove_Pokecenter_Text_27, 8
	dynmultipush CherryGrove_Pokecenter_Text_28, 9
	dynmultipush CherryGrove_Pokecenter_Text_29, 10
	dynmultipush CherryGrove_Pokecenter_Text_30, 11
	dynmultipush CherryGrove_Pokecenter_Text_31, 12
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberHigher
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpecialAttackIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonSpecialAttackIVHigher
	removeitem ITEM_HEART_SCALE, 2
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialDefenseIVsHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_19, 0
	dynmultipush CherryGrove_Pokecenter_Text_20, 1
	dynmultipush CherryGrove_Pokecenter_Text_21, 2
	dynmultipush CherryGrove_Pokecenter_Text_22, 3
	dynmultipush CherryGrove_Pokecenter_Text_23, 4
	dynmultipush CherryGrove_Pokecenter_Text_24, 5
	dynmultipush CherryGrove_Pokecenter_Text_25, 6
	dynmultipush CherryGrove_Pokecenter_Text_26, 7
	dynmultipush CherryGrove_Pokecenter_Text_27, 8
	dynmultipush CherryGrove_Pokecenter_Text_28, 9
	dynmultipush CherryGrove_Pokecenter_Text_29, 10
	dynmultipush CherryGrove_Pokecenter_Text_30, 11
	dynmultipush CherryGrove_Pokecenter_Text_31, 12
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberHigher
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpecialDefenseIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonSpecialDefenseIVHigher
	removeitem ITEM_HEART_SCALE, 2
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpeedIVsHigher::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIV, MSGBOX_DEFAULT
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIV
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhatShouldNewIVBe, MSGBOX_DEFAULT
	dynmultipush CherryGrove_Pokecenter_Text_19, 0
	dynmultipush CherryGrove_Pokecenter_Text_20, 1
	dynmultipush CherryGrove_Pokecenter_Text_21, 2
	dynmultipush CherryGrove_Pokecenter_Text_22, 3
	dynmultipush CherryGrove_Pokecenter_Text_23, 4
	dynmultipush CherryGrove_Pokecenter_Text_24, 5
	dynmultipush CherryGrove_Pokecenter_Text_25, 6
	dynmultipush CherryGrove_Pokecenter_Text_26, 7
	dynmultipush CherryGrove_Pokecenter_Text_27, 8
	dynmultipush CherryGrove_Pokecenter_Text_28, 9
	dynmultipush CherryGrove_Pokecenter_Text_29, 10
	dynmultipush CherryGrove_Pokecenter_Text_30, 11
	dynmultipush CherryGrove_Pokecenter_Text_31, 12
	dynmultistack 2, 2, FALSE, 1, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	copyvar VAR_0x8005, VAR_RESULT
	special BufferPokemonNicknameAndIVNumberHigher
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSpeedIVChange, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special SetPokemonSpeedIVHigher
	removeitem ITEM_HEART_SCALE, 2
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantIVHasBeenChanged, MSGBOX_DEFAULT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantAdjustIVHigherConfirmIVRange::
	.string "It costs two Heart Scales to change an\n"
	.string "IV to a number from 19-31. Is that OK?$"


@MINT 2/3 MINT COST PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchaseTwoOrThreeCostMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMint, MSGBOX_DEFAULT
	setvar VAR_0x8004, SCROLL_MULTI_SCALE_ATTENDANT_BUY_A_MINT_2_OR_3
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmSeriousMint
	case 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmBoldMint
	case 2, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmImpishMint
	case 3, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmLaxMint
	case 4, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmRelaxedMint
	case 5, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmCalmMint
	case 6, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmGentleMint
	case 7, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmCarefulMint
	case 8, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmSassyMint
	case 9, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmBraveMint
	case 10, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmQuietMint
	case 11, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmSeriousMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSeriousMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedSeriousMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedSeriousMint::
	checkitem ITEM_HEART_SCALE, 2
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 2
	giveitem ITEM_SERIOUS_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmBoldMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmBoldMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedBoldMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedBoldMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_BOLD_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmImpishMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmImpishMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedImpishMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedImpishMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_IMPISH_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmLaxMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmLaxMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedLaxMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedLaxMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_LAX_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmRelaxedMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmRelaxedMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedRelaxedMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedRelaxedMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_RELAXED_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmCalmMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmCalmMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedCalmMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedCalmMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_CALM_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmGentleMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmGentleMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedGentleMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedGentleMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_GENTLE_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmCarefulMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmCarefulMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedCarefulMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedCarefulMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_CAREFUL_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmSassyMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSassyMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedSassyMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedSassyMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_SASSY_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmBraveMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmBraveMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedBraveMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedBraveMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_BRAVE_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmQuietMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmQuietMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedQuietMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedQuietMint::
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 3
	giveitem ITEM_QUIET_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantNotEnoughHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMint::
	.string "You wish to purchase a mint? And which\n"
	.string "mint is it that you would you like?$"

CherryGrove_Pokecenter_Text_ScaleAttendantNotEnoughHeartScales::
	.string "Oh, dear me. You don't appear to have\n"
	.string "enough Heart Scales for that.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales::
	.string "{PLAYER} handed over two Heart Scales\n"
	.string "in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales::
	.string "{PLAYER} handed over three Heart\n"
	.string "Scales in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales::
	.string "{PLAYER} handed over four Heart\n"
	.string "Scales in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSeriousMint::
	.string "You want the Serious Mint, is that\n"
	.string "right? It'll cost you 2 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmBoldMint::
	.string "You want the Bold Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmImpishMint::
	.string "You want the Impish Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmLaxMint::
	.string "You want the Lax Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmRelaxedMint::
	.string "You want the Relaxed Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmCalmMint::
	.string "You want the Calm Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmGentleMint::
	.string "You want the Gentle Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmCarefulMint::
	.string "You want the Careful Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSassyMint::
	.string "You want the Sassy Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmBraveMint::
	.string "You want the Brave Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmQuietMint::
	.string "You want the Quiet Mint, is that\n"
	.string "right? It'll cost you 3 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint::
	.string "Splendid. In that case, this mint is\n"
	.string "yours to keep. Use it wisely.$"




@MINT 4 COST MINT PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchaseFourCostMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMint, MSGBOX_DEFAULT
	setvar VAR_0x8004, SCROLL_MULTI_SCALE_ATTENDANT_BUY_A_MINT_4
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmLonelyMint
	case 1, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmAdamantMint
	case 2, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmNaughtyMint
	case 3, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmModestMint
	case 4, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmMildMint
	case 5, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmRashMint
	case 6, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmTimidMint
	case 7, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmHastyMint
	case 8, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmJollyMint
	case 9, CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmNaiveMint
	case 10, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmLonelyMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmLonelyMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedLonelyMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedLonelyMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_LONELY_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmAdamantMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmAdamantMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedAdamantMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedAdamantMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_ADAMANT_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmNaughtyMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmNaughtyMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedNaughtyMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedNaughtyMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_NAUGHTY_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmModestMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmModestMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedModestMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedModestMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_MODEST_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmMildMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmMildMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedMildMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedMildMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_MILD_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmRashMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmRashMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedRashMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedRashMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_RASH_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmTimidMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmTimidMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedTimidMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedTimidMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_TIMID_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmHastyMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmHastyMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedHastyMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedHastyMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_HASTY_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmJollyMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmJollyMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedJollyMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedJollyMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_JOLLY_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantConfirmNaiveMint::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantConfirmNaiveMint, MSGBOX_YESNO 
	switch VAR_RESULT
	case YES, CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedNaiveMint
	case NO, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	releaseall
	end

CherryGrove_Pokecenter_EventScript_ScaleAttendantPurchasedNaiveMint::
	checkitem ITEM_HEART_SCALE, 4
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_ScaleAttendantNotEnoughHeartScales
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHeresYourMint, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE, 4
	giveitem ITEM_NAIVE_MINT
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmLonelyMint::
	.string "You want the Lonely Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmAdamantMint::
	.string "You want the Adamant Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmNaughtyMint::
	.string "You want the Naughty Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmModestMint::
	.string "You want the Modest Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmMildMint::
	.string "You want the Mild Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmRashMint::
	.string "You want the Rash Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmTimidMint::
	.string "You want the Timid Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmHastyMint::
	.string "You want the Hasty Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmJollyMint::
	.string "You want the Jolly Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmNaiveMint::
	.string "You want the Naive Mint, is that\n"
	.string "right? It'll cost you 4 Heart Scales.$"



@EXIT PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantExit::
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantExit, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Text_ScaleAttendantExit::
	.string "I see. I bid you farewell, {PLAYER}. Do\n"
	.string "let me know if I can be of service, OK?$"










@TM CLERK
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


CherryGrove_Pokecenter_EventScript_TMClerk::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TM_CLERK, CherryGrove_Pokecenter_EventScript_TMClerkPostIntro
	msgbox CherryGrove_Pokecenter_Text_TMClerkIntro, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TALKED_TM_CLERK
	goto CherryGrove_Pokecenter_EventScript_TMClerkPostIntro
	end

CherryGrove_Pokecenter_EventScript_TMClerkPostIntro::
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_FALKNER, CherryGrove_Pokecenter_EventScript_TMClerkGivePostFalknerTMs
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_MISTY, CherryGrove_Pokecenter_EventScript_TMClerkGivePostMistyTMs
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_WHITNEY, CherryGrove_Pokecenter_EventScript_TMClerkGivePostWhitneyTMs
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_ERIKA, CherryGrove_Pokecenter_EventScript_TMClerkGivePostErikaTMs
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_CHUCK, CherryGrove_Pokecenter_EventScript_TMClerkGivePostChuckTMs
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_PRYCE, CherryGrove_Pokecenter_EventScript_TMClerkGivePostPryceTMs
	goto_if_set FLAG_TM_CLERK_COLLECTION_POST_BLAINE_SURGE, CherryGrove_Pokecenter_EventScript_TMClerkGivePostBlaineSurgeBerries
	msgbox CherryGrove_Pokecenter_Text_TMClerkPostIntro, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_MAIN_MENU
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkZephyrBadge
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkHiveBadge
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkPlainBadge
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkFogBadge
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkStormBadge
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkGlacierBadge
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkExit::
	msgbox CherryGrove_Pokecenter_Text_TMClerkExit, MSGBOX_DEFAULT
	closemessage
	release
	end

@ZEPHYR BADGE TMS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkZephyrBadge::
	goto_if_unset FLAG_DEFEATED_VIOLET_GYM, CherryGrove_Pokecenter_EventScript_TMClerkGoBeatFalkner
	msgbox CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_POST_FALKNER_TMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkGrassKnot
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkNightShade
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkSeismicToss
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkWaterPulse
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkPluck
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkDualWingbeat
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGrassKnot::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantGrassKnot, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveGrassKnot
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveGrassKnot::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_GRASS_KNOT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkNightShade::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantNightShade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveNightShade
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveNightShade::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_NIGHT_SHADE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkSeismicToss::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantSeismicToss, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveSeismicToss
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveSeismicToss::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_SEISMIC_TOSS
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkWaterPulse::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantWaterPulse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveWaterPulse
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveWaterPulse::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_WATER_PULSE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkPluck::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantPluck, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGivePluck
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePluck::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_PLUCK
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDualWingbeat::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDualWingbeat, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDualWingbeat
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDualWingbeat::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DUAL_WINGBEAT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

@HIVE BADGE TMS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkHiveBadge::
	goto_if_unset FLAG_DEFEATED_AZALEA_TOWN_GYM, CherryGrove_Pokecenter_EventScript_TMClerkGoBeatMisty
	msgbox CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_POST_MISTY_TMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkProtect
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkWillOWisp
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkToxic
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkThunderWave
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkSteelWing
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkDefog
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkUTurn
	case 7, CherryGrove_Pokecenter_EventScript_TMClerkReflect
	case 8, CherryGrove_Pokecenter_EventScript_TMClerkLightScreen
	case 9, CherryGrove_Pokecenter_EventScript_TMClerkFlipTurn
	case 10, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkProtect::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantProtect, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveProtect
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveProtect::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_PROTECT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkWillOWisp::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantWillOWisp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveWillOWisp
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveWillOWisp::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_WILL_O_WISP
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkToxic::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantToxic, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveToxic
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveToxic::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_TOXIC
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkThunderWave::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantThunderWave, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveThunderWave
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveThunderWave::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_THUNDER_WAVE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkSteelWing::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantSteelWing, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveSteelWing
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveSteelWing::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_STEEL_WING
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDefog::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDefog, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDefog
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDefog::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DEFOG
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkUTurn::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantUTurn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveUTurn
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveUTurn::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_U_TURN
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkReflect::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantReflect, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveReflect
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveReflect::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_REFLECT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkLightScreen::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantLightScreen, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveLightScreen
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveLightScreen::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_LIGHT_SCREEN
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkFlipTurn::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantFlipTurn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveFlipTurn
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveFlipTurn::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_FLIP_TURN
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

@PLAIN BADGE TMS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkPlainBadge::
	goto_if_unset FLAG_DEFEATED_GOLDENROD_CITY_GYM, CherryGrove_Pokecenter_EventScript_TMClerkGoBeatWhitney
	msgbox CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_POST_WHITNEY_TMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkXScissor
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkFlashCannon
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkDarkPulse
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkShadowBall
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkDragonClaw
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkPsychoShift
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkLowKick
	case 7, CherryGrove_Pokecenter_EventScript_TMClerkReturn
	case 8, CherryGrove_Pokecenter_EventScript_TMClerkFacade
	case 9, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkXScissor::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantXScissor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveXScissor
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveXScissor::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_X_SCISSOR
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkFlashCannon::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantFlashCannon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveFlashCannon
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveFlashCannon::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_FLASH_CANNON
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDarkPulse::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDarkPulse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDarkPulse
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDarkPulse::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DARK_PULSE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkShadowBall::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantShadowBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveShadowBall
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveShadowBall::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_SHADOW_BALL
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDragonClaw::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDragonClaw, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDragonClaw
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDragonClaw::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DRAGON_CLAW
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkPsychoShift::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantPsychoShift, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGivePsychoShift
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePsychoShift::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_PSYCHO_SHIFT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkLowKick::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantLowKick, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveLowKick
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveLowKick::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_LOW_KICK
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkReturn::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantReflect, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveReturn
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveReturn::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_RETURN
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkFacade::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantFacade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveFacade
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveFacade::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_FACADE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

@FOG BADGE TMS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkFogBadge::
	goto_if_unset FLAG_DEFEATED_ECRUTEAK_CITY_GYM, CherryGrove_Pokecenter_EventScript_TMClerkGoBeatErika
	msgbox CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_POST_ERIKA_TMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkEnergyBall
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkSludgeBomb
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkFlamethrower
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkThunderbolt
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkIceBeam
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkPsychic
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkMoonblast
	case 7, CherryGrove_Pokecenter_EventScript_TMClerkPlayRough
	case 8, CherryGrove_Pokecenter_EventScript_TMClerkEarthPower
	case 9, CherryGrove_Pokecenter_EventScript_TMClerkHyperVoice
	case 10, CherryGrove_Pokecenter_EventScript_TMClerkPayback
	case 11, CherryGrove_Pokecenter_EventScript_TMClerkGigaDrain
	case 12, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkEnergyBall::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantEnergyBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveEnergyBall
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveEnergyBall::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_ENERGY_BALL
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkSludgeBomb::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantSludgeBomb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveSludgeBomb
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveSludgeBomb::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_SLUDGE_BOMB
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkFlamethrower::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantFlamethrower, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveFlamethrower
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveFlamethrower::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_FLAMETHROWER
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkThunderbolt::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantThunderbolt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveThunderbolt
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveThunderbolt::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_THUNDERBOLT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkIceBeam::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantIceBeam, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveIceBeam
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveIceBeam::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_ICE_BEAM
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkPsychic::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantPsychic, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGivePsychic
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePsychic::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_PSYCHIC
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkMoonblast::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantMoonblast, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveMoonblast
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveMoonblast::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_MOONBLAST
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkPlayRough::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantPlayRough, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGivePlayRough
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePlayRough::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_PLAY_ROUGH
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkEarthPower::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantEarthPower, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveEarthPower
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveEarthPower::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_EARTH_POWER
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkHyperVoice::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantHyperVoice, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveHyperVoice
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveHyperVoice::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_HYPER_VOICE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkPayback::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantPayback, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGivePayback
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePayback::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_PAYBACK
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGigaDrain::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantGigaDrain, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveGigaDrain
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveGigaDrain::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_GIGA_DRAIN
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

@STORM BADGE TMS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkStormBadge::
	goto_if_unset FLAG_DEFEATED_CIANWOOD_GYM, CherryGrove_Pokecenter_EventScript_TMClerkGoBeatChuck
	msgbox CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_POST_CHUCK_TMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkStoneEdge
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkRockSlide
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkEarthquake
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkIronTail
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkFocusBlast
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkSolarBeam
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkSolarBlade
	case 7, CherryGrove_Pokecenter_EventScript_TMClerkHyperBeam
	case 8, CherryGrove_Pokecenter_EventScript_TMClerkGigaImpact
	case 9, CherryGrove_Pokecenter_EventScript_TMClerkDragonPulse
	case 10, CherryGrove_Pokecenter_EventScript_TMClerkVoltSwitch
	case 11, CherryGrove_Pokecenter_EventScript_TMClerkDrainingKiss
	case 12, CherryGrove_Pokecenter_EventScript_TMClerkDazzlingGleam
	case 13, CherryGrove_Pokecenter_EventScript_TMClerkDrainPunch
	case 14, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkStoneEdge::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantStoneEdge, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveStoneEdge
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveStoneEdge::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_STONE_EDGE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkRockSlide::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantRockSlide, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveRockSlide
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveRockSlide::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_ROCK_SLIDE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkEarthquake::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantEarthquake, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveEarthquake
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveEarthquake::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_EARTHQUAKE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkIronTail::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantIronTail, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveIronTail
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveIronTail::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_IRON_TAIL
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkFocusBlast::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantFocusBlast, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveFocusBlast
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveFocusBlast::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_FOCUS_BLAST
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkSolarBeam::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantSolarBeam, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveSolarBeam
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveSolarBeam::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_SOLAR_BEAM
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkSolarBlade::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantSolarBlade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveSolarBlade
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveSolarBlade::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_SOLAR_BLADE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkHyperBeam::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantHyperBeam, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveHyperBeam
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveHyperBeam::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_HYPER_BEAM
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGigaImpact::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantGigaImpact, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveGigaImpact
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveGigaImpact::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_GIGA_IMPACT
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDragonPulse::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDragonPulse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDragonPulse
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDragonPulse::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DRAGON_PULSE
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkVoltSwitch::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantVoltSwitch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveVoltSwitch
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveVoltSwitch::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_VOLT_SWITCH
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDrainingKiss::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDrainingKiss, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDrainingKiss
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDrainingKiss::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DRAINING_KISS
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDazzlingGleam::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDazzlingGleam, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDazzlingGleam
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDazzlingGleam::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DAZZLING_GLEAM
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkDrainPunch::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantDrainPunch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveDrainPunch
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveDrainPunch::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_DRAIN_PUNCH
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

@GLACIER BADGE TMS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkGlacierBadge::
	goto_if_unset FLAG_DEFEATED_MAHOGANY_TOWN_GYM, CherryGrove_Pokecenter_EventScript_TMClerkGoBeatPryce
	msgbox CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_TM_CLERK_POST_PRYCE_TMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, CherryGrove_Pokecenter_EventScript_TMClerkRest
	case 1, CherryGrove_Pokecenter_EventScript_TMClerkSleepTalk
	case 2, CherryGrove_Pokecenter_EventScript_TMClerkRoost
	case 3, CherryGrove_Pokecenter_EventScript_TMClerkExplosion
	case 4, CherryGrove_Pokecenter_EventScript_TMClerkMistyExplosion
	case 5, CherryGrove_Pokecenter_EventScript_TMClerkFocusPunch
	case 6, CherryGrove_Pokecenter_EventScript_TMClerkBodyPress
	case 7, CherryGrove_Pokecenter_EventScript_TMClerkWeatherBall
	case 8, CherryGrove_Pokecenter_EventScript_TMClerkTripleAxel
	case 9, CherryGrove_Pokecenter_EventScript_TMClerkExit
	case MULTI_B_PRESSED, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkRest::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveRest
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveRest::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_REST
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkSleepTalk::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantSleepTalk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveSleepTalk
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveSleepTalk::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_SLEEP_TALK
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkRoost::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantRoost, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveRoost
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveRoost::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_ROOST
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkExplosion::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantExplosion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveExplosion
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveExplosion::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_EXPLOSION
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkMistyExplosion::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantMistyExplosion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveMistyExplosion
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveMistyExplosion::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_MISTY_EXPLOSION
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkFocusPunch::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantFocusPunch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveFocusPunch
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveFocusPunch::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_FOCUS_PUNCH
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkBodyPress::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantBodyPress, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveBodyPress
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveBodyPress::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_BODY_PRESS
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkWeatherBall::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantWeatherBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveWeatherBall
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveWeatherBall::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_WEATHER_BALL
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkTripleAxel::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantTripleAxel, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveTripleAxel
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveTripleAxel::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_TRIPLE_AXEL
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkHealBell::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantHealBell, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveHealBell
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveHealBell::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_HEAL_BELL
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkAromatherapy::
	msgbox CherryGrove_Pokecenter_Text_TMClerkWantAromatherapy, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CherryGrove_Pokecenter_EventScript_TMClerkGiveAromatherapy
	goto_if_eq VAR_RESULT, NO, CherryGrove_Pokecenter_EventScript_TMClerkExit
	end

CherryGrove_Pokecenter_EventScript_TMClerkGiveAromatherapy::
	checkitem ITEM_HEART_SCALE, 1
	goto_if_eq VAR_RESULT, FALSE, CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales
	giveitem ITEM_TM_AROMATHERAPY
	removeitem ITEM_HEART_SCALE
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale, MSGBOX_DEFAULT
	closemessage
	release
	end

@OTHER EVENTS
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_TMClerkNotEnoughHeartScales::
	msgbox CherryGrove_Pokecenter_Text_TMClerkNotEnoughScales, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGoBeatFalkner::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGoBeatFalkner, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGoBeatMisty::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGoBeatMisty, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGoBeatWhitney::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGoBeatWhitney, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGoBeatErika::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGoBeatErika, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGoBeatChuck::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGoBeatChuck, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_TMClerkGoBeatPryce::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGoBeatPryce, MSGBOX_DEFAULT
	closemessage
	release
	end




CherryGrove_Pokecenter_EventScript_TMClerkGivePostFalknerTMs::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostFalknerTMs, MSGBOX_DEFAULT
	giveitem ITEM_TM_GRASS_KNOT
	giveitem ITEM_TM_NIGHT_SHADE
	giveitem ITEM_TM_SEISMIC_TOSS
	giveitem ITEM_TM_WATER_PULSE
	giveitem ITEM_TM_PLUCK
	clearflag FLAG_TM_CLERK_COLLECTION_POST_FALKNER
	closemessage
	releaseall
	end


CherryGrove_Pokecenter_EventScript_TMClerkGivePostMistyTMs::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostMistyTMs, MSGBOX_DEFAULT
	giveitem ITEM_TM_PROTECT
	giveitem ITEM_TM_WILL_O_WISP
	giveitem ITEM_TM_TOXIC
	giveitem ITEM_TM_THUNDER_WAVE
	giveitem ITEM_TM_STEEL_WING
	giveitem ITEM_TM_DEFOG
	clearflag FLAG_TM_CLERK_COLLECTION_POST_MISTY
	closemessage
	releaseall
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePostWhitneyTMs::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostWhitneyTMs, MSGBOX_DEFAULT
	giveitem ITEM_TM_X_SCISSOR
	giveitem ITEM_TM_FLASH_CANNON
	giveitem ITEM_TM_DARK_PULSE
	giveitem ITEM_TM_SHADOW_BALL
	giveitem ITEM_TM_DRAGON_CLAW
	giveitem ITEM_TM_PSYCHO_SHIFT
	clearflag FLAG_TM_CLERK_COLLECTION_POST_WHITNEY
	closemessage
	releaseall
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePostErikaTMs::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostErikaTMs, MSGBOX_DEFAULT
	giveitem ITEM_TM_ENERGY_BALL
	giveitem ITEM_TM_SLUDGE_BOMB
	giveitem ITEM_TM_FLAMETHROWER
	giveitem ITEM_TM_THUNDERBOLT
	giveitem ITEM_TM_ICE_BEAM
	giveitem ITEM_TM_PSYCHIC
	giveitem ITEM_TM_MOONBLAST
	giveitem ITEM_TM_PLAY_ROUGH
	giveitem ITEM_TM_EARTH_POWER
	giveitem ITEM_TM_HYPER_VOICE
	clearflag FLAG_TM_CLERK_COLLECTION_POST_ERIKA
	closemessage
	releaseall
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePostChuckTMs::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostChuckTMs, MSGBOX_DEFAULT
	giveitem ITEM_TM_STONE_EDGE
	giveitem ITEM_TM_ROCK_SLIDE
	giveitem ITEM_TM_EARTHQUAKE
	giveitem ITEM_TM_IRON_TAIL
	giveitem ITEM_TM_FOCUS_BLAST
	giveitem ITEM_TM_SOLAR_BEAM
	giveitem ITEM_TM_SOLAR_BLADE
	giveitem ITEM_TM_HYPER_BEAM
	giveitem ITEM_TM_GIGA_IMPACT
	giveitem ITEM_TM_DRAGON_PULSE
	clearflag FLAG_TM_CLERK_COLLECTION_POST_CHUCK
	closemessage
	releaseall
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePostPryceTMs::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostPryceTMs, MSGBOX_DEFAULT
	giveitem ITEM_TM_REST
	giveitem ITEM_TM_SLEEP_TALK
	giveitem ITEM_TM_ROOST
	giveitem ITEM_TM_EXPLOSION
	giveitem ITEM_TM_MISTY_EXPLOSION
	giveitem ITEM_TM_PSYCHIC
	giveitem ITEM_TM_FOCUS_PUNCH
	giveitem ITEM_TM_BODY_PRESS
	giveitem ITEM_TM_HEAL_BELL
	giveitem ITEM_TM_AROMATHERAPY
	clearflag FLAG_TM_CLERK_COLLECTION_POST_PRYCE
	closemessage
	releaseall
	end

CherryGrove_Pokecenter_EventScript_TMClerkGivePostBlaineSurgeBerries::
	msgbox CherryGrove_Pokecenter_Text_TMClerkGivingPostBlaineSurgeBerries, MSGBOX_DEFAULT
	giveitem ITEM_BABIRI_BERRY
	giveitem ITEM_CHARTI_BERRY
	giveitem ITEM_CHILAN_BERRY
	giveitem ITEM_CHOPLE_BERRY
	giveitem ITEM_COBA_BERRY
	giveitem ITEM_COLBUR_BERRY
	giveitem ITEM_HABAN_BERRY
	giveitem ITEM_KASIB_BERRY
	giveitem ITEM_KEBIA_BERRY
	giveitem ITEM_OCCA_BERRY
	giveitem ITEM_PASSHO_BERRY
	giveitem ITEM_PAYAPA_BERRY
	giveitem ITEM_RINDO_BERRY
	giveitem ITEM_ROSELI_BERRY
	giveitem ITEM_SHUCA_BERRY
	giveitem ITEM_TANGA_BERRY
	giveitem ITEM_WACAN_BERRY
	giveitem ITEM_YACHE_BERRY
	clearflag FLAG_TM_CLERK_COLLECTION_POST_BLAINE_SURGE
	closemessage
	releaseall
	end


CherryGrove_Pokecenter_Text_TMClerkIntro::
	.string "Hi there! A new trainer, are you? Don't\n"
	.string "worry, I'm pretty new at this as well!\p"
	.string "I used to work in the Mart before, and\n"
	.string "it's been a bit of a transition getting\l"
	.string "used to-\p"
	.string "Oh! Sorry, Nurse ~Joy says I can be a bit\n"
	.string "too chatty sometimes...\p"
	.string "Anyway, come and see me whenever you\n"
	.string "get a new Badge, and I'll have some\l"
	.string "great TMs for you!\p"
	.string "Or, if you want an extra copy of\n"
	.string "something, you can exchange a Heart\l"
	.string "Scale for it. Pretty neat, huh?$"

CherryGrove_Pokecenter_Text_TMClerkPostIntro::
	.string "Hi there, {PLAYER}!\n"
	.string "Interested in picking up some TMs?$"

CherryGrove_Pokecenter_Text_TMClerkExit::
	.string "Going so soon? Well, okay. I'll be right\n"
	.string "here if you need anything else! Buhbye!$"

CherryGrove_Pokecenter_Text_TMClerkWhichTMWouldYouLike::
	.string "Yes of course, right away! And which TM\n"
	.string "would you like from the list?$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostFalknerTMs::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Falkner. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostMistyTMs::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Misty. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostWhitneyTMs::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Whitney. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostErikaTMs::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Erika. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostChuckTMs::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Chuck. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostPryceTMs::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Pryce. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGivingPostBlaineSurgeBerries::
	.string "Hey, {PLAYER}, over here!\p"
	.string "I just heard about your victory over\n"
	.string "Blaine and Surge. Way to go!\p"
	.string "As promised, here's your reward. I hope\n"
	.string "you have enough room for them all!$"

CherryGrove_Pokecenter_Text_TMClerkGoBeatFalkner::
	.string "Oh, sorry. You need to defeat Falkner\n"
	.string "in order to buy these TMs.$"

CherryGrove_Pokecenter_Text_TMClerkGoBeatMisty::
	.string "Oh, sorry. You need to defeat Misty\n"
	.string "in order to buy these TMs.$"

CherryGrove_Pokecenter_Text_TMClerkGoBeatWhitney::
	.string "Oh, sorry. You need to defeat Whitney\n"
	.string "in order to buy these TMs.$"

CherryGrove_Pokecenter_Text_TMClerkGoBeatErika::
	.string "Oh, sorry. You need to defeat Erika\n"
	.string "in order to buy these TMs.$"

CherryGrove_Pokecenter_Text_TMClerkGoBeatChuck::
	.string "Oh, sorry. You need to defeat Chuck\n"
	.string "in order to buy these TMs.$"

CherryGrove_Pokecenter_Text_TMClerkGoBeatPryce::
	.string "Oh, sorry. You need to defeat Pryce\n"
	.string "in order to buy these TMs.$"

CherryGrove_Pokecenter_Text_TMClerkNotEnoughScales::
	.string "Ah, but you don't have any Heart\n"	
	.string "Scales. Sorry, {PLAYER}.$"

CherryGrove_Pokecenter_Text_TMClerkWantGrassKnot::
	.string "You want the Grass Knot TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantNightShade::
	.string "You want the Night Shade TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantSeismicToss::
	.string "You want the Seismic Toss TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantWaterPulse::
	.string "You want the Water Pulse TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantPluck::
	.string "You want the Pluck TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDualWingbeat::
	.string "You want the Dual Wingbeat TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantProtect::
	.string "You want the Protect TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantWillOWisp::
	.string "You want the Will-O-Wisp TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantToxic::
	.string "You want the Toxic TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantThunderWave::
	.string "You want the Thunder Wave TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantSteelWing::
	.string "You want the Steel Wing TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDefog::
	.string "You want the Defog TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantUTurn::
	.string "You want the U-Turn TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantReflect::
	.string "You want the Reflect TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantLightScreen::
	.string "You want the Light Screen TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantFlipTurn::
	.string "You want the Flip Turn TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantXScissor::
	.string "You want the X-Scissor TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantFlashCannon::
	.string "You want the Flash Cannon TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDarkPulse::
	.string "You want the Dark Pulse TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantShadowBall::
	.string "You want the Shadow Ball TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDragonClaw::
	.string "You want the Dragon Claw TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantPsychoShift::
	.string "You want the Psycho Shift TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantLowKick::
	.string "You want the Low Kick TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantReturn::
	.string "You want the Return TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantFacade::
	.string "You want the Facade TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantEnergyBall::
	.string "You want the Energy Ball TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantSludgeBomb::
	.string "You want the Sludge Bomb TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantFlamethrower::
	.string "You want the Flamethrower TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantThunderbolt::
	.string "You want the Thunderbolt TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantIceBeam::
	.string "You want the Ice Beam TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantPsychic::
	.string "You want the Psychic TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantMoonblast::
	.string "You want the Moonblast TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantPlayRough::
	.string "You want the Play Rough TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantEarthPower::
	.string "You want the Earth Power TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantHyperVoice::
	.string "You want the Hyper Voice TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantPayback::
	.string "You want the Payback TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantGigaDrain::
	.string "You want the Giga Drain TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantStoneEdge::
	.string "You want the Stone Edge TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantRockSlide::
	.string "You want the Rock Slide TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantEarthquake::
	.string "You want the Earthquake TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantIronTail::
	.string "You want the Iron Tail TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantFocusBlast::
	.string "You want the Focus Blast TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantSolarBeam::
	.string "You want the Solar Beam TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantSolarBlade::
	.string "You want the Solar Blade TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantHyperBeam::
	.string "You want the Hyper Beam TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantGigaImpact::
	.string "You want the Giga Impact TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDragonPulse::
	.string "You want the Dragon Pulse TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantVoltSwitch::
	.string "You want the Volt Switch TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDrainingKiss::
	.string "You want the Draining Kiss TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDazzlingGleam::
	.string "You want the Dazzling Gleam TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantDrainPunch::
	.string "You want the Drain Punch TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantRest::
	.string "You want the Rest TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantSleepTalk::
	.string "You want the Sleep Talk TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantRoost::
	.string "You want the Roost TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantExplosion::
	.string "You want the Explosion TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantMistyExplosion::
	.string "You want the Misty Explosion TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantFocusPunch::
	.string "You want the Focus Punch TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantBodyPress::
	.string "You want the Body Press TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantWeatherBall::
	.string "You want the Weather Ball TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantTripleAxel::
	.string "You want the Triple Axel TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantHealBell::
	.string "You want the Heal Bell TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"

CherryGrove_Pokecenter_Text_TMClerkWantAromatherapy::
	.string "You want the Aromatherapy TM?\n"
	.string "It'll cost you one Heart Scale, okay?$"
