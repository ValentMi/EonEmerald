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
