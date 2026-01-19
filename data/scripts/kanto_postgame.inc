	
Postgame_EventScript_Brock::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_BROCK, Postgame_EventScript_Brock_Defeated
	msgbox Postgame_Brock_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_BrockDeclined
	trainerbattle_no_intro TRAINER_BROCK, Postgame_BrockDefeated
	setflag FLAG_DEFEATED_BROCK
	setflag FLAG_REMOVE_MINER
	msgbox Postgame_BrockPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Brock_Defeated::
	msgbox Postgame_BrockPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_BrockDeclined::
	msgbox Postgame_BrockDeclinedText, MSGBOX_DEFAULT
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
	
Postgame_BrockDeclinedText:
	.string "I see. Safe travels then.$"

Postgame_BrockDefeated:
	.string "I tried hard, but you\n"
	.string "were too strong.$"

Postgame_BrockPostBattle:
	.string "I'm in the region for a while.\p"
	.string "Come back some time for\n"
	.string "a rematch!$"


	
Postgame_EventScript_Misty::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_MISTY, Postgame_EventScript_Misty_Defeated
	msgbox Postgame_Misty_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_MistyDeclined
	trainerbattle_no_intro TRAINER_MISTY, Postgame_MistyDefeated
	setflag FLAG_DEFEATED_MISTY
	setflag FLAG_REMOVE_MISTY_BLOCK
	msgbox Postgame_MistyPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Misty_Defeated::
	msgbox Postgame_MistyPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_MistyDeclined::
	msgbox Postgame_MistyDeclinedText, MSGBOX_DEFAULT
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
	
Postgame_MistyDeclinedText:
	.string "I see. Safe travels then.$"

Postgame_MistyDefeated:
	.string "I tried hard, but you\n"
	.string "were too strong.$"

Postgame_MistyPostBattle:
	.string "I'm in the region for a while.\p"
	.string "Come back some time for\n"
	.string "a rematch!$"



Postgame_EventScript_Surge::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_SURGE, Postgame_EventScript_Surge_Defeated
	msgbox Postgame_Surge_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_SurgeDeclined
	trainerbattle_no_intro TRAINER_SURGE, Postgame_SurgeDefeated
	setflag FLAG_DEFEATED_SURGE
	setflag FLAG_REMOVE_SURGE_BLOCK
	msgbox Postgame_SurgePostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Surge_Defeated::
	msgbox Postgame_SurgePostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_SurgeDeclined::
	msgbox Postgame_SurgeDeclinedText, MSGBOX_DEFAULT
	release
	end
	
Postgame_Surge_AsktoBattle:
	.string "Hey, kid! You look like you've\n"
	.string "got some shock in your step!\p"
	.string "I'm Lt. Surge, the Lightning\n"
	.string "American and Gym Leader.\p"
	.string "Electric Pokemon saved me\n"
	.string "during the war!\p"
	.string "Are you ready to be zapped\n"
	.string "by my lightning-fast team?$"
	
Postgame_SurgeDeclinedText:
	.string "Hah! Too chicken to handle\n"
	.string "a real surge of power?$"

Postgame_SurgeDefeated:
	.string "Whoa! You're the real deal,\n"
	.string "little soldier!$"

Postgame_SurgePostBattle:
	.string "You've got a lot of guts.\p"
	.string "Keep that spark alive and\n"
	.string "you'll go far!$"



Postgame_EventScript_Erika::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_ERIKA, Postgame_EventScript_Erika_Defeated
	msgbox Postgame_Erika_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_ErikaDeclined
	trainerbattle_no_intro TRAINER_ERIKA, Postgame_ErikaDefeated
	setflag FLAG_DEFEATED_ERIKA
	setflag FLAG_REMOVE_ERIKA_BLOCK
	msgbox Postgame_ErikaPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Erika_Defeated::
	msgbox Postgame_ErikaPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_ErikaDeclined::
	msgbox Postgame_ErikaDeclinedText, MSGBOX_DEFAULT
	release
	end
	
Postgame_Erika_AsktoBattle:
	.string "Hello... A lovely day for\n"
	.string "a stroll, isn't it?\p"
	.string "My name is Erika, and I am the\n"
	.string "Leader of the Celadon Gym.\p"
	.string "I only collect Pokemon that\n"
	.string "I find to be beautiful.\p"
	.string "Would you care for a quiet\n"
	.string "battle among the flowers?$"
	
Postgame_ErikaDeclinedText:
	.string "Oh, dear. Perhaps another\n"
	.string "time then.$"

Postgame_ErikaDefeated:
	.string "Oh! I've been defeated...\n"
	.string "You are quite skilled.$"

Postgame_ErikaPostBattle:
	.string "Grass Pokemon are quite sturdy.\p"
	.string "I shall continue my studies\n"
	.string "while I visit this region.$"



Postgame_EventScript_Koga::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_KOGA, Postgame_EventScript_Koga_Defeated
	msgbox Postgame_Koga_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_KogaDeclined
	trainerbattle_no_intro TRAINER_KOGA, Postgame_KogaDefeated
	setflag FLAG_DEFEATED_KOGA
	setflag FLAG_REMOVE_KOGA_BLOCK
	msgbox Postgame_KogaPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Koga_Defeated::
	msgbox Postgame_KogaPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_KogaDeclined::
	msgbox Postgame_KogaDeclinedText, MSGBOX_DEFAULT
	release
	end
	
Postgame_Koga_AsktoBattle:
	.string "Fwahahaha! A ninja is always\n"
	.string "cloaked in shadows!\p"
	.string "I am Koga, master of poison\n"
	.string "and the Fuchsia Gym Leader.\p"
	.string "Despair to the creeping shadow\n"
	.string "and the slow acting toxins!\p"
	.string "Can you overcome my\n"
	.string "secret ninja techniques?$"
	
Postgame_KogaDeclinedText:
	.string "You fear the toxic fog?\n"
	.string "A wise, but cowardly choice.$"

Postgame_KogaDefeated:
	.string "Humph! You have proven your\n"
	.string "worth as a warrior.$"

Postgame_KogaPostBattle:
	.string "The path of the ninja is\n"
	.string "long and difficult.\p"
	.string "Practice your arts well!$"



Postgame_EventScript_Sabrina::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_SABRINA, Postgame_EventScript_Sabrina_Defeated
	msgbox Postgame_Sabrina_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_SabrinaDeclined
	trainerbattle_no_intro TRAINER_SABRINA, Postgame_SabrinaDefeated
	setflag FLAG_DEFEATED_SABRINA
	setflag FLAG_REMOVE_SABRINA_BLOCK
	msgbox Postgame_SabrinaPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Sabrina_Defeated::
	msgbox Postgame_SabrinaPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_SabrinaDeclined::
	msgbox Postgame_SabrinaDeclinedText, MSGBOX_DEFAULT
	release
	end
	
Postgame_Sabrina_AsktoBattle:
	.string "I had a vision of your arrival...\p"
	.string "I am Sabrina, the master of\n"
	.string "Psychic Pokemon.\p"
	.string "I have had psychic powers\n"
	.string "since I was a child.\p"
	.string "I dislike fighting, but if you\n"
	.string "wish, I will show you my power.$"
	
Postgame_SabrinaDeclinedText:
	.string "I foresaw this choice as well.$"

Postgame_SabrinaDefeated:
	.string "Your power... it exceeds my\n"
	.string "expectations.$"

Postgame_SabrinaPostBattle:
	.string "Everyone has psychic potential.\p"
	.string "You simply use yours to\n"
	.string "strengthen your bonds.$"



Postgame_EventScript_Blaine::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_BLAINE, Postgame_EventScript_Blaine_Defeated
	msgbox Postgame_Blaine_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_BlaineDeclined
	trainerbattle_no_intro TRAINER_BLAINE, Postgame_BlaineDefeated
	setflag FLAG_DEFEATED_BLAINE
	setflag FLAG_REMOVE_BLAINE_BLOCK
	msgbox Postgame_BlainePostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Blaine_Defeated::
	msgbox Postgame_BlainePostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_BlaineDeclined::
	msgbox Postgame_BlaineDeclinedText, MSGBOX_DEFAULT
	release
	end
	
Postgame_Blaine_AsktoBattle:
	.string "Hah! You better have some\n"
	.string "Burn Heal ready, kid!\p"
	.string "I am Blaine, the hotheaded\n"
	.string "Leader of Cinnabar Gym!\p"
	.string "My fiery Pokemon are all ready\n"
	.string "to reduce you to ashes!\p"
	.string "Are you ready for a riddle\n"
	.string "wrapped in a firestorm?$"
	
Postgame_BlaineDeclinedText:
	.string "Don't walk away! You'll lose\n"
	.string "your heat!$"

Postgame_BlaineDefeated:
	.string "I've burnt out! Your spirit\n"
	.string "burned brighter than mine!$"

Postgame_BlainePostBattle:
	.string "That was a scorching battle!\p"
	.string "Never let your passion for\n"
	.string "Pokemon go cold!$"

Postgame_EventScript_Giovanni::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_GIOVANNI, Postgame_EventScript_Giovanni_Defeated
	msgbox Postgame_Giovanni_AsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_GiovanniDeclined
	trainerbattle_no_intro TRAINER_GIOVANNI, Postgame_GiovanniDefeated
	setflag FLAG_DEFEATED_GIOVANNI
	setflag FLAG_REMOVE_GIOVANNI_BLOCK
	msgbox Postgame_GiovanniPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Giovanni_Defeated::
	msgbox Postgame_GiovanniPostBattle, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_GiovanniDeclined::
	msgbox Postgame_GiovanniDeclinedText, MSGBOX_DEFAULT
	release
	end
	
Postgame_Giovanni_AsktoBattle:
	.string "You have the eyes of a trainer\n"
	.string "who has seen much...\p"
	.string "I am Giovanni, the Leader of\n"
	.string "the Viridian Gym.\p"
	.string "I once led a great organization,\n"
	.string "but now I seek only strength.\p"
	.string "Shall we see whose resolve\n"
	.string "is truly superior?$"
	
Postgame_GiovanniDeclinedText:
	.string "A wise leader knows when to\n"
	.string "retreat. I respect that.$"

Postgame_GiovanniDefeated:
	.string "Incredible... I have been\n"
	.string "bested once again.$"

Postgame_GiovanniPostBattle:
	.string "You have a gift, child.\p"
	.string "Do not squander it as I once\n"
	.string "did with my ambitions.$"
	
Postgame_EventScript_Rival::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RIVAL_POSTGAME, Postgame_EventScript_Rival2_Defeated
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Postgame_EventScript_May
	goto_if_eq VAR_RESULT, FEMALE, Postgame_EventScript_Brendan
	end

Postgame_EventScript_May::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	call_if_set FLAG_DECLINED_RIVAL_POSTGAME, Postgame_EventScript_MayAskAgain
	call_if_unset FLAG_DECLINED_RIVAL_POSTGAME, Postgame_EventScript_MayAskFirst
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_DeclineRival
	msgbox Postgame_Text_MayLetsGo, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Postgame_EventScript_BattleMayTreecko
	case 1, Postgame_EventScript_BattleMayTorchic
	case 2, Postgame_EventScript_BattleMayMudkip
	end

Postgame_EventScript_Brendan::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_set FLAG_DECLINED_RIVAL_POSTGAME, Postgame_EventScript_BrendanAskAgain
	call_if_unset FLAG_DECLINED_RIVAL_POSTGAME, Postgame_EventScript_BrendanAskFirst
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_DeclineRival
	msgbox Postgame_Text_BrendanLetsGo, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Postgame_EventScript_BattleBrendanTreecko
	case 1, Postgame_EventScript_BattleBrendanTorchic
	case 2, Postgame_EventScript_BattleBrendanMudkip
	end

Postgame_EventScript_DeclineRival::
	setflag FLAG_DECLINED_RIVAL_POSTGAME
	msgbox Postgame_Text_RivalDeclined, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

Postgame_EventScript_Rival2_Defeated::
	msgbox Postgame_Text_RivalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_FLANNERY_3, Postgame_Text_MayDefeat
	goto Postgame_EventScript_DefeatedRival
	end
	
Postgame_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_FLANNERY_4, Postgame_Text_MayDefeat
	goto Postgame_EventScript_DefeatedRival
	end
	
Postgame_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_NORMAN_2, Postgame_Text_MayDefeat
	goto Postgame_EventScript_DefeatedRival
	end
	
Postgame_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_NORMAN_3, Postgame_Text_MayDefeat
	goto Postgame_EventScript_DefeatedRival
	end
	
Postgame_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_NORMAN_4, Postgame_Text_MayDefeat
	goto Postgame_EventScript_DefeatedRival
	end
	
Postgame_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_WINONA_2, Postgame_Text_MayDefeat
	goto Postgame_EventScript_DefeatedRival
	end

Postgame_EventScript_DefeatedRival::
	setflag FLAG_DEFEATED_RIVAL_POSTGAME
	msgbox Postgame_Text_RivalPostBattle, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

Postgame_EventScript_MayAskFirst:
	msgbox Postgame_Text_MayIntro, MSGBOX_YESNO
	return

Postgame_EventScript_MayAskAgain:
	msgbox Postgame_Text_MayReadyYet, MSGBOX_YESNO
	return
	
Postgame_Text_MayIntro:
	.string "May: Hi {PLAYER}!\n"
	.string "I've been training really hard.\l"
	.string "Would you like to have a battle?$"

Postgame_Text_MayReadyYet:
	.string "May: Are you ready for our\n"
	.string "battle now?$"

Postgame_Text_MayLetsGo:
	.string "May: Great! I won't lose this time!$"

Postgame_Text_MayDefeat:
	.string "Wow! You're still as tough\n"
	.string "as ever!$"

Postgame_Text_BrendanIntro:
	.string "Brendan: Hey {PLAYER}!\n"
	.string "I've been looking for you.\l"
	.string "How about a quick battle?$"

Postgame_Text_BrendanReadyYet:
	.string "Brendan: Hey, you ready to go?$"

Postgame_Text_BrendanLetsGo:
	.string "Brendan: All right!\n"
	.string "Let's see how much you've grown!$"

Postgame_Text_RivalDeclined:
	.string "Oh, I see...\n"
	.string "Well, I'll be here if you change\l"
	.string "your mind.$"

Postgame_Text_RivalPostBattle:
	.string "That was an incredible match.\n"
	.string "Thanks for the battle!$"

Postgame_EventScript_BrendanAskFirst:
	msgbox Postgame_Text_BrendanIntro, MSGBOX_YESNO
	return

Postgame_EventScript_BrendanAskAgain:
	msgbox Postgame_Text_BrendanReadyYet, MSGBOX_YESNO
	return
