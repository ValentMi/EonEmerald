.set LOCALID_SAILOR, 1
.set LOCALID_SS_TIDAL, 2

FarawayIsland_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Entrance_OnTransition
	.byte 0

FarawayIsland_Entrance_OnTransition:
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
	end

FarawayIsland_Entrance_EventScript_SetCloudsWeather::
	setweather WEATHER_SUNNY_CLOUDS
	doweather
	end

FarawayIsland_Entrance_EventScript_ClearWeather::
	setweather WEATHER_NONE
	doweather
	end

FarawayIsland_Entrance_EventScript_Sailor::
	lock
	faceplayer
	msgbox FarawayIsland_Entrance_Text_SailorReturn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FarawayIsland_Entrance_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_SAILOR, MAP_FARAWAY_ISLAND_ENTRANCE
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

FarawayIsland_Entrance_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Leaf::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_LEAF, Postgame_EventScript_Leaf_Defeated
	msgbox Postgame_LeafIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEAF, Postgame_LeafDefeated
	msgbox Postgame_LeafPostBattle, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_LEAF
	release
	end
	
Postgame_EventScript_Leaf_Defeated::
	faceplayer
	waitmovement 0
	msgbox Postgame_LeafPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_LeafIntro:
	.string "...$"

Postgame_LeafDefeated:
	.string "...$"

Postgame_LeafPostBattle:
	.string "...$"

FarawayIsland_Entrance_EventScript_Sign::
	msgbox FarawayIsland_Entrance_Text_Sign, MSGBOX_SIGN
	end

