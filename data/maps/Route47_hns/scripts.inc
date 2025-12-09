Route47_hns_MapScripts::
	.byte 0


Route47_EventScript_Hiker::
	trainerbattle_single TRAINER_DEVIN, Route47_Text_HikerSeen, Route47_Text_HikerBeaten
	msgbox Route47_Text_HikerAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_HikerSeen::
	.string "Longing for others is...\n"
	.string "what it is. \p"
	.string "But battles are battles,\n"
	.string "so let's go!$"

Route47_Text_HikerBeaten::
	.string "Wahaha!$"

Route47_Text_HikerAfter::
	.string "After a battle you should always leave\n"
	.string "with a parting laugh!$"

Route47_EventScript_Camper::
	trainerbattle_single TRAINER_GRANT, Route47_Text_CamperSeen, Route47_Text_CamperBeaten
	msgbox Route47_Text_CamperAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_CamperSeen::
	.string "I'm not good with large crowds, so\n"
	.string "I'm camping out here with my\l"
	.string "POKéMON!$"

Route47_Text_CamperBeaten::
	.string "I should be headed deeper into the\n"
	.string "mountain I guess...$"

Route47_Text_CamperAfter::
	.string "See ya!$"

Route47_EventScript_Thom::
	trainerbattle_double TRAINER_THOM_AND_KAE, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Kae::
	trainerbattle_double TRAINER_THOM_AND_KAE, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple1Seen::
	.string "THOM: One plus one is two. But the\n"
	.string "two of us together is much\l"
	.string "stronger!\p"
	.string "KAE: The two of us aren't just some\n"
	.string "boring pair!$"

Route47_Text_Couple1Beaten::
	.string "THOM: That wasn't what I expected.\l"
	.string "KAE: You're unusual too!$"

Route47_Text_Couple1After1::
	.string "THOM: It seems your power is\n"
	.string "impossible to predict!$"

Route47_Text_Couple1After2::
	.string "KAE: I figured you were an ordinary\n"
	.string "lone trainer. Boy was I wrong!$"

Route47_EventScript_Duff::
	trainerbattle_double TRAINER_DUFF_AND_EDA, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple2After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Eda::
	trainerbattle_double TRAINER_DUFF_AND_EDA, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox Route47_Text_Couple2After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple2Seen::
	.string "DUFF: Watching over my girlfriend\n"
	.string "makes my heart soar!\p"
	.string "EDA: My heart's feelings for my\n"
	.string "boyfriend are as wide and deep\l"
	.string "the ocean!$"

Route47_Text_Couple2Beaten::
	.string "DUFF: I was no match for you...\l"
	.string "EDA: You are really something...$"

Route47_Text_Couple2After1::
	.string "DUFF: Thank you for the awe-\n"
	.string "inspiring battle! Bye!$"

Route47_Text_Couple2After2::
	.string "EDA: You should really find a\n"
	.string "wonderful partner, too!$"

Route47_EventScript_Sage::
	lock
	faceplayer
	msgbox EmbeddedTower_Text_OldManIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

EmbeddedTower_Text_OldManIntro:
	.string "Well, hello!\p"
	.string "It's said that past this hole used to\n"
	.string "be a huge tower reaching far into\l"
	.string "the sky.\p"
	.string "They say that it was a rather strange\n"
	.string "tower with half of it embedded\l"
	.string "in the cliff.\p"
	.string "It was not just a tall tower reaching\n"
	.string "up to the sky, but also reaching deep\l"
	.string "down underground!\p"
	.string "It is rumored that it even reached\n"
	.string "the bottom of the ocean!\p"
	.string "In short, the ruins used to connect\n"
	.string "the sky, the land, and the sea to\l"
	.string "each other...\p"
	.string "Most of the tower is now crumbled,\n"
	.string "and the only things that remain are\l"
	.string "the entrance and its interior, where\l"
	.string "you'll see strange patterns.$"

Route47_EventScript_Item_Pearl::
    finditem ITEM_PEARL
    end

Route47_EventScript_Item_Revive::
    finditem ITEM_REVIVE
    end

Route47_EventScript_Item_WhiteFlute::
    finditem ITEM_WHITE_FLUTE
    end

Route47_EventScript_Item_Stardust::
	finditem ITEM_STARDUST
	end

Route47_EventScript_Item_LuckyPunch::
	finditem ITEM_LUCKY_PUNCH
	end

Route47_EventScript_Chinchou::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHINCHOU, CRY_MODE_NORMAL
	msgbox Route47_Text_Chinchou, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route47_Text_Chinchou:
	.string "CHINCHOU: Chou!$"

Route47_EventScript_Heidi::
	trainerbattle_single TRAINER_HEIDI Route47_Text_PicnickerHeidiSeen, Route47_Text_PicnickerHeidiBeaten
	msgbox Route47_Text_PicnickerHeidiAfter, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Edna::
	trainerbattle_single TRAINER_EDNA Route47_Text_PicnickerEdnaSeen, Route47_Text_PicnickerEdnaBeaten
	msgbox Route47_Text_PicnickerEdnaAfter, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Tim::
	trainerbattle_single TRAINER_TIM Route47_Text_HikerTimSeen, Route47_Text_HikerTimBeaten
	msgbox Route47_Text_HikerTimAfter, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Sidney::
	trainerbattle_single TRAINER_SIDNEY Route47_Text_HikerSidneySeen, Route47_Text_HikerSidneyBeaten
	msgbox Route47_Text_HikerSidneyAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_PicnickerHeidiSeen:
	.string "Have you ever been to a picnic?\p"
	.string "They're so much fun!$"

Route47_Text_PicnickerHeidiBeaten:
	.string "Ohhhh!$"

Route47_Text_PicnickerHeidiAfter:
	.string "We bake lots of goodies and share\n"
	.string "them all around.\p"
	.string "They're delicious!$"

Route47_Text_PicnickerEdnaSeen:
	.string "People shouldn't leave any litter\n"
	.string "behind.$"

Route47_Text_PicnickerEdnaBeaten:
	.string "Ohh… I lost…$"

Route47_Text_PicnickerEdnaAfter:
	.string "Conserving energy is important,\n"
	.string "but the environment is even more\l"
	.string "vital.$"

Route47_Text_HikerTimSeen:
	.string "She'll be coming 'round MT.SILVER\n"
	.string "when she comes…\p"
	.string "MT.SILVER is in JOHTO, right?$"

Route47_Text_HikerTimBeaten:
	.string "I was too busy singing…$"

Route47_Text_HikerTimAfter:
	.string "Battles are about concentration.$"

Route47_Text_HikerSidneySeen:
	.string "I'll tell you a secret.\p"
	.string "But first, we battle!$"

Route47_Text_HikerSidneyBeaten:
	.string "Oh, dang! I lost that…$"

Route47_Text_HikerSidneyAfter:
	.string "The SAFARI ZONE is just up ahead.$"
