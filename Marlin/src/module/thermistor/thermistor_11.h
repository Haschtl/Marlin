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

// R25 = 100 kOhm, beta25 = 3950 K, 4.7 kOhm pull-up, QU-BD silicone bed QWG-104F-3950 thermistor
const short temptable_11[][2] PROGMEM = {
  { OV(   1), 938 },
  { OV(  31), 314 },
  { OV(  41), 290 },
  { OV(  51), 272 },
  { OV(  61), 258 },
  { OV(  71), 247 },
  { OV(  81), 237 },
  { OV(  91), 229 },
  { OV( 101), 221 },
  { OV( 111), 215 },
  { OV( 121), 209 },
  { OV( 131), 204 },
  { OV( 141), 199 },
  { OV( 151), 195 },
  { OV( 161), 190 },
  { OV( 171), 187 },
  { OV( 181), 183 },
  { OV( 191), 179 },
  { OV( 201), 176 },
  { OV( 221), 170 },
  { OV( 241), 165 },
  { OV( 261), 160 },
  { OV( 281), 155 },
  { OV( 301), 150 },
  { OV( 331), 144 },
  { OV( 361), 139 },
  { OV( 391), 133 },
  { OV( 421), 128 },
  { OV( 451), 123 },
  { OV( 491), 117 },
  { OV( 531), 111 },
  { OV( 571), 105 },
  { OV( 611), 100 },
  { OV( 641),  95 },
  { OV( 681),  90 },
  { OV( 711),  85 },
  { OV( 751),  79 },
  { OV( 791),  72 },
  { OV( 811),  69 },
  { OV( 831),  65 },
  { OV( 871),  57 },
  { OV( 881),  55 },
  { OV( 901),  51 },
  { OV( 921),  45 },
  { OV( 941),  39 },
  { OV( 971),  28 },
  { OV( 981),  23 },
  { OV( 991),  17 },
  { OV(1001),   9 },
  { OV(1021), -27 }
};

// //Custom Hotend 1
// const short temptable_11[][2] PROGMEM = {
// { OV(1),	372 },
// { OV(31),	300 },
// { OV(41),	275 },
// { OV(51),	252 },
// { OV(61),	232 },
// { OV(71),	217 },
// { OV(81),	208 },
// { OV(91),	201 },
// { OV(101),	196 },
// { OV(111),	191 },
// { OV(121),	187 },
// { OV(131),	184 },
// { OV(141),	180 },
// { OV(151),	177 },
// { OV(161),	174 },
// { OV(171),	170 },
// { OV(181),	167 },
// { OV(191),	165 },
// { OV(201),	162 },
// { OV(221),	157 },
// { OV(241),	152 },
// { OV(261),	147 },
// { OV(281),	143 },
// { OV(301),	139 },
// { OV(331),	134 },
// { OV(361),	129 },
// { OV(391),	124 },
// { OV(421),	120 },
// { OV(451),	116 },
// { OV(491),	110 },
// { OV(531),	105 },
// { OV(571),	100 },
// { OV(611),	94 },
// { OV(641),	90 },
// { OV(681),	83 },
// { OV(711),	79 },
// { OV(751),	73 },
// { OV(791),	67 },
// { OV(811),	64 },
// { OV(831),	61 },
// { OV(871),	57 },
// { OV(881),	56 },
// { OV(901),	54 },
// { OV(921),	52 },
// { OV(941),	48 },
// { OV(971),	28 },
// { OV(981),	21 },
// { OV(991),	15 },
// { OV(1001),	9 },
// { OV(1021),	0 }
// };
