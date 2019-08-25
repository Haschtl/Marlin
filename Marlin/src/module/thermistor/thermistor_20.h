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

#define REVERSE_TEMP_SENSOR_RANGE

// // Pt100 with INA826 amp on Ultimaker v2.0 electronics
// const short temptable_20[][2] PROGMEM = {
//   { OV(  0),    0 },
//   { OV(227),    1 },
//   { OV(236),   10 },
//   { OV(245),   20 },
//   { OV(253),   30 },
//   { OV(262),   40 },
//   { OV(270),   50 },
//   { OV(279),   60 },
//   { OV(287),   70 },
//   { OV(295),   80 },
//   { OV(304),   90 },
//   { OV(312),  100 },
//   { OV(320),  110 },
//   { OV(329),  120 },
//   { OV(337),  130 },
//   { OV(345),  140 },
//   { OV(353),  150 },
//   { OV(361),  160 },
//   { OV(369),  170 },
//   { OV(377),  180 },
//   { OV(385),  190 },
//   { OV(393),  200 },
//   { OV(401),  210 },
//   { OV(409),  220 },
//   { OV(417),  230 },
//   { OV(424),  240 },
//   { OV(432),  250 },
//   { OV(440),  260 },
//   { OV(447),  270 },
//   { OV(455),  280 },
//   { OV(463),  290 },
//   { OV(470),  300 },
//   { OV(478),  310 },
//   { OV(485),  320 },
//   { OV(493),  330 },
//   { OV(500),  340 },
//   { OV(507),  350 },
//   { OV(515),  360 },
//   { OV(522),  370 },
//   { OV(529),  380 },
//   { OV(537),  390 },
//   { OV(544),  400 },
//   { OV(614),  500 },
//   { OV(681),  600 },
//   { OV(744),  700 },
//   { OV(805),  800 },
//   { OV(862),  900 },
//   { OV(917), 1000 },
//   { OV(968), 1100 }
// };

// Custom Pt100 with E3D INA826 amp on 3V3 32bit controller with voltage-divisor
const short temptable_20[][2] PROGMEM = {
  { OV(0),	0},
  { OV(227),	0 },
  { OV(230),	1 },
  { OV(245),	16 },
  { OV(253),	29 },
  { OV(262),	42 },
  { OV(270),	53 },
  { OV(279),	64 },
  { OV(287),	74 },
  { OV(295),	83 },
  { OV(304),	93 },
  { OV(312),	103 },
  { OV(320),	113 },
  { OV(329),	124 },
  { OV(337),	134 },
  { OV(345),	145 },
  { OV(353),	155 },
  { OV(361),	166 },
  { OV(369),	176 },
  { OV(377),	186 },
  { OV(385),	196 },
  { OV(393),	206 },
  { OV(401),	217 },
  { OV(409),	227 },
  { OV(417),	237 },
  { OV(424),	246 },
  { OV(432),	256 },
  { OV(440),	267 },
  { OV(447),	276 },
  { OV(455),	287 },
  { OV(463),	298 },
  { OV(470),	307 },
  { OV(478),	318 },
  { OV(485),	328 },
  { OV(493),	339 },
  { OV(500),	348 },
  { OV(507),	358 },
  { OV(515),	370 },
  { OV(522),	380 },
  { OV(529),	390 },
  { OV(537),	401 },
  { OV(544),	411 },
  { OV(614),	517 },
  { OV(681),	623 },
  { OV(744),	727 },
  { OV(805),	832 },
  { OV(862),	934 },
  { OV(917),	1035 },
  { OV(968),	1130 }
};
