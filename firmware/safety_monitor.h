// safety_monitor.h
// TeslaScythe - Safety Monitoring Header

#ifndef SAFETY_MONITOR_H
#define SAFETY_MONITOR_H

#include <stdbool.h>

bool checkSafety(float batteryTemp, float regulatorTemp, float totalPower);
void initializeSafetyMonitor();

#endif // SAFETY_MONITOR_H
