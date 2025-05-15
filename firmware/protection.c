// protection.c
// Implementation of fault protection and monitoring module

#include "protection.h"
#include "config.h"
#include <stdbool.h>
#include <stdio.h>  // For debug printing, optional

static bool faulted = false;

// Placeholder functions to read voltages and temps, to be implemented per hardware
extern float read_battery_voltage(void);
extern float read_battery_temperature(void);
extern float read_regulator_temperature(void);

void protection_init(void) {
    faulted = false;
    // Initialize ADCs, sensors, or hardware monitoring here as needed
}

void protection_monitor(void) {
    float vbatt = read_battery_voltage();
    float tbatt = read_battery_temperature();
    float treg = read_regulator_temperature();

    faulted = false;

    if (vbatt > OVERVOLTAGE_THRESHOLD) {
        faulted = true;
        // Handle overvoltage fault: shutdown or alert
    }
    else if (vbatt < UNDERVOLTAGE_THRESHOLD) {
        faulted = true;
        // Handle undervoltage fault: shutdown or alert
    }

    if (tbatt > MAX_BATTERY_TEMP) {
        faulted = true;
        // Handle battery temperature fault
    }

    if (treg > MAX_REGULATOR_TEMP) {
        faulted = true;
        // Handle regulator temperature fault
    }

    // Add any additional fault checks here

    // Optional: Log or output fault state
    // printf("Protection fault status: %d\n", faulted);
}

bool protection_is_faulted(void) {
    return faulted;
}
