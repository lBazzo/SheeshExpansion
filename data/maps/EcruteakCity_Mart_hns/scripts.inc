EcruteakCity_Mart_hns_MapScripts::
	.byte 0

EcruteakCity_Mart_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakMart_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Mart_EventScript_Granny::
	lock
	faceplayer
	msgbox EcruteakMart_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakMart_Text_SuperNerd:
	.string "My Eevee evolved into an Espeon.\p"
	.string "But my friend's Eevee turned into\n"
	.string "an Umbreon.\p"
	.string "I wonder why? We both were raising\n"
	.string "our Eevee in the same way…$"

EcruteakMart_Text_Granny:
	.string "If you use Revive, a Pokémon that's\n"
	.string "fainted will wake right up.$"

EcruteakMart_Pokemart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EcruteakMart_Pokemart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 3
EcruteakMart_Pokemart_Pokemart:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_ETHER
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_BLACK_AUGURITE
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_NONE
	release
	end
