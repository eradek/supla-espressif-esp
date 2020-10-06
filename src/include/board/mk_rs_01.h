/*
 Copyright (C) AC SOFTWARE SP. Z O.O.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef SUPLA_RS_MODULE_H_
#define SUPLA_RS_MODULE_H_

#define SUPLA_ESP_SOFTVER "2.7.16.2"

#define LED_RED_PORT 2

#define ESP8266_SUPLA_PROTO_VERSION 7
#define _ROLLERSHUTTER_SUPPORT
#define CFGBTN_TYPE_SELECTION
#define BOARD_ON_CONNECT
#define BOARD_ON_CFG_SAVED

#define WATCHDOG_TIMEOUT_SEC 90
// #define RELAY_MIN_DELAY 50
void ICACHE_FLASH_ATTR supla_esp_board_on_cfg_saved(void);
void ICACHE_FLASH_ATTR supla_esp_board_on_connect(void);
void ICACHE_FLASH_ATTR supla_esp_board_send_channel_values_with_delay(void *srpc);

#define BOARD_ON_INPUT_ACTIVE                        \
    supla_esp_board_gpio_on_input_active(input_cfg); \
    return;
void ICACHE_FLASH_ATTR supla_esp_board_gpio_on_input_active(void* _input_cfg);

#define BOARD_ON_INPUT_INACTIVE                        \
    supla_esp_board_gpio_on_input_inactive(input_cfg); \
    return;
void ICACHE_FLASH_ATTR supla_esp_board_gpio_on_input_inactive(void* _input_cfg);

#endif