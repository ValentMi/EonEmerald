MoveTutor_EventScript_NotEnoughMoney::
	msgbox Text_YouDontHaveEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclinedMoney
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SWAGGER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_SwaggerTaught
	end

MoveTutor_EventScript_SwaggerDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_SwaggerDeclined
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	hidemoneybox
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RolloutTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclinedMoney
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_RolloutTaught
	end

MoveTutor_EventScript_RolloutDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_RolloutDeclined
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	hidemoneybox
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclinedMoney
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_FURY_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_FuryCutterTaught
	end

MoveTutor_EventScript_FuryCutterDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_FuryCutterDeclined
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	hidemoneybox
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclinedMoney
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_MimicTaught
	end

MoveTutor_EventScript_MimicDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_MimicDeclined
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	hidemoneybox
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclinedMoney
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_METRONOME
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_MetronomeTaught
	end

MoveTutor_EventScript_MetronomeDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_MetronomeDeclined
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	hidemoneybox
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclinedMoney
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_SleepTalkTaught
	end

MoveTutor_EventScript_SleepTalkDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_SleepTalkDeclined
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	hidemoneybox
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclinedMoney
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_SubstituteTaught
	end

MoveTutor_EventScript_SubstituteDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_SubstituteDeclined
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	hidemoneybox
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclinedMoney
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_DYNAMIC_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_DynamicPunchTaught
	end

MoveTutor_EventScript_DynamicPunchDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_DynamicPunchDeclined
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	hidemoneybox
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclinedMoney
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_DoubleEdgeTaught
	end

MoveTutor_EventScript_DoubleEdgeDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_DoubleEdgeDeclined
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	hidemoneybox
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclinedMoney
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_EXPLOSION
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_ExplosionTaught
	end

MoveTutor_EventScript_ExplosionDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_ExplosionDeclined
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	hidemoneybox
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

GSCMoveTutor_EventScript_CurseTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_CURSE_Teach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	msgbox MoveTutor_Text_GSCMoveTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_CURSE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_GSCMoveTutorTaught
	end

GSCMoveTutor_EventScript_ZapCannonTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_ZAP_CANNON_Teach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	msgbox MoveTutor_Text_GSCMoveTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ZAP_CANNON
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_GSCMoveTutorTaught
	end

GSCMoveTutor_EventScript_FirePunchTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_FIRE_PUNCH_Teach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	msgbox MoveTutor_Text_GSCMoveTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_GSCMoveTutorTaught
	end

GSCMoveTutor_EventScript_IcePunchTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_ICE_PUNCH_Teach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	msgbox MoveTutor_Text_GSCMoveTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_GSCMoveTutorTaught
	end

GSCMoveTutor_EventScript_ThunderPunchTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox MoveTutor_Text_THUNDER_PUNCH_Teach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	msgbox MoveTutor_Text_GSCMoveTutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, TUTOR_MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_GSCMoveTutorDeclinedMoney
	removemoney 10000
	updatemoneybox
	goto MoveTutor_EventScript_GSCMoveTutorTaught
	end

MoveTutor_EventScript_GSCMoveTutorDeclinedMoney::
	hidemoneybox
	goto MoveTutor_EventScript_GSCMoveTutorDeclined
	end

MoveTutor_EventScript_GSCMoveTutorDeclined::
	msgbox MoveTutor_Text_GSCMoveTutorDeclined, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MoveTutor_EventScript_GSCMoveTutorTaught::
	hidemoneybox
	msgbox MoveTutor_Text_GSCMoveTutorTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return
	
MoveTutor_Text_FIRE_PUNCH_Teach::
    .string "Would you like me to teach a\n"
    .string "Pokemon the move Fire Punch?$"
	
MoveTutor_Text_ICE_PUNCH_Teach::
    .string "Would you like me to teach a\n"
    .string "Pokemon the move Ice Punch?$"
	
MoveTutor_Text_THUNDER_PUNCH_Teach::
    .string "Would you like me to teach a\n"
    .string "Pokemon the move Thunderpunch?$"
	
Text_YouDontHaveEnoughMoney:
    .string "You don't have enough money...$"
	
TwoIsland_EventScript_BodySlamTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, TUTOR_MOVE_BODY_SLAM
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
	removemoney 10000
	updatemoneybox
	goto EventScript_BodySlamTaught
	end

EventScript_BodySlamDeclined::
	msgbox Text_BodySlamDeclined
	hidemoneybox
	release
	end

EventScript_BodySlamTaught::
	msgbox Text_BodySlamTaught
	hidemoneybox
	release
	end
	
Text_BodySlamTeach::
    .string "Ready?\n"
    .string "Boing!\p"
    .string "We're having a BODY SLAM match\n"
    .string "to see who wimps out first.\p"
    .string "If you were to join us, you'd be\n"
    .string "squashed like a bug, though…\p"
    .string "How about I teach BODY SLAM to\n"
    .string "a POKéMON of yours instead?$"

Text_BodySlamDeclined::
    .string "Come again!\n"
    .string "Boing!$"

Text_BodySlamWhichMon::
    .string "Which POKéMON wants to learn how\n"
    .string "to BODY SLAM?$"

Text_BodySlamTaught::
    .string "Boioing!$"
	
SevenIsland_EventScript_SwordsDanceTutor::
	lock
	faceplayer
	waitmovement 0
	showmoneybox 0, 0
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	checkmoney 10000
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_NotEnoughMoney
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, TUTOR_MOVE_SWORDS_DANCE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
	removemoney 10000
	updatemoneybox
	goto EventScript_SwordsDanceTaught
	end

EventScript_SwordsDanceDeclined::
	msgbox Text_SwordsDanceDeclined
	hidemoneybox
	release
	end

EventScript_SwordsDanceTaught::
	msgbox Text_SwordsDanceTaught
	hidemoneybox
	release
	end

Text_SwordsDanceTeach::
    .string "Not many people come out here.\p"
    .string "If I train here, I'm convinced that\n"
    .string "I'll get stronger and stronger.\p"
    .string "Yep, stronger and stronger…\p"
    .string "How would you like to learn a move\n"
    .string "like that? It's SWORDS DANCE.$"

Text_SwordsDanceDeclined::
    .string "Well, that's fine, too.$"

Text_SwordsDanceWhichMon::
    .string "All right, pick which POKéMON\n"
    .string "I should teach it to.$"

Text_SwordsDanceReteach::
    .string "I'm still trying to get stronger\n"
    .string "and stronger…\p"
    .string "I've heard that vitamins strengthen\n"
    .string "POKéMON, but they're so expensive!\p"
    .string "So, I started charging ¥5000 to\n"
    .string "teach other POKéMON SWORDS DANCE.$"

Text_SwordsDanceReteach2::
    .string "Would you like me to teach your\n"
    .string "POKéMON the move SWORDS DANCE?$"

Text_SwordsDanceNotEnoughMoney::
    .string "You don't have ¥5000?\p"
    .string "I'm sorry, but I need the money\n"
    .string "to make my POKéMON strong.\p"
    .string "I'll teach SWORDS DANCE to you\n"
    .string "when you come back with enough.$"

Text_SwordsDanceTaught::
    .string "If only we could keep getting\n"
    .string "stronger and stronger, eh?$"
