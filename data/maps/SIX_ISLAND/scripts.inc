SIX_ISLAND_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
	.byte 0
	
SixIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SIX_ISLAND
	end
	
SixIsland_EventScript_Hiker::
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy::
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign::
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end
	
SixIsland_House_EventScript_OldMan::
	msgbox SixIsland_House_Text_GoodPlaceForNatureAndHistory, MSGBOX_NPC
	end
	
SixIsland_House_Text_GoodPlaceForNatureAndHistory::
    .string "There's nothing that young people'd\n"
    .string "find exciting here on this island.\p"
    .string "But, this is a good place in terms\n"
    .string "of nature and history.\p"
    .string "Relax and enjoy your stay.$"


SixIsland_Text_IslandSign::
    .string "SIX ISLAND\n"
    .string "Fortune Island of Aged Wisdom$"

SixIsland_Text_ThatWayToWaterPathRuinValley::
    .string "Keep going this way and you'll get\n"
    .string "to the WATER PATH.\p"
    .string "Stay on that and you'll get to\n"
    .string "the RUIN VALLEY.$"

SixIsland_Text_SkyAtNightIsFantastic::
    .string "When you're this far away from the\n"
    .string "city, the sky at night is fantastic.$"
