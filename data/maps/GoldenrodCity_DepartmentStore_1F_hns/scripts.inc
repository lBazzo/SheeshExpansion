.set LOCALID_GOLDENROD_CITY_RECEPTIONIST1F, 4

GoldenrodCity_DepartmentStore_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore1_EventScript_Receptionist::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TYPE_BOOSTING_ITEMS, GoldenrodDeptStore1_EventScript_ReceptionistAfter
	msgbox GoldenrodDeptStor1_Text_ReceptionistLuckyDay1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_CITY_RECEPTIONIST1F, Common_Movement_ExclamationMark
	delay 60
	msgbox GoldenrodDeptStor1_Text_ReceptionistLuckyDay2, MSGBOX_DEFAULT
	closemessage
	playfanfare  MUS_HG_OBTAIN_ITEM
	msgbox GoldenrodDeptStor1_Text_ReceptionistObtainedBoostingItems
	waitfanfare
	additem ITEM_BLACK_BELT
	additem ITEM_BLACK_GLASSES
	additem ITEM_CHARCOAL
	additem ITEM_DRAGON_FANG
	additem ITEM_FAIRY_FEATHER
	additem ITEM_HARD_STONE
	additem ITEM_MAGNET
	additem ITEM_METAL_COAT
	additem ITEM_MIRACLE_SEED
	additem ITEM_MYSTIC_WATER
	additem ITEM_NEVER_MELT_ICE
	additem ITEM_POISON_BARB
	additem ITEM_SHARP_BEAK
	additem ITEM_SILK_SCARF
	additem ITEM_SILVER_POWDER
	additem ITEM_SOFT_SAND
	additem ITEM_SPELL_TAG
	additem ITEM_TWISTED_SPOON
	msgbox GoldenrodDeptStor1_Text_ReceptionistLuckyDay3, MSGBOX_DEFAULT
	setflag FLAG_GOT_TYPE_BOOSTING_ITEMS
	closemessage
	release
	end

GoldenrodDeptStore1_EventScript_ReceptionistAfter::
	msgbox GoldenrodDeptStor1_Text_ReceptionistLuckyDay3, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore1_EventScript_Gentleman::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_BugCatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore1_EventScript_Directory::
	lock
	msgbox GoldenrodDeptStore1_Text_Directory, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodDeptStor1_Text_ReceptionistLuckyDay1:
    .string "Welcome to...$"

GoldenrodDeptStor1_Text_ReceptionistLuckyDay2:
	.string "Is that you, {PLAYER}?\p"
	.string "It's me! Your Mom's friend from\n"
	.string "New Bark Town!\p"
	.string "To think you've made it all the way\n"
	.string "here...\p"
	.string "Your Mom will be so proud.\p"
	.string "I've got a few little goodies from her\n"
	.string "to give to you. Promise you'll go back\l"
	.string "sometime to thank her in person, 'kay?$"

GoldenrodDeptStor1_Text_ReceptionistObtainedBoostingItems:
	.string "{PLAYER} obtained the type-boosting items!$"

GoldenrodDeptStor1_Text_ReceptionistLuckyDay3:
	.string "Good luck with your journey!\n"
	.string "We'll always be rooting for you!$"

GoldenrodDeptStor1_Text_Receptionist:
    .string "Welcome to Goldenrod Dept.Store.$"

GoldenrodDeptStore1_Text_Gentleman:
    .string "The Dept.Store has a decent\n"
    .string "selection.\p"
    .string "But some items are only available\n"
    .string "as Game Corner prizes.$"

GoldenrodDeptStore1_Text_PokefanF:
    .string "I'm raring to shop again today!$"

GoldenrodDeptStore1_Text_BugCatcher:
    .string "Mom's good at bargain hunting.\p"
    .string "She always buys stuff at lower\n"
    .string "prices.$"

GoldenrodDeptStore1_Text_Directory:
    .string "1F Service Counter\p"
    .string "2F Trainer's Market\p"
    .string "3F Stone Collection\p"
    .string "4F Unique Evolution\p"
    .string "5F Species Treasures\p"
    .string "6F Tranquil Square\p"
    .string "Rooftop Lookout$"
