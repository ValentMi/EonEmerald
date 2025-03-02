DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DEWFORD_EGG, DewfordTown_House1_EventScript_LifeGoesSlowly
	msgbox DewfordTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	setflag FLAG_RECEIVED_DEWFORD_EGG
	playfanfare MUS_OBTAIN_ITEM
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	random 11
	switch VAR_RESULT
	case 0, Script_RandomWaterEgg1
	case 1, Script_RandomWaterEgg2
	case 2, Script_RandomWaterEgg3
	case 3, Script_RandomWaterEgg4
	case 4, Script_RandomWaterEgg5
	case 5, Script_RandomWaterEgg6
	case 6, Script_RandomWaterEgg7
	case 7, Script_RandomWaterEgg8
	case 8, Script_RandomWaterEgg9
	case 9, Script_RandomWaterEgg10
	case 10, Script_RandomWaterEgg0
	release
	end
	
DewfordTown_House1_EventScript_LifeGoesSlowly::
msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_DEFAULT

DewfordTown_Text_HaveEggWillYouTakeIt:
	.string "Oh, what can I do with this?\n"
	.string "I found an EGG by the shore.\p"
	.string "You are a TRAINER, yes?\n"
	.string "And your POKéMON seem happy.\p"
	.string "So, what do you think?\n"
	.string "Will you take this EGG to hatch?$"

DewfordTown_EventScript_NoRoomForEgg::
	msgbox DewfordTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end
	
DewfordTown_Text_NoRoomForThisEgg:
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKéMON and the family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"

DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: Guguuh!$"


Script_RandomWaterEgg0:
	giveegg SPECIES_HORSEA
	release
	end
	
Script_RandomWaterEgg1:
	giveegg SPECIES_GOLDEEN
	release
	end
	
Script_RandomWaterEgg2:
	giveegg SPECIES_STARYU
	release
	end

Script_RandomWaterEgg3:
	giveegg SPECIES_BARBOACH
	release
	end
	
Script_RandomWaterEgg4:
	giveegg SPECIES_PSYDUCK
	release
	end
	
Script_RandomWaterEgg5:
	giveegg SPECIES_CORPHISH
	release
	end
	
Script_RandomWaterEgg6:
	giveegg SPECIES_BARBOACH
	release
	end
	
Script_RandomWaterEgg7:
	giveegg SPECIES_CARVANHA
	release
	end
	
Script_RandomWaterEgg8:
	giveegg SPECIES_FEEBAS
	release
	end
	
Script_RandomWaterEgg9:
	giveegg SPECIES_WAILMER
	release
	end
	
Script_RandomWaterEgg10:
	giveegg SPECIES_CHINCHOU
	release
	end