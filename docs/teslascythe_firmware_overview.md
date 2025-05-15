# TeslaScythe – Firmware Overview

## Purpose

This document outlines the firmware architecture responsible for system control, monitoring, and data acquisition of the TeslaScythe energy harvesting platform.

---

## Key Features

- Real-time monitoring of power inputs, battery state, and environmental sensors.  
- Control of power bus regulators and MPPT algorithms to optimize energy harvesting.  
- Fault detection and recovery routines including thermal shutdowns and voltage protection.  
- Communication interfaces for telemetry and remote firmware updates (OTA).  
- Modular firmware design for easy updates and subsystem integration.

---

## Architecture

- **Main MCU:** ARM Cortex-M7 based controller running FreeRTOS.  
- **Peripheral Drivers:** For ADC, DAC, PWM, temperature sensors, and communication buses (SPI, I2C, UART).  
- **Power Management Module:** Implements MPPT and load balancing algorithms.  
- **Safety Module:** Monitors temperature, voltage, and current with interrupt-driven fault handlers.  
- **Communication Module:** Handles telemetry data transfer and secure OTA updates via encrypted BLE and CAN.

---

## Development and Testing

- Firmware source code is organized under `/firmware/src/`.  
- Unit tests and integration tests maintained in `/firmware/tests/`.  
- Continuous integration configured to build and test on each commit.

---

## Notes

- Firmware is optimized for low power consumption and reliability in space-grade environments.  
- Designed with future expandability for additional sensor inputs and telemetry capabilities.
