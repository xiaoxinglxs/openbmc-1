/*
 *
 * Copyright 2015-present Facebook. All Rights Reserved.
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef __PAL_SENSORS_H__
#define __PAL_SENSORS_H__

#include <openbmc/obmc_pal_sensors.h>

#ifdef __cplusplus
extern "C" {
#endif

// Total sensors list
enum {
  MB_FAN0_TACH_I = 0x0,
  MB_FAN0_TACH_O,
  MB_FAN0_VOLT,
  MB_FAN0_CURR,
  MB_FAN1_TACH_I,
  MB_FAN1_TACH_O,
  MB_FAN1_VOLT,
  MB_FAN1_CURR,
  MB_FAN2_TACH_I,
  MB_FAN2_TACH_O,
  MB_FAN2_VOLT,
  MB_FAN2_CURR,
  MB_FAN3_TACH_I,
  MB_FAN3_TACH_O,
  MB_FAN3_VOLT,
  MB_FAN3_CURR,
  MB_ADC_P12V_AUX,
  MB_ADC_P3V3_STBY,
  MB_ADC_P5V_STBY,
  MB_ADC_P12V_1,
  MB_ADC_P12V_2,
  MB_ADC_P3V3,
  MB_ADC_P3V_BAT,
  MB_SENSOR_GPU_INLET,
  MB_SENSOR_GPU_INLET_REMOTE,
  MB_SENSOR_GPU_OUTLET,
  MB_SENSOR_GPU_OUTLET_REMOTE,
  MB_SENSOR_PAX01_THERM,
  MB_SENSOR_PAX01_THERM_REMOTE,
  MB_SENSOR_PAX23_THERM,
  MB_SENSOR_PAX23_THERM_REMOTE,
  MB_SWITCH_PAX0_DIE_TEMP,
  MB_SWITCH_PAX1_DIE_TEMP,
  MB_SWITCH_PAX2_DIE_TEMP,
  MB_SWITCH_PAX3_DIE_TEMP,
  PDB_HSC_P12V_1_VIN,
  PDB_HSC_P12V_1_VOUT,
  PDB_HSC_P12V_1_CURR,
  PDB_HSC_P12V_1_PWR,
  PDB_HSC_P12V_2_VIN,
  PDB_HSC_P12V_2_VOUT,
  PDB_HSC_P12V_2_CURR,
  PDB_HSC_P12V_2_PWR,
  PDB_HSC_P12V_AUX_VIN,
  PDB_HSC_P12V_AUX_VOUT,
  PDB_HSC_P12V_AUX_CURR,
  PDB_HSC_P12V_AUX_PWR,
  PDB_ADC_1_VICOR0_TEMP,
  PDB_ADC_1_VICOR1_TEMP,
  PDB_ADC_1_VICOR2_TEMP,
  PDB_ADC_1_VICOR3_TEMP,
  PDB_ADC_2_VICOR0_TEMP,
  PDB_ADC_2_VICOR1_TEMP,
  PDB_ADC_2_VICOR2_TEMP,
  PDB_ADC_2_VICOR3_TEMP,
  PDB_SENSOR_OUTLET_TEMP,
  PDB_SENSOR_OUTLET_TEMP_REMOTE,
  FBEP_SENSOR_MAX,  //keep this at the tail
};

int pal_set_fan_speed(uint8_t fan, uint8_t pwm);
int pal_get_fan_speed(uint8_t fan, int *rpm);
int pal_get_fan_name(uint8_t num, char *name);
int pal_get_pwm_value(uint8_t fan_num, uint8_t *value);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* __PAL_SENSORS_H__ */
