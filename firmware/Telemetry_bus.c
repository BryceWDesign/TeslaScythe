// telemetry_bus.c
// Telemetry output routines for TeslaScythe firmware

#include "config.h"
#include <stdio.h>
#include <stdint.h>

// Mock function to simulate UART transmit (replace with actual hardware UART code)
void uart_transmit(const char *data) {
    // Implementation depends on MCU hardware; placeholder for simulation
    printf("%s", data);
}

void telemetry_send_header() {
#if ENABLE_TELEMETRY
    uart_transmit("VBAT,VOUT,IBAT,TEMP_BATT,TEMP_REG\n");
#endif
}

void telemetry_send_data(float vbat, float vout, float ibat, float temp_batt, float temp_reg) {
#if ENABLE_TELEMETRY
    char buffer[100];
    snprintf(buffer, sizeof(buffer), "%.2f,%.2f,%.2f,%.1f,%.1f\n",
             vbat, vout, ibat, temp_batt, temp_reg);
    uart_transmit(buffer);
#endif
}
