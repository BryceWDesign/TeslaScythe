// telemetry_bus.c
// TeslaScythe firmware module for telemetry data handling and UART communication.

#include "telemetry_bus.h"
#include "config.h"
#include <stdio.h>

// Buffer for telemetry data strings
static char telemetry_buffer[128];

// Example telemetry data variables (these would be updated from sensors)
static float vbat = 3.7f;
static float vout = 2.9f;
static float ibat = 0.13f;
static float temp_batt = 36.2f;
static float temp_reg = 40.7f;

// Initialize UART or other serial peripheral for telemetry output
void telemetry_init(void) {
    // Initialization code here depending on MCU and UART peripheral
    // e.g., setup baud rate, UART pins, interrupts if needed
}

// Format and send telemetry data over UART in CSV format
void telemetry_send(void) {
    // Format CSV string
    int len = snprintf(telemetry_buffer, sizeof(telemetry_buffer),
                       "VBAT,VOUT,IBAT,TEMP_BATT,TEMP_REG\n%.2f,%.2f,%.2f,%.1f,%.1f\n",
                       vbat, vout, ibat, temp_batt, temp_reg);

    if (len > 0) {
        // Send the formatted telemetry_buffer over UART byte by byte
        for (int i = 0; i < len; i++) {
            uart_send_byte(telemetry_buffer[i]);
        }
    }
}

// Placeholder function to send a byte over UART (to be implemented)
void uart_send_byte(char byte) {
    // MCU-specific UART transmit code here
    // For example, wait until TX buffer empty, then load byte to TX register
}

