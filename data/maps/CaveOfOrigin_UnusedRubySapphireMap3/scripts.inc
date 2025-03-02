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
	
////////////////////////////////////////////////////////////////////////////////////////
	
Postgame_EventScript_Brock::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_BROCK, Postgame_EventScript_Brock_Defeated
	msgbox Postgame_Brock_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_BrockDeclined
	trainerbattle_no_intro TRAINER_BROCK, Postgame_BrockDefeated
	setflag FLAG_DEFEATED_BROCK
	return
	
Postgame_EventScript_Brock_Defeated::
	faceplayer
	waitmovement 0
	msgbox Postgame_BrockPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_BrockDeclined::
	msgbox Postgame_BrockDeclined, MSGBOX_DEFAULT
	release
	end
	
Postgame_Brock_AsktoBattle:
	.string "Oh, hi there!\p"
	.string "My name's Brock. I'm a gym\n"
	.string "leader from the Kanto region.\p"
	.string "I'm here studying rock samples\n"
	.string "from different caves here.\p"
	.string "Do you want to battle? I'm\n"
	.string "warning you. I'm strong.$"
	
Postgame_BrockDeclined::
	.string "I see. Safe travels then.$"

Postgame_BrockDefeated:
	.string "I tried hard, but you\n"
	.string "were too strong.$"

Postgame_BrockPostBattle:
	.string "I'm in the region for a while.\p"
	.string "Come back some time for\n"
	.string "a rematch!$"

////////////////////////////////////////////////////////////////////////////////////////
	
Postgame_EventScript_Misty::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_MISTY, Postgame_EventScript_Misty_Defeated
	msgbox Postgame_Misty_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_MistyDeclined
	trainerbattle_no_intro TRAINER_MISTY, Postgame_BrockDefeated
	setflag FLAG_DEFEATED_MISTY
	return
	
Postgame_EventScript_Misty_Defeated::
	faceplayer
	waitmovement 0
	msgbox Postgame_MistyPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_MistyDeclined::
	msgbox Postgame_MistyDeclined, MSGBOX_DEFAULT
	release
	end
	
Postgame_Misty_AsktoBattle:
	.string "Oh, hi there!\p"
	.string "I'm Misty, a water gym leader\n"
	.string "from the Kanto region.\p"
	.string "Hoenn has such beautiful oceans\n"
	.string "and amazing water Pokemon.\p"
	.string "Hey, care for a battle? I'm\n"
	.string "warning you. I'm strong.$"
	
Postgame_MistyDeclined::
	.string "I see. Safe travels then.$"

Postgame_MistyDefeated:
	.string "I tried hard, but you\n"
	.string "were too strong.$"

Postgame_MistyPostBattle:
	.string "I'm in the region for a while.\p"
	.string "Come back some time for\n"
	.string "a rematch!$"

////////////////////////////////////////////////////////////////////////////////////////
