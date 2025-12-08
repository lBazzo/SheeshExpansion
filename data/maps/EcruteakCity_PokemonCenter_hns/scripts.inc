.set LOCALID_NURSE, 1

EcruteakCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_PokemonCenter_OnTransition
	.byte 0

EcruteakCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_ECRUTEAK_CITY
	end

EcruteakCity_PokemonCenter_EventScript_Hiker::
	lock
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_PokemonCenter_EventScript_Woman::
	lock
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_PokemonCenter_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_PokemonCenter1F_Text_PokefanM:
	.string "The way the KIMONO GIRLS dance is\n"
	.string "marvelous.\p"
	.string "Just like the way they use their\n"
	.string "POKéMON.$"

EcruteakCity_PokemonCenter1F_Text_PokefanM_Mobile:
	.string "You must be hoping to battle more\n"
	.string "people, right?\p"
	.string "There's apparently some place where\n"
	.string "trainers gather.\p"
	.string "Where, you ask?\p"
	.string "It's a little past OLIVINE CITY.$"

EcruteakCity_PokemonCenter1F_Text_CooltrainerF:
	.string "ERIKA, the GYM LEADER, is soooo\n"
	.string "cool.\p"
	.string "Her POKéMON are really tough too.$"

EcruteakCity_PokemonCenter1F_Text_GymGuide:
	.string "LAKE OF RAGE…\p"
	.string "The appearance of a GYARADOS\n"
	.string "swarm…\p"
	.string "I smell a conspiracy. I know it!$"

