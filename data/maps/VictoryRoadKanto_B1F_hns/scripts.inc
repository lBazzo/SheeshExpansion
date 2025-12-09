VictoryRoadKanto_B1F_hns_MapScripts::
	.byte 0

VictoryRoadKanto_B1F_EventScript_Item_FullRestore::
	finditem ITEM_FULL_RESTORE
	end
VictoryRoadKanto_B1F_EventScript_Item_HpUp::
	finditem ITEM_HP_UP
	end
VictoryRoadKanto_B1F_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end

VictoryRoadKanto_B1F_EventScript_Horton::
	trainerbattle_single TRAINER_HORTON VictoryRoadKanto_B1F_Text_JugglerHortonSeen, VictoryRoadKanto_B1F_Text_JugglerHortonBeaten
	msgbox VictoryRoadKanto_B1F_Text_JugglerHortonAfter, MSGBOX_AUTOCLOSE
	end

VictoryRoadKanto_B1F_EventScript_Jared::
	trainerbattle_single TRAINER_JARED VictoryRoadKanto_B1F_Text_PsychicJaredSeen, VictoryRoadKanto_B1F_Text_PsychicJaredBeaten
	msgbox VictoryRoadKanto_B1F_Text_PsychicJaredAfter, MSGBOX_AUTOCLOSE
	end

VictoryRoadKanto_B1F_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA VictoryRoadKanto_B1F_Text_MediumRebeccaSeen, VictoryRoadKanto_B1F_Text_MediumRebeccaBeaten
	msgbox VictoryRoadKanto_B1F_Text_MediumRebeccaAfter, MSGBOX_AUTOCLOSE
	end

VictoryRoadKanto_B1F_EventScript_Franklin::
	trainerbattle_single TRAINER_FRANKLIN VictoryRoadKanto_B1F_Text_PsychicFranklinSeen, VictoryRoadKanto_B1F_Text_PsychicFranklinBeaten
	msgbox VictoryRoadKanto_B1F_Text_PsychicFranklinAfter, MSGBOX_AUTOCLOSE
	end

VictoryRoadKanto_B1F_Text_JugglerHortonSeen:
	.string "I'm going to take you down!\n"
	.string "Prepare to be shocked!$"

VictoryRoadKanto_B1F_Text_JugglerHortonBeaten:
	.string "Gwaaah! I was overpowered…$"

VictoryRoadKanto_B1F_Text_JugglerHortonAfter:
	.string "Don't get too comfortable about\n"
	.string "beating me…$"

VictoryRoadKanto_B1F_Text_PsychicJaredSeen:
	.string "Challenging me means taking on a\n"
	.string "LEGENDARY POKéMON!\l"
	.string "Doesn't that terrify you?$"

VictoryRoadKanto_B1F_Text_PsychicJaredBeaten:
	.string "I was no match…$"

VictoryRoadKanto_B1F_Text_PsychicJaredAfter:
	.string "I guess if all I have going for me is my\n"
	.string "LEGENDARY POKéMON, then I don't\l"
	.string "deserve to win with it.$"

VictoryRoadKanto_B1F_Text_MediumRebeccaSeen:
	.string "The power of all those you\n"
	.string "defeated comes to me!$"

VictoryRoadKanto_B1F_Text_MediumRebeccaBeaten:
	.string "Strong… Far too strong…$"

VictoryRoadKanto_B1F_Text_MediumRebeccaAfter:
	.string "What is the source of your power?$"

VictoryRoadKanto_B1F_Text_PsychicFranklinSeen:
	.string "Psychic power is the power of\n"
	.string "your soul.$"

VictoryRoadKanto_B1F_Text_PsychicFranklinBeaten:
	.string "Your soul has more power than\n"
	.string "mine!$"

VictoryRoadKanto_B1F_Text_PsychicFranklinAfter:
	.string "You made your soul stronger, not\n"
	.string "just your abilities.$"

















