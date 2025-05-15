# TeslaScythe – Interface Specification

This document defines the electrical and logical interfaces between the major subsystems of the TeslaScythe project. It ensures compatibility, signal integrity, and ease of integration.

---

## Overview

The TeslaScythe system interfaces include power, data, control, and communication lines between:

- Power Harvesting Modules
- Energy Storage and Regulation
- Microcontroller Unit (MCU)
- Telemetry and Diagnostics
- External Connectors and Expansion Ports

---

## Power Interfaces

| Interface              | Voltage Level   | Max Current | Connector Type           | Description                            |
|-----------------------|-----------------|-------------|--------------------------|--------------------------------------|
| Power Combiner Bus    | 0–12 V DC        | 10 A max    | Molex Micro-Fit 3.0       | Aggregates energy from harvesters    |
| Battery Bank Output   | 3.7 V nominal    | 10 A max    | Custom Pogo Pin connector | Supplies regulated power to system   |
| Voltage Regulator Out | 3.3 V or 5 V DC | 3 A max     | JST PH 2.0                | Powers MCU and logic circuits         |

---

## Data and Control Interfaces

| Signal Name           | Type            | Direction   | Interface Protocol     | Description                           |
|-----------------------|-----------------|-------------|-----------------------|-------------------------------------|
| UART_TX               | Digital UART    | MCU → Host  | UART (115200 baud)    | Telemetry data output                |
| UART_RX               | Digital UART    | Host → MCU  | UART (115200 baud)    | Command input                       |
| I2C_SCL               | Clock line      | Bidirectional| I2C                   | Sensor and peripheral communication |
| I2C_SDA               | Data line       | Bidirectional| I2C                   | Sensor and peripheral communication |
| SPI_MOSI              | Digital SPI     | MCU → Sensor| SPI                   | SPI Master Out Slave In             |
| SPI_MISO              | Digital SPI     | Sensor → MCU| SPI                   | SPI Master In Slave Out             |
| SPI_SCK               | Clock line      | MCU → Sensor| SPI                   | SPI Clock                         |
| SPI_CS                | Chip Select     | MCU → Sensor| SPI                   | SPI Chip Select                    |
| GPIO_FAULT            | Digital Input   | MCU         | Interrupt / Polling    | Fault signal input                  |
| RESET                 | Digital Input   | MCU         | Reset line             | External reset signal               |

---

## Connector Pinouts

- **Power Combiner Bus Connector**: 6 pins  
  - Pin 1: +12 V DC  
  - Pin 2: Ground  
  - Pins 3-6: Reserved for future use / monitoring  

- **Battery Connector**: 4 pins  
  - Pin 1: +3.7 V Battery Positive  
  - Pin 2: Battery Ground  
  - Pin 3: Battery Temperature Sensor Signal  
  - Pin 4: Battery Charge Control  

- **Telemetry Connector**: 3 pins  
  - Pin 1: UART_TX  
  - Pin 2: UART_RX  
  - Pin 3: Ground  

---

## Signal Integrity and Protection

- All power lines are fused and diode-protected to prevent backflow and overcurrent.  
- Data lines incorporate ESD protection diodes and series resistors.  
- Communication lines use differential signaling where applicable to reduce noise.  
- Shielded cables are recommended for external telemetry connections.  

---

## Notes

- Interface specifications are subject to updates during development.  
- Detailed PCB-level pinouts and schematics are provided in the `/boards/` directory.  
- All signals comply with space-grade EMI/EMC requirements where applicable.  

---

## Version

- Document Version: 1.0  
- Last Updated: 2025-05-15
