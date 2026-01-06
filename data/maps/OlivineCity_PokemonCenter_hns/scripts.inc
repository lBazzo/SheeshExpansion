.set LOCALID_NURSE, 1

OlivineCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_PokemonCenter_OnTransition
	.byte 0

OlivineCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_OLIVINE_CITY
	end

OlivineCity_EventScript_Fisher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokecenterFisher, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Teacher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokecenterTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_PokecenterFisher:
	.string "The SAILOR in the OLIVINE CAFE\n"
	.string "next door is really generous.\p"
	.string "He taught my POKéMON STRENGTH.\p"
	.string "Now it can move big boulders\n"
	.string "without breaking a sweat.$"

OlivineCity_Text_PokecenterTeacher:
	.string "There's a person in CIANWOOD\n"
	.string "CITY across the sea.\p"
	.string "I heard him bragging about his\n"
	.string "rare POKéMON all the time.$"

OlivineCity_EventScript_StarterFreeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_STARTER_FREE_TUTOR, OlivineCity_EventScript_StarterFreeTutorPostIntro
	msgbox OlivineCity_Text_PokecenterStarterFreeTutorIntro, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_TALKED_STARTER_FREE_TUTOR
	goto OlivineCity_EventScript_StarterFreeTutorPostIntro
	end

OlivineCity_EventScript_StarterFreeTutorPostIntro::
	msgbox OlivineCity_Text_PokecenterStarterFreeTutorChooseRelearnMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, OlivineCity_EventScript_StarterFreeTutorExit
	special CheckIsSheeshSilverStarter
	goto_if_eq VAR_RESULT, FALSE, OlivineCity_EventScript_StarterFreeTutorCantTeachMon
	goto OlivineCity_EventScript_StarterFreeTutorChooseMove
	end

OlivineCity_EventScript_StarterFreeTutorChooseMove::
	msgbox OlivineCity_Text_PokecenterStarterFreeTutorChooseWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, OlivineCity_EventScript_StarterFreeTutorPostIntro
	msgbox OlivineCity_Text_PokecenterStarterFreeTutorMoveTaught, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_StarterFreeTutorCantTeachMon::
	msgbox OlivineCity_Text_PokecenterStarterFreeTutorCantTeachMon, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_StarterFreeTutorExit::
	msgbox OlivineCity_Text_PokecenterStarterFreeTutorExit, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_PokecenterStarterFreeTutorIntro:
	.string "Your starter POKéMON is your best\n"
	.string "friend, am I right?\p"
	.string "Yup, I'm right! You know what's good!\p"
	.string "Maybe it's not the POKéMON you finish\n"
	.string "your journey with, or the one you bring\l"
	.string "to the most battles, but no one knows\l"
	.string "you like your stater does!\p"
	.string "These days, though, trainers don't\n"
	.string "always keep their starter POKéMON with\l"
	.string "them anymore.\p"
	.string "That makes me sad...\p"
	.string "Which is why I'm willing to teach your\n"
	.string "starter POKéMON any move it can learn,\l"
	.string "free of charge.\p"
	.string "This way, you two can fight alongside\n"
	.string "each other as much as possible.\p"
	.string "Just don't tell that stingy attendant\n"
	.string "over there about our deal, capiche?\p"
	.string "He won't be very happy to hear I'm\n"
	.string "depriving him of his precious HEART\l"
	.string "SCALES.\p"
	.string "Not that I have any idea what he does\n"
	.string "with them all...$"

OlivineCity_Text_PokecenterStarterFreeTutorChooseRelearnMon:
	.string "Let's get to it! Show me the starter you\n"
	.string "share an unbreakable bond with!$"

OlivineCity_Text_PokecenterStarterFreeTutorChooseWhichMove:
	.string "That's the one! So, what move should I\n"
	.string "teach to your best bud?$"

OlivineCity_Text_PokecenterStarterFreeTutorMoveTaught:
	.string "Hah, you got it! The move has been\n"
	.string "taught. Your buddy looks stronger, too!$"

OlivineCity_Text_PokecenterStarterFreeTutorCantTeachMon:
	.string "Bah! Think you can fool me, do you?\p"
	.string "I know a bond between starter and\n"
	.string "trainer when I see one, and let me tell\l"
	.string "you, bucko, this one ain't it!$"

OlivineCity_Text_PokecenterStarterFreeTutorExit:
	.string "Nothing, huh? Well, that's cool too.\p"
	.string "Sometimes the best thing to do is stick\n"
	.string "with what you've got, am I right?\l"
	.string "Yup, I'm right! You know what's good!$"
