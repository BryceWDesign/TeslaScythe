# TeslaScythe – Power Management Module

## Overview

This document describes the power management architecture of TeslaScythe, detailing how multiple energy harvesters are integrated and managed to provide stable, reliable power to the system loads.

---

## Components

- **Energy Harvesters:** RF antenna array, thermoelectric generators (TEG), vibration MEMS, radiation layer, Casimir cells.  
- **Power Combiner Bus:** Aggregates power inputs from diverse harvesters with diode isolation and monitoring.  
- **Voltage Stabilizers:** Regulate voltage from harvesters to ensure smooth input to storage elements.  
- **Energy Storage:** Graphene supercapacitors for buffering and Li-Si solid-state batteries for long-term storage.  
- **Power Bus Regulator:** Buck/boost converters, MPPT controllers, and load balancing circuitry controlled by MCU.

---

## Functional Description

- Each harvester source is independently monitored and dynamically weighted to maximize total system efficiency.  
- Overvoltage, undervoltage, and temperature protections are implemented at both hardware and firmware levels.  
- Power flow prioritizes battery charging while maintaining capacitive buffers for transient surges.  
- MCU algorithms handle load scheduling to prevent system brownouts.

---

## Design Considerations

- System designed for high radiation tolerance and wide temperature range (-50°C to +120°C).  
- Modular power subsystems enable replacement or upgrade without total system downtime.  
- Redundancy in key power pathways ensures fault tolerance.  

---

## References

- Detailed circuit schematics and PCB layouts are located in `/circuits/` and `/boards/`.  
- Firmware power management code in `/firmware/power_management/`.
