SEVEN_ISLAND_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	.byte 0
	
SevenIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_EventScript_IslandSign::
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end

SevenIsland_EventScript_OldWoman::
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end

SevenIsland_EventScript_Scientist::
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end
	
SevenIsland_EventScript_SwordsDanceTutor::
	lock
	faceplayer
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, TUTOR_MOVE_SWORDS_DANCE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
	goto EventScript_SwordsDanceTaught
	end

EventScript_SwordsDanceDeclined::
	msgbox Text_SwordsDanceDeclined
	release
	end

EventScript_SwordsDanceTaught::
	msgbox Text_SwordsDanceTaught
	release
	end

	
Text_SwordsDanceTeach::
    .string "Not many people come out here.\p"
    .string "If I train here, I'm convinced that\n"
    .string "I'll get stronger and stronger.\p"
    .string "Yep, stronger and stronger…\p"
    .string "How would you like to learn a move\n"
    .string "like that? It's SWORDS DANCE.$"

Text_SwordsDanceDeclined::
    .string "Well, that's fine, too.$"

Text_SwordsDanceWhichMon::
    .string "All right, pick which POKéMON\n"
    .string "I should teach it to.$"

Text_SwordsDanceReteach::
    .string "I'm still trying to get stronger\n"
    .string "and stronger…\p"
    .string "I've heard that vitamins strengthen\n"
    .string "POKéMON, but they're so expensive!\p"
    .string "So, I started charging ¥5000 to\n"
    .string "teach other POKéMON SWORDS DANCE.$"

Text_SwordsDanceReteach2::
    .string "Would you like me to teach your\n"
    .string "POKéMON the move SWORDS DANCE?$"

Text_SwordsDanceNotEnoughMoney::
    .string "You don't have ¥5000?\p"
    .string "I'm sorry, but I need the money\n"
    .string "to make my POKéMON strong.\p"
    .string "I'll teach SWORDS DANCE to you\n"
    .string "when you come back with enough.$"

Text_SwordsDanceTaught::
    .string "If only we could keep getting\n"
    .string "stronger and stronger, eh?$"

SevenIsland_Text_IslandSign::
    .string "SEVEN ISLAND\n"
    .string "Quest Island of Infinity$"

SevenIsland_Text_IslandsMadeInSevenDays::
    .string "These islands are called the SEVII\n"
    .string "ISLANDS because there are seven.\p"
    .string "…Or at least that's what the young\n"
    .string "people believe.\p"
    .string "The truth is, these islands are so\n"
    .string "named because they are said to\l"
    .string "have been made in seven days.$"

SevenIsland_Text_IslandVirtuallyUntouched::
    .string "This island has been left virtually\n"
    .string "untouched in its natural state.\p"
    .string "It could be a little difficult to\n"
    .string "hike around because of that.$"

SevenIsland_Text_FadedWriting::
    .string "The writing is too faded to read…$"

SevenIsland_Text_BattleHouseWithNoVisitors::
    .string "BATTLE HOUSE\n"
    .string "…The sign-in sheet is empty.$"

SevenIsland_Text_BattleHouseOneVisitor::
    .string "BATTLE HOUSE\n"
    .string "There is one person signed in:\p"
    .string "{STR_VAR_1}.$"

SevenIsland_Text_BattleHouseTwoVisitors::
    .string "BATTLE HOUSE\n"
    .string "There are two people signed in:\p"
    .string "{STR_VAR_1}.$"

SevenIsland_Text_BattleHouseThreeVisitors::
    .string "BATTLE HOUSE\n"
    .string "There are three people signed in:\p"
    .string "{STR_VAR_1}.$"

SevenIsland_Text_BattleHouseFourVisitors::
    .string "BATTLE HOUSE\n"
    .string "There are four people signed in:\p"
    .string "{STR_VAR_1}.$"

SevenIsland_Text_BattleHouseFiveVisitors::
    .string "BATTLE HOUSE\n"
    .string "There are five people signed in:\p"
    .string "{STR_VAR_1}.$"

SevenIsland_Text_BattleHouseSixVisitors::
    .string "BATTLE HOUSE\n"
    .string "There are six people signed in:\p"
    .string "{STR_VAR_1}.$"

SevenIsland_Text_BattleHouseSevenVisitors::
    .string "BATTLE HOUSE\n"
    .string "There are seven people signed in:\p"
    .string "{STR_VAR_1}.$"
