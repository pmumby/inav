/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/bus.h"

const timerHardware_t timerHardware[] = {

    //Motor Output Channels:
    //S1/M1 on PC9, allows TIM3/CH4 or TIM8/CH4
    DEF_TIM(TIM8, CH4, PC9, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),
    //S2/M2 on PC8, allows TIM3/CH3 or TIM8/CH3
    DEF_TIM(TIM8, CH3, PC8, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),
    //S3/M3 on PB0, allows TIM1/CH2N, TIM3/CH3 or TIM8/CH2N
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),
    //S4/M4 on PB1, allows TIM1/CH3N, TIM3/CH4 or TIM8/CH3N
    DEF_TIM(TIM3, CH4, PB1, TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR, 0, 0),

    //Misc Output Channels:
    //LED on PA15, allows  TIM2/CH1
    DEF_TIM(TIM2, CH1, PA15, TIM_USE_LED,                         0, 0), 
    //??? on PA8, allows TIM1/CH1
    DEF_TIM(TIM1, CH1, PA8, TIM_USE_ANY,                         0, 0),  
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
