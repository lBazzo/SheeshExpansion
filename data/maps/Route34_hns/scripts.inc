.set LOCALID_ROUTE34_DAYCAREMAN, 12

Route34_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route34_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route34_OnResume @SetTimeEncounters
	.byte 0

Route34_OnTransition: 
	specialvar VAR_RESULT, GetDaycareState
	call_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route34_MapScript_EggReady
	callnative SetTimeBasedEncounters
	end	

Route34_MapScript_EggReady::
	setobjectxyperm LOCALID_ROUTE34_DAYCAREMAN, 30, 34
	return

Route34_OnResume:
	call Route34_EventScript_GauntletCheck
	end

Route34_EventScript_GauntletCheck::
	goto_if_set (TRAINER_FLAGS_START + TRAINER_IAN), Route34_EventScript_SkipGauntletCheck
	goto_if_set (TRAINER_FLAGS_START + TRAINER_BRANDON), Route34_EventScript_GauntletStarted
	callnative SetTimeBasedEncounters
	end
	
Route34_EventScript_SkipGauntletCheck::
	clearflag FLAG_IN_GAUNTLET
	callnative SetTimeBasedEncounters
	end

Route34_EventScript_GauntletStarted::
	setflag FLAG_IN_GAUNTLET
	return

Route34_EventScript_YoungsterSamuel::
	trainerbattle_single TRAINER_SAMUEL Route34_Text_YoungsterSamuel_Seen, Route34_Text_YoungsterSamuel_Beaten
	msgbox Route34_Text_YoungsterSamuel_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_YoungsterIan::
	trainerbattle_single TRAINER_IAN Route34_Text_YoungsterIan_Seen, Route34_Text_YoungsterIan_Beaten
	msgbox Route34_Text_YoungsterIan_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_CamperTodd::
	trainerbattle_single TRAINER_TODD Route34_Text_CamperTodd_Seen, Route34_Text_CamperTodd_Beaten
	msgbox Route34_Text_CamperTodd_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_PicnickerGina::
	trainerbattle_single TRAINER_GINA Route34_Text_PicnickerGina_Seen, Route34_Text_PicnickerGina_Beaten
	msgbox Route34_Text_PicnickerGina_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_OfficerKeith::
	trainerbattle_single TRAINER_GRAVES Route34_Text_OfficerKeith_Seen, Route34_Text_OfficerKeith_Win
	msgbox Route34_Text_OfficerKeith_After, MSGBOX_AUTOCLOSE
	end


Route34_EventScript_PokefanMBrandon::
	trainerbattle_single TRAINER_BRANDON Route34_Text_PokefanBrandon_Seen, Route34_Text_PokefanBrandon_Beaten
	msgbox Route34_Text_PokefanBrandon_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Irene::
	trainerbattle_single TRAINER_IRENE Route34_Text_CooltrainerIrene_Seen, Route34_Text_CooltrainerIrene_Beaten
	msgbox Route34_Text_CooltrainerIrene_After2, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Jenn::
	trainerbattle_single TRAINER_JENN Route34_Text_CooltrainerJenn_Seen, Route34_Text_CooltrainerJenn_Beaten
	msgbox Route34_Text_CooltrainerJenn_After2, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Kate::
	trainerbattle_single TRAINER_KATE Route34_Text_CooltrainerKate_Seen, Route34_Text_CooltrainerKate_Beaten
	msgbox Route34_Text_CooltrainerKate_After, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Sign1::
	lock
	msgbox Route34_Text_Sign_Route34, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Sign2::
	lock
	msgbox Route34_Text_Sign_DayCare, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Sign3::
	lock
	msgbox Route34_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

Route34_EventScript_Item_SoftSand::
	finditem ITEM_SOFT_SAND
	end

Route34_EventScript_Item_SyrupyApple::
	finditem ITEM_SYRUPY_APPLE
	end

Route34_Text_YoungsterSamuel_Seen:
	.string "Hey! I'm looking for Mankey!$"

Route34_Text_YoungsterSamuel_Beaten:
	.string "Beaten by a passing stranger!$"

Route34_Text_YoungsterSamuel_After:
	.string "I'm going to train even harder.\p"
	.string "After all, I'm trying to become\n"
	.string "a Gym Leader.$"

Route34_Text_YoungsterIan_Seen:
	.string "I'm the best in my class at\n"
	.string "Pokémon.$"

Route34_Text_YoungsterIan_Beaten:
	.string "No! There are better trainers…$"

Route34_Text_YoungsterIan_After:
	.string "I'm trying hard so I can be the\n"
	.string "star in my class.$"

Route34_Text_CamperTodd_Seen:
	.string "I'm confident in my ability to\n"
	.string "raise Pokémon.\p"
	.string "Want to see?$"

Route34_Text_CamperTodd_Beaten:
	.string "Did I screw up my training?$"

Route34_Text_CamperTodd_After:
	.string "Maybe I should use some items…$"

Route34_Text_PicnickerGina_Seen:
	.string "Are you a trainer?\p"
	.string "Let's have a practice battle.$"

Route34_Text_PicnickerGina_Beaten:
	.string "Oh, no! I just can't win…$"

Route34_Text_PicnickerGina_After:
	.string "You're too strong to be a\n"
	.string "practice partner.$"

Route34_Text_OfficerKeith_Seen:
	.string "Who goes there?\n"
	.string "What are you up to?$"

Route34_Text_OfficerKeith_Win:
	.string "You're a tough little kid.$"

Route34_Text_OfficerKeith_After:
	.string "Yep, nothing wrong today.\p"
	.string "Be good and stay out of trouble.$"

Route34_Text_OfficerKeith_Daytime:
	.string "I'm on patrol for suspicious\n"
	.string "individuals.$"

Route34_Text_PokefanBrandon_Seen:
	.string "I just got my Pokémon back from\n"
	.string "a training course.\p"
	.string "Let's see how much stronger it got!$"

Route34_Text_PokefanBrandon_Beaten:
	.string "Why does it end this way?$"

Route34_Text_PokefanBrandon_After:
	.string "My Pokémon came back with new moves.\p"
	.string "That confounded me to no end!$"

Route34_Text_Sign_IlexForest:
	.string "Ilex Forest\n"
	.string "Through the Gate$"

Route34_Text_Sign_Route34:
	.string "Route 34\n"
	.string "Goldenrod City - Azalea Town\p"
	.string "Ilex Forest Somewhere Between$"

Route34_Text_TrainerTips:
	.string "Trainer Tips\p"
	.string "Berry trees grow new Berries\n"
	.string "several times a day.\p"
	.string "Note which trees bear which\n"
	.string "Berries.$"

Route34_Text_CooltrainerIrene_Seen:
	.string "Irene: Kyaaah! Someone found us!$"

Route34_Text_CooltrainerIrene_Beaten:
	.string "Irene: Ohhh! You're too strong!$"

Route34_Text_CooltrainerIrene_After1:
	.string "IRENE: My sister KATE will get you\n"
	.string "for this!$"

Route34_Text_CooltrainerIrene_After2:
	.string "IRENE: Isn't this beach great?\p"
	.string "It's our secret little getaway!$"

Route34_Text_CooltrainerJenn_Seen:
	.string "JENN: You can't beat IRENE and go\n"
	.string "unpunished!$"

Route34_Text_CooltrainerJenn_Beaten:
	.string "JENN: So sorry, IRENE! Dear Sis!$"

Route34_Text_CooltrainerJenn_After1:
	.string "JENN: Don't get cocky! My sister\n"
	.string "KATE is tough!$"

Route34_Text_CooltrainerJenn_After2:
	.string "JENN: Sunlight makes your body\n"
	.string "stronger.$"

Route34_Text_CooltrainerKate_Seen:
	.string "KATE: You sure were mean to my\n"
	.string "little sisters!$"

Route34_Text_CooltrainerKate_Beaten:
	.string "KATE: No! I can't believe I lost.$"

Route34_Text_CooltrainerKate_GiveSoftSand:
	.string "KATE: You're too strong. I didn't\n"
	.string "stand a chance. Here, you deserve\n"
	.string "this.$"

Route34_Text_CooltrainerKate_After:
	.string "KATE: I'm sorry we jumped you.\p"
	.string "We never expected anyone to find\n"
	.string "us here. You sure startled us.$"


Route34_Text_Sign_DayCare:
	.string "Day-Care\p"
	.string "Now Closed.$"
