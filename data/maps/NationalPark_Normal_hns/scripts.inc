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

NationalPark_Normal_EventScript_TeacherStickyBarbAndOrbs::
	lock
	faceplayer
	goto_if_set FLAG_GOT_STICKY_BARB_AND_ORBS, NationalPark_Normal_EventScript_TeacherStickyBarbAndOrbs2
	msgbox NationalPark_Normal_Text_Teacher1, MSGBOX_DEFAULT
	giveitem ITEM_STICKY_BARB
	giveitem ITEM_TOXIC_ORB
	giveitem ITEM_FLAME_ORB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_GOT_STICKY_BARB_AND_ORBS
	goto NationalPark_Normal_EventScript_TeacherStickyBarbAndOrbs2
	end

NationalPark_Normal_EventScript_TeacherStickyBarbAndOrbs2::
	msgbox NationalPark_Normal_Text_Teacher1_StickyBarbAndOrbs, MSGBOX_DEFAULT
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
	.string "want you to have these.$"

NationalPark_Normal_Text_Teacher1_StickyBarbAndOrbs:
	.string "A POKéMON holding those items will\n"
	.string "experience adverse effects, but\l"
	.string "sometimes, a negative can become a\l"
	.string "positive.\p"
	.string "A studious trainer will know when a\n"
	.string "drawback can become a strength.$"

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

NationalPark_Normal_EventScript_Zoom_Lens::
	finditem ITEM_ZOOM_LENS
	end

NationalPark_Normal_EventScript_Item_Wide_Lens::
	finditem ITEM_WIDE_LENS
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
