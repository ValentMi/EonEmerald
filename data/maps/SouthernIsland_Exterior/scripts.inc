.set LOCALID_SAILOR, 1
.set LOCALID_SS_TIDAL, 2

SouthernIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
	.byte 0

SouthernIsland_Exterior_OnTransition:
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
	end

SouthernIsland_Exterior_EventScript_Sailor::
	lock
	faceplayer
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SouthernIsland_Exterior_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end
	
SouthernIsland_Exterior_EventScript_Michael::
	faceplayer
	msgbox SouthernIsland_Exterior_Michael
	release
	end

SouthernIsland_Exterior_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

Ferry_EventScript_DepartIslandSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
	waitmovement 0
	return

Ferry_EventScript_DepartIslandWest::
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardWest
	waitmovement 0
	return

Ferry_Movement_DepartIslandBoardSouth:
	walk_down
	step_end

Ferry_Movement_DepartIslandBoardWest:
	walk_left
	walk_in_place_faster_down
	step_end

SouthernIsland_Exterior_EventScript_Sign::
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
	end

SouthernIsland_Exterior_Michael:
	.string "“Those whose memories fade seek to\n"
	.string "carve them in their hearts,” huh?\p"
	.string "Losing those you care deeply about\n"
	.string "can cause immeasurable pain.\p"
	.string "Sometimes it feels like your heart \n"
	.string "may never fully heal.\p"
	.string "But no matter how much pain you're\n"
	.string "in… and how alone you feel…\p"
	.string "Those you love live on in your heart.\n"
	.string "They live on as a part of you.\p"
	.string "So then what will you do? Will you\n"
	.string "give up?\p"
	.string "Or stand tall and keep walking with\n"
	.string "the strength they entrusted to you?\p"
	.string "I know what I want to choose.$"
