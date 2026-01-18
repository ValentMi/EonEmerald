.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
	lock
	faceplayer
	msgbox gText_SwitchAbility MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_AbilitySwitch_Cancel
	special SwitchMonAbility
	msgbox gText_AbilitySwitched MSGBOX_NPC
	release
	end

	EventScript_AbilitySwitch_Cancel:
	msgbox gText_ComeBackAnytime MSGBOX_NPC
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
	msgbox gText_SwitchAbility, MSGBOX_NPC
	lock
	faceplayer
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_AbilitySwitch_Cancel
	
	@ The special must be written to return TRUE or FALSE to VAR_RESULT
	special SwitchMonAbility 
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_NoSecondAbility
	
	@ Only take the item if VAR_RESULT was TRUE
	removeitem ITEM_HEART_SCALE, 1
	msgbox gText_AbilitySwitched, MSGBOX_DEFAULT
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_NoSecondAbility::
	msgbox gText_FallarborTown_MoveRelearnersHouse_Text_NoSecondAbility, MSGBOX_DEFAULT
	release
	end
	
	
OLDMOVETUTOR::
	faceplayer
	lockall
	//applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	//waitmovement 0
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	end

FallarborTown_OLDMoveRelearnersHouse_EventScript_AskTeachMove::
	faceplayer
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
	.string "I'm the Ability Tutor.\p"
	.string "I know all the abilities Pokémon\n"
	.string "have--every one of them--and I can\l"
	.string "teach Pokémon those abilities.\p"
	.string "I'll do it for a Heart Scale.\n"
	.string "I'm collecting those now.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness Heart Scale!\p"
	.string "Let me guess, you want me to\n"
	.string "change abilities?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
	.string "Which Pokémon needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
	.string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
	.string "If a Pokémon needs to switch abilities,\n"
	.string "come back with a Heart Scale.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"
	
gText_SwitchAbility:
	.string "I'm the Ability Tutor.\p"
	.string "I'll change an ability\n"
	.string "for you, if possible.$"

gText_SwitchAbility2:
	.string "Have you come back to\n"
	.string "change an ability?$"
	
gText_AbilitySwitched:
	.string "Your Pokémon's ability changed.\n"
	.string "Come back anytime!$"
	
gText_ComeBackAnytime:
	.string "Come back anytime!$"

gText_FallarborTown_MoveRelearnersHouse_Text_NoSecondAbility:
	.string "I'm sorry, but this Pokémon only\n"
	.string "has one natural ability.\p"
	.string "I can't switch it!$"
