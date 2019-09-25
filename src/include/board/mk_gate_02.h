
#ifndef MK_GATE_02_H_
#define MK_GATE_02_H_

#define ESP8266_SUPLA_PROTO_VERSION 7

#define DS18B20
#define TEMPERATURE_CHANNEL 4
#define W1_GPIO14

void supla_esp_board_send_channel_values_with_delay(void *srpc);

#endif
