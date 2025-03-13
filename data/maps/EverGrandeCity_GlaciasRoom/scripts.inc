EverGrandeCity_GlaciasRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
	.byte 0

EverGrandeCity_GlaciasRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_GlaciasRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
	end

EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end
	
IndigoPlateau_GlaciasRoom_EventScript_Lorelei::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_Lorelei_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_Lorelei_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LORELEI, EverGrandeCity_Lorelei_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	msgbox EverGrandeCity_Lorelei_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end
	
IndigoPlateau_GlaciasRoom_EventScript_Bruno::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_Bruno_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_Bruno_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ROXANNE_2, EverGrandeCity_Bruno_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
	msgbox EverGrandeCity_Bruno_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end
	
IndigoPlateau_GlaciasRoom_EventScript_Agatha::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_Agatha_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_Agatha_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ROXANNE_3, EverGrandeCity_Agatha_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
	msgbox EverGrandeCity_Agatha_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end
	
IndigoPlateau_GlaciasRoom_EventScript_Lance::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_Lance_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_Lance_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ROXANNE_4, EverGrandeCity_Lance_Text_Defeat
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	msgbox EverGrandeCity_Lance_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_Lorelei_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_Lorelei_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_Bruno_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_Bruno_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_Agatha_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_Agatha_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end
	
EverGrandeCity_Lance_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_Lance_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
	.string "Welcome, my name is GLACIA\n"
	.string "of the ELITE FOUR.\p"
	.string "I've traveled from afar to HOENN\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak TRAINERS and their POKéMON.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

EverGrandeCity_GlaciasRoom_Text_Defeat:
	.string "You and your POKéMON…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the POKéMON LEAGUE.$"

//lORELEI
EverGrandeCity_Lorelei_Text_IntroSpeech:
    .string "Welcome to the POKéMON LEAGUE.\p"
    .string "I am LORELEI of the ELITE FOUR.\p"
    .string "No one can best me when it comes\n"
    .string "to icy POKéMON.\p"
    .string "Freezing moves are powerful.\p"
    .string "Your POKéMON will be at my mercy\n"
    .string "when they are frozen solid.\p"
    .string "Hahaha!\n"
    .string "Are you ready?$"

EverGrandeCity_Lorelei_Text_Defeat:
    .string "…Things shouldn't be this way!$"

EverGrandeCity_Lorelei_Text_PostBattleSpeech:
    .string "You're better than I thought.\n"
    .string "Go on ahead.\p"
    .string "You only got a taste of the\n"
    .string "POKéMON LEAGUE's power.$"

//BRUNO
EverGrandeCity_Bruno_Text_IntroSpeech:
    .string "I am BRUNO of the ELITE FOUR!\p"
    .string "Through rigorous training, people\n"
    .string "and POKéMON can become stronger\l"
    .string "without limit.\p"
    .string "I've lived and trained with my\n"
    .string "fighting POKéMON!\l"
    .string "And that will never change!\p"
    .string "{PLAYER}!\p"
    .string "We will grind you down with our\n"
    .string "superior power!\p"
    .string "Hoo hah!$"

EverGrandeCity_Bruno_Text_Defeat:
    .string "Why?\n"
    .string "How could I lose?$"

EverGrandeCity_Bruno_Text_PostBattleSpeech:
    .string "My job is done.\n"
    .string "Go face your next challenge.$"
	
//AGATHA
EverGrandeCity_Agatha_Text_IntroSpeech:
    .string "I am AGATHA of the ELITE FOUR.\p"
    .string "I hear OAK's taken a lot of\n"
    .string "interest in you, child.\p"
    .string "That old duff was once tough and\n"
    .string "handsome.\p"
    .string "But that was decades ago.\n"
    .string "He's a shadow of his former self.\p"
    .string "Now he just wants to fiddle with\n"
    .string "his POKéDEX.\p"
    .string "He's wrong.\n"
    .string "POKéMON are for battling!\p"
    .string "{PLAYER}! I'll show you how a real\n"
    .string "TRAINER battles!$"

EverGrandeCity_Agatha_Text_Defeat:
    .string "Oh, my!\n"
    .string "You're something special, child!$"

EverGrandeCity_Agatha_Text_PostBattleSpeech:
    .string "You win!\p"
    .string "I see what the old duff sees in\n"
    .string "you now.\p"
    .string "I have nothing else to say.\n"
    .string "Run along now, child!$"

//LANCE
EverGrandeCity_Lance_Text_IntroSpeech:
    .string "Ah! I've heard about you,\n"
    .string "{PLAYER}!\p"
    .string "I lead the ELITE FOUR.\p"
    .string "You can call me LANCE the dragon\n"
    .string "TRAINER.\p"
    .string "You know that dragons are\n"
    .string "mythical POKéMON.\p"
    .string "They're hard to catch and raise,\n"
    .string "but their powers are superior.\p"
    .string "They're virtually indestructible.\n"
    .string "There's no being clever with them.\p"
    .string "Well, are you ready to lose?\p"
    .string "Your LEAGUE challenge ends\n"
    .string "with me.$"

EverGrandeCity_Lance_Text_Defeat:
    .string "That's it!\p"
    .string "I hate to admit it, but you are a\n"
    .string "POKéMON master!$"

EverGrandeCity_Lance_Text_PostBattleSpeech:
    .string "I still can't believe my dragons\n"
    .string "lost to you, {PLAYER}.\p"
    .string "You are now the POKéMON LEAGUE\n"
    .string "CHAMPION!\p"
    .string "…Or, you would have been, but\n"
    .string "you have one more challenge left.\p"
    .string "There is one more TRAINER to face!\n"
    .string "His name is…\p"
    .string "Blue!\p"
    .string "He beat the ELITE FOUR before\n"
    .string "you.\p"
    .string "He is the real POKéMON LEAGUE\n"
    .string "CHAMPION.$"
