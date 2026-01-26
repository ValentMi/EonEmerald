ONE_ISLAND_POKEMON_CENTRE_MapScripts::
	.byte 0
	
Sevii_Universal_Nurse_Script::
    lock
    faceplayer
    msgbox gText_IllTakeYourPkmnTN, MSGBOX_DEFAULT
    closemessage
    fadescreen FADE_TO_BLACK
    playfanfare MUS_HEAL
    special HealPlayerParty
    waitfanfare
    fadescreen FADE_FROM_BLACK
    msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
    waitmessage
    msgbox gText_WeHopeToSeeYouAgainTN, MSGBOX_DEFAULT
    release
    end
	
Sevii_Universal_Faraway_Nurse_Script::
    lock
    faceplayer
    msgbox gText_IllTakeYourPkmnFTN, MSGBOX_DEFAULT
    closemessage
    fadescreen FADE_TO_BLACK
    playfanfare MUS_HEAL
    special HealPlayerParty
    waitfanfare
    fadescreen FADE_FROM_BLACK
    msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
    waitmessage
    msgbox gText_WeHopeToSeeYouAgainTN, MSGBOX_DEFAULT
    release
    end
	
FourIsland_PokemonCenter_1F_EventScript_Man::
	msgbox FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave, MSGBOX_NPC
	end

FourIsland_PokemonCenter_1F_EventScript_Woman::
	msgbox FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore, MSGBOX_NPC
	end

FourIsland_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived, MSGBOX_NPC
	end
	
TwoIsland_EventScript_BodySlamTutor::
	lock
	faceplayer
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, TUTOR_MOVE_BODY_SLAM
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
	goto EventScript_BodySlamTaught
	end

EventScript_BodySlamDeclined::
	msgbox Text_BodySlamDeclined
	release
	end

EventScript_BodySlamTaught::
	msgbox Text_BodySlamTaught
	release
	end
	
FiveIsland_PokemonCenter_1F_EventScript_Chef::
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
	end

FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
	end
	
SixIsland_PokemonCenter_1F_EventScript_Hiker::
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
	end

SixIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
	end
	
SevenIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Beauty::
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end
	
Sevii_EventScript_VisitedTwoIsland::
	setflag FLAG_VISITED_TWO_ISLAND
	setvar VAR_TEMP_1, 1
	end
	
Sevii_EventScript_VisitedThreeIsland::
	setflag FLAG_VISITED_THREE_ISLAND
	setvar VAR_TEMP_1, 1
	end
	
Sevii_EventScript_VisitedFourIsland::
	setflag FLAG_VISITED_FOUR_ISLAND
	setvar VAR_TEMP_1, 1
	end
	
Sevii_EventScript_VisitedFiveIsland::
	setflag FLAG_VISITED_FIVE_ISLAND
	setvar VAR_TEMP_1, 1
	end
	
Sevii_EventScript_VisitedSixIsland::
	setflag FLAG_VISITED_SIX_ISLAND
	setvar VAR_TEMP_1, 1
	end
	
Sevii_EventScript_VisitedSevenIsland::
	setflag FLAG_VISITED_SEVEN_ISLAND
	setvar VAR_TEMP_1, 1
	end
	
Sevii_EventScript_VisitedIndigo::
	setflag FLAG_VISITED_INDIGO_PLATEAU
	setvar VAR_TEMP_1, 1
	end
	
SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
    .string "On this island, different events\n"
    .string "occur depending on connections.\p"
    .string "What are those connections?\p"
    .string "They are for you to discover on\n"
    .string "your own.$"

SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
    .string "Those from Kanto ride a SEAGALLOP\n"
    .string "ferry to get here.\p"
    .string "There are at least ten of those\n"
    .string "high-speed ships.\p"
    .string "I don't know where they all go,\n"
    .string "though.$"

SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
    .string "If you're confident, you should\n"
    .string "check out the Battle Frontier.$"
	
SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland::
    .string "For ten years, I've searched for\n"
    .string "RUINS.\p"
    .string "No, make that twenty years.\p"
    .string "I get this feeling that there's\n"
    .string "something hidden on this island.$"

SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem::
    .string "You know of POKéMON that evolve\n"
    .string "only upon trading, yes?\p"
    .string "But did you know that there are\n"
    .string "still others?\p"
    .string "Some POKéMON evolve only when\n"
    .string "traded while holding specific items.$"
	
FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal::
    .string "I'm on my way to prepare a meal\n"
    .string "for a certain high-society person.$"

FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon::
    .string "You're on a quest to catch every\n"
    .string "single kind of POKéMON?\p"
    .string "…How incredible. Please tell me if\n"
    .string "you catch a strong one!$"
	
Text_BodySlamTeach::
    .string "Ready?\n"
    .string "Boing!\p"
    .string "We're having a BODY SLAM match\n"
    .string "to see who wimps out first.\p"
    .string "If you were to join us, you'd be\n"
    .string "squashed like a bug, though…\p"
    .string "How about I teach BODY SLAM to\n"
    .string "a POKéMON of yours instead?$"

Text_BodySlamDeclined::
    .string "Come again!\n"
    .string "Boing!$"

Text_BodySlamWhichMon::
    .string "Which POKéMON wants to learn how\n"
    .string "to BODY SLAM?$"

Text_BodySlamTaught::
    .string "Boioing!$"

FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
    .string "There's a rare kind of ICE POKéMON\n"
    .string "that lives in the cave.\p"
    .string "We get a lot of visitors hoping to\n"
    .string "see that POKéMON.$"

FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
    .string "Oh? A POKéMON EGG?\n"
    .string "…I have no idea.\p"
    .string "…Oh, wait. The DAY-CARE people\n"
    .string "in town were saying something.\p"
    .string "They said that they'd found EGGS\n"
    .string "before on their property.$"

FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
    .string "What's this?\p"
    .string "The new Pokémon journal hasn't\n"
    .string "arrived on this island?$"
	
gText_IllTakeYourPkmnTN::
    .string "Are your Pokémon in need of healing?\p"
    .string "Okay, I'll Take your Pokémon\n"
    .string "for a few seconds.$"
	
gText_IllTakeYourPkmnFTN::
    .string "Oh, dear... Where am I?\p"
    .string "Well, even as a travelling nurse\n"
    .string "I have a duty to uphold.\p"
    .string "Okay, I'll take your Pokémon\n"
    .string "for a few seconds.$"
	
gText_WeHopeToSeeYouAgainTN::
    .string "Safe travels!$"
