# TeslaScythe – Component List

This document provides a detailed bill of materials (BOM) for the TeslaScythe hardware system. It includes key components, their specifications, and recommended suppliers or part numbers.

---

## Power Harvesting Modules

| Component              | Description                                           | Specifications                              | Suggested Part Number / Supplier           |
|-----------------------|-------------------------------------------------------|---------------------------------------------|---------------------------------------------|
| RF Antenna Grid       | Flexible fractal copper/Kapton antenna array          | 100 kHz to 5 GHz, impedance matched         | Custom PCB fabrication / LPKF               |
| Signal Rectifier      | Wideband Schottky diode rectifier                      | Low forward voltage drop, 0.3 V max         | BAT54, Diodes Inc.                          |
| Power Combiner Bus    | Power diode array and busbar                            | 40 A, 60 V max                               | Vishay SS34 Schottky Diode                  |
| TEG Array             | Thermoelectric generators, Bismuth Telluride tiles    | 5 W max per tile, flexible                    | Custom / Custom supplier                     |
| Voltage Stabilizer    | Ultra-low dropout regulator or MPPT controller         | Output 3.3 V or 5 V regulated                 | Texas Instruments TPS7A02                   |
| Graphene Buffer       | Graphene supercapacitor bank                            | 10 F, 2.7 V rated                             | Skeleton Technologies                       |
| Li-Si Battery Bank    | Solid-state lithium-silicon battery pack                | 3.7 V nominal, 10 Ah                           | Custom / Solid Power                        |
| Vibration MEMS        | Piezoelectric MEMS array on standoffs                   | Resonant 60–120 Hz                            | Murata Piezoelectric Sensors                 |
| Radiation Layer       | Betavoltaic silicon cells with boron-carbide shield    | 2 μW output power                              | Custom fabricated                            |
| Casimir Cells         | Vacuum-gap capacitive energy harvesters                 | Ultra-low power output                          | Experimental / R&D                            |

---

## Electronics and Control

| Component              | Description                                           | Specifications                              | Suggested Part Number / Supplier           |
|-----------------------|-------------------------------------------------------|---------------------------------------------|---------------------------------------------|
| MCU                   | 32-bit ARM Cortex-M4 microcontroller                   | 120 MHz, 256 KB Flash, 64 KB RAM            | STM32F405RG                                |
| Power Bus Regulator    | Buck/boost DC-DC converter with MPPT                   | 3 A max, programmable                        | Texas Instruments TPS63070                   |
| Temperature Sensors    | Digital temperature sensors                             | -40°C to +125°C, I2C interface               | Texas Instruments TMP102                     |
| Fault Protection ICs  | Overvoltage, undervoltage, thermal shutdown             | Automotive-grade                              | Analog Devices ADM1191                       |
| Connectors            | Molex Micro-Fit 3.0 or equivalent                       | Various pin counts                            | Molex                                        |

---

## Passive Components

| Component              | Description                                           | Specifications                              | Suggested Part Number / Supplier           |
|-----------------------|-------------------------------------------------------|---------------------------------------------|---------------------------------------------|
| Capacitors            | Ceramic MLCC, Electrolytic, Supercapacitor            | Various capacitance and voltage ratings     | Murata, Panasonic                            |
| Resistors             | Thin film, metal oxide resistors                       | 1% tolerance, 0.1 W to 1 W power             | Vishay, Yageo                               |
| Inductors             | Power inductors for DC-DC converter                    | 10 μH to 100 μH, saturation current rating  | Coilcraft, TDK                              |
| Diodes                | Schottky and signal diodes                             | Fast switching, low forward voltage drop    | Vishay, Diodes Inc.                         |

---

## Notes

- Components are selected for radiation tolerance where possible.
- Custom parts may require in-house or specialized fabrication.
- All suppliers and part numbers are suggestions and subject to availability.
- Review all parts for compliance with space-grade standards.

---

## Version

- Document Version: 1.0  
- Last Updated: 2025-05-15
