MT_EMBER_1_MapScripts::
	.byte 0
	
Ember_EventScript_BlockedPath::
	waitmovement 0
	msgbox Ember_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Ember_Text_WaitDontComeInHere:
	.string "Brock is still working here.\n"
	.string "I'm afraid you can't pass now.$"
	
Misty_EventScript_BlockedPath::
	msgbox Misty_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Misty_Text_WaitDontComeInHere:
	.string "Misty is currently examining the\n"
	.string "water quality here at Cape Brink.\p"
	.string "I'm afraid you can't pass just now.$"
	
Surge_EventScript_BlockedPath::
	msgbox Surge_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Surge_Text_WaitDontComeInHere:
	.string "Lt. Surge is performing a sweep for\n"
	.string "discarded magnets and traps.\p"
	.string "This area is restricted, kid!$"
	

Erika_EventScript_BlockedPath::
	msgbox Erika_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Erika_Text_WaitDontComeInHere:
	.string "Erika is cataloging the rare flora\n"
	.string "in this flower field.\p"
	.string "Please don't disturb her study!$"
	
Koga_EventScript_BlockedPath::
	msgbox Koga_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Koga_Text_WaitDontComeInHere:
	.string "My master Koga is training in\n"
	.string "complete solitude.\p"
	.string "You must stay back for now!$"
	
Sabrina_EventScript_BlockedPath::
	msgbox Sabrina_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Sabrina_Text_WaitDontComeInHere:
	.string "Sabrina is deep in meditation,\n"
	.string "communing with the Ruin Valley.\p"
	.string "We cannot allow you to\n"
	.string "break her focus.$"
	
Blaine_EventScript_BlockedPath::
	msgbox Blaine_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Blaine_Text_WaitDontComeInHere:
	.string "Blaine is deciphering the ruins\n"
	.string "to find clues about Ancient Pokémon.\p"
	.string "The site is closed to visitors.$"
	
Giovanni_EventScript_BlockedPath::
	msgbox Giovanni_Text_WaitDontComeInHere, MSGBOX_NPC
	end

Giovanni_Text_WaitDontComeInHere:
	.string "We are currently searching\n"
	.string "for a high-profile criminal.\p"
	.string "It's too dangerous to enter!$"

