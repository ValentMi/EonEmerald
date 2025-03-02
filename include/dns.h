#ifndef GUARD_DNS_UTILS_H
#define GUARD_DNS_UTILS_H

#define DNS_PAL_EXCEPTION   FALSE
#define DNS_PAL_ACTIVE      TRUE

/* End hours for each of the timelapses */
#define MIDNIGHT_END_HOUR   7       //00 - 07
#define DAWN_END_HOUR       8       //07 - 08
#define DAY_END_HOUR        19      //08 - 19
#define SUNSET_END_HOUR     20      //19 - 20
#define NIGHTFALL_END_HOUR  21      //20 - 21
#define NIGHT_END_HOUR      0       //21 - 00

/* Start and end hour of the lightning system.
 * This system is generally used for building's windows. */
#define LIGHTNING_START_HOUR    NIGHTFALL_END_HOUR
#define LIGHTNING_END_HOUR      MIDNIGHT_END_HOUR

struct LightingColour {
    u8 paletteNum;
    u8 colourNum;
    u16 lightColour;
};

struct DnsPalExceptions {
    bool8 pal[32];
};

void DnsTransferPlttBuffer(void *src, void *dest);
void DnsApplyFilters();
u8 GetDnsTimeLapse(u8 hour);

#endif /* GUARD_DNS_UTILS_H */