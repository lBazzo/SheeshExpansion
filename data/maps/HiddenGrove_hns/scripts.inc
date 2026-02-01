HiddenGrove_hns_MapScripts::
	.byte 0

HiddenGrove_EventScript_Item_AuspiciousArmor::
	finditem ITEM_AUSPICIOUS_ARMOR
	end

HiddenGrove_EventScript_Item_MaliciousArmor::
	finditem ITEM_MALICIOUS_ARMOR
	end

HiddenGrove_EventScript_Sign::
	lock
	msgbox HiddenGrove_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end	

HiddenGrove_Text_Sign:
	.string "Please help yourself!\p"
	.string "I fashioned both types of armor to see\n"
	.string "which my little Charlie, the Charcadet,\l"
	.string "wanted to evolve with.\p"
	.string "As it turns out, he's happy as can be\n"
	.string "being spoiled as a little baby, and we're\l"
	.string "happy to spoil him forever, so there's\l"
	.string "no need for him to evolve at all!\p"
	.string "If you have a Charcadet that loves to\n"
	.string "battle, please feel free to put this\l"
	.string "armor to good use!$"
