# TeslaScythe – Wiring Harness & Interconnects

This document outlines the wiring and harness architecture used throughout TeslaScythe, with attention to power distribution, signal integrity, shielding, and modularity.

---

## Bus Layout Overview

The TeslaScythe uses a centralized wiring bus architecture designed for compact routing and electromagnetic cleanliness.

### Power Bus Lines

- **Main HV Bus (3.7–4.2V Li-Si rail)**: 16 AWG Teflon-coated, red  
- **Stabilized 3.3V / 5V Lines**: 20 AWG, dual twisted-pair with ground  
- **Capacitor Links**: 22 AWG silicone wire, shielded braid  

### Signal Lines

- **I²C/SPI/UART**: 26 AWG twisted pairs with ferrite beads  
- **Sensor Wires**: 28 AWG individually shielded  
- **Thermal probes / MEMS lines**: 30 AWG ribbon  

---

## Connectors

| Type              | Location                        | Spec                         |
|-------------------|----------------------------------|------------------------------|
| Molex Micro-Fit   | PCB → Battery / Graphene        | Locking, 4-pin               |
| JST XH            | Sensor & MEMS headers           | Vibration-resistant, keyed   |
| SMA (Panel-Mount) | RF Ports                        | Gold-plated, screw-lock      |
| USB-C (Dev Only)  | Debug UART                      | Optional, limited to 5V use  |
| Hirose DF13       | MCU Module → Power Regulator    | Compact, friction-lock       |

---

## Cable Management & Routing

- All internal harnesses are bundled with Kapton or Nomex lacing cords.
- EMI shielding wraps used for all high-speed and RF lines.
- Routing separated by function:
  - Left channel: power
  - Right channel: data/control
  - Bottom channel: thermal/probe

---

## PCB Interconnects

Inter-board connections are handled by:
- Flex PCBs with integrated ground planes
- Edge-mounted board-to-board connectors with strain relief
- Controlled impedance routing for high-speed traces

---

## Mechanical Protection

- All cables are heat-shrunk at endpoints
- Kevlar sleeve overlays for chassis-exit lines
- Harness tested to vibration profiles: MIL-STD-202 Method 204

---

## Notes

- Refer to `/boards/teslascythe_pin_diagram.png` for actual trace mapping.
- All wiring and connector types selected for thermal range −50°C to +125°C and vacuum compatibility.
