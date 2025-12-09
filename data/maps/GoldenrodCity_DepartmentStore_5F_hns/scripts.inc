GoldenrodCity_DepartmentStore_5F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0


GoldenrodDeptStore5_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FLass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FPokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Girl::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_Girl, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_RETURN, GoldenrodDeptStore5_EventScript_Receptionist_GiveReturn
	goto_if_unset FLAG_GOT_FRUSTRATION, GoldenrodDeptStore5_EventScript_Receptionist_GiveFrustration
	msgbox GoldenrodDeptStore_Text_5FReceptionistThereAreTMsPerfectForMon, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist_GiveReturn::
	msgbox GoldenrodDeptStore_Text_5FReceptionistTakeThese, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	setflag FLAG_GOT_RETURN
	return

GoldenrodDeptStore5_EventScript_Receptionist_GiveFrustration::
	giveitem ITEM_TM_FRUSTRATION
	setflag FLAG_GOT_FRUSTRATION
	return

GoldenrodDeptStore_Text_5FReceptionistTakeThese:
	.string "Surprise! You're our millionth customer!\p"
	.string "Click here for a free iPho-\n"
	.string "I mean, here's your prize!$"

GoldenrodDeptStore_Text_5FReceptionistThereAreTMsPerfectForMon:
    .string "There are sure to be TMs that are\n"
    .string "just perfect for your POKéMON.$"

GoldenrodDeptStore_Text_5FLass:
    .string "During the day, a lady comes to check\n"
    .string "out POKéMON.\p"
    .string "She even gives away TMs!$"

GoldenrodDeptStore_Text_5FPokefanM:
    .string "You can't rename a POKéMON you get\n"
    .string "in a trade.\p"
    .string "The name is a reflection of the\n"
    .string "original trainer's feelings for it.$"

GoldenrodDeptStore_Text_Girl:
	.string "The lady gave me RETURN!\n"
    .string "My POKéMON must really like me!$"

GoldenrodDeptStore_Text_5FDirectory:
    .string "Customize Your POKéMON\p"
    .string "5F TM CORNER$"

GoldenrodDeptStore_5F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart GoldenrodDeptStore_5F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
GoldenrodDeptStore_5F_Pokemart_DefenseTMs:
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_LIGHT_SCREEN
	pokemartlistend
