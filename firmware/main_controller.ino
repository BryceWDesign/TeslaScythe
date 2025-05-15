/*
  TeslaScythe Main Controller Firmware
  File: main_controller.ino
  Description: Primary loop and subsystem orchestration for TeslaScythe energy harvesting platform.
*/

#include "config.h"
#include "safety_monitor.h"
#include "telemetry_bus.h"

// Pin Definitions
const int pin_RFInput = A0;
const int pin_TEGInput = A1;
const int pin_MEMSInput = A2;
const int pin_CasimirInput = A3;

const int pin_BatteryTemp = A4;
const int pin_RegulatorTemp = A5;
const int pin_StatusLED = 13;

// System State
float totalHarvestedPower = 0.0;
bool faultDetected = false;

void setup() {
  Serial.begin(9600);
  pinMode(pin_StatusLED, OUTPUT);

  initializeSafetyMonitor();
  initializeTelemetry();

  digitalWrite(pin_StatusLED, HIGH); // Status: Boot OK
  logTelemetry("System boot complete.");
}

void loop() {
  // 1. Monitor All Inputs
  float rfPower = analogRead(pin_RFInput) * ADC_TO_VOLTAGE;
  float tegPower = analogRead(pin_TEGInput) * ADC_TO_VOLTAGE;
  float memsPower = analogRead(pin_MEMSInput) * ADC_TO_VOLTAGE;
  float casimirPower = analogRead(pin_CasimirInput) * ADC_TO_VOLTAGE;

  totalHarvestedPower = rfPower + tegPower + memsPower + casimirPower;

  // 2. Check Safety Conditions
  float batteryTemp = analogRead(pin_BatteryTemp) * TEMP_SENSOR_SCALE;
  float regulatorTemp = analogRead(pin_RegulatorTemp) * TEMP_SENSOR_SCALE;

  faultDetected = checkSafety(batteryTemp, regulatorTemp, totalHarvestedPower);

  if (faultDetected) {
    digitalWrite(pin_StatusLED, LOW);
    logTelemetry("FAULT: System safety threshold exceeded.");
    delay(1000);
    return;
  } else {
    digitalWrite(pin_StatusLED, HIGH);
  }

  // 3. Transmit Telemetry
  sendTelemetry(totalHarvestedPower, batteryTemp, regulatorTemp);

  // 4. Delay
  delay(SAMPLE_INTERVAL_MS);
}
