# TeslaScythe – Firmware Overview

The TeslaScythe device includes embedded firmware running on a low-power microcontroller responsible for power management, safety controls, and telemetry functions. This document outlines the firmware architecture, key modules, and control flow.

---

## Firmware Architecture

The firmware is written in C++ using the Arduino framework for prototyping purposes. Final implementations can be ported to STM32 or RISC-V architectures for flight-grade reliability.

### Core Modules

- **Main Loop (`main_loop.ino`)**  
  Orchestrates startup, polling, and timed execution of all subsystems.

- **PowerController (`power_controller.h/.cpp`)**  
  Encapsulates all power monitoring, harvesting logic, load switching, and voltage regulation.

- **TelemetryManager**  
  Interfaces with sensors, ADCs, and outputs data via UART/I2C for debugging or transmission.

- **FailsafeManager**  
  Implements thermal cutoff, overvoltage protection, watchdog timers, and emergency state handling.

- **EventLogger**  
  Stores key runtime metrics to EEPROM or SD for later analysis (disabled in current version).

---

## Control Flow

1. **Boot Sequence**
   - Verify flash integrity and configuration
   - Initialize GPIOs and interrupts
   - Enable ADC and bus voltage monitoring

2. **Sensor Sampling**
   - Polls energy source voltages (RF, TEG, Vibration, Radiation)
   - Tracks bus current and capacitor charge level

3. **Power Decision Logic**
   - Enables or disables charging of buffer or battery bank
   - Routes harvested energy intelligently based on efficiency and demand

4. **Regulation + Safety**
   - Engages boost/buck converters using PID controller
   - Trips thermal or voltage failsafes if thresholds exceeded

5. **Sleep + Wake Management**
   - Enters deep sleep mode when idle
   - Interrupt-driven wake-up on voltage change or external trigger

---

## Energy Source Prioritization

The firmware uses a weighted scoring system to prioritize energy sources. For example:

| Source        | Efficiency Weight | Noise Rejection | Priority Index |
|---------------|-------------------|------------------|----------------|
| RF            | 0.7               | High             | 2              |
| Vibration MEMS| 0.9               | Medium           | 1              |
| TEG           | 0.6               | Low              | 3              |
| Radiation     | 0.4               | Very High        | 4              |

These rankings can be reconfigured dynamically based on environmental response.

---

## Firmware Notes

- Development target: ATmega328P / STM32L0 series  
- Interrupt-driven GPIOs for low power  
- All math handled with fixed-point libraries for MCU efficiency  
- Uses watchdog resets for fault recovery  
- Designed to run in radiation-aware environments with high SEU tolerance  
