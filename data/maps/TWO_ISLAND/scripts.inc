TWO_ISLAND_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	.byte 0
	
TwoIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end
	
TwoIsland_EventScript_Sailor::
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
	end

TwoIsland_EventScript_Woman::
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
	end

TwoIsland_EventScript_Beauty::
	lock
	faceplayer
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
	release
	end

TwoIsland_EventScript_SuperNerd::
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
	end

TwoIsland_EventScript_Boy::
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
	end

TwoIsland_EventScript_LittleBoy::
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
	end

TwoIsland_EventScript_IslandSign::
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
	end

TwoIsland_EventScript_JoyfulGameCornerSign::
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
	end
	
TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner::
    .string "Have you visited the GAME CORNER\n"
    .string "already?\p"
    .string "It's no good to go alone.\n"
    .string "You have to take a friend along.$"

TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
    .string "Not many people live on\n"
    .string "TWO ISLAND.\p"
    .string "There is this old lady who lives\n"
    .string "out on the cape.\p"
    .string "She's been there since I don't know\n"
    .string "when.$"
	
TwoIsland_Text_IslandSign::
    .string "TWO ISLAND\n"
    .string "Boon Island for Two$"

TwoIsland_Text_JoyfulGameCornerSign::
    .string "Skip & Chomp!\n"
    .string "Joyful GAME CORNER$"
	
TwoIsland_Text_FellowMovedFromCeladonCity::
    .string "That fellow there, he moved here\n"
    .string "from CELADON CITY.\p"
    .string "He started up a shop with his\n"
    .string "younger brother.\p"
    .string "You have to wonder if he knew what\n"
    .string "he was getting into.$"

TwoIsland_Text_ShopkeepersBrotherWorksGameCorner::
    .string "The shopkeeper's brother took\n"
    .string "a job at the GAME CORNER.\p"
    .string "He's trying to pull together money\n"
    .string "so they can buy more merchandise.$"

TwoIsland_Text_BrunoCameToIslandWhileBack::
    .string "Listen, listen.\n"
    .string "Did you know?\p"
    .string "A famous TRAINER came to the\n"
    .string "ISLAND a little while back.\p"
    .string "He's one of the ELITE FOUR.\n"
    .string "His name is BRUNO.\p"
    .string "He went away disappointed when he\n"
    .string "found out that they were all sold\l"
    .string "out of Rage Candybars.$"

TwoIsland_Text_BuyRareItemsHere::
    .string "The discerning TRAINER knows to\n"
    .string "buy rare items here!$"

TwoIsland_Text_OldWomanLivesOutOnCape::
    .string "There's an old woman who lives in\n"
    .string "a cottage out on the cape.\p"
    .string "She gives the eye to POKéMON.\n"
    .string "It's a bit unnerving.$"

TwoIsland_Text_HaveYouTriedJumpingGame::
    .string "Boing! Boing! Have you tried\n"
    .string "the jumping game in Mossdeep city?\p"
    .string "The POKéMON you can enter…\n"
    .string "Boing!\p"
    .string "Some go boing!\p"
    .string "And some go boooooooing!\p"
    .string "Did you know that?\n"
    .string "Boing!$"
