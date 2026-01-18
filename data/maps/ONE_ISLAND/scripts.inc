ONE_ISLAND_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
	.byte 0
OneIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_ONE_ISLAND
	end
	
OneIsland_EventScript_OldManLinkHoenn::
	lock
	faceplayer
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
	release
	end

OneIsland_EventScript_BaldingMan::
	lock
	faceplayer
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
	release
	end

OneIsland_EventScript_IslandSign::
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
	end
	
OneIsland_House1_EventScript_OldMan::
	msgbox OneIsland_House1_Text_GazeUponVolcanoOnSunnyDays, MSGBOX_NPC
	end

OneIsland_House1_EventScript_OldWoman::
	msgbox OneIsland_House1_Text_LastTimeMtEmberErupted, MSGBOX_NPC
	end
	
OneIsland_House2_EventScript_Lass::
	msgbox OneIsland_House2_Text_IWantToStayHereForever, MSGBOX_NPC
	end
	
OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
	lockall
	fadescreen FADE_TO_WHITE
	special HealPlayerParty
	fadescreen FADE_FROM_WHITE
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
	setvar VAR_TEMP_1, 1
	releaseall
	end
	
OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
	lock
	faceplayer
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
	release
	end
	
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
	end

OneIsland_PokemonCenter_1F_EventScript_Hiker::
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
	lock
	faceplayer
	msgbox OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
	release
	end
	
OneIsland_TreasureBeach_EventScript_Boy::
    lock
    faceplayer
    msgbox OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach, MSGBOX_DEFAULT
    release
    end

OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach:
    .string "Good things get washed up by the\n"
    .string "ocean current onto this beach.\p"
    .string "That's why I often come here for\n"
    .string "some beachcombing.$"
	
OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt::
    .string "Oh, you're a stranger here!\n"
    .string "Hi! Where did you come from?\p"
    .string "…LITTLEROOT TOWN?\n"
    .string "I don't know it!$"

OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland::
    .string "On this island, there's an enormous\n"
    .string "volcano.\p"
    .string "It hasn't erupted lately, so why\n"
    .string "not enjoy a hike?$"

OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend::
    .string "I wish I could trade POKéMON with\n"
    .string "my boyfriend who lives far away…$"

OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend::
    .string "I traded POKéMON with my boyfriend\n"
    .string "far away!$"

OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore::
    .string "Hm!\n"
    .string "Haaaaaaaaaaah!\p"
    .string "Aaaah! This is heavenly!\n"
    .string "The water warms me to my core!\p"
    .string "You should jump in, too.\p"
    .string "Go to the middle, relax, and get\n"
    .string "good and warm!$"

OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder::
    .string "My favorite part of bathing comes\n"
    .string "up right after this.\p"
    .string "I enjoy a bowl of chowder to\n"
    .string "warm me from the inside, too!$"

OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed::
    .string "The water is perfectly warm.\n"
    .string "It feels exquisite…\p"
    .string "{PLAYER} and the POKéMON were\n"
    .string "fully refreshed!$"

OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic::
    .string "Soaking in a hot spring pool is\n"
    .string "therapeutic, people say.$"

OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs::
    .string "Have a look at my face.\n"
    .string "See how smooth my skin is?\p"
    .string "The hot spring's water keeps my\n"
    .string "skin younger than my age.$"

OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion::
    .string "After an honest day of training,\n"
    .string "nothing beats a relaxing soak in\l"
    .string "the hot spring pool.\p"
    .string "BRUNO, who's a senior ahead of me,\n"
    .string "visits the SPA on occasion.\p"
    .string "He comes to rehab injuries, both\n"
    .string "his own and his POKéMON's.$"

OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa::
    .string "Hot springs go hand-in-hand with\n"
    .string "volcanoes.\p"
    .string "The EMBER SPA here, well,\n"
    .string "I made it years ago.\p"
    .string "I hewed the pool right out of a\n"
    .string "gigantic boulder by hand.\p"
    .string "I was using this at the time.\n"
    .string "I suppose I can part with it.$"

OneIsland_House2_Text_IWantToStayHereForever::
    .string "Young people all want to go off to\n"
    .string "big cities.\p"
    .string "But I want to stay here forever!$"
	
OneIsland_House1_Text_GazeUponVolcanoOnSunnyDays::
    .string "On sunny days, I step out and gaze\n"
    .string "upon the volcano.\p"
    .string "That's my daily routine.$"

OneIsland_House1_Text_LastTimeMtEmberErupted::
    .string "Let me think… When was the last\n"
    .string "time MT. EMBER erupted?$"
	
OneIsland_Text_HavePCLinkageWithHoenn::
    .string "My granddaughter was in a tizzy\n"
    .string "over a new breakthrough.\p"
    .string "She said we finally have PC linkage\n"
    .string "with people in HOENN.\p"
    .string "I'm not sure what that means, but\n"
    .string "CELIO is quite the man.\p"
    .string "He would make a fine husband for\n"
    .string "my granddaughter!$"

OneIsland_Text_IslandSign::
    .string "ONE ISLAND\n"
    .string "Friends Gather at Knot Island$"

OneIsland_Text_IsntWarmClimateHereGreat::
    .string "Hi, sight-seeing, are you?\n"
    .string "Isn't the warm climate here great?$"
