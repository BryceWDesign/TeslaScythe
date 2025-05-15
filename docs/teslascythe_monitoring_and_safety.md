# TeslaScythe – Monitoring & Safety Systems Design

This document describes the monitoring sensors, safety features, and control logic implemented to ensure TeslaScythe operates reliably and safely within the spacecraft environment.

---

## 1. Sensor Suite

- Temperature Sensors: High-precision thermistors placed near critical components to monitor thermal conditions.
- Vibration Sensors: MEMS accelerometers to detect shocks and sustained vibrations.
- Electromagnetic Field Sensors: To measure ambient EM and RF field intensities.
- Charge Monitoring: Voltage and current sensors to track power flow and storage levels.
- Radiation Sensors: Ionizing radiation detectors calibrated for spacecraft exposure ranges.

---

## 2. Onboard MCU and Control

- STM32H7 or RP2040 microcontroller selected for ultra-low power operation and radiation screening.
- Runs real-time firmware handling sensor data acquisition, fault detection, and system state management.
- Communicates with spacecraft telemetry bus for status updates and command reception.

---

## 3. Safety Disconnect Mechanism

- Polyfuse protection provides automatic resettable overcurrent protection.
- Manual hardware switch allows for physical power disconnect.
- Firmware triggers hardware disable in case of critical faults (thermal, electrical, radiation).

---

## 4. Data Logging & Telemetry

- Logs sensor readings and events with timestamp for post-mission analysis.
- Transmits real-time status and alerts to spacecraft monitoring systems.
- Supports firmware updates and diagnostics via telemetry interface.

---

## 5. Environmental & Operational Considerations

- All sensors and electronics rated for space radiation and thermal extremes.
- Shielding and insulation implemented to protect sensitive components.
- Designed to minimize EMI and cross-talk between subsystems.

---

## Notes

- Monitoring and safety designed as modular add-ons, allowing easy replacement or upgrades.
- Safety prioritized to meet or exceed aerospace standards for astronaut equipment.
