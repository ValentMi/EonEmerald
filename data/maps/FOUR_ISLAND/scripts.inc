.set LOCALID_DAYCARE_MAN, 1

FOUR_ISLAND_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FOUR_ISLAND_OnTransition
	.byte 0
	
FOUR_ISLAND_OnTransition:
	call FOUR_ISLAND_EventScript_TryMoveDayCareMan
	end

FOUR_ISLAND_EventScript_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
	setobjectxyperm LOCALID_DAYCARE_MAN, 16, 14
FOUR_ISLAND_EventScript_StopMoveDayCareMan::
	return
	
FourIsland_EventScript_OldWoman::
	lock
	faceplayer
	msgbox FourIsland_Text_LoreleiHasReturned
	release
	end

FourIsland_EventScript_OldWomanLoreleiLeft::
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
	release
	end

FourIsland_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
	release
	end

FourIsland_EventScript_FatMan::
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
	end
	
FourIsland_House1_EventScript_FatMan::
	msgbox FourIsland_House1_Text_YoureAwfullyHeavy, MSGBOX_NPC
	end

FourIsland_EventScript_IslandSign::
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
	end

FourIsland_LoreleisHouse_EventScript_Lorelei3::
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
	release
	end

FourIsland_LoreleisHouse_EventScript_Doll::
	lock
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
	release
	end


FourIsland_Text_IslandSign::
    .string "FOUR ISLAND\n"
    .string "The Cold, Blue, Floe Island$"

FourIsland_Text_LoreleiHasReturned::
    .string "LORELEI has returned.\p"
    .string "Did she find the city life too\n"
    .string "stressful, I wonder?$"

FourIsland_Text_LoreleiMetLaprasAsChild::
    .string "LORELEI has come back.\p"
    .string "The LAPRAS she has, I imagine it\n"
    .string "to be the one she met as a child.\p"
    .string "I believe it was in ICEFALL CAVE\n"
    .string "that she caught it.\p"
    .string "Perhaps that POKéMON has been with\n"
    .string "her ever since.$"

FourIsland_Text_RivalAlreadyGotEggBeSmellingYa::
    .string "{RIVAL}: Hey!\n"
    .string "{PLAYER}!\p"
    .string "What are you doing here in the\n"
    .string "SEVII ISLANDS?\p"
    .string "You should quit copying me,\n"
    .string "you know?\p"
    .string "Anyways, I already got my POKéMON\n"
    .string "EGG, so I'm done with this island.\p"
    .string "Heh, I bet you don't even know\n"
    .string "about POKéMON EGGS.\p"
    .string "You'll never fill your NATIONAL\n"
    .string "POKéDEX that way.\p"
    .string "By the way, I saw someone we both\n"
    .string "know on this island.\p"
    .string "Why don't you go look around if\n"
    .string "it makes you curious?\p"
    .string "Me, I don't have the time to\n"
    .string "waste.\p"
    .string "Be smelling ya!$"

FourIsland_Text_LoreleiHasLotsOfStuffedDolls::
    .string "Oh, you found me!\n"
    .string "Please don't tell LORELEI.\p"
    .string "Did you know that LORELEI has lots\n"
    .string "and lots of stuffed dolls?\p"
    .string "Every time she comes back to\n"
    .string "FOUR ISLAND, her collection grows!$"

FourIsland_Text_MadeSlushieUsingIcefallCaveIce::
    .string "Ooh, chilly!\p"
    .string "I made a slushie using ice I\n"
    .string "shaved inside ICEFALL CAVE.\p"
    .string "It's chilly and tasty!$"

FourIsland_Text_LoreleisHouse::
    .string "LORELEI'S HOUSE$"

FourIsland_House1_Text_YoureAwfullyHeavy::
    .string "There! Boing!\n"
    .string "You're awfully heavy!$"
	
FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
    .string "LORELEI: There's something weighing\n"
    .string "heavily on my mind.\p"
    .string "If anything were to happen on\n"
    .string "the island where I was born…\p"
    .string "I wouldn't know about it if I were\n"
    .string "in the POKéMON LEAGUE.\p"
    .string "I wonder if that would make me\n"
    .string "irresponsible to my home…$"

FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
    .string "LORELEI: So, you managed to solve\n"
    .string "all the problems here?\p"
    .string "That's wonderful.\p"
    .string "That means there isn't any reason\n"
    .string "for me to be here all the time.\p"
    .string "Thank you…\p"
    .string "I'll return to the POKéMON LEAGUE\n"
    .string "in a short while.$"

FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
    .string "I don't know what will happen in\n"
    .string "the future, but…\p"
    .string "I will do what I can here and now.\n"
    .string "That's all I can do.$"

FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
    .string "Stuffed POKéMON dolls galore!$"


