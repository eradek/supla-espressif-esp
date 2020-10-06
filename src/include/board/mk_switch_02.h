
#ifndef SONOFF_H_
#define SONOFF_H_

#define SUPLA_ESP_SOFTVER "2.7.24.2"
#define LED_RED_PORT 2

#define ESP8266_SUPLA_PROTO_VERSION 12
#define CFGBTN_TYPE_SELECTION
#define BOARD_ON_CONNECT
#define BOARD_ON_CFG_SAVED

void ICACHE_FLASH_ATTR supla_esp_board_on_cfg_saved(void);
void ICACHE_FLASH_ATTR supla_esp_board_on_connect(void);
void ICACHE_FLASH_ATTR supla_esp_board_send_channel_values_with_delay(void *srpc);

#endif
