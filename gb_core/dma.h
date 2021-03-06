/*
    GiiBiiAdvance - GBA/GB  emulator
    Copyright (C) 2011-2015 Antonio Ni�o D�az (AntonioND)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __GB_DMA__
#define __GB_DMA__

//----------------------------------------------------------------

#include "gameboy.h"

//----------------------------------------------------------------

void GB_DMAInit(void);
void GB_DMAEnd(void);

//----------------------------------------------------------------

inline void GB_DMAWriteDMA(int reference_clocks, int value);

inline void GB_DMAWriteHDMA1(int value); // reference_clocks not needed
inline void GB_DMAWriteHDMA2(int value);
inline void GB_DMAWriteHDMA3(int value);
inline void GB_DMAWriteHDMA4(int value);
inline void GB_DMAWriteHDMA5(int value);

//----------------------------------------------------------------

inline void GB_DMAClockCounterReset(void);
void GB_DMAUpdateClocksCounterReference(int reference_clocks);
int GB_DMAGetClocksToNextEvent(void);

//----------------------------------------------------------------

int GB_DMAExecute(int clocks);

//----------------------------------------------------------------

#endif // __GB_DMA__

