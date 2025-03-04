THREE_ISLAND_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
	.byte 0
	
ThreeIsland_EventScript_Woman::
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
	end

ThreeIsland_EventScript_LittleBoy::
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
	end
	
ThreeIsland_EventScript_IslandSign::
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
	end

ThreeIsland_EventScript_Biker6::
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
	end
	
ThreeIsland_BondBridge_EventScript_BerryForestSign::
	msgbox ThreeIsland_BondBridge_Text_BerryForestAhead, MSGBOX_SIGN
	end

ThreeIsland_BondBridge_EventScript_BondBridgeSign::
	msgbox ThreeIsland_BondBridge_Text_BondBridgeSign, MSGBOX_SIGN
	end
	
ThreeIsland_House1_EventScript_Lostelle::
	lock
	faceplayer
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
	release
	end

ThreeIsland_House1_EventScript_DisplayCase::
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
	end
	
ThreeIsland_House2_EventScript_Rocker::
	msgbox ThreeIsland_House2_Text_CantMakeThisSpoonBend, MSGBOX_NPC
	end
	
ThreeIsland_House2_EventScript_Man::
	lock
	faceplayer
	msgbox ThreeIsland_House2_Text_IAdmireSabrina
	release
	end
	
ThreeIsland_House3_EventScript_Beauty::
	msgbox ThreeIsland_House3_Text_WantedToLiveSomewhereQuiet, MSGBOX_NPC
	end
	
ThreeIsland_House4_EventScript_BaldingMan::
	msgbox ThreeIsland_House4_Text_GhostsInBerryForest, MSGBOX_NPC
	end

ThreeIsland_House4_EventScript_LittleBoy::
	msgbox ThreeIsland_House4_Text_PapaKeepsLyingToMe, MSGBOX_NPC
	end
	
ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
	release
	end
	
ThreeIsland_Mart_EventScript_Picnicker::
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
	end

ThreeIsland_Mart_EventScript_BugCatcher::
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
	end

ThreeIsland_Mart_EventScript_Youngster::
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end
	
ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Lass::
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
	end
	
ThreeIsland_Port_EventScript_WomanLostelleFound::
	lock
	faceplayer
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
	release
	end
	
ThreeIsland_Port_EventScript_Biker1::
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
	end

ThreeIsland_Port_EventScript_Biker2::
	lock
	msgbox ThreeIsland_Port_Text_ForkOverMoney
	release
	end
	
ThreeIsland_Port_Text_WereKantoRiderFederation::
    .string "Watch me go!\n"
    .string "Vroom! Vavavavooom! Vroom!\p"
    .string "My bike has no engine, so I have\n"
    .string "to make exhaust noises myself!$"

ThreeIsland_Port_Text_ForkOverMoney::
    .string "Please, I'm not like!\n"
    .string "those other bikers!$"

ThreeIsland_Port_Text_EverythingTurnedOutForBest::
    .string "A while ago, a girl named\n"
    .string "LOSTELLE disappeared.\p"
    .string "Thankfully, she was found safe!$"
	
ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto::
    .string "Hey, did you hear the news?\p"
    .string "The PC network here can now link\n"
    .string "with PCs in KANTO.\p"
    .string "I don't know how that came about,\n"
    .string "but it's fantastic!$"

ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands::
    .string "It was impossible to surf between the\n"
    .string "islands in these parts in the past.\p"
    .string "The tides were too fast and\n"
    .string "treacherous, but have calmed since.$"

ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest::
    .string "Let's crush BERRIES!\n"
    .string "…That'd be wasting BERRIES?\p"
    .string "You can always find some BERRIES\n"
    .string "on the ground in BERRY FOREST.$"

ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger::
    .string "Is it true?\p"
    .string "LILYCOVE DEPT. STORE is several\n"
    .string "times bigger than this shop?$"

ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest::
    .string "I sometimes buy medicine here.\p"
    .string "But a lot of people heal POKéMON\n"
    .string "with BERRIES from BERRY FOREST.\p"
    .string "After all, BERRIES are free and\n"
    .string "they never run out.$"

ThreeIsland_Mart_Text_BikersWereAboutToTrashMart::
    .string "Those BIKERS were about to trash\n"
    .string "this POKéMON MART.\p"
    .string "Am I glad they decided to leave!$"

	
ThreeIsland_House5_Text_IllGoPlayWithLostelle::
    .string "I think I'll go play with LOSTELLE\n"
    .string "today.$"

ThreeIsland_House4_Text_GhostsInBerryForest::
    .string "You must never, ever go out to\n"
    .string "the BERRY FOREST alone.\p"
    .string "Why?\n"
    .string "There are ghosts there.$"

ThreeIsland_House4_Text_PapaKeepsLyingToMe::
    .string "Papa keeps lying to me, and won't\n"
    .string "let me go out and play!$"

ThreeIsland_House3_Text_WantedToLiveSomewhereQuiet::
    .string "I bought this house because I\n"
    .string "wanted to live somewhere quiet.\p"
    .string "Today, I think I'll go out fishing.$"
	
ThreeIsland_House2_Text_CantMakeThisSpoonBend::
    .string "Urrrrrrrrgggghhhh…\n"
    .string "Kwaaaaah!\p"
    .string "…It's useless! I can't make this\n"
    .string "spoon bend with my mind.\p"
    .string "Maybe I really don't have any\n"
    .string "psychic powers.$"

ThreeIsland_House2_Text_IAdmireSabrina::
    .string "You know about a girl GYM LEADER\n"
    .string "in SAFFRON CITY?\p"
    .string "She uses PSYCHIC-type POKéMON,\n"
    .string "right?\p"
    .string "I admire her, I really do.\p"
    .string "I've heard that she's one cool\n"
    .string "customer and beautiful, too.$"
	
ThreeIsland_House1_Text_YoureAlwaysSoCool::
    .string "LOSTELLE: Hi, {PLAYER}!\n"
    .string "You're always so cool!\p"
    .string "I'll make lunch for you, too, one\n"
    .string "day, {PLAYER}.$"

ThreeIsland_House1_Text_RareRocksGemsDisplayed::
    .string "Rare rocks and gems are displayed.$"

ThreeIsland_BondBridge_Text_BondBridgeSign::
    .string "BOND BRIDGE\n"
    .string "Please be quiet when crossing.\p"
    .string "BERRY FOREST AHEAD$"
	
ThreeIsland_BondBridge_Text_BerryForestAhead::
    .string "BERRY FOREST AHEAD$"
	
ThreeIsland_Text_WouldntWantToSeeBikersHereAgain::
    .string "THREE ISLAND is actually the most\n"
    .string "populous of the islands here.\p"
    .string "Still, it could be less sleepy.\p"
    .string "But I wouldn't want to see goons\n"
    .string "like those BIKERS here again.$"

ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame::
    .string "I'm going to train my WINGULL in the\n"
    .string "BERRY FOREST.\p"
    .string "When it evolves, I'll be\n"
    .string "so happy!$"
	
ThreeIsland_Text_IslandSign::
    .string "THREE ISLAND\n"
    .string "Kin Island of Family Bonding$"

ThreeIsland_Text_IslandBelongsToUs::
    .string "Hyahoo!\p"
    .string "We used to have a biker\n"
    .string "problem, but they're gone now!$"
