AzaleaTown_Mart_hns_MapScripts::
	.byte 0

AzaleaTown_Mart_EventScriptCooltrainerM::
	lock
	faceplayer
	msgbox AzaleaMart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Mart_EventScriptBugCatcher::
	lock
	faceplayer
	msgbox AzaleaMart_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaMart_Text_CooltrainerM:
	.string "Are you able to buy a Great Ball?\n"
	.string "All I can buy are Poké Balls.\p"
	.string "I heard that more items become\n"
	.string "available to buy when you earn\l"
	.string "Gym Badges!\p"
	.string "I wish Kurt would make me some\n"
	.string "of his custom Balls.$"

AzaleaMart_Text_BugCatcher:
	.string "A Great Ball is better for catch-\n"
	.string "ing Pokémon than a Poké Ball.\p"
	.string "But Kurt's might be better some-\n"
	.string "times.$"

AzaleaMart_Pokemart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart AzaleaMart_Pokemart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 3
AzaleaMart_Pokemart_Pokemart:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE
	release
	end

