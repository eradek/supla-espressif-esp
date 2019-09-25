
#ifndef MK_GATE_01_H_
#define MK_GATE_01_H_

#define ESP8266_SUPLA_PROTO_VERSION 7

#define DS18B20
#define TEMPERATURE_CHANNEL 2
#define W1_GPIO1

void supla_esp_board_send_channel_values_with_delay(void *srpc);

#endif
