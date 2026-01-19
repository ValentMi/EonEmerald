@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
	checkflag FLAG_BADGE01_GET
//	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
//	setfieldeffectargument 0, VAR_RESULT
//	bufferpartymonnick STR_VAR_1, VAR_RESULT
//	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	closemessage
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This tree looks like it can be\n"
	.string "cut down!\p"
	.string "Would you like to cut it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This tree looks like it can be\n"
	.string "cut down!$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	closemessage
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to break it?$"

Text_CantSmash:
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	checkflag FLAG_BADGE04_GET
//	bufferpartymonnick STR_VAR_1, VAR_RESULT
//	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
//	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Script_RandomWeather_Warm::
    lockall
    goto_if_ne VAR_TEMP_0, 0, Script_Weather_End
    random 8
    switch VAR_RESULT
    case 0, Script_Weather_None
    case 1, Script_Weather_Rain
	case 2, Script_Weather_Thunder
    case 3, Script_Weather_Sunny
	case 4, Script_Weather_Sunny
	case 5, Script_Weather_Sunny
	case 6, Script_Weather_Sunny
	case 7, Script_Weather_Sunny
    goto Script_Weather_Update

Script_RandomWeather_Desert::
    lockall
    goto_if_ne VAR_TEMP_0, 0, Script_Weather_End
    random 3
    switch VAR_RESULT
    case 0, Script_Weather_Sandstorm
	case 1, Script_Weather_Sandstorm
    case 2, Script_Weather_Drought
    goto Script_Weather_Update
	
Route111_EventScript_SandstormTriggerbroken::
	fadenewbgm MUS_DESERT
    lockall
    goto_if_ne VAR_TEMP_0, 0, Script_Weather_End
    random 3
    switch VAR_RESULT
    case 0, Script_Weather_Sandstorm
	case 1, Script_Weather_Sandstorm
    case 2, Script_Weather_Drought
    goto Script_Weather_Update

Script_RandomWeather_Cold::
    lockall
    goto_if_ne VAR_TEMP_0, 0, Script_Weather_End
    random 6
    switch VAR_RESULT
    case 0, Script_Weather_Sunny
    case 1, Script_Weather_Sunny
	case 2, Script_Weather_Snow
	case 3, Script_Weather_Heavy_Snow
	case 4, Script_Weather_Heavy_Snow
    case 5, Script_Weather_Heavy_Rain
    goto Script_Weather_Update

Script_Weather_Update:
    doweather
    setvar VAR_TEMP_0, 1
Script_Weather_End:
    releaseall
    end

Script_Weather_None:
    setweather WEATHER_NONE
    return

Script_Weather_Rain:
    setweather WEATHER_RAIN
    return
	
Script_Weather_Heavy_Rain:
    setweather WEATHER_DOWNPOUR
    return
	
Script_Weather_Thunder:
    setweather WEATHER_RAIN_THUNDERSTORM
    return

Script_Weather_Sunny:
    setweather WEATHER_SUNNY
    return

Script_Weather_Sandstorm:
    setweather WEATHER_SANDSTORM
    return

Script_Weather_Drought:
    setweather WEATHER_DROUGHT
    return

Script_Weather_Snow:
    setweather WEATHER_SNOW
    return

Script_Weather_Heavy_Snow:
    setweather WEATHER_VOLCANIC_ASH
    return

Script_Weather_ThinFog:
    setweather WEATHER_FOG_HORIZONTAL
    return

Text_WantToStrength:
	.string "It's too heavy to move alone.\p"
	.string "A POKéMON may be able to\n"
	.string "help you push it aside.\p"
	.string "Would you like to move it?$"

Text_MonUsedStrength:
	.string "Your Pokemon helped you move\n"
	.string "heavy objects around!$"

Text_CantStrength:
	.string "It's too heavy to move alone.\p"
	.string "A POKéMON may be able to\n"
	.string "help you push it aside.\p"

Text_StrengthActivated:
	.string "Your Pokemon helped you\n"
	.string "move the object around.$"

EventScript_UseWaterfall::
	lockall
	checkflag FLAG_BADGE08_GET
//	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
//	bufferpartymonnick STR_VAR_1, VAR_RESULT
//	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"

EventScript_UseDive::
	lockall
	checkflag FLAG_BADGE07_GET
//	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
//	bufferpartymonnick STR_VAR_1, VAR_RESULT
//	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	checkflag FLAG_BADGE07_GET
//	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
//	bufferpartymonnick STR_VAR_1, VAR_RESULT
//	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

Text_CantDive:
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} used DIVE.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"
