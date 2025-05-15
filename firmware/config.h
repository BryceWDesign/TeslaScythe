// config.h
// TeslaScythe Firmware – Configuration Constants and System Definitions

#ifndef CONFIG_H
#define CONFIG_H

// ================= System-Wide Constants =================

// MCU Clock Frequency (Hz)
#define SYS_CLOCK_HZ         16000000UL

// ADC Resolution and Reference Voltage
#define ADC_RESOLUTION       1024
#define ADC_REF_VOLTAGE      3.3f

// Battery Monitoring Parameters
#define VBAT_SCALE_FACTOR    11.0f    // Voltage divider ratio for battery
#define IBAT_SENSE_RESISTOR  0.01f    // Shunt resistor in ohms
#define TEMP_SCALE_FACTOR    0.01f    // 10mV per °C (for LM35-style sensors)

// Fault Thresholds
#define VBAT_OVERVOLTAGE     4.2f
#define VBAT_UNDERVOLTAGE    3.0f
#define TEMP_MAX_THRESHOLD   70.0f    // Celsius

// UART Telemetry Baud Rate
#define TELEMETRY_BAUD       9600

// ================= Pin Assignments =================

// ADC Channels
#define PIN_VBAT             A0
#define PIN_IBAT             A1
#define PIN_TEMP_BATT        A2
#define PIN_TEMP_REG         A3
#define PIN_VRF              A4
#define PIN_VTEG             A5
#define PIN_VPIEZO           A6

// LED Indicators
#define PIN_LED_STATUS       13

// ================= Feature Flags =================

#define ENABLE_TELEMETRY     1
#define ENABLE_FAULT_PROTECTION 1

#endif // CONFIG_H
