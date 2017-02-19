/*
	Copyright 2015 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

/*
 * comm_uart.c
 *
 *  Created on: 17 aug 2015
 *      Author: benjamin
 */

#include "comm_uart.h"
//#include "ch.h"
//#include "hal.h"
#include "bldc_interface_uart.h"

#include <string.h>

// Settings
#define UART_BAUDRATE			115200
#define UART_DEV				UARTD3
#define UART_GPIO_AF			7
#define UART_TX_PORT			GPIOB
#define UART_TX_PIN				10
#define UART_RX_PORT			GPIOB
#define UART_RX_PIN				11
#define SERIAL_RX_BUFFER_SIZE	1024

// Private functions
static void send_packet(unsigned char *data, unsigned int len);

// Threads

// Variables
static uint8_t serial_rx_buffer[SERIAL_RX_BUFFER_SIZE];
static int serial_rx_read_pos = 0;
static int serial_rx_write_pos = 0;

/**
 * Callback that the packet handler uses to send an assembled packet.
 *
 * @param data
 * Data array pointer
 * @param len
 * Data array length
 */
static void send_packet(unsigned char *data, unsigned int len) {
}

void comm_uart_init(void) {
}
