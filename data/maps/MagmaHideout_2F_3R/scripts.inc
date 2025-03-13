MagmaHideout_2F_3R_MapScripts::
	.byte 0
	
ClubMagma_EventScript_Maxie::
	trainerbattle_single TRAINER_MAXIE_MAGMA_HIDEOUT, ClubMagma_Text_MaxieIntro, MagmaHideout_4F_Text_MaxieDefeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end
	
ClubMagma_Text_MaxieIntro:
	.string "I promise to learn from my mistakes\n"
	.string "and protect the land we call home…\p"
	.string "My vision was clouded before, but.\p"
	.string "you helped me to realize the truth.\n"
	.string "Thank you. Would you please battle\p"
	.string "me? I wish to see your resolve again.$"
	
ClubMagma_EventScript_Welcome::
	msgbox ClubMagma_Text_Welcome, MSGBOX_DEFAULT
	release
	end
	
ClubMagma_Text_Welcome:
	.string "Welcome to Club Magma!\n"
	.string "Make yourself at home.\p"
	.string "…Why does this kid remind me\n"
	.string "of someone?\p"
	.string "Oh, never mind.$"

