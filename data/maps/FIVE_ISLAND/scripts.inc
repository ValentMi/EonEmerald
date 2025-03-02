FIVE_ISLAND_MapScripts::
	.byte 0

FiveIsland_EventScript_IslandSign::
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end

FiveIsland_EventScript_BugCatcher::
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end

FiveIsland_EventScript_Fisher::
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end

FiveIsland_House1_EventScript_Woman::
	msgbox FiveIsland_House1_Text_HusbandWentOffFishing, MSGBOX_NPC
	end
	
FiveIsland_House2_EventScript_OldMan::
	msgbox FiveIsland_House2_Text_MeadowBelongedToFamily, MSGBOX_NPC
	end

FiveIsland_Text_IslandSign::
    .string "FIVE ISLAND\n"
    .string "Chrono Island: Where Time Goes$"

FiveIsland_Text_WeirdBuildingInMeadow::
    .string "Oh, this stinks. I wanted to play in\n"
    .string "the MEADOW.\p"
    .string "But they put up a weird building\n"
    .string "on it, so I can't play there.$"

FiveIsland_Text_BeenGettingBusierAroundHere::
    .string "It's been getting busier around\n"
    .string "these parts lately.\p"
    .string "I haven't been catching many good\n"
    .string "fish lately, either.$"

FiveIsland_House1_Text_HusbandWentOffFishing::
    .string "Don't worry about buying anything\n"
    .string "for dinner tonight!\p"
    .string "…That's what my husband said when\n"
    .string "he went off fishing today.\p"
    .string "I'm not sure if I can count on him\n"
    .string "to live up to that promise.$"


FiveIsland_House2_Text_MeadowBelongedToFamily::
    .string "That MEADOW has belonged to our\n"
    .string "family for generations.\p"
    .string "I should have had a giant mansion\n"
    .string "built on it.\p"
    .string "It would be preferable to having\n"
    .string "those thugs run wild on it!$"

