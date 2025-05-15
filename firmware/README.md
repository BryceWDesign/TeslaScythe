# TeslaScythe Firmware

This folder contains the firmware source code responsible for monitoring, telemetry, and protection control of the TeslaScythe's onboard power management subsystems.

---

## Overview

The firmware is designed to run on a low-power microcontroller (e.g., STM32, AVR, or MSP430 class) and provides:

- Continuous monitoring of energy harvester inputs (RF, TEG, MEMS, Radiation).
- Battery voltage, current, and thermal protection.
- Telemetry reporting over serial or wireless link.
- Safety fault handling and automatic recovery routines.
- Modular configuration via config.h.

---

## Files Included

- `main.c` — Entry point of the firmware.
- `sensors.c/.h` — ADC acquisition and sensor interpretation.
- `telemetry_bus.c/.h` — UART telemetry formatting and transmission.
- `config.h` — Hardware mapping, constants, and feature flags.

---

## Dependencies

No external libraries are required unless using a specific MCU SDK. The code is written in standard C99 and can be compiled with GCC or any embedded toolchain.

---

## How to Build

1. Clone the TeslaScythe repository or download the `/firmware/` folder.
2. Select your target MCU and setup the appropriate toolchain (e.g., AVR-GCC, STM32CubeIDE, MSP430-GCC).
3. Include all `.c` and `.h` files in your project.
4. Define your target clock frequency and modify `config.h` if needed.
5. Compile the firmware using your IDE or make system.

Example using avr-gcc for an ATmega328P:
```bash
avr-gcc -mmcu=atmega328p -DF_CPU=16000000UL -Os -o main.elf main.c sensors.c telemetry_bus.c
avr-objcopy -O ihex main.elf main.hex
Flashing the Firmware
Use any ISP, JTAG, or bootloader method appropriate to your target MCU:

For AVR: avrdude -c usbtiny -p m328p -U flash:w:main.hex

For STM32: Use ST-Link or DFU tools.

For MSP430: Use mspdebug or Code Composer Studio.

Configuration
All pin assignments, thresholds, and feature toggles are defined in config.h. You can adjust:

ADC pins for sensor channels

Fault thresholds (temperature, voltage)

UART baud rate

Enabled features (telemetry, protection)

Telemetry Format
Telemetry is output in CSV format over UART, suitable for serial monitoring or parsing:

Example:

Copy
Edit
VBAT,VOUT,IBAT,TEMP_BATT,TEMP_REG
3.74,2.90,0.13,36.2,40.7
Safety Features
Overvoltage and undervoltage detection

Temperature monitoring of battery and regulators

Automatic shutdown and restart upon fault recovery

Configurable via ENABLE_FAULT_PROTECTION in config.h
