// Telemetry_bus.c
// TeslaScythe Firmware – Telemetry Bus Handling
// Handles telemetry collection, packaging, and dispatch over UART/I2C/SPI/LoRa

#include "Telemetry_bus.h"
#include "sensors.h"
#include "power.h"
#include "comms.h"
#include <string.h>
#include <stdio.h>

#define TELEMETRY_BUFFER_SIZE 256
static char telemetry_buffer[TELEMETRY_BUFFER_SIZE];

void TelemetryBus_Init() {
    Comms_Init();  // Initialize communication stack (e.g., UART or LoRa)
}

void TelemetryBus_CollectAndSend() {
    TelemetryPacket packet;

    // Collect data from power module
    packet.vbat = Power_GetBatteryVoltage();
    packet.ibat = Power_GetBatteryCurrent();
    packet.temp_batt = Sensors_GetBatteryTemperature();
    packet.temp_reg = Sensors_GetRegulatorTemperature();
    packet.status_flags = Power_GetStatusFlags();

    // Optional: Add more sensor inputs if available
    packet.vrf = Sensors_GetRFVoltage();
    packet.vteg = Sensors_GetTEGVoltage();
    packet.vpiezo = Sensors_GetPiezoVoltage();

    // Format data into a compact string (CSV-like for simplicity)
    snprintf(telemetry_buffer, TELEMETRY_BUFFER_SIZE,
             "VBAT:%.2f,IBAT:%.2f,TBAT:%.1f,TREG:%.1f,STATUS:%02X,VRF:%.2f,VTEG:%.2f,VPIEZO:%.2f",
             packet.vbat, packet.ibat, packet.temp_batt, packet.temp_reg,
             packet.status_flags, packet.vrf, packet.vteg, packet.vpiezo);

    // Transmit data over primary comms link
    Comms_SendString(telemetry_buffer);
}
