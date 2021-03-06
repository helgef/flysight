#ifndef MGC_TONE_H
#define MGC_TONE_H

#include <avr/io.h>

#define TONE_RATE_ONE_HZ   65
#define TONE_RATE_FLATLINE UINT16_MAX

#define TONE_LENGTH_125_MS 3906
#define TONE_MAX_PITCH     65280

#define TONE_CHIRP_MAX     (((uint32_t) 3242 << 16) / TONE_LENGTH_125_MS)

extern volatile uint16_t Tone_volume;

void Tone_Init(void);
void Tone_Update(void);
void Tone_SetRate(uint16_t rate);
void Tone_SetPitch(uint16_t pitch);
void Tone_SetChirp(uint32_t chirp);
void Tone_Alarm(uint16_t pitch, uint32_t chirp, uint16_t length);

#endif
