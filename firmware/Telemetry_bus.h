// Telemetry_bus.h
// TeslaScythe Firmware – Header for Telemetry Bus Functions

#ifndef TELEMETRY_BUS_H
#define TELEMETRY_BUS_H

#include <stdint.h>

// Struct to hold telemetry packet data
typedef struct {
    float vbat;           // Battery voltage
    float ibat;           // Battery current
    float temp_batt;      // Battery temperature
    float temp_reg;       // Regulator temperature
    uint8_t status_flags; // Status flags for fault conditions
    float vrf;            // RF voltage level
    float vteg;           // TEG output voltage
    float vpiezo;         // Piezo voltage level
} TelemetryPacket;

// Initializes the telemetry system (communication stack, buffer, etc.)
void TelemetryBus_Init(void);

// Collects telemetry data and transmits it over the active comms link
void TelemetryBus_CollectAndSend(void);

#endif // TELEMETRY_BUS_H
