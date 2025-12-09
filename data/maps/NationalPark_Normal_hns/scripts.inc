NationalPark_Normal_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NationalPark_Normal_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

NationalPark_Normal_OnTransition: 
	callnative SetTimeBasedEncounters
	end

NationalPark_Normal_EventScript_Lass::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Youngster1::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Youngster2::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Teacher2::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Teacher2, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

NationalPark_Normal_EventScript_TeacherQuickclaw::
	lock
	faceplayer
	goto_if_set FLAG_GOT_QUICK_CLAW, NationalPark_Normal_EventScript_TeacherQuickclaw2
	msgbox NationalPark_Normal_Text_Teacher1, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_GOT_QUICK_CLAW
NationalPark_Normal_EventScript_TeacherQuickclaw2::
	msgbox NationalPark_Normal_Text_Teacher1_QuickClaw, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Persian::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PERSIAN, CRY_MODE_NORMAL
	msgbox NationalPark_Normal_Text_Persian, MSGBOX_DEFAULT
	waitmoncry
	release
	end



NationalPark_Normal_Text_Lass:
	.string "Look! Check out my bag!\p"
	.string "I printed out my favorites from my\n"
	.string "POKéDEX and stuck them on my bag.$"

NationalPark_Normal_Text_PokefanF:
	.string "This is MAIL I got from my daughter.\n"
	.string "It cheers me up.$"

NationalPark_Normal_Text_Teacher1:
	.string "Pay attention, please!\p"
	.string "…Oops, I have to quit thinking like\n"
	.string "a teacher all the time.\p"
	.string "You must be a POKéMON trainer.\p"
	.string "Since you're working so hard, I\n"
	.string "want you to have this.$"

NationalPark_Normal_Text_Teacher1_QuickClaw:
	.string "Let a POKéMON hold that QUICK CLAW.\p"
	.string "Sometimes it will strike first\n"
	.string "during battle.$"

NationalPark_Normal_Text_Youngster1:
	.string "I'm playing with stickers I printed\n"
	.string "from my POKéDEX.$"

NationalPark_Normal_Text_Youngster2:
	.string "I get the other guy's POKéDEX sticker\n"
	.string "if I win.$"

NationalPark_Normal_Text_Teacher2:
	.string "I take walks in the PARK, but I\n"
	.string "never go into the grass.\p"
	.string "Trainers always want to battle…\p"
	.string "You must have been in many battles.\n"
	.string "Let me heal your POKéMON for you.$"

NationalPark_Normal_Text_Persian:
	.string "PERSIAN: Fufushaa!$"

NationalPark_Normal_EventScript_TM_Dig::
	finditem ITEM_TM_DIG
	end

NationalPark_Normal_EventScript_Item_Soothe_Bell::
	finditem ITEM_SOOTHE_BELL
	end

NationalPark_Normal_Text_Sign_RelaxationSquare:
	.string "RELAXATION SQUARE\n"
	.string "NATIONAL PARK$"

NationalPark_Normal_Text_Sign_BattleNotice:
	.string "What is this notice?\p"
	.string "Please battle only in the grass.\p"
	.string "NATIONAL PARK WARDEN'S OFFICE$"

NationalPark_Normal_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Print out MAIL by opening it then\n"
	.string "pressing START.$"
