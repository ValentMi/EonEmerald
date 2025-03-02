#include "global.h"
#include "time_events.h"
#include "event_data.h"
#include "field_weather.h"
#include "pokemon.h"
#include "random.h"
#include "overworld.h"
#include "rtc.h"
#include "script.h"
#include "task.h"

static u32 GetMirageRnd(void)
{
    u32 hi = VarGet(VAR_MIRAGE_RND_H);
    u32 lo = VarGet(VAR_MIRAGE_RND_L);
    return (hi << 16) | lo;
}

static void SetMirageRnd(u32 rnd)
{
    VarSet(VAR_MIRAGE_RND_H, rnd >> 16);
    VarSet(VAR_MIRAGE_RND_L, rnd);
}

// unused
void InitMirageRnd(void)
{
    SetMirageRnd((Random() << 16) | Random());
}

void UpdateMirageRnd(u16 days)
{
    s32 rnd = GetMirageRnd();
    while (days)
    {
        rnd = ISO_RANDOMIZE2(rnd);
        days--;
    }
    SetMirageRnd(rnd);
}

bool8 IsMirageIslandPresent(void)
{
    u16 rnd = GetMirageRnd() >> 16;
    int i;

    for (i = 0; i < PARTY_SIZE; i++)
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_WYNAUT || GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_WOBBUFFET)
            return TRUE;

    return FALSE;
}

void UpdateShoalTideFlag(void)
{
    static const u8 tide[] =
    {
        1, // 00
        1, // 01
        1, // 02
        1, // 03
        1, // 04
        1, // 05
        0, // 06
        0, // 07
        0, // 08
        0, // 09
        0, // 10
        0, // 11
        0, // 12
        0, // 13
        0, // 14
        0, // 15
        0, // 16
        0, // 17
        1, // 18
        1, // 19
        1, // 20
        1, // 21
        1, // 22
        1, // 23
    };

    if (IsMapTypeOutdoors(GetLastUsedWarpMapType()))
    {
        RtcCalcLocalTime();
        if (tide[gLocalTime.hours])
            FlagSet(FLAG_SYS_SHOAL_TIDE);
        else
            FlagClear(FLAG_SYS_SHOAL_TIDE);
    }
}

static void Task_WaitWeather(u8 taskId)
{
    if (IsWeatherChangeComplete())
    {
        ScriptContext_Enable();
        DestroyTask(taskId);
    }
}

void WaitWeather(void)
{
    CreateTask(Task_WaitWeather, 80);
}

void InitBirchState(void)
{
    *GetVarPointer(VAR_BIRCH_STATE) = 0;
}

void UpdateBirchState(u16 days)
{
    u16 *state = GetVarPointer(VAR_BIRCH_STATE);
    *state += days;
    *state %= 7;
}
