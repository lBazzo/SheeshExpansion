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
	.string "of POKéMON, and it's all free.$"

CherryGrove_Pokecenter_Text_Gentleman:
	.string "That PC is free for any\n"
	.string "trainer to use.$"

CherryGrove_Pokecenter_Text_Lass:
	.string "They say a watched pot never\n"
	.string "boils. But watching the clock\l"
	.string "in the POKéCENTER makes time fly!$"

CherryGrove_Pokecenter_Text_Chansey:
	.string "CHANSEY: Chaan! Sii!$"






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
	.string "exchanging some HEART SCALES.\p"
	.string "HEART SCALES can be hard to come by\n"
	.string "these days, so be sure to think\l"
	.string "carefully before you spend them.\p"
	.string "If you need any more information, don't\n"
	.string "be afraid to ask. You can find us in any\l"
	.string "POKéMON CENTER.$"

CherryGrove_Pokecenter_Text_ScaleAttendantPostIntro::
    .string "So, how may I help you today, {PLAYER}?$"

CherryGrove_Pokecenter_Text_ScaleAttendantChangeNickname::
    .string "You want to change a nickname? Which\n"
	.string "POKéMON's nickname needs changing?$"

CherryGrove_Pokecenter_Text_ScaleAttendantDeclineToChangeNickname::	
	.string "That's perfectly fine. I think your\n"
	.string "POKéMON's current name suits it too.$"

CherryGrove_Pokecenter_Text_ScaleAttendantChangeThisName::
	.string "Its current name is {STR_VAR_1}.\n"	
	.string "Would you like to give it a new name?$"	

CherryGrove_Pokecenter_Text_ScaleAttendantLetsChangeName::
	.string "I see. And what would you like its new\n"
	.string "name to be?$"

CherryGrove_Pokecenter_Text_ScaleAttendantNameHasBeenChanged::
	.string "Splendid. Then it shall be done. Your\n"	
	.string "POKéMON's new name is {STR_VAR_1}.$"

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
	.string "to apply to your POKéMON?$"

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldBeStatused::
	.string "I see. And which POKéMON would you like\n"
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
	.string "Which POKéMON would you like forget\n"
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
	.string "Oh, dear me. I'm afraid that an EGG\n"
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
	.string "Which POKéMON would you like to teach a\n"
	.string "move to?$"

CherryGrove_Pokecenter_Text_ScaleAttendantTeachWhichMove::
	.string "I see. And which move would you like\n"
	.string "your POKéMON to learn?$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverHeartScale::
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantDontHaveMoveToTeachPokemon::
	.string "Oh, dear me. I'm afraid that POKéMON has\n"
	.string "no old moves that it can learn.$"

CherryGrove_Pokecenter_Text_ScaleAttendantComeBackWithHeartScale::
	.string "Oh, dear me. I'm afraid that you need a\n"
	.string "HEART SCALE to teach a move.$"

CherryGrove_Pokecenter_Text_ScaleAttendantCantTeachEgg::
	.string "Oh, dear me. I'm afraid that an EGG\n"
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
	msgbox CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIVLower, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, CherryGrove_Pokecenter_EventScript_ScaleAttendantExit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIVLower
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

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeAttackIVsLower::

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeDefenseIVsLower::

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialAttackIVsLower::

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpecialDefenseIVsLower::

CherryGrove_Pokecenter_EventScript_ScaleAttendantChangeSpeedIVsLower::

CherryGrove_Pokecenter_EventScript_ScaleAttendantEggCantAdjustIVLower::




CherryGrove_Pokecenter_Text_ScaleAttendantAdjustIVLowerConfirmIVRange::

CherryGrove_Pokecenter_Text_ScaleAttendantWhichMonShouldAdjustIVLower::

CherryGrove_Pokecenter_Text_ScaleAttendantWhichIVShouldBeAdjusted::



@ADJUST IV 19-31 PATH
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

CherryGrove_Pokecenter_EventScript_ScaleAttendantAdjustIVHigher::



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
	.string "enough HEART SCALES for that.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverTwoHeartScales::
	.string "{PLAYER} handed over two HEART SCALES\n"
	.string "in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverThreeHeartScales::
	.string "{PLAYER} handed over three HEART\n"
	.string "SCALES in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantHandedOverFourHeartScales::
	.string "{PLAYER} handed over four HEART\n"
	.string "SCALES in exchange.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSeriousMint::
	.string "You want the SERIOUS MINT, is that\n"
	.string "right? It'll cost you 2 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmBoldMint::
	.string "You want the BOLD MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmImpishMint::
	.string "You want the IMPISH MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmLaxMint::
	.string "You want the LAX MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmRelaxedMint::
	.string "You want the RELAXED MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmCalmMint::
	.string "You want the CALM MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmGentleMint::
	.string "You want the GENTLE MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmCarefulMint::
	.string "You want the CAREFUL MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmSassyMint::
	.string "You want the SASSY MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmBraveMint::
	.string "You want the BRAVE MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmQuietMint::
	.string "You want the QUIET MINT, is that\n"
	.string "right? It'll cost you 3 HEART SCALES.$"

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
	.string "You want the LONELY MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmAdamantMint::
	.string "You want the ADAMANT MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmNaughtyMint::
	.string "You want the NAUGHTY MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmModestMint::
	.string "You want the MODEST MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmMildMint::
	.string "You want the MILD MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmRashMint::
	.string "You want the RASH MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmTimidMint::
	.string "You want the TIMID MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmHastyMint::
	.string "You want the HASTY MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmJollyMint::
	.string "You want the JOLLY MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"

CherryGrove_Pokecenter_Text_ScaleAttendantConfirmNaiveMint::
	.string "You want the NAIVE MINT, is that\n"
	.string "right? It'll cost you 4 HEART SCALES.$"



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














CherryGrove_Pokecenter_EventScript_TMClerk::
	lock
	faceplayer
	giveitem ITEM_TM52
	release
	end




