# circuits/teslascythe_pcb_schematic_overview.md

# TeslaScythe PCB Schematic Overview

This document provides a detailed overview of the PCB schematics and layout architecture for the TeslaScythe energy harvesting system.

---

## Board Architecture

- **Main Energy Harvesting Board**  
  Hosts the RF antenna grid inputs, signal rectifiers, and power combiner bus circuitry.

- **Power Regulation Module**  
  Contains voltage stabilizers, buck/boost converters, and MPPT controllers.

- **Battery Management Subsystem**  
  Interfaces with the Li-Si battery bank, handling charge/discharge regulation and safety monitoring.

- **Sensor & Telemetry Module**  
  Embedded MCU with temperature, voltage, and current sensors feeding telemetry data via UART.

---

## Signal and Power Flow

1. **Input Stage**  
   Ambient RF signals enter through fractal antennas on flexible substrates.  
   These are rectified and impedance-matched for maximum efficiency.

2. **Energy Aggregation**  
   Harvested energy sources (RF, thermoelectric, vibration, radiation) feed into the power combiner bus with diode isolation.

3. **Power Conditioning**  
   The combined energy is regulated through voltage stabilizers and MPPT buck/boost converters.

4. **Energy Storage**  
   Regulated output charges the solid-state lithium-silicon battery bank with integrated thermal protection.

5. **Control & Monitoring**  
   Microcontroller monitors battery health, temperature, voltage thresholds, and outputs telemetry.

---

## Layout Notes

- High-frequency RF traces use controlled impedance microstrip lines with ground shielding layers.  
- Sensitive analog sensor routes are separated from high-current power traces to reduce noise.  
- Star ground topology is used to minimize ground loops and EMI.  
- Modular connectors follow MIL-Spec locking standards for durability in space environments.

---

## File References

- Full KiCad or Altium schematic and PCB layout files to be added in `/circuits/schematic_files/` (pending).

---

## Compliance & Reliability

- Designed to operate in -50°C to +120°C temperature ranges.  
- Radiation-hardened component choices to mitigate SEUs and cumulative damage.  
- All critical components meet aerospace-grade quality standards.

---

*This overview complements detailed PCB schematic PDFs and Gerber files stored separately.*

