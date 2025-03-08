RESORT_GORGEOUS_MapScripts::
	.byte 0

RESORT_GORGEOUS_EventScript_Selphy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SELPHY_EGG, RESORT_GORGEOUS_EventScript_SelphyWishYouBestOfLuck
	msgbox Selphy_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	setflag FLAG_RECEIVED_SELPHY_EGG
	playfanfare MUS_OBTAIN_ITEM
	message FiveIsland_ResortGorgeous_House_Text_ObtainedTheEgg
	waitfanfare
	random 13
	switch VAR_RESULT
	case 0, Script_RandomBabyEgg1
	case 1, Script_RandomBabyEgg2
	case 2, Script_RandomBabyEgg3
	case 3, Script_RandomBabyEgg4
	case 4, Script_RandomBabyEgg5
	case 5, Script_RandomBabyEgg6
	case 6, Script_RandomBabyEgg7
	case 7, Script_RandomBabyEgg8
	case 8, Script_RandomBabyEgg9
	case 9, Script_RandomBabyEgg10
	case 10, Script_RandomBabyEgg0
	case 11, Script_GiveCorsolaEgg
	case 12, Script_GiveEeveeEgg
	release
	end
	
RESORT_GORGEOUS_EventScript_Butler::
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
	end
	
RESORT_GORGEOUS_EventScript_SelphyWishYouBestOfLuck::
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck, MSGBOX_NPC
	end
	
FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
    .string "Butler: The smile of Lady Selphy\n"
    .string "has the brilliance of the sun.\p"
    .string "Please, I beg you to bring joy\n"
    .string "to Lady Selphy.$"
	
Selphy_Text_HaveEggWillYouTakeIt::
    .string "Selphy: Oh?\n"
    .string "Do I know you from somewhere?\p"
    .string "Oh, but that doesn't matter.\p"
    .string "I am exquisitely bored.\n"
    .string "Please, hear my wish.\p"
	.string "I have eggs of rare Pokémon\n"
	.string "that I wish to see.\p"
	.string "So, what do you say?\n"
	.string "Will you help me?$"

FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
    .string "Oh…\n"
    .string "How disappointing.$"

FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
    .string "Selphy: I wish you the best of\n"
    .string "luck.$"

FiveIsland_ResortGorgeous_House_Text_ObtainedTheEgg::
	.string "{PLAYER} received the EGG from\n"
	.string "Selphy.$"

Script_RandomBabyEgg0:
	giveegg SPECIES_TOGEPI
	release
	end
	
Script_RandomBabyEgg1:
	giveegg SPECIES_PICHU
	release
	end
	
Script_RandomBabyEgg2:
	giveegg SPECIES_CLEFFA
	release
	end

Script_RandomBabyEgg3:
	giveegg SPECIES_IGGLYBUFF
	release
	end
	
Script_RandomBabyEgg4:
	giveegg SPECIES_TYROGUE
	release
	end
	
Script_RandomBabyEgg5:
	giveegg SPECIES_SMOOCHUM
	release
	end
	
Script_RandomBabyEgg6:
	giveegg SPECIES_ELEKID
	release
	end
	
Script_RandomBabyEgg7:
	giveegg SPECIES_MAGBY
	release
	end
	
Script_RandomBabyEgg8:
	giveegg SPECIES_EEVEE
	release
	end
	
Script_RandomBabyEgg9:
	giveegg SPECIES_AZURILL
	release
	end
	
Script_RandomBabyEgg10:
	giveegg SPECIES_WYNAUT
	release
	end

Script_GiveCorsolaEgg:
	giveegg SPECIES_CORSOLA
	release
	end
	
Script_GiveEeveeEgg:
	giveegg SPECIES_EEVEE
	release
	end
