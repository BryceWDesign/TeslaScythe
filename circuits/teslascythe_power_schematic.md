# TeslaScythe – Power Schematic Overview

This document provides a detailed schematic description of the TeslaScythe power harvesting, conversion, and storage system. It explains the components and their interactions involved in the power chain from ambient energy capture to regulated output.

---

## Power Harvesting Components

### RF Antenna Grid
- Flexible fractal antennas tuned from 100 kHz to 5 GHz.
- Embedded on copper/Kapton substrate for lightweight and durability.
- Interfaces with wideband rectifier circuits.

### Signal Rectifier + Smart Matching
- Schottky diode-based full-wave rectifier.
- Automatic impedance tuning to optimize RF to DC conversion efficiency.
- Output feeds directly into the Power Combiner Bus.

### Thermoelectric Generator (TEG) Array
- Bismuth Telluride or SiGe flexible tiles for converting thermal gradients.
- Includes copper heat spreaders and thermal interface pads.
- Output routed through a voltage stabilizer.

### Vibration MEMS Harvesters
- Piezoelectric MEMS arrays designed for 60–120 Hz vibrations.
- Mounted on isolating standoffs to maximize kinetic energy harvesting.
- Output connected to Power Combiner Bus.

### Radiation Cells
- Betavoltaic thin-film silicon cells with boron carbide radiation shielding.
- Capture ambient particle ionization in space or high-altitude environments.
- Outputs merged on Power Combiner Bus.

### Casimir Vacuum Cells
- Capacitive quantum vacuum energy harvesters.
- Provide ultra-low steady-state currents.
- Feed into the Power Combiner Bus for supplemental charging.

---

## Power Regulation Components

### Power Combiner Bus
- Diode-isolated inputs from all harvesters.
- Gate diode protection and fault monitoring.
- Routes combined DC to Voltage Stabilizer and Graphene Buffer.

### Voltage Stabilizer
- Ultra-low dropout regulators or MPPT DC-DC converters.
- Smooths input voltage and provides regulated output.
- Protects downstream components from transient voltage spikes.

### Graphene Buffer
- High-rate graphene supercapacitors.
- Absorb surges and supply short bursts of power on demand.
- Acts as an intermediary buffer before energy storage.

### Lithium-Silicon Battery Bank
- Solid-state Li-Si battery cells.
- Radiation hardened and temperature tolerant.
- Primary energy storage for the system.

### Power Bus Regulator & MCU
- Manages buck/boost conversion and load balancing.
- Monitors temperature, voltage, and current sensors.
- Provides telemetry output and fault diagnostics.

---

## Wiring and Protection Features

- All harvester inputs are diode-isolated to prevent reverse current flow.
- Overvoltage, undervoltage, and thermal sensors protect battery and regulators.
- Modular connectors enable easy subsystem replacement.
- Star ground layout to minimize electrical interference.

---

## Notes

- PCB-level layout and circuit diagrams are stored in `/boards` directory.
- Designed for operation in extreme environments: -50°C to +120°C, high radiation.
- Firmware controls power management and telemetry reporting.

---

## Version

- Document Version: 1.0  
- Last Updated: 2025-05-15
