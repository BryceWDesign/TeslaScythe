// protection.h
// Header for fault protection and monitoring module

#ifndef PROTECTION_H
#define PROTECTION_H

#include <stdbool.h>

// Threshold definitions (could also be from config.h)
#define OVERVOLTAGE_THRESHOLD 4.2f
#define UNDERVOLTAGE_THRESHOLD 3.0f
#define MAX_BATTERY_TEMP 60.0f  // Celsius
#define MAX_REGULATOR_TEMP 70.0f

// Initialize protection monitoring hardware and variables
void protection_init(void);

// Monitor system voltages and temperatures, call fault handlers as needed
void protection_monitor(void);

// Returns true if a fault condition is currently active
bool protection_is_faulted(void);

#endif // PROTECTION_H
