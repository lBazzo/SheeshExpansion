.set LOCALID_OLIVINE_SILVER, 4
.set LOCALID_OLIVINE_DAHLIA, 24
.set LOCALID_OLIVINE_ELEMENTAL_TUTOR, 25
.set LOCALID_OLIVINE_CASTFORM, 26

OlivineCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

OlivineCity_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	call_if_set FLAG_LIGHTHOUSE_TOO_DARK, OlivineCity_MapScript_UnsetLighthouseTooDarkFlag
	goto_if_set FLAG_DEFEATED_DAHLIA, OlivineCity_MapScript_ClearWeather
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

OlivineCity_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

OlivineCity_MapScript_UnsetLighthouseTooDarkFlag::
	clearflag FLAG_LIGHTHOUSE_TOO_DARK
	return

OlivineCity_EventScript_CityTrigger:: @FLAGHEAP
	setflag FLAG_HIDE_OLIVINE_CITY_GYM_LEADERS
	setflag FLAG_HIDE_OLIVINE_SILVER
	@setflag FLAG_VISITED_OLIVINE_CITY
	clearflag FLAG_SAFARI_ZONE_WEST_EXPANSION
	clearflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	clearflag FLAG_HIDE_BATTLEFRONTIER_ENGINEER
	clearflag FLAG_HIDE_LIGHTHOUSE_JASMINE
	clearflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	clearflag FLAG_HIDE_OLIVINE_DAHLIA
	clearflag FLAG_HIDE_OLIVINE_STEVEN
	clearflag FLAG_STEVEN_INTRO_DONE
	clearflag FLAG_DEFEATED_DAHLIA
	setvar VAR_GETFLY, 0
	
	setvar VAR_OLIVINE_CITY_STATE, 1
	setvar VAR_DAHLIA_STATE, 1

	@cianwood flags
	setvar VAR_SUICUNE_ENCOUNTERS, 1
	clearflag FLAG_HIDE_CIANWOOD_SUICUNE
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setvar VAR_CIANWOOD_CITY_STATE, 1
	end

OlivineCity_EventScript_SilverTrigger::
	lock
	clearflag FLAG_HIDE_OLIVINE_SILVER
	opendoor 11, 27
	addobject LOCALID_OLIVINE_SILVER
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	delay 20 
	closedoor 11, 27
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 28, OlivineCity_EventScript_SilverWalkToPlayer1
	call_if_eq VAR_TEMP_1, 29, OlivineCity_EventScript_SilverWalkToPlayer2
	call_if_eq VAR_TEMP_1, 30, OlivineCity_EventScript_SilverWalkToPlayer3
	msgbox OlivineCity_Text_SilverEncounter, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 28, OlivineCity_EventScript_SilverLeaveAdjust1
	call_if_eq VAR_TEMP_1, 29, OlivineCity_EventScript_SilverLeaveAdjust2
	call_if_eq VAR_TEMP_1, 30, OlivineCity_EventScript_SilverLeaveAdjust2
	applymovement LOCALID_OLIVINE_SILVER, OlivineCity_Movement_SilverLeave
	waitmovement 0
	setvar VAR_OLIVINE_CITY_STATE, 2
	setflag FLAG_HIDE_OLIVINE_SILVER
	setflag FLAG_VISITED_OLIVINE_CITY
	removeobject LOCALID_OLIVINE_SILVER
	fadedefaultbgm
	release
	end

OlivineCity_EventScript_SilverWalkToPlayer1::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer1
	waitmovement 0
	return

OlivineCity_EventScript_SilverWalkToPlayer2::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer2
	waitmovement 0
	return

OlivineCity_EventScript_SilverWalkToPlayer3::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer3
	waitmovement 0
	return

OlivineCity_EventScript_SilverLeaveAdjust1::
	applymovement LOCALID_OLIVINE_SILVER Common_Movement_WalkDown1
	waitmovement 0
	return

OlivineCity_EventScript_SilverLeaveAdjust2::
	applymovement LOCALID_OLIVINE_SILVER Common_Movement_WalkUp1
	waitmovement 0
	return

OlivineCity_Movement_SilverWalkToPlayer1:
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_SilverWalkToPlayer2:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_SilverWalkToPlayer3:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

OlivineCity_Movement_SilverLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OlivineCity_Text_SilverEncounter:
	.string "You again?\n"
	.string "There's no need to be alert.\p"
	.string "I don't bother with wimps\n"
	.string "like you.\p"
	.string "Speaking of weaklings, the\n"
	.string "old Gym Leader isn't here,\l"
	.string "and is supposedly taking care\l"
	.string "of a sick Pokémon at the\l"
	.string "Lighthouse.\p"
	.string "Humph! Boo-hoo!\n"
	.string "Just let sick Pokémon go!\p"
	.string "A Pokémon that can't battle\n"
	.string "is worthless!\p"
	.string "Why don't you go train at the\n"
	.string "Lighthouse?\p"
	.string "Who knows? It may make you a\n"
	.string "bit of a better Trainer!$"

OlivineCity_EventScript_DahliaTrigger::
	lock
	playse SE_PIN
	applymovement LOCALID_OLIVINE_DAHLIA, Common_Movement_ExclamationMark
	delay 60
	playbgm MUS_HG_B_ARCADE, TRUE
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 45, OlivineCity_EventScript_DahliaWalkToPlayer1
	call_if_eq VAR_TEMP_1, 46, OlivineCity_EventScript_DahliaWalkToPlayer2
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_DahliaWalkToPlayer3
	@goto_if_eq VAR_DAHLIA_STATE, 2, OlivineCity_EventScript_EncounterDahliaPostIntro
	goto OlivineCity_EventScript_EncounterDahlia

OlivineCity_EventScript_DahliaWalkToPlayer1::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkToPlayer1
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkToPlayer2::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkToPlayer2
	waitmovement 0
	return

OlivineCity_EventScript_DahliaWalkToPlayer3::
	applymovement LOCALID_OLIVINE_DAHLIA OlivineCity_Movement_DahliaWalkToPlayer3
	waitmovement 0
	return

OlivineCity_Movement_DahliaWalkToPlayer1::
	walk_up
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaWalkToPlayer2::
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaWalkToPlayer3::
	walk_down
	walk_right
	walk_right
	step_end

OlivineCity_Movement_DahliaExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

OlivineCity_EventScript_EncounterDahlia::
	setvar VAR_DAHLIA_STATE, 2
	msgbox OlivineCity_Text_DahliaEncounter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_DAHLIA, Common_Movement_FaceLeft
	waitmovement 0
	msgbox OlivineCity_Text_DahliaEncounter2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_DAHLIA, Common_Movement_FaceRight
	waitmovement 0
	msgbox OlivineCity_Text_DahliaEncounter3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_DAHLIA, OlivineCity_Movement_DahliaExit
	waitmovement 0
	setflag FLAG_HIDE_OLIVINE_DAHLIA
	removeobject LOCALID_OLIVINE_DAHLIA
	setflag FLAG_LIGHTHOUSE_TOO_DARK
	setvar VAR_TERA_B2B_COUNTER, 1
	fadedefaultbgm
	release
	end

OlivineCity_Text_DahliaEncounter:
	.string "...Aha!\p"
	.string "I knew it! A strong trainer, lucky me!\p"
	.string "You're exactly the kind of person I was\n"
	.string "looking to run into. Let me explain.\p"
	.string "My name is Dahlia. I run the Battle\n"
	.string "Arcade in a land far away from here.\p"
	.string "Dahlia: You've seen how the Olivine\n"
	.string "Lighthouse has gone dark, right?\p"
	.string "Well, not to make this all about me or\n"
	.string "anything, but we'd actually just set up\l"
	.string "a new area south of the Battle Tower\l"
	.string "hoping to test out a new type of battle\l"
	.string "style using terastallization!\p"
	.string "But with the sea being so dark, it's far\n"
	.string "too dangerous even for powerful\l"
	.string "trainers to gather here right now...\p"
	.string "So!\p"
	.string "That's why your arrival here is perfect\n"
	.string "timing!\p"
	.string "It'll take a little while for them to put\n"
	.string "the emergency lighting in place, so why\l"
	.string "don't you come and take our challenge?$"

OlivineCity_Text_DahliaEncounter2:
	.string "Its just straight ahead from here to\n"
	.string "the Battle Tower. You can't miss it.$"

OlivineCity_Text_DahliaEncounter3:
	.string "Don't keep me waiting too long! I look\n"
	.string "forward to seeing how you battle!$"










OlivineCity_EventScript_Sailor1::
	lock
	faceplayer
	msgbox OlivineCity_Text_Sailor1, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Sailor2::
	lock
	faceplayer
	msgbox OlivineCity_Text_Sailor2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox OlivineCity_Text_YoungsterPokegear, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Machoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox OlivineCity_Text_Machoke, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OlivineCity_EventScript_Sign::
	lock
	msgbox OlivineCity_Text_Sign, MSGBOX_SIGN
	end

OlivineCity_EventScript_PortSign::
	lock
	msgbox OlivineCity_Text_PortSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_CafeSign::
	msgbox OlivineCity_Text_CafeSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_GymSign::
	lock
	msgbox OlivineCity_Text_GymSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_LighthouseSign::
	lock
	msgbox OlivineCity_Text_LighthouseSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_Item_Shockwave::
	finditem ITEM_TM_WILL_O_WISP
	end

OlivineCity_EventScript_EonTicketWoman::
	lock
	faceplayer
	checkitem ITEM_AURORA_TICKET
	goto_if_eq VAR_RESULT, TRUE, OlivineCity_EventScript_EonTicketWomanAfter
	goto_if_set FLAG_IS_KANTO_CHAMPION, OlivineCity_EventScript_EonTicketWomanChamp
	msgbox OlivineCity_Text_EonTicketWoman1, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_EonTicketWomanChamp::
	msgbox OlivineCity_Text_EonTicketWoman2, MSGBOX_DEFAULT
	giveitem ITEM_AURORA_TICKET
	closemessage
	release
	end

OlivineCity_EventScript_EonTicketWomanAfter::
	msgbox OlivineCity_Text_EonTicketWoman3, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_CafeSign:
	.string "Olivine Cafe\n"
	.string "Where Strong Sailors Enjoy\l"
	.string "Hearty Meals of Strength$"

OlivineCity_Text_EonTicketWoman1:
	.string "My name is Mary!\p"
	.string "Just kidding, but I love Mary's\n"
	.string "radio show!$"

OlivineCity_Text_EonTicketWoman2:
	.string "You must be {PLAYER}!!!\p"
	.string "Oh my goodness! The champion!\p"
	.string "I heard about you on Mary's\n"
	.string "radio show!\p"
	.string "Here, take this!$"

OlivineCity_Text_EonTicketWoman3:
	.string "I can't believe I met the\n"
	.string "champion!!!$"

OlivineCity_Text_Sailor1:
	.string "Dark roads are dangerous\n"
	.string "at night.\p"
	.string "But in the pitch-black of\n"
	.string "night, the sea is even more\l"
	.string "treacherous!\p"
	.string "Without the beacon of the\n"
	.string "Lighthouse to guide it,\l"
	.string "no ship can sail.$"

OlivineCity_Text_YoungsterPokegear:
	.string "That thing you have--\n"
	.string "it's a Pokégear, right?\l"
	.string "Wow, that's cool.$"

OlivineCity_Text_YoungsterPokedex:
	.string "Wow, you have a Pokédex!\p"
	.string "That is just so awesome.$"

OlivineCity_Text_Sailor2:
	.string "The league had Jasmine\n"
	.string "pegged as the sixth\l"
	.string "strongest Gym Leader!\p"
	.string "Hah! That's a load of crud.\p"
	.string "There's no way Pryce could\n"
	.string "hurt Jasmine's Steel-type\l"
	.string "Pokémon!\p"
	.string "Bureaucracy if you ask me.\p"
	.string "She's something to be feared,\n"
	.string "that's for sure!\p"
	.string "It's not surprising that she's\n"
	.string "part of the Elite Four now.$"

OlivineCity_Text_Sign:
	.string "Olivine City\p"
	.string "The Port Closest to Foreign Lands$"

OlivineCity_Text_PortSign:
	.string "Olivine Port\n"
	.string "Fast Ship Pier$"

OlivineCity_Text_GymSign:
	.string "Olivine City Pokémon Gym\n"
	.string "Leaders: Blaine & Surge\p"
	.string "The Hot and Shocking Duo$"

OlivineCity_Text_LighthouseSign:
	.string "Olivine Lighthouse\n"
	.string "Also known as the Glitter\l"
	.string "Lighthouse$"

OlivineCity_Text_BattleTowerSign:
	.string "Battle Tower Ahead\n"
	.string "Opening Now!$"

OlivineCity_Text_Machoke:
	.string "Machoke: Cho!$"













@ELEMENTAL TUTOR 
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

OlivineCity_EventScript_Castform::
	lock
	faceplayer
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
	msgbox OlivineCity_Text_Castform, MSGBOX_DEFAULT
	waitmoncry
	applymovement LOCALID_OLIVINE_CASTFORM, Common_Movement_FaceDown
	waitmovement 0
	closemessage
	release
	end

OlivineCity_Text_Castform:
	.string "Castform: Wapapapapawap!$"

OlivineCity_EventScript_ElementalTutor::
	lock
	faceplayer
	msgbox OlivineCity_Text_ElementalTutorLetMeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_EventScript_ElementalTutorDeclined
	msgbox OlivineCity_Text_ElementalTutorWhichMove, MSGBOX_DEFAULT
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_ELEMENTAL_TUTOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, OlivineCity_EventScript_ElementalTutorThunder
	case 1, OlivineCity_EventScript_ElementalTutorBlizzard
	case 2, OlivineCity_EventScript_ElementalTutorFireBlast
	case 3, OlivineCity_EventScript_ElementalTutorHydroPump
	case 4, OlivineCity_EventScript_ElementalTutorHurricane
	case 5, OlivineCity_EventScript_ElementalTutorNaturePower
	case 6, OlivineCity_EventScript_ElementalTutorDeclined
	case MULTI_B_PRESSED, OlivineCity_EventScript_ElementalTutorDeclined
	end

OlivineCity_EventScript_ElementalTutorThunder::
	msgbox OlivineCity_Text_ElementalTutorThunderWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_THUNDER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox OlivineCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 48, OlivineCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, OlivineCity_EventScript_ElementalTutorFriend
	msgbox OlivineCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorBlizzard::
	msgbox OlivineCity_Text_ElementalTutorBlizzardWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BLIZZARD
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox OlivineCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 48, OlivineCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, OlivineCity_EventScript_ElementalTutorFriend
	msgbox OlivineCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorFireBlast::
	msgbox OlivineCity_Text_ElementalTutorFireBlastWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FIRE_BLAST
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox OlivineCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 48, OlivineCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, OlivineCity_EventScript_ElementalTutorFriend
	msgbox OlivineCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorHydroPump::
	msgbox OlivineCity_Text_ElementalTutorHydroPumpWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox OlivineCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 48, OlivineCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, OlivineCity_EventScript_ElementalTutorFriend
	msgbox OlivineCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorHurricane::
	msgbox OlivineCity_Text_ElementalTutorHurricaneWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HURRICANE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox OlivineCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 48, OlivineCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, OlivineCity_EventScript_ElementalTutorFriend
	msgbox OlivineCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorNaturePower::
	msgbox OlivineCity_Text_ElementalTutorNaturePowerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_NATURE_POWER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_ElementalTutorDeclined
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FaceRight
	msgbox OlivineCity_Text_ElementalTutorTeachingMove, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OLIVINE_ELEMENTAL_TUTOR, Common_Movement_FacePlayer
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 48, OlivineCity_EventScript_ElementalTutorTeachPlayerBelow
	call_if_eq VAR_TEMP_1, 47, OlivineCity_EventScript_ElementalTutorTeachPlayerLeft
	goto_if_set FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR, OlivineCity_EventScript_ElementalTutorFriend
	msgbox OlivineCity_Text_ElementalTutorMoveTaught, MSGBOX_DEFAULT
	setflag FLAG_TALKED_OLIVINE_CITY_ELEMENTAL_TUTOR
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorFriend::
	msgbox OlivineCity_Text_ElementalTutorFriend, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_ElementalTutorTeachPlayerBelow::
	applymovement LOCALID_OLIVINE_CASTFORM, OlivineCity_Movement_TeachPlayerBelow1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_OLIVINE_CASTFORM, OlivineCity_Movement_TeachPlayerBelow2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	return

OlivineCity_Movement_TeachPlayerBelow1::
	walk_down
	face_left
	step_end

OlivineCity_Movement_TeachPlayerBelow2::
	jump_in_place_left
	jump_in_place_left
	walk_up
	face_down
	step_end

OlivineCity_EventScript_ElementalTutorTeachPlayerLeft::
	applymovement LOCALID_OLIVINE_CASTFORM, OlivineCity_Movement_TeachPlayerLeft1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	playmoncry SPECIES_CASTFORM, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_OLIVINE_CASTFORM, OlivineCity_Movement_TeachPlayerLeft2
	playse SE_LEDGE
	delay 16
	playse SE_LEDGE
	delay 16
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

OlivineCity_Movement_TeachPlayerLeft1::
	walk_down
	walk_left
	walk_left
	face_up
	step_end

OlivineCity_Movement_TeachPlayerLeft2::
	jump_in_place_up
	jump_in_place_up
	walk_right
	walk_right
	walk_up
	face_down
	step_end

OlivineCity_EventScript_ElementalTutorDeclined::
	msgbox OlivineCity_Text_ElementalTutorDeclined, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_ElementalTutorDeclined::
	.string "Quite. The elements will guide you from\n"
	.string "where you are... to where you will be...\l"
	.string "whether you are aware of it or not.$"

OlivineCity_Text_ElementalTutorLetMeTeach:
	.string "Can you feel it?\p"
	.string "The elements... they're all around us.\n"
	.string "Always changing, always growing...\p"
	.string "Embrace them, and their power may\n"
	.string "become yours. Shall it be so?$"

OlivineCity_Text_ElementalTutorWhichMove:
	.string "Mmm... I wonder... what is it they have in\n"
	.string "store for you?$"

OlivineCity_Text_ElementalTutorThunderWhichMon:
	.string "Yes, I see it now. So, for Thunder...\n"
	.string "That means our agent of change is...?$"

OlivineCity_Text_ElementalTutorBlizzardWhichMon:
	.string "Yes, I see it now. So, for Blizzard...\n"
	.string "That means our agent of change is...?$"

OlivineCity_Text_ElementalTutorFireBlastWhichMon:
	.string "Yes, I see it now. So, for Fire Blast...\n"
	.string "That means our agent of change is...?$"

OlivineCity_Text_ElementalTutorHydroPumpWhichMon:
	.string "Yes, I see it now. So, for Hydro Pump...\n"
	.string "That means our agent of change is...?$"

OlivineCity_Text_ElementalTutorHurricaneWhichMon:
	.string "Yes, I see it now. So, for Hurricane...\n"
	.string "That means our agent of change is...?$"

OlivineCity_Text_ElementalTutorNaturePowerWhichMon:
	.string "Yes, I see it now. So, for Nature Power...\n"
	.string "That means our agent of change is...?$"

OlivineCity_Text_ElementalTutorTeachingMove:
	.string "Castform, my dear. May you act as our\n"
	.string "beacon of alteration once more...$"

OlivineCity_Text_ElementalTutorMoveTaught:
	.string "...You think me mad, do you not?\p"
	.string "It is alright to be sincere. I already\n"
	.string "know it is so.\p"
	.string "Yet as long as the elements call for\n"
	.string "you, I shall be your guide, if they so\l"
	.string "wish it.$"

OlivineCity_Text_ElementalTutorFriend:
	.string "Curious that we should cross paths so\n"
	.string "frequently, and yet, it will at some\l"
	.string "point be the last time.\p"
	.string "But that's alright. The things most\n"
	.string "worth having in life are often fleeting\l"
	.string "in this way.\p"
	.string "Best enjoy the breeze while it lasts...$"

