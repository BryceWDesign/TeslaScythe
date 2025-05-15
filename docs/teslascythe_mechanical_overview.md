# TeslaScythe – Mechanical Overview

This document outlines the physical design, material selection, and structural configuration of the TeslaScythe device. The mechanical structure is optimized for compactness, modularity, and extreme environmental durability.

---

## Chassis Structure

- **Material**: Aerospace-grade aluminum alloy (6061-T6) or titanium (Grade 5) depending on deployment environment.
- **Dimensions**: ~200mm x 150mm x 40mm (excluding antenna extensions).
- **Mounting**: Modular hex-bolt panel system with anti-vibration grommets.

### Features:
- EMI-shielded enclosure with modular heat sinks
- Venting paths for passive thermal dissipation in vacuum or atmosphere
- Quick-release plates for battery modules and capacitors

---

## Layered Internal Layout

```
+------------------------------+
| RF Antenna / Radiation Layer|
+------------------------------+
| Graphene Buffer / MEMS Stack|
+------------------------------+
| PCB Stack (Control + Power) |
+------------------------------+
| TEG / Thermal Pads Interface|
+------------------------------+
| Battery Bank (Li-Si)        |
+------------------------------+
```

This layered architecture enables:
- Efficient energy routing
- Short trace lengths to reduce parasitic losses
- Thermally isolated zones

---

## Connectors & Interfaces

- **External I/O**: MIL-SPEC circular connectors (USB-C optional for prototyping)
- **Internal Bus**: Flexible ribbon cables with EMI shielding
- **Antenna Ports**: SMA connectors with locking collars
- **Thermal Interface**: Copper cold plates with TIMs (Thermal Interface Materials)

---

## Mechanical Resilience

- Designed for mechanical shock up to 20g, vibration damping for 10–300 Hz sweep
- Radiation-hardened by passive layered shielding (graphite, B4C, Al)
- Water-resistant and dust-tight (IP65–IP67 class)

---

## Deployment Options

1. **Orbital (CubeSat)**  
   - Integrates into standard 3U payload tray  
   - RF-transparent window for antenna radiation

2. **High-Altitude Balloon**  
   - Polycarbonate or mylar shell over chassis  
   - Aerodynamic finned structure

3. **Ground / Lab Use**  
   - Removable shields  
   - 3D-printed structural mock-up for development

---

## Notes

- Full 3D CAD files available in `/cad/` directory.
- Includes STL and STEP formats for 3D printing and CAM.
- Thermal simulation source files located in `/simulation/thermal/`
