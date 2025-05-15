// telemetry_bus.h
// Header for TeslaScythe telemetry UART communication module

#ifndef TELEMETRY_BUS_H
#define TELEMETRY_BUS_H

// Initialize telemetry communication (UART, etc.)
void telemetry_init(void);

// Send telemetry data over UART in CSV format
void telemetry_send(void);

// UART send byte placeholder (to be implemented in .c)
void uart_send_byte(char byte);

#endif // TELEMETRY_BUS_H
