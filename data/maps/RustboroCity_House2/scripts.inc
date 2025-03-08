RustboroCity_House2_MapScripts::
	.byte 0

RustboroCity_House2_EventScript_PokefanF::
	msgbox RustboroCity_House2_Text_TrainerSchoolExcellent, MSGBOX_NPC
	end

RustboroCity_House2_EventScript_LittleGirl::
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
	end

RustboroCity_House2_Text_TrainerSchoolExcellent:
	.string "The TRAINER'S SCHOOL is excellent.\p"
	.string "If you study there, you could even\n"
	.string "become a GYM LEADER.$"

RustboroCity_House2_Text_RoxanneKnowsALot:
	.string "ROXANNE, the GYM LEADER, really knows\n"
	.string "a lot about POKéMON.\p"
	.string "She's really strong, too!$"
	
RustboroCity_House2_GiveEgg::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EEVEE_EGG, Rustboro_House_EventScript_RustboroWishYouBestOfLuck
	msgbox Rustboro_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Rustboro_House_Text_OhHowDisappointing
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	setflag FLAG_RECEIVED_EEVEE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message Rustboro_House_Text_ObtainedTheEgg
	waitfanfare
	random 1
	switch VAR_RESULT
	case 0, Script_GiveEeveeEgg
	release
	end
	
Rustboro_House_EventScript_RustboroWishYouBestOfLuck::
	msgbox Rustboro_House_Text_RustboroWishYouBestOfLuck, MSGBOX_NPC
	end
	
Rustboro_Text_HaveEggWillYouTakeIt::
    .string "I have an egg, but no time\n"
    .string "to go and hatch it.\p"
	.string "Could you take it off\n"
	.string "my hands?$"

Rustboro_House_Text_OhHowDisappointing::
    .string "Oh…\n"
    .string "That's okay.$"

Rustboro_House_Text_RustboroWishYouBestOfLuck::
    .string "I hope that Pokemon helps\n"
    .string "you in battle.$"

Rustboro_House_Text_ObtainedTheEgg::
	.string "{PLAYER} received the egg.$"
