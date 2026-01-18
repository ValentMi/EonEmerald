CaveOfOrigin_UnusedRubySapphireMap3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_UnusedRubySapphireMap3_OnTransition
	.byte 0

CaveOfOrigin_UnusedRubySapphireMap3_OnTransition:
	call_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_EventScript_DisableTriggers
	end

Postgame_EventScript_Red::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_RED, Postgame_EventScript_Red_Defeated
	msgbox Postgame_RedIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RED, Postgame_RedDefeated
	msgbox Postgame_RedPostBattle, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RED
	release
	end
	
Postgame_EventScript_Red_Defeated::
	faceplayer
	waitmovement 0
	msgbox Postgame_RedPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_RedIntro:
	.string "...$"

Postgame_RedDefeated:
	.string "...$"

Postgame_RedPostBattle:
	.string "...$"

