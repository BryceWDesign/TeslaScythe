# TeslaScythe – Electrical Schematic Overview

The following diagram provides a high-level wiring schematic of the TeslaScythe energy harvesting and power regulation system. Each module is represented as a logical block, showing energy flow from capture to storage and control.

---

## System Power Flow

[ RF Antenna Grid ]
|
[ Signal Rectifier + Smart Matching ]
|
-->[ Power Combiner Bus ]-------------------+
| |
[ TEG Array ] --> [ Voltage Stabilizer ] |
| |
[ Graphene Buffer ] |
| |
+---------> [ Li-Si Battery Bank ] <----+
| | ^ |
| [ Power Bus Regulator ] |
| | |
[ Vibration MEMS ]------+ |
[ Radiation Layer ]------------------------------+
[ Casimir Cells ]-------------------------------+


---

## Module Descriptions

### RF Antenna Grid
- Captures ambient radio frequencies from 100 kHz to 5 GHz using reconfigurable fractal antennas embedded on flexible copper/Kapton sheets.

### Signal Rectifier + Smart Matching
- Converts the RF AC signal to DC using wideband Schottky-based rectifiers with automatic impedance tuning for frequency-adaptive matching.

### Power Combiner Bus
- Aggregates the output of RF, thermal, vibrational, and radiation harvesters into a unified bus, protected by gate diodes and monitoring logic.

### TEG Array (Thermoelectric Generators)
- Converts heat gradients into electrical energy using Bismuth Telluride or SiGe-based flexible tiles.
- Includes thermal interface pads and copper finned spreaders for heat capture and dissipation.

### Voltage Stabilizer
- Smooths and steps TEG output to optimal voltage levels for capacitor and battery input using ultra-low dropout regulators or MPPT DC-DC controllers.

### Graphene Buffer
- Short-term high-rate energy sink to handle surges and transients using high-density graphene supercapacitors.

### Li-Si Battery Bank
- Solid-state lithium-silicon battery pack for primary energy storage.
- High energy density, extreme temperature tolerance, and radiation-hardened packaging.

### Vibration MEMS
- Piezoelectric MEMS arrays mounted on isolated standoffs to harvest kinetic energy from vibrations, tuned for ~60–120 Hz environmental noise.

### Radiation Layer
- Betavoltaic thin-film silicon cells protected by a boron-carbide radiation shield.
- Designed to capture ambient high-energy particle ionization in orbit or high-altitude scenarios.

### Casimir Cells
- Quantum vacuum energy harvesters based on ultra-close vacuum-gap capacitive structures. Outputs extremely low, used to maintain charge bias or supplement clock circuits.

### Power Bus Regulator
- Handles buck/boost conversion, MPPT (maximum power point tracking), and load balancing.
- Managed by microcontroller with real-time diagnostics and thermal cutoff protections.

---

## Wiring & Protection Features

- All incoming harvester sources are diode-isolated before entering the bus.
- Overvoltage and thermal sensors are integrated with microcontroller failsafes.
- Modular subsystems are connected via locking Molex/MIL-Spec connectors.
- Each unit is shielded and grounded with a star ground layout to reduce interference.

---

## Notes

- This is a system-level overview. PCB-level schematics and layout files (e.g., KiCad or Altium Designer) are included in `/circuits/` and `/boards/`.
- Designed to tolerate radiation events (SEUs) and function across −50°C to +120°C.
- All components chosen for spaceflight viability or in-lab equivalent for prototyping.
