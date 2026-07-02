Route48_hns_MapScripts::
	.byte 0

Route48_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN Route48_Text_YoungsterOwenSeen, Route48_Text_YoungsterOwenBeaten
	msgbox Route48_Text_YoungsterOwenAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_EventScript_Jason::
	trainerbattle_single TRAINER_JASON Route48_Text_YoungsterJasonSeen, Route48_Text_YoungsterJasonBeaten
	msgbox Route48_Text_YoungsterJasonAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_EventScript_Fidel::
	trainerbattle_single TRAINER_FIDEL Route48_Text_PsychicFidelSeen, Route48_Text_PsychicFidelBeaten
	msgbox Route48_Text_PsychicFidelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_Text_YoungsterOwenSeen:
	.string "There's no cheating in Pokémon.\p"
	.string "Let's keep it fair and square!$"

Route48_Text_YoungsterOwenBeaten:
	.string "Huh? How did this happen?$"

Route48_Text_YoungsterOwenAfterBattle:
	.string "I fought fair and square with\n"
	.string "honor.\p"
	.string "I don't regret this at all.$"

Route48_Text_YoungsterJasonSeen:
	.string "It itches and tickles a bit when\n"
	.string "I wear shorts in the grass.$"

Route48_Text_YoungsterJasonBeaten:
	.string "Aiyaaah! I got stomped!$"

Route48_Text_YoungsterJasonAfterBattle:
	.string "I'm going to catch more Pokémon in\n"
	.string "the grass.$"

Route48_EventScript_Seth::
	trainerbattle_single TRAINER_RENJI Route48_Text_SwimmermSethSeen, Route48_Text_SwimmermSethBeaten
	msgbox Route48_Text_SwimmermSethAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_Text_SwimmermSethSeen:
	.string "I came here to be all depressed wrapped\n"
	.string "up in how much my life sucks, and now\l"
	.string "this jolly dude comes next to me\l"
	.string "talking about loving everything.\p"
	.string "Please, let's end this battle quickly.$"

Route48_Text_SwimmermSethBeaten:
	.string "Finally.\n"
	.string "Thank goodness that's over.$"

Route48_Text_SwimmermSethAfterBattle:
	.string "Now I can go back to my brooding.\n"
	.string "Thanks, kid.$"

Route48_Text_PsychicFidelSeen:
	.string "The taste of the mountain air…\n"
	.string "Isn't it wonderful?$"

Route48_Text_PsychicFidelBeaten:
	.string "Ah well…$"

Route48_Text_PsychicFidelAfterBattle:
	.string "It's hard to be in a bad mood when\n"
	.string "It's such a nice day out, isn't it?$"

Route48_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY Route48_Text_BirdKeeperPerrySeen, Route48_Text_BirdKeeperPerryBeaten
	msgbox Route48_Text_BirdKeeperPerryAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_EventScript_Bret::
	trainerbattle_single TRAINER_BRET Route48_Text_BirdKeeperBretSeen, Route48_Text_BirdKeeperBretBeaten
	msgbox Route48_Text_BirdKeeperBretAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_Text_BirdKeeperPerrySeen:
	.string "Agility is the key attribute of\n"
	.string "my Pokémon.$"

Route48_Text_BirdKeeperPerryBeaten:
	.string "You beat me with your speed…$"

Route48_Text_BirdKeeperPerryAfterBattle:
	.string "Your Pokémon are remarkably well-\n"
	.string "trained.$"

Route48_Text_BirdKeeperBretSeen:
	.string "Check out my Pokémon. Just look\n"
	.string "at their coloring and their\l"
	.string "plumage.$"

Route48_Text_BirdKeeperBretBeaten:
	.string "Shoot! Not good enough!$"

Route48_Text_BirdKeeperBretAfterBattle:
	.string "If you groom them, Pokémon get\n"
	.string "happy.$"

