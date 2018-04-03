/*
	Demo program for the 2017/18 open door day at HTL Hollabrunn
    Copyright (C) 2018  Andreas Mieke

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef DISPLAY_H
#define DISPLAY_H

#include "stm32f10x.h"                  // Device header

#include "io.h"
#include "stdio.h"

// Display states/buttons
typedef enum uint8_t {
	DISP_STATE_NONE = 0x00,
	DISP_STATE_PAUSE,
	DISP_STATE_START,
	DISP_STATE_SAVE,
	DISP_STATE_RECALL,
	DISP_STATE_ERROR = 0xFF - '0'
} disp_state_t;

void disp_init(void);
disp_state_t disp_get_last_state(void);
void disp_send_gyro_data(uint8_t X, uint8_t Y, uint8_t Z);
void disp_disable(void);
void disp_enable(void);

#endif
