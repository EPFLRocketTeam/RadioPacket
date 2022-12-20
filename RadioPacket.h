#ifndef RADIO_PACKET_H
#define RADIO_PACKET_H

#include <stdint.h>


//aim for 100 bytes
typedef struct __attribute__((__packed__)) radio_packet {
	uint32_t prefix;
	uint32_t timestamp;
	int32_t acc_z;
	int32_t baro_press;
	int16_t baro_temp;
	int32_t kalman_z;
	int32_t kalman_v;
//	int32_t kalman_a;
	int32_t baro_alt;
//	float	gnss_hdop;
	float	gnss_lon;
	float	gnss_lat;
	int32_t	gnss_alt;
    uint32_t packet_nbr;
}radio_packet_t;


const uint32_t radio_packet_size = sizeof(radio_packet_t);

const uint8_t radio_packet_opcode = 0x00;




#endif /* RADIO_PACKET_H */
