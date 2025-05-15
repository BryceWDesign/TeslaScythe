// config.h
// Configuration header for TeslaScythe firmware

#ifndef CONFIG_H
#define CONFIG_H

// Pin assignments
#define ADC_VOLTAGE_PIN       0
#define ADC_CURRENT_PIN       1
#define ADC_TEMPERATURE_PIN   2

// UART settings
#define UART_BAUD_RATE        9600

// Fault thresholds
#define OVERVOLTAGE_THRESHOLD 4.2f   // volts
#define UNDERVOLTAGE_THRESHOLD 3.0f  // volts
#define OVERTEMP_THRESHOLD    60.0f  // degrees Celsius

// Feature toggles
#define ENABLE_FAULT_PROTECTION 1
#define ENABLE_TELEMETRY        1

#endif // CONFIG_H
