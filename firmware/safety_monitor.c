// safety_monitor.c
// TeslaScythe - Safety Monitoring Subsystem

#include "safety_monitor.h"
#include "telemetry_bus.h"
#include <Arduino.h>

// Thresholds
#define MAX_BATTERY_TEMP_C 85.0
#define MAX_REGULATOR_TEMP_C 100.0
#define MAX_TOTAL_POWER_W   12.0

bool checkSafety(float batteryTemp, float regulatorTemp, float totalPower) {
  bool fault = false;

  if (batteryTemp > MAX_BATTERY_TEMP_C) {
    logTelemetry("Warning: Battery temperature exceeded threshold!");
    fault = true;
  }

  if (regulatorTemp > MAX_REGULATOR_TEMP_C) {
    logTelemetry("Warning: Regulator temperature exceeded threshold!");
    fault = true;
  }

  if (totalPower > MAX_TOTAL_POWER_W) {
    logTelemetry("Warning: Harvested power exceeds system limits!");
    fault = true;
  }

  return fault;
}

void initializeSafetyMonitor() {
  // Reserved for future calibration or preflight self-checks
  logTelemetry("Safety monitor initialized.");
}
