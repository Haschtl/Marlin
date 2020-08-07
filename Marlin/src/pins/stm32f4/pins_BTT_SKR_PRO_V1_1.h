/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#if HOTENDS > 3 || E_STEPPERS > 3
  #error "BIGTREE SKR Pro V1.1 supports up to 3 hotends / E-steppers."
#endif

#define BOARD_INFO_NAME "BTT SKR Pro V1.1"

#include "pins_BTT_SKR_PRO_common.h"

//
// Kellerdrucker
//
// #define TEMP_0_PIN                         PF7   //PF9
#define PS_ON_PIN                          PG13
// #define FIL_RUNOUT_PIN                     PE15
// #define FIL_RUNOUT2_PIN                    PE10
#define SPINDLE_LASER_ENA_PIN              PG11  // Pin should have a pullup/pulldown!
#define SPINDLE_LASER_PWM_PIN              PF9   //PC9   // MUST BE HARDWARE PWM ?
#define SPINDLE_DIR_PIN                    PC1

#if ENABLED(CASE_LIGHT_ENABLE) && !defined(CASE_LIGHT_PIN)
  #define CASE_LIGHT_PIN                   PF8  // MUST BE HARDWARE PWM
#endif

//#ifndef FILWIDTH_PIN
//  #define FILWIDTH_PIN                   PF10 // Analog Input on AUX2
//#endif

//#define BEEPER_PIN                       PC9
#define BEEPER_PIN                         PG4

#define CONTROLLER_FAN_PIN                 PE5  // Set a custom pin for the controller fan

#define E0_AUTO_FAN_PIN                  PD3
#define E1_AUTO_FAN_PIN                  PD3
#define CHAMBER_AUTO_FAN_PIN             PE6

//define LCD_SDSS                          -1
//#define LCD_SDSS                         PB12
#define BTN_EN1                            PG10
#define BTN_EN2                            PF11 // A2 - rotary encoder B
#define BTN_ENC                            PA8  // A3 - rotary encoder push switch

// I2C Display is connected to I2C 1
//#define LCD_PINS_D5                      PG3
//#define LCD_PINS_D6                      PG6
//#define LCD_PINS_D7                      PG7
#define CALIBRATION_PIN                    PC5  // Override in pins.h or set to -1 to use your Z endstop

//free PWM pins: PF7, PC9 (unconfigure PeripheralPins.c), PD13 (E2 Step pin), PB0 (Heater 2)

//Wo am board? PB11, PB5, PB4, PA11, PA10, PA9, PA7, PA6, PA5

//PC8 transistor destroyed