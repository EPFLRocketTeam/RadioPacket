#ifndef RADIO_PACKET_H
#define RADIO_PACKET_H

#include <stdint.h>


//aim for 100 bytes
typedef struct __attribute__((__packed__)) radio_packet {
	uint8_t preamble;
	uint32_t timestamp;
	int32_t acc_z;
	int32_t baro_press;
	int32_t baro_temp;
	int32_t kalman_z;
	int32_t kalman_v;
//	int32_t kalman_a;
	int32_t kalman_sigma_z;
//	float	gnss_hdop;
	float	gnss_lon;
	float	gnss_lat;
	float	gnss_alt;
	uint8_t av_state;
}radio_packet_t;


uint32_t lol = sizeof(radio_packet_t);




#endif /* RADIO_PACKET_H */
