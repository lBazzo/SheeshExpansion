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

Route48_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN Route48_Text_PsychicHermanSeen, Route48_Text_PsychicHermanBeaten
	msgbox Route48_Text_PsychicHermanAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_EventScript_Fidel::
	trainerbattle_single TRAINER_FIDEL Route48_Text_PsychicFidelSeen, Route48_Text_PsychicFidelBeaten
	msgbox Route48_Text_PsychicFidelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route48_Text_YoungsterOwenSeen:
	.string "There's no cheating in POKéMON.\p"
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
	.string "I'm going to catch more POKéMON in\n"
	.string "the grass.$"

Route48_Text_PsychicHermanSeen:
	.string "…$"

Route48_Text_PsychicHermanBeaten:
	.string "…$"

Route48_Text_PsychicHermanAfterBattle:
	.string "…\p"
	.string "I lost while I had my eyes closed…$"

Route48_Text_PsychicFidelSeen:
	.string "I can see it…\p"
	.string "Everything to see about you…$"

Route48_Text_PsychicFidelBeaten:
	.string "I couldn't foresee your power…$"

Route48_Text_PsychicFidelAfterBattle:
	.string "Strength in conviction…\p"
	.string "You're strong because you believe\n"
	.string "in your POKéMON.$"

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
	.string "bird POKéMON.$"

Route48_Text_BirdKeeperPerryBeaten:
	.string "You beat me with your speed…$"

Route48_Text_BirdKeeperPerryAfterBattle:
	.string "Your POKéMON are remarkably well-\n"
	.string "trained.$"

Route48_Text_BirdKeeperBretSeen:
	.string "Check out my POKéMON. Just look\n"
	.string "at their coloring and their\l"
	.string "plumage.$"

Route48_Text_BirdKeeperBretBeaten:
	.string "Shoot! Not good enough!$"

Route48_Text_BirdKeeperBretAfterBattle:
	.string "If you groom them, POKéMON get\n"
	.string "happy.$"

