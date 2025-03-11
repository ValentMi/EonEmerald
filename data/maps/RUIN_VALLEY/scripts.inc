RUIN_VALLEY_MapScripts::
	.byte 0
	
RUIN_VALLEY_EventScript_OldMan::
	lock
	faceplayer
	msgbox RUIN_VALLEY__Text_BLOCK_NAVEL_ROCK
	release
	end

RUIN_VALLEY__Text_BLOCK_NAVEL_ROCK::
    .string "What lies beyond this cave\n"
    .string "is not for the eyes of man.\p"
    .string "Do not return to this place.$"
