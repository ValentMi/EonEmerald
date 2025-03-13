MysteryGiftScript_SurfPichu::
	setvaddress MysteryGiftScript_SurfPichu
	vgoto_if_unset FLAG_MYSTERY_GIFT_DONE, SurfPichu_GiveIfPossible
	returnram

SurfPichu_GiveIfPossible:
	specialvar VAR_GIFT_PICHU_SLOT, CalculatePlayerPartyCount
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, PARTY_SIZE, SurfPichu_FullParty
	setflag FLAG_MYSTERY_GIFT_DONE
	vcall SurfPichu_GiveEgg
	lock
	faceplayer
	vmessage sText_MysteryGiftEgg
	waitmessage
	waitbuttonpress
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end
	
MysteryGiftScript_JIRACHI::
	setvaddress MysteryGiftScript_JIRACHI
	vgoto_if_unset FLAG_MYSTERY_GIFT_15, JIRACHI_GiveIfPossible
	returnram

JIRACHI_GiveIfPossible:
	specialvar VAR_GIFT_JIRACHI_SLOT, CalculatePlayerPartyCount
	vgoto_if_eq VAR_GIFT_JIRACHI_SLOT, PARTY_SIZE, SurfPichu_FullParty
	setflag FLAG_MYSTERY_GIFT_15
	vcall Jirachi_GiveMon
	lock
	faceplayer
	vmessage sText_MysteryGiftJirachi
	waitmessage
	waitbuttonpress
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end
	
MysteryGiftScript_CELEBI::
	setvaddress MysteryGiftScript_CELEBI
	vgoto_if_unset FLAG_MYSTERY_GIFT_14, CELEBI_GiveIfPossible
	returnram

CELEBI_GiveIfPossible:
	specialvar VAR_GIFT_CELEBI_SLOT, CalculatePlayerPartyCount
	vgoto_if_eq VAR_GIFT_CELEBI_SLOT, PARTY_SIZE, SurfPichu_FullParty
	setflag FLAG_MYSTERY_GIFT_14
	vcall Celebi_GiveMon
	lock
	faceplayer
	vmessage sText_MysteryGiftCelebi
	waitmessage
	waitbuttonpress
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end

SurfPichu_FullParty:
	lock
	faceplayer
	vmessage sText_FullParty
	waitmessage
	waitbuttonpress
	release
	end
	
Jirachi_GiveMon:
	givemon SPECIES_JIRACHI, 5
	setmodernfatefulencounter VAR_GIFT_JIRACHI_SLOT
	setmonmetlocation VAR_GIFT_JIRACHI_SLOT, METLOC_FATEFUL_ENCOUNTER
	return
	
Celebi_GiveMon:
	givemon SPECIES_CELEBI, 70
	setmodernfatefulencounter VAR_GIFT_CELEBI_SLOT
	setmonmetlocation VAR_GIFT_CELEBI_SLOT, METLOC_FATEFUL_ENCOUNTER
	return

SurfPichu_GiveEgg:
	giveegg SPECIES_PICHU
	setmodernfatefulencounter VAR_GIFT_PICHU_SLOT
	setmonmetlocation VAR_GIFT_PICHU_SLOT, METLOC_FATEFUL_ENCOUNTER
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 1, SurfPichu_Slot1
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 2, SurfPichu_Slot2
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 3, SurfPichu_Slot3
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 4, SurfPichu_Slot4
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 5, SurfPichu_Slot5
	return

SurfPichu_Slot1:
	setmonmove 1, 2, MOVE_SURF
	return

SurfPichu_Slot2::
	setmonmove 2, 2, MOVE_SURF
	return

SurfPichu_Slot3:
	setmonmove 3, 2, MOVE_SURF
	return

SurfPichu_Slot4:
	setmonmove 4, 2, MOVE_SURF
	return

SurfPichu_Slot5:
	setmonmove 5, 2, MOVE_SURF
	return

sText_MysteryGiftEgg:
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "From the POKéMON CENTER we\n"
	.string "have a gift--a POKéMON!\p"
	.string "Please raise it with love and\n"
	.string "kindness.$"
	
sText_MysteryGiftCelebi:
	.string "This place was once protected\n"
	.string "by the spirits of the forest.\p"
	.string "They yearn to safeguard\n"
	.string "those with pure hearts.\p"
	.string "I hope you help protect\n"
	.string "them too.$"
	
sText_MysteryGiftJirachi:
	.string "I made a wish for a friend\n"
	.string "who would protect me.\p"
	.string "Now I wish to share that\n"
	.string "feeling with others.\p"
	.string "I wish the very same for you!$"

sText_FullParty:
	.string "Oh, your party appears to be full.\p"
	.string "Please come see me after storing\n"
	.string "a POKéMON on a PC.$"
