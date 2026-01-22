	
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
	waitmovement 0
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
	
Postgame_EventScript_Block_Cabin::
	msgbox gText_Postgame_EventScript_Block_Cabin, MSGBOX_NPC
	release
	end
	
gText_Postgame_EventScript_Block_Cabin:
	.string "This cabin is reserved.\n"
	.string "Please leave.$"
	
Tidal_Shady_Salesman::
	lock
	faceplayer
	message gText_Tidal_Shady_Salesman
	waitmessage
	pokemart Tidal_Shady_Salesman_Stock
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Tidal_Shady_Salesman_Stock:
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_PREMIER_BALL
	.2byte ITEM_MAX_REVIVE
	.2byte ITEM_NUGGET
	.2byte ITEM_OLD_SEA_MAP
	pokemartlistend
	
gText_Tidal_Shady_Salesman:
	.string "I'm selling rare goods! Where did\n"
	.string "I get them? Don't worry about it!$"
	
Postgame_EventScript_Maxie::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_MAXIE_SB, Postgame_EventScript_Maxie_Defeated
	msgbox Postgame_Text_MaxieAsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_MaxieDeclined
	trainerbattle_no_intro TRAINER_BRAWLY_4, Postgame_Text_MaxieDefeated
	setflag FLAG_DEFEATED_MAXIE_SB
	msgbox Postgame_Text_MaxiePostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Maxie_Defeated::
	msgbox Postgame_Text_MaxiePostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_MaxieDeclined::
	msgbox Postgame_Text_MaxieDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Tabitha::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_TABITHA_SB, Postgame_EventScript_Tabitha_Defeated
	msgbox Postgame_Text_TabithaAsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_TabithaDeclined
	trainerbattle_no_intro TRAINER_WATTSON_4, Postgame_Text_TabithaDefeated
	setflag FLAG_DEFEATED_TABITHA_SB
	msgbox Postgame_Text_TabithaPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Tabitha_Defeated::
	msgbox Postgame_Text_TabithaPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_TabithaDeclined::
	msgbox Postgame_Text_TabithaDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Courtney::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_COURTNEY_SB, Postgame_EventScript_Courtney_Defeated
	msgbox Postgame_Text_CourtneyAsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_CourtneyDeclined
	trainerbattle_no_intro TRAINER_FLANNERY_2, Postgame_Text_CourtneyDefeated
	setflag FLAG_DEFEATED_COURTNEY_SB
	msgbox Postgame_Text_CourtneyPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Courtney_Defeated::
	msgbox Postgame_Text_CourtneyPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_CourtneyDeclined::
	msgbox Postgame_Text_CourtneyDeclined, MSGBOX_DEFAULT
	release
	end
	
Postgame_EventScript_Archie::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_ARCHIE_SB, Postgame_EventScript_Archie_Defeated
	msgbox Postgame_Text_ArchieAsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_ArchieDeclined
	trainerbattle_no_intro TRAINER_BRAWLY_3, Postgame_Text_ArchieDefeated
	setflag FLAG_DEFEATED_ARCHIE_SB
	msgbox Postgame_Text_ArchiePostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Archie_Defeated::
	msgbox Postgame_Text_ArchiePostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_ArchieDeclined::
	msgbox Postgame_Text_ArchieDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Matt::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_MATT_SB, Postgame_EventScript_Matt_Defeated
	msgbox Postgame_Text_MattAsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_MattDeclined
	trainerbattle_no_intro TRAINER_WATTSON_3, Postgame_Text_MattDefeated
	setflag FLAG_DEFEATED_MATT_SB
	msgbox Postgame_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Matt_Defeated::
	msgbox Postgame_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_MattDeclined::
	msgbox Postgame_Text_MattDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Shelly::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_SHELLY_SB, Postgame_EventScript_Shelly_Defeated
	msgbox Postgame_Text_ShellyAsktoBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_ShellyDeclined
	trainerbattle_no_intro TRAINER_WATTSON_2, Postgame_Text_ShellyDefeated
	setflag FLAG_DEFEATED_SHELLY_SB
	msgbox Postgame_Text_ShellyPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Shelly_Defeated::
	msgbox Postgame_Text_ShellyPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_ShellyDeclined::
	msgbox Postgame_Text_ShellyDeclined, MSGBOX_DEFAULT
	release
	end
	
Postgame_Text_MaxieAsktoBattle:
	.string "The land... it still calls to me.\n"
	.string "Will you test my resolve in battle?$"

Postgame_Text_MaxieDefeated:
	.string "Fine work.\n"
	.string "Your flame burns bright.$"

Postgame_Text_MaxiePostBattle:
	.string "I will continue to study this world.\n"
	.string "Come back for a rematch sometime.$"

Postgame_Text_MaxieDeclined:
	.string "Hmph. Very well.$"

Postgame_Text_TabithaAsktoBattle:
	.string "Hehehe! You again?\n"
	.string "Ready for a scorching battle?$"

Postgame_Text_TabithaDefeated:
	.string "Urgh... too hot to handle!$"

Postgame_Text_TabithaPostBattle:
	.string "I'll be ready next time!$"

Postgame_Text_TabithaDeclined:
	.string "Tch. Don't waste my time.$"

Postgame_Text_CourtneyAsktoBattle:
	.string "Analyzing target... Battle?\n"
	.string "Yes/No?$"

Postgame_Text_CourtneyDefeated:
	.string "Analysis complete.\n"
	.string "You are strong.$"

Postgame_Text_CourtneyPostBattle:
	.string "Staying here.\n"
	.string "To observe.$"

Postgame_Text_CourtneyDeclined:
	.string "Target declined.$"

Postgame_Text_ArchieAsktoBattle:
	.string "The sea is vast, and so is my power!\n"
	.string "Care to dive into a battle?$"

Postgame_Text_ArchieDefeated:
	.string "Gah! I've been washed away!$"

Postgame_Text_ArchiePostBattle:
	.string "Keep that spirit! The ocean needs\n"
	.string "people like you.$"

Postgame_Text_ArchieDeclined:
	.string "Suit yourself, land-lubber.$"

Postgame_Text_MattAsktoBattle:
	.string "Hey! You look tough!\n"
	.string "Let's see what you've got!$"

Postgame_Text_MattDefeated:
	.string "Whoa! You've got some muscle!$"

Postgame_Text_MattPostBattle:
	.string "That was a blast!\n"
	.string "Come back soon!$"

Postgame_Text_MattDeclined:
	.string "Maybe later then.$"

Postgame_Text_ShellyAsktoBattle:
	.string "I've learned much since we last met.\n"
	.string "Shall we test my new tactics?$"

Postgame_Text_ShellyDefeated:
	.string "Drowned out already...$"

Postgame_Text_ShellyPostBattle:
	.string "You have a deep bond with your\n"
	.string "POKéMON. It's impressive.$"

Postgame_Text_ShellyDeclined:
	.string "I'll be here if you change your mind.$"
	
@ --- SHARED DECLINED SCRIPT ---
@ This fixes the "undefined reference" errors in your compiler output
Postgame_EventScript_HoennLeader_Declined::
	msgbox Postgame_Text_HoennLeaderDeclined, MSGBOX_DEFAULT
	release
	end

@ --- HOENN GYM LEADERS ---

@ --- ROXANNE ---
Postgame_EventScript_SSTidal_Roxanne::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_ROXANNE_POSTGAME, Postgame_EventScript_Roxanne_Defeated
	msgbox Postgame_Text_Roxanne_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Roxanne_Declined
	trainerbattle_no_intro TRAINER_ROXANNE_5, Postgame_Text_Roxanne_RematchDefeat
	setflag FLAG_ROXANNE_POSTGAME
	msgbox Postgame_Text_Roxanne_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Roxanne_Defeated::
	msgbox Postgame_Text_Roxanne_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_ROXANNE_POSTGAME
	release
	end

Postgame_EventScript_Roxanne_Declined::
	msgbox Postgame_Text_Roxanne_Declined, MSGBOX_DEFAULT
	release
	end

@ --- BRAWLY ---
Postgame_EventScript_SSTidal_Brawly::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_BRAWLY_POSTGAME, Postgame_EventScript_Brawly_Defeated
	msgbox Postgame_Text_Brawly_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Brawly_Declined
	trainerbattle_no_intro TRAINER_BRAWLY_5, Postgame_Text_Brawly_RematchDefeat
	setflag FLAG_BRAWLY_POSTGAME
	msgbox Postgame_Text_Brawly_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Brawly_Defeated::
	msgbox Postgame_Text_Brawly_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_BRAWLY_POSTGAME
	release
	end

Postgame_EventScript_Brawly_Declined::
	msgbox Postgame_Text_Brawly_Declined, MSGBOX_DEFAULT
	release
	end

@ --- WATTSON ---
Postgame_EventScript_SSTidal_Wattson::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_WATTSON_POSTGAME, Postgame_EventScript_Wattson_Defeated
	msgbox Postgame_Text_Wattson_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Wattson_Declined
	trainerbattle_no_intro TRAINER_WATTSON_5, Postgame_Text_Wattson_RematchDefeat
	setflag FLAG_WATTSON_POSTGAME
	msgbox Postgame_Text_Wattson_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Wattson_Defeated::
	msgbox Postgame_Text_Wattson_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_WATTSON_POSTGAME
	release
	end

Postgame_EventScript_Wattson_Declined::
	msgbox Postgame_Text_Wattson_Declined, MSGBOX_DEFAULT
	release
	end

@ --- FLANNERY ---
Postgame_EventScript_SSTidal_Flannery::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_FLANNERY_POSTGAME, Postgame_EventScript_Flannery_Defeated
	msgbox Postgame_Text_Flannery_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Flannery_Declined
	trainerbattle_no_intro TRAINER_FLANNERY_5, Postgame_Text_Flannery_RematchDefeat
	setflag FLAG_FLANNERY_POSTGAME
	msgbox Postgame_Text_Flannery_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Flannery_Defeated::
	msgbox Postgame_Text_Flannery_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_FLANNERY_POSTGAME
	release
	end

Postgame_EventScript_Flannery_Declined::
	msgbox Postgame_Text_Flannery_Declined, MSGBOX_DEFAULT
	release
	end

@ --- NORMAN ---
Postgame_EventScript_SSTidal_Norman::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_NORMAN_POSTGAME, Postgame_EventScript_Norman_Defeated
	msgbox Postgame_Text_Norman_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Norman_Declined
	trainerbattle_no_intro TRAINER_NORMAN_5, Postgame_Text_Norman_RematchDefeat
	setflag FLAG_NORMAN_POSTGAME
	msgbox Postgame_Text_Norman_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Norman_Defeated::
	msgbox Postgame_Text_Norman_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_NORMAN_POSTGAME
	release
	end

Postgame_EventScript_Norman_Declined::
	msgbox Postgame_Text_Norman_Declined, MSGBOX_DEFAULT
	release
	end

@ --- WINONA ---
Postgame_EventScript_SSTidal_Winona::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_WINONA_POSTGAME, Postgame_EventScript_Winona_Defeated
	msgbox Postgame_Text_Winona_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Winona_Declined
	trainerbattle_no_intro TRAINER_WINONA_5, Postgame_Text_Winona_RematchDefeat
	setflag FLAG_WINONA_POSTGAME
	msgbox Postgame_Text_Winona_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Winona_Defeated::
	msgbox Postgame_Text_Winona_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_WINONA_POSTGAME
	release
	end

Postgame_EventScript_Winona_Declined::
	msgbox Postgame_Text_Winona_Declined, MSGBOX_DEFAULT
	release
	end

@ --- TATE & LIZA ---
Postgame_EventScript_SSTidal_TateAndLiza::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_TATELIZA_POSTGAME, Postgame_EventScript_TateLiza_Defeated
	msgbox Postgame_Text_TateLiza_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_TateLiza_Declined
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, Postgame_Text_TateLiza_RematchDefeat
	setflag FLAG_TATELIZA_POSTGAME
	msgbox Postgame_Text_TateLiza_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_TateLiza_Defeated::
	msgbox Postgame_Text_TateLiza_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_TATELIZA_POSTGAME
	release
	end

Postgame_EventScript_TateLiza_Declined::
	msgbox Postgame_Text_TateLiza_Declined, MSGBOX_DEFAULT
	release
	end

@ --- JUAN ---
Postgame_EventScript_SSTidal_Juan::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_JUAN_POSTGAME, Postgame_EventScript_Juan_Defeated
	msgbox Postgame_Text_Juan_RematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Juan_Declined
	trainerbattle_no_intro TRAINER_JUAN_5, Postgame_Text_Juan_RematchDefeat
	setflag FLAG_JUAN_POSTGAME
	msgbox Postgame_Text_Juan_RematchPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Juan_Defeated::
	msgbox Postgame_Text_Juan_RematchPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_JUAN_POSTGAME
	release
	end

Postgame_EventScript_Juan_Declined::
	msgbox Postgame_Text_Juan_Declined, MSGBOX_DEFAULT
	release
	end

@ --- KANTO GYM LEADERS ---

Postgame_EventScript_SSTidal_Brock::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_BROCK, Postgame_EventScript_Brock_TidalDefeatedScript
	msgbox Postgame_Text_Brock_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Brock_TidalDeclined
	trainerbattle_no_intro TRAINER_BROCK, Postgame_Text_Brock_TidalDefeated
	setflag FLAG_DEFEATED_BROCK
	msgbox Postgame_Text_Brock_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Brock_TidalDefeatedScript::
	msgbox Postgame_Text_Brock_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_BROCK
	release
	end

Postgame_EventScript_Brock_TidalDeclined::
	msgbox Postgame_Text_Brock_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_SSTidal_Misty::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_MISTY, Postgame_EventScript_Misty_TidalDefeatedScript
	msgbox Postgame_Text_Misty_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Misty_TidalDeclined
	trainerbattle_no_intro TRAINER_MISTY, Postgame_Text_Misty_TidalDefeated
	setflag FLAG_DEFEATED_MISTY
	msgbox Postgame_Text_Misty_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Misty_TidalDefeatedScript::
	msgbox Postgame_Text_Misty_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_MISTY
	release
	end

Postgame_EventScript_Misty_TidalDeclined::
	msgbox Postgame_Text_Misty_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_SSTidal_LtSurge::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_SURGE, Postgame_EventScript_LtSurge_TidalDefeatedScript
	msgbox Postgame_Text_LtSurge_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_LtSurge_TidalDeclined
	trainerbattle_no_intro TRAINER_SURGE, Postgame_Text_LtSurge_TidalDefeated
	setflag FLAG_DEFEATED_SURGE
	msgbox Postgame_Text_LtSurge_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_LtSurge_TidalDefeatedScript::
	msgbox Postgame_Text_LtSurge_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_SURGE
	release
	end

Postgame_EventScript_LtSurge_TidalDeclined::
	msgbox Postgame_Text_LtSurge_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_SSTidal_Erika::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_ERIKA, Postgame_EventScript_Erika_TidalDefeatedScript
	msgbox Postgame_Text_Erika_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Erika_TidalDeclined
	trainerbattle_no_intro TRAINER_ERIKA, Postgame_Text_Erika_TidalDefeated
	setflag FLAG_DEFEATED_ERIKA
	msgbox Postgame_Text_Erika_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Erika_TidalDefeatedScript::
	msgbox Postgame_Text_Erika_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_ERIKA
	release
	end

Postgame_EventScript_Erika_TidalDeclined::
	msgbox Postgame_Text_Erika_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_SSTidal_Koga::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_KOGA, Postgame_EventScript_Koga_TidalDefeatedScript
	msgbox Postgame_Text_Koga_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Koga_TidalDeclined
	trainerbattle_no_intro TRAINER_KOGA, Postgame_Text_Koga_TidalDefeated
	setflag FLAG_DEFEATED_KOGA
	msgbox Postgame_Text_Koga_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Koga_TidalDefeatedScript::
	msgbox Postgame_Text_Koga_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_KOGA
	release
	end

Postgame_EventScript_Koga_TidalDeclined::
	msgbox Postgame_Text_Koga_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_SSTidal_Sabrina::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_SABRINA, Postgame_EventScript_Sabrina_TidalDefeatedScript
	msgbox Postgame_Text_Sabrina_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Sabrina_TidalDeclined
	trainerbattle_no_intro TRAINER_SABRINA, Postgame_Text_Sabrina_TidalDefeated
	setflag FLAG_DEFEATED_SABRINA
	msgbox Postgame_Text_Sabrina_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Sabrina_TidalDefeatedScript::
	msgbox Postgame_Text_Sabrina_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_SABRINA
	release
	end

Postgame_EventScript_Sabrina_TidalDeclined::
	msgbox Postgame_Text_Sabrina_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_SSTidal_Blaine::
	lock
	faceplayer
	waitmovement 0
	goto_if_set FLAG_DEFEATED_BLAINE, Postgame_EventScript_Blaine_TidalDefeatedScript
	msgbox Postgame_Text_Blaine_TidalRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Postgame_EventScript_Blaine_TidalDeclined
	trainerbattle_no_intro TRAINER_BLAINE, Postgame_Text_Blaine_TidalDefeated
	setflag FLAG_DEFEATED_BLAINE
	msgbox Postgame_Text_Blaine_TidalPostBattle, MSGBOX_DEFAULT
	release
	end

Postgame_EventScript_Blaine_TidalDefeatedScript::
	msgbox Postgame_Text_Blaine_TidalPostBattle, MSGBOX_DEFAULT
	clearflag FLAG_DEFEATED_BLAINE
	release
	end

Postgame_EventScript_Blaine_TidalDeclined::
	msgbox Postgame_Text_Blaine_TidalDeclined, MSGBOX_DEFAULT
	release
	end

Postgame_Text_Brock_TidalRematchIntro:
	.string "My POKéMON have grown tougher\n"
	.string "since our last bout.\l"
	.string "How about a rematch?$"

Postgame_Text_Brock_TidalDefeated:
	.string "I tried hard, but you\n"
	.string "were too strong.$"

Postgame_Text_Brock_TidalPostBattle:
	.string "Enjoy the cruise.\n"
	.string "A true trainer never stops training.$"

Postgame_Text_Brock_TidalDeclined:
	.string "I see. Even a mountain needs\n"
	.string "to rest sometimes.$"

Postgame_Text_Misty_TidalRematchIntro:
	.string "Ready to get soaked again?\n"
	.string "Let's have a rematch!$"

Postgame_Text_Misty_TidalDefeated:
	.string "I guess I was the one\n"
	.string "who got soaked...$"

Postgame_Text_Misty_TidalPostBattle:
	.string "You're world-class, CHAMPION.\n"
	.string "Kanto could learn a lot from you.$"

Postgame_Text_Misty_TidalDeclined:
	.string "No? And here I thought we\n"
	.string "were making a splash!$"

Postgame_Text_LtSurge_TidalRematchIntro:
	.string "You're back for more sparks?\n"
	.string "I'll shock you into submission!$"

Postgame_Text_LtSurge_TidalDefeated:
	.string "Argh! You short-circuited\n"
	.string "my strategy!$"

Postgame_Text_LtSurge_TidalPostBattle:
	.string "Ten-hut! You're a soldier\n"
	.string "among trainers!$"

Postgame_Text_LtSurge_TidalDeclined:
	.string "Humph. Come back when you're\n"
	.string "ready for a jolt!$"
	
Postgame_Text_Erika_TidalRematchIntro:
	.string "The sea breeze is lovely, but I\n"
	.string "miss the scent of my greenhouse.\l"
	.string "Shall we have a rematch?$"

Postgame_Text_Erika_TidalDefeated:
	.string "Oh my...\n"
	.string "You are as formidable as ever.$"

Postgame_Text_Erika_TidalPostBattle:
	.string "I shall continue to enjoy the\n"
	.string "view. It is quite tranquil.$"

Postgame_Text_Erika_TidalDeclined:
	.string "I understand. This ship is\n"
	.string "perfect for a nap.$"

Postgame_Text_Koga_TidalRematchIntro:
	.string "Fwahahaha! A ninja can strike\n"
	.string "even in the middle of the sea!\l"
	.string "Are you prepared for a rematch?$"

Postgame_Text_Koga_TidalDefeated:
	.string "You have seen through\n"
	.string "my techniques once more!$"

Postgame_Text_Koga_TidalPostBattle:
	.string "You have mastered the art\n"
	.string "of battle. I am impressed.$"

Postgame_Text_Koga_TidalDeclined:
	.string "Humph. A ninja must always\n"
	.string "be patient.$"

Postgame_Text_Sabrina_TidalRematchIntro:
	.string "I foresaw your arrival on\n"
	.string "this ship. You want a rematch?\l"
	.string "I already know the answer.$"

Postgame_Text_Sabrina_TidalDefeated:
	.string "My psychic powers were not\n"
	.string "enough to stop you.$"

Postgame_Text_Sabrina_TidalPostBattle:
	.string "The future is not set in stone,\n"
	.string "but your strength is a constant.$"

Postgame_Text_Sabrina_TidalDeclined:
	.string "I saw that coming as well.$"

Postgame_Text_Blaine_TidalRematchIntro:
	.string "Hah! I'm an old man, but I'm still\n"
	.string "burning with passion!\l"
	.string "Let's have a fiery rematch!$"

Postgame_Text_Blaine_TidalDefeated:
	.string "I've been burned out!$"

Postgame_Text_Blaine_TidalPostBattle:
	.string "You'd better have Burn Heal ready\n"
	.string "the next time we meet!$"

Postgame_Text_Blaine_TidalDeclined:
	.string "You've dampened my spirits!$"

@ --- ROXANNE TEXT ---
Postgame_Text_Roxanne_RematchIntro:
	.string "I'm so glad to see you again.\n"
	.string "Shall we have a rematch?$"

Postgame_Text_Roxanne_RematchDefeat:
	.string "I've lost again...$"

Postgame_Text_Roxanne_RematchPostBattle:
	.string "I will keep training to\n"
	.string "become even stronger!$"

@ --- BRAWLY TEXT ---
Postgame_Text_Brawly_RematchIntro:
	.string "A big wave is coming!\n"
	.string "Ready for a rematch?$"

Postgame_Text_Brawly_RematchDefeat:
	.string "Whoa! You're a total wipeout!$"

Postgame_Text_Brawly_RematchPostBattle:
	.string "You truly are a master\n"
	.string "of your own style.$"

@ --- WATTSON TEXT ---
Postgame_Text_Wattson_RematchIntro:
	.string "Wahahaha! I'm fully charged!\n"
	.string "Let's have a rematch!$"

Postgame_Text_Wattson_RematchDefeat:
	.string "I'm short-circuited!$"

Postgame_Text_Wattson_RematchPostBattle:
	.string "Your power is electric!\n"
	.string "Keep it up!$"

@ --- FLANNERY TEXT ---
Postgame_Text_Flannery_RematchIntro:
	.string "I'm burning with passion!\n"
	.string "Ready for a rematch?$"

Postgame_Text_Flannery_RematchDefeat:
	.string "I'm all burned out...$"

Postgame_Text_Flannery_RematchPostBattle:
	.string "My passion won't fade!\n"
	.string "I'll be even hotter next time!$"

@ --- NORMAN TEXT ---
Postgame_Text_Norman_RematchIntro:
	.string "I must show you my growth.\n"
	.string "Let's battle!$"

Postgame_Text_Norman_RematchDefeat:
	.string "You truly have surpassed me.$"

Postgame_Text_Norman_RematchPostBattle:
	.string "My dream? I believe it\n"
	.string "has already come true.$"

@ --- WINONA TEXT ---
Postgame_Text_Winona_RematchIntro:
	.string "My bird POKéMON and I have\n"
	.string "taken flight! Rematch?$"

Postgame_Text_Winona_RematchDefeat:
	.string "We've been grounded...$"

Postgame_Text_Winona_RematchPostBattle:
	.string "The sky is the limit for a\n"
	.string "trainer like you.$"

@ --- TATE & LIZA TEXT ---
Postgame_Text_TateLiza_RematchIntro:
	.string "TATE: Our minds are one!\n"
	.string "LIZA: Are you ready for us?$"

Postgame_Text_TateLiza_RematchDefeat:
	.string "TATE: We were out of sync...\n"
	.string "LIZA: You were too strong...$"

Postgame_Text_TateLiza_RematchPostBattle:
	.string "TATE: We will meditate.\n"
	.string "LIZA: To become even stronger!$"

@ --- JUAN TEXT ---
Postgame_Text_Juan_RematchIntro:
	.string "The elegance of water awaits!\n"
	.string "Shall we dance once more?$"

Postgame_Text_Juan_RematchDefeat:
	.string "What a magnificent performance!$"

Postgame_Text_Juan_RematchPostBattle:
	.string "Your strength is as deep\n"
	.string "as the ocean floor.$"

@ --- SHARED TEXT ---
Postgame_Text_HoennLeaderDeclined:
	.string "I see. Perhaps another time then.$"

Postgame_Text_Roxanne_Declined:
	.string "I see. Even a student needs time\n"
	.string "off from their studies.$"

Postgame_Text_Brawly_Declined:
	.string "No worries. I'll just keep\n"
	.string "riding the waves until you're ready.$"

Postgame_Text_Wattson_Declined:
	.string "Wahahaha! No spark today?\n"
	.string "Come back when you're recharged!$"

Postgame_Text_Flannery_Declined:
	.string "Hmph... I was all fired up,\n"
	.string "but I suppose I can wait.$"

Postgame_Text_Norman_Declined:
	.string "A true trainer knows when it's\n"
	.string "time to rest. I'll be here.$"

Postgame_Text_Winona_Declined:
	.string "The wind isn't quite right?\n"
	.string "We shall wait for another breeze.$"

Postgame_Text_TateLiza_Declined:
	.string "TATE: You aren't ready?\n"
	.string "LIZA: We will wait for you!$"

Postgame_Text_Juan_Declined:
	.string "Adieu! We shall postpone\n"
	.string "our grand performance.$"
