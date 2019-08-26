/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4100 K, 4.7 kOhm pull-up, Hisens thermistor
// const short temptable_13[][2] PROGMEM = {
//   { OV( 20.04), 300 },
//   { OV( 23.19), 290 },
//   { OV( 26.71), 280 },
//   { OV( 31.23), 270 },
//   { OV( 36.52), 260 },
//   { OV( 42.75), 250 },
//   { OV( 50.68), 240 },
//   { OV( 60.22), 230 },
//   { OV( 72.03), 220 },
//   { OV( 86.84), 210 },
//   { OV(102.79), 200 },
//   { OV(124.46), 190 },
//   { OV(151.02), 180 },
//   { OV(182.86), 170 },
//   { OV(220.72), 160 },
//   { OV(316.96), 140 },
//   { OV(447.17), 120 },
//   { OV(590.61), 100 },
//   { OV(737.31),  80 },
//   { OV(857.77),  60 },
//   { OV(939.52),  40 },
//   { OV(986.03),  20 },
//   { OV(1008.7),   0 }
// };

// Custom heated bed
const short temptable_13[][2] PROGMEM = {
    { OV(1),	357 },
    { OV(31),	300 },
    { OV(41),	281 },
    { OV(51),	262 },
    { OV(61),	244 },
    { OV(71),	228 },
    { OV(81),	215 },
    { OV(91),	203 },
    { OV(101),	195 },
    { OV(111),	189 },
    { OV(121),	183 },
    { OV(131),	179 },
    { OV(141),	174 },
    { OV(151),	171 },
    { OV(161),	167 },
    { OV(171),	164 },
    { OV(181),	161 },
    { OV(191),	158 },
    { OV(201),	155 },
    { OV(221),	149 },
    { OV(241),	144 },
    { OV(261),	139 },
    { OV(281),	134 },
    { OV(301),	130 },
    { OV(331),	125 },
    { OV(361),	120 },
    { OV(391),	115 },
    { OV(421),	111 },
    { OV(451),	108 },
    { OV(491),	104 },
    { OV(531),	100 },
    { OV(571),	96 },
    { OV(611),	92 },
    { OV(641),	88 },
    { OV(681),	83 },
    { OV(711),	78 },
    { OV(751),	73 },
    { OV(791),	68 },
    { OV(811),	65 },
    { OV(831),	62 },
    { OV(871),	55 },
    { OV(881),	53 },
    { OV(901),	48 },
    { OV(921),	43 },
    { OV(941),	37 },
    { OV(971),	28 },
    { OV(981),	24 },
    { OV(991),	20 },
    { OV(1001),	17 },
    { OV(1021),	9 }
};
