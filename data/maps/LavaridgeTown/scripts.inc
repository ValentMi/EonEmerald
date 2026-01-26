.set LOCALID_RIVAL_ON_BIKE, 7
.set LOCALID_RIVAL, 8

LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
	.byte 0

LavaridgeTown_OnTransition:
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
	call Common_EventScript_SetupRivalGfxId
	call Common_EventScript_SetupRivalOnBikeGfxId
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
	end

LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
	return

LavaridgeTown_EventScript_CheckSetRivalPos::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
	return

LavaridgeTown_EventScript_SetRivalPos::
	setobjectxyperm LOCALID_RIVAL, 11, 9
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	return

LavaridgeTown_EventScript_ShowMtChimneyTrainers::
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	return

LavaridgeTown_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LavaridgeTown_OnFrame:
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
	.2byte 0

LavaridgeTown_EventScript_RivalGiveGoGoggles::
	lockall
	getplayerxy VAR_0x8008, VAR_0x8009
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
	delay 20
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
	end

LavaridgeTown_EventScript_MayGiveGoGoggles::
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_RivalExit
	end

LavaridgeTown_EventScript_BrendanGiveGoGoggles::
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_RivalExit
	end

LavaridgeTown_EventScript_RivalExit::
	closemessage
	removeobject LOCALID_RIVAL
	addobject LOCALID_RIVAL_ON_BIKE
	delay 30
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
	removeobject LOCALID_RIVAL_ON_BIKE
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LavaridgeTown_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

LavaridgeTown_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

LavaridgeTown_EventScript_RivalNoticePlayer::
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalExitHerbShop::
	opendoor 12, 15
	waitdooranim
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
	waitmovement 0
	closedoor 12, 15
	waitdooranim
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalApproachPlayer1::
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalApproachPlayer2::
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalExit1::
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalExit2::
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
	waitmovement 0
	return

LavaridgeTown_Movement_RivalExit2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

LavaridgeTown_Movement_PlayerWatchRivalExit:
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

LavaridgeTown_Movement_RivalExit1:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

LavaridgeTown_Movement_RivalApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

LavaridgeTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	walk_up
	step_end

LavaridgeTown_Movement_RivalExitHerbShop:
	walk_down
	step_end

LavaridgeTown_EventScript_HotSpringsTrigger::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
	end

LavaridgeTown_EventScript_EnteredHotSprings::
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
	end

LavaridgeTown_EventScript_ExpertM::
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
	end

LavaridgeTown_EventScript_OldMan::
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_Twin::
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
	end

LavaridgeTown_EventScript_HotSpringsOldWoman1::
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_EventScript_HotSpringsOldWoman2::
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
	end

LavaridgeTown_EventScript_ExpertF::
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
	end

LavaridgeTown_EventScript_EggWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_WYNAUT
	release
	end

LavaridgeTown_EventScript_ReceivedEgg::
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeKanto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_ReceivedJohtoEgg
	showmoneybox 0, 0
	msgbox LavaridgeTown_Text_ItWillCost, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	checkmoney 10000
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_EventScript_NotEnoughMoney
	removemoney 10000 
	updatemoneybox 0
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	hidemoneybox
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	random 67
	switch VAR_RESULT
	case 0, Script_RandomEgg1
	case 1, Script_RandomEgg2
	case 2, Script_RandomEgg3
	case 3, Script_RandomEgg4
	case 4, Script_RandomEgg5
	case 5, Script_RandomEgg6
	case 6, Script_RandomEgg7
	case 7, Script_RandomEgg8
	case 8, Script_RandomEgg9
	case 9, Script_RandomEgg10
	case 10, Script_RandomEgg11
	case 11, Script_RandomEgg12
	case 12, Script_RandomEgg13
	case 13, Script_RandomEgg14
	case 14, Script_RandomEgg15
	case 15, Script_RandomEgg16
	case 16, Script_RandomEgg17
	case 17, Script_RandomEgg18
	case 18, Script_RandomEgg19
	case 19, Script_RandomEgg20
	case 20, Script_RandomEgg21
	case 21, Script_RandomEgg22
	case 22, Script_RandomEgg23
	case 23, Script_RandomEgg24
	case 24, Script_RandomEgg25
	case 25, Script_RandomEgg26
	case 26, Script_RandomEgg27
	case 27, Script_RandomEgg28
	case 28, Script_RandomEgg29
	case 29, Script_RandomEgg30
	case 30, Script_RandomEgg31
	case 31, Script_RandomEgg32
	case 32, Script_RandomEgg33
	case 33, Script_RandomEgg34
	case 34, Script_RandomEgg35
	case 35, Script_RandomEgg36
	case 36, Script_RandomEgg37
	case 37, Script_RandomEgg38
	case 38, Script_RandomEgg39
	case 39, Script_RandomEgg40
	case 40, Script_RandomEgg41
	case 41, Script_RandomEgg42
	case 42, Script_RandomEgg43
	case 43, Script_RandomEgg44
	case 44, Script_RandomEgg45
	case 45, Script_RandomEgg46
	case 46, Script_RandomEgg47
	case 47, Script_RandomEgg48
	case 48, Script_RandomEgg49
	case 49, Script_RandomEgg50
	case 50, Script_RandomEgg51
	case 51, Script_RandomEgg52
	case 52, Script_RandomEgg53
	case 53, Script_RandomEgg54
	case 54, Script_RandomEgg55
	case 55, Script_RandomEgg56
	case 56, Script_RandomEgg57
	case 57, Script_RandomEgg58
	case 58, Script_RandomEgg59
	case 59, Script_RandomEgg60
	case 60, Script_RandomEgg61
	case 61, Script_RandomEgg62
	case 62, Script_RandomEgg63
	case 63, Script_RandomEgg64
	case 64, Script_RandomEgg65
	case 65, Script_RandomEgg66
	case 66, Script_RandomEgg67
	release
	end

LavaridgeTown_EventScript_ReceivedJohtoEgg::
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeJohto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_ReceivedHoennEgg
	showmoneybox 0, 0
	msgbox LavaridgeTown_Text_ItWillCost, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	checkmoney 10000
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_EventScript_NotEnoughMoney
	removemoney 10000 
	updatemoneybox 0
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	hidemoneybox
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	random 48
	switch VAR_RESULT
	case 0, Script_RandomEgg69
	case 1, Script_RandomEgg70
	case 2, Script_RandomEgg71
	case 3, Script_RandomEgg72
	case 4, Script_RandomEgg73
	case 5, Script_RandomEgg74
	case 6, Script_RandomEgg75
	case 7, Script_RandomEgg76
	case 8, Script_RandomEgg77
	case 9, Script_RandomEgg78
	case 10, Script_RandomEgg79
	case 11, Script_RandomEgg80
	case 12, Script_RandomEgg81
	case 13, Script_RandomEgg82
	case 14, Script_RandomEgg83
	case 15, Script_RandomEgg84
	case 16, Script_RandomEgg85
	case 17, Script_RandomEgg86
	case 18, Script_RandomEgg87
	case 19, Script_RandomEgg88
	case 20, Script_RandomEgg89
	case 21, Script_RandomEgg90
	case 22, Script_RandomEgg91
	case 23, Script_RandomEgg92
	case 24, Script_RandomEgg93
	case 25, Script_RandomEgg94
	case 26, Script_RandomEgg95
	case 27, Script_RandomEgg96
	case 28, Script_RandomEgg97
	case 29, Script_RandomEgg98
	case 30, Script_RandomEgg99
	case 31, Script_RandomEgg100
	case 32, Script_RandomEgg101
	case 33, Script_RandomEgg102
	case 34, Script_RandomEgg103
	case 35, Script_RandomEgg104
	case 36, Script_RandomEgg105
	case 37, Script_RandomEgg106
	case 38, Script_RandomEgg107
	case 39, Script_RandomEgg108
	case 40, Script_RandomEgg109
	case 41, Script_RandomEgg110
	case 42, Script_RandomEgg111
	case 43, Script_RandomEgg112
	case 44, Script_RandomEgg113
	case 45, Script_RandomEgg114
	case 46, Script_RandomEgg115
	case 47, Script_RandomEgg68
	release
	end

LavaridgeTown_EventScript_ReceivedHoennEgg::
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeHoenn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	showmoneybox 0, 0
	msgbox LavaridgeTown_Text_ItWillCost, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	checkmoney 10000
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_EventScript_NotEnoughMoney
	removemoney 10000 
	updatemoneybox 0
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	hidemoneybox
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	random 64
	switch VAR_RESULT
	case 0, Script_RandomEgg116
	case 1, Script_RandomEgg117
	case 2, Script_RandomEgg118
	case 3, Script_RandomEgg119
	case 4, Script_RandomEgg120
	case 5, Script_RandomEgg121
	case 6, Script_RandomEgg122
	case 7, Script_RandomEgg123
	case 8, Script_RandomEgg124
	case 9, Script_RandomEgg125
	case 10, Script_RandomEgg126
	case 11, Script_RandomEgg127
	case 12, Script_RandomEgg128
	case 13, Script_RandomEgg129
	case 14, Script_RandomEgg130
	case 15, Script_RandomEgg131
	case 16, Script_RandomEgg132
	case 17, Script_RandomEgg133
	case 18, Script_RandomEgg134
	case 19, Script_RandomEgg135
	case 20, Script_RandomEgg136
	case 21, Script_RandomEgg137
	case 22, Script_RandomEgg138
	case 23, Script_RandomEgg139
	case 24, Script_RandomEgg140
	case 25, Script_RandomEgg141
	case 26, Script_RandomEgg142
	case 27, Script_RandomEgg143
	case 28, Script_RandomEgg144
	case 29, Script_RandomEgg145
	case 30, Script_RandomEgg146
	case 31, Script_RandomEgg147
	case 32, Script_RandomEgg148
	case 33, Script_RandomEgg149
	case 34, Script_RandomEgg150
	case 35, Script_RandomEgg151
	case 36, Script_RandomEgg152
	case 37, Script_RandomEgg153
	case 38, Script_RandomEgg154
	case 39, Script_RandomEgg155
	case 40, Script_RandomEgg156
	case 41, Script_RandomEgg157
	case 42, Script_RandomEgg158
	case 43, Script_RandomEgg159
	case 44, Script_RandomEgg160
	case 45, Script_RandomEgg161
	case 46, Script_RandomEgg162
	case 47, Script_RandomEgg163
	case 48, Script_RandomEgg164
	case 49, Script_RandomEgg165
	case 50, Script_RandomEgg166
	case 51, Script_RandomEgg167
	case 52, Script_RandomEgg168
	case 53, Script_RandomEgg169
	case 54, Script_RandomEgg170
	case 55, Script_RandomEgg171
	case 56, Script_RandomEgg172
	case 57, Script_RandomEgg173
	case 58, Script_RandomEgg174
	case 59, Script_RandomEgg175
	case 60, Script_RandomEgg176
	case 61, Script_RandomEgg177
	case 62, Script_RandomEgg178
	case 63, Script_RandomEgg179
	release
	end

LavaridgeTown_EventScript_NoRoomForEgg::
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	hidemoneybox
	release
	end
	
LavaridgeTown_EventScript_NotEnoughMoney::
	msgbox LavaridgeTown_Text_NotEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

LavaridgeTown_EventScript_DeclineEgg::
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

LavaridgeTown_EventScript_TownSign::
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_GymSign::
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_HerbShopSign::
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
	end
	
LavaridgeTown_Text_ItWillCost:
	.string "It will cost you ¥10,000.\n"
	.string "Is that alright?$"

LavaridgeTown_Text_MayNiceBadgesTakeThis:
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
	.string "Oh? While I visited the hot springs,\n"
	.string "you got the LAVARIDGE GYM BADGE.\p"
	.string "You must have collected\n"
	.string "good POKéMON…\l"
	.string "No, I believe you raised some.\p"
	.string "I guess it would be okay for you to\n"
	.string "have this.$"

LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
	.string "MAY: With those GO-GOGGLES, you'll\n"
	.string "have no trouble getting through the\l"
	.string "desert near ROUTE 111.\p"
	.string "But, wow, {PLAYER}{KUN}…\n"
	.string "Challenging GYMS…\p"
	.string "You're trying hard because you don't\n"
	.string "want to lose to me, I bet!\p"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
	.string "your dad in PETALBURG GYM.\p"
	.string "See you again!$"

LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
	.string "How's it going?\p"
	.string "Hmm…\n"
	.string "That's a decent collection of BADGES.\p"
	.string "All right, then.\n"
	.string "You may as well have this.$"

LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
	.string "BRENDAN: Keep those with you if you're\n"
	.string "planning on going into that desert near\l"
	.string "ROUTE 111.\p"
	.string "There should be some Pokémon that\n"
	.string "are exclusively desert-dwellers.\l"
	.string "You might look around for those.\p"
	.string "As for me…\n"
	.string "I'm considering challenging Norman,\l"
	.string "the GYM LEADER of PETALBURG.\p"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
	.string "he really is tough.\p"
	.string "See you around!$"

LavaridgeTown_Text_HaveEggWillYouTakeIt:
	.string "I have here an egg.\p"
	.string "I'd hoped to hatch it by covering it in\n"
	.string "hot sand by the hot springs.\l"
	.string "But that doesn't seem to be enough…\p"
	.string "I've heard it would be best if it were\n"
	.string "kept together with Pokémon and\l"
	.string "carried about.\p"
	.string "You are a trainer, yes?\n"
	.string "And your Pokémon radiate vitality.\p"
	.string "So, what say you?\n"
	.string "Will you take this egg to hatch?$"
	
LavaridgeTown_Text_HaveEggWillYouTakeKanto:
	.string "I have an egg from the Kanto region.\p"
	.string "I'd hoped to hatch it by covering it in\n"
	.string "hot sand by the hot springs.\l"
	.string "But that doesn't seem to be enough…\p"
	.string "So, what say you?\n"
	.string "Will you take this egg to hatch?$"

LavaridgeTown_Text_HaveEggWillYouTakeJohto:
	.string "What about an egg from Johto?$"

LavaridgeTown_Text_HaveEggWillYouTakeHoenn:
	.string "What about an egg from Hoenn?$"

LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here egg!$"

LavaridgeTown_Text_ReceivedTheEgg:
	.string "{PLAYER} received the Egg.$"

LavaridgeTown_Text_NoRoomForThisEgg:
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this Egg…$"
	
LavaridgeTown_Text_NotEnoughMoney:
	.string "Oh? You don't have enough.\n"
	.string "money…$"

LavaridgeTown_Text_AsYouWishThen:
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this Egg, I will be here.$"

LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
	.string "Every so often, an Egg will be found at\n"
	.string "the Pokémon Day Care.\p"
	.string "Or at least that's how the rumor goes.$"

LavaridgeTown_Text_HotSpringsNeverRunDry:
	.string "We draw as much hot water as we need,\n"
	.string "and yet the hot springs never run dry.\p"
	.string "Isn't it magical?\p"
	.string "These hot springs appear near active\n"
	.string "volcanoes. Veins of water under the\l"
	.string "ground are heated by magma to well up\l"
	.string "as hot springs.$"

LavaridgeTown_Text_PokemonNippedBackside:
	.string "Being buried in this hot sand is…\n"
	.string "Sigh…\p"
	.string "So warm and heavenly…\p"
	.string "Eh? Gyaah! Ouch!\p"
	.string "A POKéMON nipped my backside!$"

LavaridgeTown_Text_OhYouLikeHotSprings:
	.string "Oh, you like hot springs, do you?\p"
	.string "That's surprising for one as young\n"
	.string "as you.$"

LavaridgeTown_Text_BatheInHotSpringsEveryDay:
	.string "I bathe in the hot springs every day.\p"
	.string "I want to become a beautiful and strong\n"
	.string "GYM LEADER like FLANNERY.$"

LavaridgeTown_Text_IfPokemonInHotSprings:
	.string "If people put POKéMON in hot springs,\n"
	.string "it might be seriously strange.\p"
	.string "Why, it might be an electric bath, or\n"
	.string "a bubble bath, or even a lava bath…$"

LavaridgeTown_Text_HotSpringsClaims:
	.string "They're claiming that these hot springs\n"
	.string "are good for calming nervous tension,\l"
	.string "relieving aching muscles, solving\l"
	.string "romantic problems, and attracting\l"
	.string "money…$"

LavaridgeTown_Text_TownSign:
	.string "LAVARIDGE TOWN\p"
	.string "“POKéMON CENTER HOT SPRINGS\n"
	.string "An excellent place for relaxing!”$"

LavaridgeTown_Text_GymSign:
	.string "LAVARIDGE TOWN POKéMON GYM\n"
	.string "LEADER: FLANNERY\l"
	.string "“One with a fiery passion that burns!”$"
	
Script_RandomEgg1:
	giveegg SPECIES_BULBASAUR
	release
	end
	
Script_RandomEgg2:
	giveegg SPECIES_CHARMANDER
	release
	end
	
Script_RandomEgg3:
	giveegg SPECIES_SQUIRTLE
	release
	end
	
Script_RandomEgg4:
	giveegg SPECIES_CATERPIE
	release
	end
	
Script_RandomEgg5:
	giveegg SPECIES_WEEDLE
	release
	end
	
Script_RandomEgg6:
	giveegg SPECIES_PIDGEY
	release
	end
	
Script_RandomEgg7:
	giveegg SPECIES_RATTATA
	release
	end
	
Script_RandomEgg8:
	giveegg SPECIES_SPEAROW
	release
	end
	
Script_RandomEgg9:
	giveegg SPECIES_EKANS
	release
	end
	
Script_RandomEgg10:
	giveegg SPECIES_PICHU
	release
	end
	
Script_RandomEgg11:
	giveegg SPECIES_SANDSHREW
	release
	end
	
Script_RandomEgg12:
	giveegg SPECIES_NIDORAN_F
	release
	end
	
Script_RandomEgg13:
	giveegg SPECIES_NIDORAN_M
	release
	end
	
Script_RandomEgg14:
	giveegg SPECIES_VULPIX
	release
	end
	
Script_RandomEgg15:
	giveegg SPECIES_ZUBAT
	release
	end
	
Script_RandomEgg16:
	giveegg SPECIES_ODDISH
	release
	end
	
Script_RandomEgg17:
	giveegg SPECIES_PARAS
	release
	end
	
Script_RandomEgg18:
	giveegg SPECIES_VENONAT
	release
	end
	
Script_RandomEgg19:
	giveegg SPECIES_DIGLETT
	release
	end
	
Script_RandomEgg20:
	giveegg SPECIES_MEOWTH
	release
	end
	
Script_RandomEgg21:
	giveegg SPECIES_PSYDUCK
	release
	end
	
Script_RandomEgg22:
	giveegg SPECIES_MANKEY
	release
	end
	
Script_RandomEgg23:
	giveegg SPECIES_GROWLITHE
	release
	end
	
Script_RandomEgg24:
	giveegg SPECIES_POLIWAG
	release
	end
	
Script_RandomEgg25:
	giveegg SPECIES_ABRA
	release
	end
	
Script_RandomEgg26:
	giveegg SPECIES_MACHOP
	release
	end
	
Script_RandomEgg27:
	giveegg SPECIES_BELLSPROUT
	release
	end
	
Script_RandomEgg28:
	giveegg SPECIES_TENTACOOL
	release
	end
	
Script_RandomEgg29:
	giveegg SPECIES_GEODUDE
	release
	end
	
Script_RandomEgg30:
	giveegg SPECIES_PONYTA
	release
	end
	
Script_RandomEgg31:
	giveegg SPECIES_SLOWPOKE
	release
	end
	
Script_RandomEgg32:
	giveegg SPECIES_MAGNEMITE
	release
	end
	
Script_RandomEgg33:
	giveegg SPECIES_FARFETCHD
	release
	end
	
Script_RandomEgg34:
	giveegg SPECIES_DODUO
	release
	end
	
Script_RandomEgg35:
	giveegg SPECIES_SEEL
	release
	end
	
Script_RandomEgg36:
	giveegg SPECIES_GRIMER
	release
	end
	
Script_RandomEgg37:
	giveegg SPECIES_SHELLDER
	release
	end
	
Script_RandomEgg38:
	giveegg SPECIES_GASTLY
	release
	end
	
Script_RandomEgg39:
	giveegg SPECIES_ONIX
	release
	end
	
Script_RandomEgg40:
	giveegg SPECIES_DROWZEE
	release
	end
	
Script_RandomEgg41:
	giveegg SPECIES_KRABBY
	release
	end

Script_RandomEgg42:
	giveegg SPECIES_VOLTORB
	release
	end
	
Script_RandomEgg43:
	giveegg SPECIES_EXEGGCUTE
	release
	end
	
Script_RandomEgg44:
	giveegg SPECIES_CUBONE
	release
	end
	
Script_RandomEgg45:
	giveegg SPECIES_LICKITUNG
	release
	end
	
Script_RandomEgg46:
	giveegg SPECIES_KOFFING
	release
	end
	
Script_RandomEgg47:
	giveegg SPECIES_RHYHORN
	release
	end
	
Script_RandomEgg48:
	giveegg SPECIES_CHANSEY
	release
	end
	
Script_RandomEgg49:
	giveegg SPECIES_TANGELA
	release
	end
	
Script_RandomEgg50:
	giveegg SPECIES_KANGASKHAN
	release
	end
	
Script_RandomEgg51:
	giveegg SPECIES_HORSEA
	release
	end
	
Script_RandomEgg52:
	giveegg SPECIES_GOLDEEN
	release
	end
	
Script_RandomEgg53:
	giveegg SPECIES_STARYU
	release
	end
	
Script_RandomEgg54:
	giveegg SPECIES_MR_MIME
	release
	end
	
Script_RandomEgg55:
	giveegg SPECIES_SCYTHER
	release
	end
	
Script_RandomEgg56:
	giveegg SPECIES_PINSIR
	release
	end
	
Script_RandomEgg57:
	giveegg SPECIES_TAUROS
	release
	end
	
Script_RandomEgg58:
	giveegg SPECIES_MAGIKARP
	release
	end

Script_RandomEgg59:
	giveegg SPECIES_LAPRAS
	release
	end
	
Script_RandomEgg60:
	giveegg SPECIES_EEVEE
	release
	end
	
Script_RandomEgg61:
	giveegg SPECIES_PORYGON
	release
	end
	
Script_RandomEgg62:
	giveegg SPECIES_OMANYTE
	release
	end
	
Script_RandomEgg63:
	giveegg SPECIES_KABUTO
	release
	end
	
Script_RandomEgg64:
	giveegg SPECIES_AERODACTYL
	release
	end
	
Script_RandomEgg65:
	giveegg SPECIES_SNORLAX
	release
	end
	
Script_RandomEgg66:
	giveegg SPECIES_DRATINI
	release
	end
	
Script_RandomEgg67:
	giveegg SPECIES_CHIKORITA
	release
	end
	
Script_RandomEgg68:
	giveegg SPECIES_CYNDAQUIL
	release
	end
	
Script_RandomEgg69:
	giveegg SPECIES_TOTODILE
	release
	end
	
Script_RandomEgg70:
	giveegg SPECIES_SENTRET
	release
	end
	
Script_RandomEgg71:
	giveegg SPECIES_HOOTHOOT
	release
	end
	
Script_RandomEgg72:
	giveegg SPECIES_LEDYBA
	release
	end
	
Script_RandomEgg73:
	giveegg SPECIES_SPINARAK
	release
	end
	
Script_RandomEgg74:
	giveegg SPECIES_CHINCHOU
	release
	end
	
Script_RandomEgg75:
	giveegg SPECIES_CLEFFA
	release
	end
	
Script_RandomEgg76:
	giveegg SPECIES_IGGLYBUFF
	release
	end
	
Script_RandomEgg77:
	giveegg SPECIES_TOGEPI
	release
	end
	
Script_RandomEgg78:
	giveegg SPECIES_NATU
	release
	end
	
Script_RandomEgg79:
	giveegg SPECIES_MAREEP
	release
	end
	
Script_RandomEgg80:
	giveegg SPECIES_SUDOWOODO
	release
	end
	
Script_RandomEgg81:
	giveegg SPECIES_HOPPIP
	release
	end

Script_RandomEgg82:
	giveegg SPECIES_AIPOM
	release
	end
	
Script_RandomEgg83:
	giveegg SPECIES_SUNKERN
	release
	end
	
Script_RandomEgg84:
	giveegg SPECIES_YANMA
	release
	end
	
Script_RandomEgg85:
	giveegg SPECIES_WOOPER
	release
	end
	
Script_RandomEgg86:
	giveegg SPECIES_MURKROW
	release
	end

Script_RandomEgg87:
	giveegg SPECIES_MISDREAVUS
	release
	end
	
Script_RandomEgg88:
	giveegg SPECIES_GIRAFARIG
	release
	end
	
Script_RandomEgg89:
	giveegg SPECIES_PINECO
	release
	end
	
Script_RandomEgg90:
	giveegg SPECIES_DUNSPARCE
	release
	end
	
Script_RandomEgg91:
	giveegg SPECIES_GLIGAR
	release
	end

Script_RandomEgg92:
	giveegg SPECIES_SNUBBULL
	release
	end

Script_RandomEgg93:
	giveegg SPECIES_QWILFISH
	release
	end
	
Script_RandomEgg94:
	giveegg SPECIES_SHUCKLE
	release
	end
	
Script_RandomEgg95:
	giveegg SPECIES_HERACROSS
	release
	end
	
Script_RandomEgg96:
	giveegg SPECIES_SNEASEL
	release
	end
	
Script_RandomEgg97:
	giveegg SPECIES_TEDDIURSA
	release
	end
	
Script_RandomEgg98:
	giveegg SPECIES_SLUGMA
	release
	end

Script_RandomEgg99:
	giveegg SPECIES_SWINUB
	release
	end
	
Script_RandomEgg100:
	giveegg SPECIES_CORSOLA
	release
	end
	
Script_RandomEgg101:
	giveegg SPECIES_REMORAID
	release
	end
	
Script_RandomEgg102:
	giveegg SPECIES_DELIBIRD
	release
	end
	
Script_RandomEgg103:
	giveegg SPECIES_MANTINE
	release
	end
	
Script_RandomEgg104:
	giveegg SPECIES_SKARMORY
	release
	end
	
Script_RandomEgg105:
	giveegg SPECIES_HOUNDOUR
	release
	end

Script_RandomEgg106:
	giveegg SPECIES_PHANPY
	release
	end

Script_RandomEgg107:
	giveegg SPECIES_STANTLER
	release
	end
	
Script_RandomEgg108:
	giveegg SPECIES_SMEARGLE
	release
	end
	
Script_RandomEgg109:
	giveegg SPECIES_TYROGUE
	release
	end

Script_RandomEgg110:
	giveegg SPECIES_SMOOCHUM
	release
	end
	
Script_RandomEgg111:
	giveegg SPECIES_ELEKID
	release
	end
	
Script_RandomEgg112:
	giveegg SPECIES_MAGBY
	release
	end
	
Script_RandomEgg113:
	giveegg SPECIES_MILTANK
	release
	end

Script_RandomEgg114:
	giveegg SPECIES_LARVITAR
	release
	end

Script_RandomEgg115:
	giveegg SPECIES_TREECKO
	release
	end
	
Script_RandomEgg116:
	giveegg SPECIES_TORCHIC
	release
	end
	
Script_RandomEgg117:
	giveegg SPECIES_MUDKIP
	release
	end
	
Script_RandomEgg118:
	giveegg SPECIES_POOCHYENA
	release
	end

Script_RandomEgg119:
	giveegg SPECIES_ZIGZAGOON
	release
	end
	
Script_RandomEgg120:
	giveegg SPECIES_WURMPLE
	release
	end
	
Script_RandomEgg121:
	giveegg SPECIES_LOTAD
	release
	end
	
Script_RandomEgg122:
	giveegg SPECIES_SEEDOT
	release
	end

Script_RandomEgg123:
	giveegg SPECIES_NINCADA
	release
	end

Script_RandomEgg124:
	giveegg SPECIES_TAILLOW
	release
	end
	
Script_RandomEgg125:
	giveegg SPECIES_SHROOMISH
	release
	end

Script_RandomEgg126:
	giveegg SPECIES_SPINDA
	release
	end
	
Script_RandomEgg127:
	giveegg SPECIES_WINGULL
	release
	end
	
Script_RandomEgg128:
	giveegg SPECIES_SURSKIT
	release
	end
	
Script_RandomEgg129:
	giveegg SPECIES_WAILMER
	release
	end
	
Script_RandomEgg130:
	giveegg SPECIES_SKITTY
	release
	end
	
Script_RandomEgg131:
	giveegg SPECIES_KECLEON
	release
	end
	
Script_RandomEgg132:
	giveegg SPECIES_BALTOY
	release
	end

Script_RandomEgg133:
	giveegg SPECIES_NOSEPASS
	release
	end
	
Script_RandomEgg134:
	giveegg SPECIES_TORKOAL
	release
	end
	
Script_RandomEgg135:
	giveegg SPECIES_SABLEYE
	release
	end
	
Script_RandomEgg136:
	giveegg SPECIES_BARBOACH
	release
	end
	
Script_RandomEgg137:
	giveegg SPECIES_LUVDISC
	release
	end
	
Script_RandomEgg138:
	giveegg SPECIES_CORPHISH
	release
	end

Script_RandomEgg139:
	giveegg SPECIES_FEEBAS
	release
	end

Script_RandomEgg140:
	giveegg SPECIES_CARVANHA
	release
	end

Script_RandomEgg141:
	giveegg SPECIES_TRAPINCH
	release
	end
	
Script_RandomEgg142:
	giveegg SPECIES_MAKUHITA
	release
	end
	
Script_RandomEgg143:
	giveegg SPECIES_ELECTRIKE
	release
	end
	
Script_RandomEgg144:
	giveegg SPECIES_NUMEL
	release
	end

Script_RandomEgg145:
	giveegg SPECIES_SPHEAL
	release
	end
	
Script_RandomEgg146:
	giveegg SPECIES_CACNEA
	release
	end

Script_RandomEgg147:
	giveegg SPECIES_SNORUNT
	release
	end
	
Script_RandomEgg148:
	giveegg SPECIES_LUNATONE
	release
	end
	
Script_RandomEgg149:
	giveegg SPECIES_SOLROCK
	release
	end
	
Script_RandomEgg150:
	giveegg SPECIES_AZURILL
	release
	end
	
Script_RandomEgg151:
	giveegg SPECIES_SPOINK
	release
	end

Script_RandomEgg152:
	giveegg SPECIES_PLUSLE
	release
	end
	
Script_RandomEgg153:
	giveegg SPECIES_MINUN
	release
	end
	
Script_RandomEgg154:
	giveegg SPECIES_MAWILE
	release
	end
	
Script_RandomEgg155:
	giveegg SPECIES_MEDITITE
	release
	end
	
Script_RandomEgg156:
	giveegg SPECIES_SWABLU
	release
	end
	
Script_RandomEgg157:
	giveegg SPECIES_WYNAUT
	release
	end
	
Script_RandomEgg158:
	giveegg SPECIES_DUSKULL
	release
	end
	
Script_RandomEgg159:
	giveegg SPECIES_ROSELIA
	release
	end
	
Script_RandomEgg160:
	giveegg SPECIES_SLAKOTH
	release
	end
	
Script_RandomEgg161:
	giveegg SPECIES_GULPIN
	release
	end

Script_RandomEgg162:
	giveegg SPECIES_TROPIUS
	release
	end
	
Script_RandomEgg163:
	giveegg SPECIES_WHISMUR
	release
	end

Script_RandomEgg164:
	giveegg SPECIES_CLAMPERL
	release
	end
	
Script_RandomEgg165:
	giveegg SPECIES_ABSOL
	release
	end
	
Script_RandomEgg166:
	giveegg SPECIES_SHUPPET
	release
	end

Script_RandomEgg167:
	giveegg SPECIES_SEVIPER
	release
	end
	
Script_RandomEgg168:
	giveegg SPECIES_ZANGOOSE
	release
	end
	
Script_RandomEgg169:
	giveegg SPECIES_RELICANTH
	release
	end
	
Script_RandomEgg170:
	giveegg SPECIES_ARON
	release
	end
	
Script_RandomEgg171:
	giveegg SPECIES_CASTFORM
	release
	end
	
Script_RandomEgg172:
	giveegg SPECIES_VOLBEAT
	release
	end
	
Script_RandomEgg173:
	giveegg SPECIES_ILLUMISE
	release
	end
	
Script_RandomEgg174:
	giveegg SPECIES_LILEEP
	release
	end

Script_RandomEgg175:
	giveegg SPECIES_ANORITH
	release
	end

Script_RandomEgg176:
	giveegg SPECIES_RALTS
	release
	end
	
Script_RandomEgg177:
	giveegg SPECIES_BAGON
	release
	end

Script_RandomEgg178:
	giveegg SPECIES_BELDUM
	release
	end
	
Script_RandomEgg179:
	giveegg SPECIES_CHIMECHO
	release
	end

LavaridgeTown_Text_HerbShopSign:
	.string "POKéMON HERB SHOP\n"
	.string "“Bitter taste--better cure!”$"

