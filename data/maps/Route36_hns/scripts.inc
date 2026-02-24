.set LOCALID_ROUTE36_SUDOWOODO, 6
.set LOCALID_ROUTE36_ROCKSMASHGUY, 3
.set LOCALID_ROUTE36_NATURALGIFTUTOR, 1
.set LOCALID_ROUTE36_CHERRIM, 27

Route36_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route36_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route36_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route36_EventScript_RockSmashGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, Route36_EventScript_RockSmashGuy3
	msgbox Route36_Text_RockSmashGuy2, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
Route36_EventScript_RockSmashGuy3::
	msgbox Route36_Text_RockSmashGuy3
	closemessage
	release
	end

Route36_EventScript_Arthur::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HARD_STONE, Route36_EventScript_ArthurCompleted
	msgbox Route36_Text_MeetArthur, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Route36_EventScript_ArthurNope
	case 1, Route36_EventScript_ArthurNope
	case 2, Route36_EventScript_ArthurNope
	case 3, Route36_EventScript_ArthurNope
	case 4, Route36_EventScript_ArthurYes
	case 5, Route36_EventScript_ArthurNope
	case 6, Route36_EventScript_ArthurNope
	case 7, Route36_EventScript_ArthurCancel
	case MULTI_B_PRESSED, Route36_EventScript_ArthurCancel
	closemessage
	release
	end
Route36_EventScript_ArthurYes::
	msgbox Route36_Text_ArthurGivesGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_ArthurNope::
	msgbox Route36_Text_ArthurNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_ArthurCancel::
	closemessage
	release
	end
Route36_EventScript_ArthurCompleted::
	msgbox Route36_Text_ArthurThursday, MSGBOX_DEFAULT
	closemessage
	release
	end


Route36_EventScript_SudoWoodo::
	lock
	msgbox Route36_Text_OddTree, MSGBOX_DEFAULT
	checkitem ITEM_SQUIRT_BOTTLE
	goto_if_eq VAR_RESULT, TRUE, Route36_EventScript_SudoWoodoChoice
	closemessage
	release
	end
Route36_EventScript_SudoWoodoChoice::
	msgbox Route36_Text_UseSquirtbottle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route36_EventScript_SudoWoodoWater
	closemessage
	release
	end
Route36_EventScript_SudoWoodoWater::
	msgbox Route36_Text_UsedSquirtbottle, MSGBOX_DEFAULT
	playse SE_DOWNPOUR
	waitse
	closemessage
	playse SE_SUDOWOODO_SHAKE	
	applymovement LOCALID_ROUTE36_SUDOWOODO, Route36_Movement_SudoWoodo
	waitmovement 0
	faceplayer
	msgbox Route36_Text_SudowoodoAttacked	
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_ROUTE36_SUDOWOODO
	setwildbattle SPECIES_SUDOWOODO, 20
	@setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	@clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route36_EventScript_Defeated_Sudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route36_EventScript_RanSudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route36_EventScript_RanSudowoodo
Route36_EventScript_Defeated_Sudowoodo::
	setflag FLAG_HIDE_SUDOWOODO
	removeobject LOCALID_ROUTE36_SUDOWOODO
	checkitem ITEM_HM_ROCK_SMASH
	call_if_eq VAR_RESULT, FALSE, Route36_EventScript_RockSmashGuySudoWoodo
	release
	end

Route36_EventScript_RanSudowoodo::
	turnobject LOCALID_ROUTE36_SUDOWOODO, DIR_NORTH
	release
	end

Route36_EventScript_RockSmashGuySudoWoodo:
	playse SE_PIN
	applymovement LOCALID_ROUTE36_ROCKSMASHGUY, Common_Movement_ExclamationMark
	turnobject LOCALID_ROUTE36_ROCKSMASHGUY, DIR_WEST
	waitmovement 0
	applymovement LOCALID_ROUTE36_ROCKSMASHGUY, Route36_Movement_RockSmashGuy
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	return

Route36_Movement_RockSmashGuy:
	jump_in_place_left
	delay_2
	jump_in_place_left
	delay_2
	jump_in_place_left
	delay_2
	jump_in_place_left
	step_end

Route36_EventScript_Mark::
	trainerbattle_single TRAINER_MARK Route36_Text_PsychicMarkSeen, Route36_Text_PsychicMarkBeaten
	msgbox Route36_Text_PsychicMarkAfter, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Schoolboy::
	trainerbattle_single TRAINER_ALAN Route36_Text_SchoolboyAlan1Seen, Route36_Text_SchoolboyAlan1Beaten
	msgbox Route36_Text_SchoolboyAlanAfter, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Item_Payback::
	finditem ITEM_TM_PAYBACK
	end

Route36_EventScript_Sign::
	lock
	msgbox Route36_Text_Sign_RuinsNorth, MSGBOX_SIGN
	closemessage
	release
	end

Route36_EventScript_Sign2::
	lock
	msgbox Route36_Text_Tips1, MSGBOX_SIGN
	closemessage
	release
	end

Route36_EventScript_Sign3::
	lock
	msgbox Route36_Text_Sign_HiddenGrottoLeft, MSGBOX_SIGN
	closemessage
	release
	end

Route36_Movement_SudoWoodo:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

Route36_Text_UseSquirtbottle:
	.string "Use Squirtbottle?$"

Route36_Text_UsedSquirtbottle:
	.string "{PLAYER} used the Squirtbottle.$"

Route36_Text_SudowoodoAttacked:
	.string "The weird tree doesn't like the\n"
	.string "Squirtbottle!\p"
	.string "The weird tree attacked!$"

Route36_Text_RockSmashGuy1:
	.string "Wa-hey!\p"
	.string "I was going to snap that tree\n"
	.string "with my straight-arm punch.\p"
	.string "But I couldn't! I'm a failure!$"

Route36_Text_RockSmashGuy2:
	.string "Quick! Take This!$"

Route36_Text_RockSmashGuy3:
	.string "That happens to be Rock Smash.\p"
	.string "You can shatter rocks with just a\n"
	.string "single well-aimed smack.\p"
	.string "If any rocks are in your way,\n"
	.string "just smash 'em up!$"

Route36_Text_OddTree:
	.string "A weird tree is blocking the way.$"

@NATURAL GIFT TUTOR 

Route36_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_GOT_NATURAL_GIFT_BERRIES, Route36_EventScript_NaturalGiftTutor
	goto_if_set FLAG_HIDE_SUDOWOODO, Route36_EventScript_Lass2
	msgbox Route36_Text_Lass1, MSGBOX_DEFAULT
	closemessage
	release
	end
Route36_EventScript_Lass2::
	msgbox Route36_Text_Lass2_ClearedSudowoodo, MSGBOX_DEFAULT
	giveitem ITEM_CUSTAP_BERRY, 1
	giveitem ITEM_KEE_BERRY, 1
	giveitem ITEM_MARANGA_BERRY, 1
	giveitem ITEM_BLUK_BERRY, 3
	giveitem ITEM_NANAB_BERRY, 3
	giveitem ITEM_WEPEAR_BERRY, 3
	giveitem ITEM_PINAP_BERRY, 3
	giveitem ITEM_POMEG_BERRY, 3
	giveitem ITEM_KELPSY_BERRY, 3
	giveitem ITEM_QUALOT_BERRY, 3
	giveitem ITEM_HONDEW_BERRY, 3
	giveitem ITEM_GREPA_BERRY, 3
	giveitem ITEM_TAMATO_BERRY, 3
	giveitem ITEM_CORNN_BERRY, 3
	giveitem ITEM_MAGOST_BERRY, 3
	giveitem ITEM_RABUTA_BERRY, 3
	giveitem ITEM_NOMEL_BERRY, 3
	giveitem ITEM_SPELON_BERRY, 3
	giveitem ITEM_PAMTRE_BERRY, 3
	setflag FLAG_GOT_NATURAL_GIFT_BERRIES
	goto Route36_EventScript_NaturalGiftTutor
	end

Route36_EventScript_NaturalGiftTutor::
	msgbox Route36_Text_LassTeachNaturalGift, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route36_EventScript_NaturalGiftTutorDeclined
	msgbox Route36_Text_NaturalGiftTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_NATURAL_GIFT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route36_EventScript_NaturalGiftTutorDeclined
	applymovement LOCALID_ROUTE36_NATURALGIFTUTOR, Common_Movement_FaceRight
	msgbox Route36_Text_NaturalGiftTutorTeachingNaturalGift, MSGBOX_DEFAULT
	applymovement LOCALID_ROUTE36_NATURALGIFTUTOR, Common_Movement_FacePlayer
	call Route36_EventScript_CherrimTeachPlayer
	goto_if_set FLAG_TALKED_ROUTE36_NATURAL_GIFT_TUTOR, Route36_EventScript_NaturalGiftTutorFriend
	msgbox Route36_Text_NaturalGiftTutorNaturalGiftTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_ROUTE36_NATURAL_GIFT_TUTOR
	closemessage
	release
	end

Route36_EventScript_NaturalGiftTutorDeclined::
	msgbox Route36_Text_NaturalGiftTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

Route36_EventScript_CherrimTeachPlayer::
	applymovement LOCALID_ROUTE36_CHERRIM, Route36_Movement_CherrimTeachPlayer1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_CHERRIM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_ROUTE36_CHERRIM, Route36_Movement_CherrimTeachPlayer2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

Route36_Movement_CherrimTeachPlayer1::
	walk_down
	face_left
	step_end

Route36_Movement_CherrimTeachPlayer2::
	jump_in_place_left
	jump_in_place_left
	face_up
	walk_up
	face_down
	step_end

Route36_EventScript_NaturalGiftTutorFriend::
	msgbox Route36_Text_NaturalGiftTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

Route36_EventScript_Cherrim::
	lock
	faceplayer
	playmoncry SPECIES_CHERRIM, CRY_MODE_NORMAL
	msgbox Route36_Text_Cherrim, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_ROUTE36_CHERRIM, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

Route36_Text_Cherrim:
	.string "Cherrim: Baowaow!$"

Route36_Text_Lass1:
	.string "Be careful at night on this route!\p"
	.string "I saw a Pokémon that looked like\n"
	.string "Growlithe, but it had a scary aura\l"
	.string "to it.$"

Route36_Text_Lass2_ClearedSudowoodo:
	.string "That odd tree disappeared without\n"
	.string "a trace.\p"
	.string "Oh! That tree was really a\n"
	.string "Pokémon?\p"
	.string "Wow, I learned something new today!\p"
	.string "I can teach you something as well.\n"
	.string "Here, take these. And don't eat them!$"

Route36_Text_LassTeachNaturalGift:
	.string "Okay. Now take a deep breath, and let\n"
	.string "yourself become in tune with mother\l"
	.string "nature, accepting her embrace.\p"
	.string "Are you ready to learn how to use\n"
	.string "Natural Gift?$"

Route36_Text_NaturalGiftTutorWhichMon:
	.string "Who will embark on the journey to\n"
	.string "discover inner peace?$"

Route36_Text_NaturalGiftTutorTeachingNaturalGift:
	.string "Cherrim, please guide us back in time\n"
	.string "and return us to our most natural form.$"

Route36_Text_NaturalGiftTutorNaturalGiftTaught:
	.string "There. Don't you feel a huge weight\n"
	.string "being lifted from your shoulders?\p"
	.string "Visit me anytime and I'll help you\n"
	.string "rediscover your natural roots.$"

Route36_Text_NaturalGiftTutorDeclined:
	.string "Oh, I understand.\p"
	.string "Sometimes the temptation to cling to\n"
	.string "your old self can be overpowering.$"

Route36_Text_NaturalGiftTutorFriend:
	.string "You blend into the natural world so\n"
	.string "well, sometimes I have trouble\l"
	.string "separating you from the birds and the\l"
	.string "trees that surround us.\p"
	.string "I hope you may maintain that state for\n"
	.string "as long as you live.$"



Route36_Text_PsychicMarkSeen:
	.string "I'm going to read your thoughts!$"

Route36_Text_PsychicMarkBeaten:
	.string "I misread you!$"

Route36_Text_PsychicMarkAfter:
	.string "I'd be strong if only I could tell\n"
	.string "what my opponent was thinking.$"

Route36_Text_SchoolboyAlan1Seen:
	.string "Thanks to my studies, I'm ready\n"
	.string "for any Pokémon!$"

Route36_Text_SchoolboyAlan1Beaten:
	.string "Oops! Computation error?$"

Route36_Text_SchoolboyAlanAfter:
	.string "Darn. I study five hours a day too.\p"
	.string "There's more to learning than just\n"
	.string "reading books.$"

Route36_Text_MeetArthur:
	.string "Arthur: Who are you?\n"
	.string "I'm Arthur of the Weekday Family.\p"
	.string "If you can guess my favorite day,\n"
	.string "I'll give you nothing.$"

Route36_Text_ArthurNope:
	.string "Not quite!$"

Route36_Text_ArthurGivesGift:
	.string "Yup.$"

Route36_Text_ArthurThursday:
	.string "Arthur: I'm Arthur of Thursday.\n"
	.string "I'm the fifth son out of seven.$"

Route36_Text_Sign:
	.string "Route 36$"

Route36_Text_Sign_RuinsNorth:
	.string "Ruins of Alph\n"
	.string "North Entrance$"

Route36_Text_Tips1:
	.string "Trainer Tips\n"
	.string "Pokémon stats vary--even within\l"
	.string "the same species.\p"
	.string "Their stats may be similar at first.\p"
	.string "However, differences will become\n"
	.string "pronounced as the Pokémon grow.$"

Route36_Text_Tips2:
	.string "Trainer Tips\n"
	.string "Use Dig to return to the entrance of\n"
	.string "any place.\p"
	.string "It is convenient for exploring\n"
	.string "caves and other landmarks.$"

Route36_EventScript_Jack::
	trainerbattle_single TRAINER_JACK Route36_Text_SchoolboyJack1_Seen, Route36_Text_SchoolboyJack1_Beaten
	msgbox Route36_Text_SchoolboyJack_After, MSGBOX_AUTOCLOSE
	end

Route36_Text_SchoolboyJack1_Seen:
	.string "The world of Pokémon is deep.\p"
	.string "There are still lots of things we\n"
	.string "don't know.\p"
	.string "But I know more than you do!$"

Route36_Text_SchoolboyJack1_Beaten:
	.string "Wha-wha-what?$"

Route36_Text_SchoolboyJack_After:
	.string "There is a lot to learn.\p"
	.string "For example…\p"
	.string "There are 50 kinds of TMs.\p"
	.string "Traded Pokémon level up faster.$"

Route36_EventScript_Beverly::
	trainerbattle_single TRAINER_BEVERLY Route36_Text_PokefanFBeverly1_Seen, Route36_Text_PokefanFBeverly1_Beaten
	msgbox Route36_Text_PokefanFBeverly_After, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM Route36_Text_PokefanmWilliam_Seen, Route36_Text_PokefanmWilliam_Beaten
	msgbox Route36_Text_PokefanmWilliam_After, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Krise::
	trainerbattle_single TRAINER_KRISE Route36_Text_LassKrise_Seen, Route36_Text_LassKrise_Beaten
	msgbox Route36_Text_LassKrise_After, MSGBOX_AUTOCLOSE
	end

Route36_Text_PokefanFBeverly1_Seen:
	.string "My Pokémon are simply darling.\p"
	.string "Let me tell you how proud my\n"
	.string "darlings make me.$"

Route36_Text_PokefanFBeverly1_Beaten:
	.string "I can beat you in pride, but…$"

Route36_Text_PokefanFBeverly_After:
	.string "I must say, your Pokémon are quite\n"
	.string "cute, too.$"

Route36_Text_PokefanmWilliam_Seen:
	.string "We adore our Pokémon, even if they\n"
	.string "dislike us.\p"
	.string "That's what being a FAN is about.$"

Route36_Text_PokefanmWilliam_Beaten:
	.string "M-my Pokémon!$"

Route36_Text_PokefanmWilliam_After:
	.string "I lost the battle, but my Pokémon win\n"
	.string "the prize for being most lovely.$"

Route36_Text_LassKrise_Seen:
	.string "Hello? Why are you staring at me?\p"
	.string "Oh, a battle?$"

Route36_Text_LassKrise_Beaten:
	.string "…Hmmm…$"

Route36_Text_LassKrise_After:
	.string "I thought you were staring at me\n"
	.string "because I'm cute!$"

Route36_Text_Sign_HiddenGrottoLeft:
	.string "Hidden Grotto on your left$"






