FIVE_ISLE_MEADOW_MapScripts::
	.byte 0
	
FiveIsleMeadow_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, FiveIsleMeadow_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsleMeadow_Text_Grunt3Intro:
	.string "Hey! I remember you!\n"
	.string "My snacks have run out, so\n"
	.string "all I have to do now is battle!$"
