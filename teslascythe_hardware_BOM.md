# TeslaScythe – Hardware BOM (Bill of Materials)

Every component listed is either commercially available, reverse-engineered from existing aerospace-grade tech, or prototypable using current manufacturing methods. All sourcing choices are made with weight, durability, safety, and radiation tolerance in mind.

---

## 1. Frame & Enclosure

| Component              | Spec/Material                          | Source/Alt                        |
|------------------------|--------------------------------------|---------------------------------|
| Outer Shell            | Aerospace-grade carbon fiber (3mm panels) | Toray T700 / DragonPlate        |
| Internal Skeleton Frame | Non-magnetic titanium alloy (Grade 5) | Ti-6Al-4V, McMaster-Carr / Custom Fab |
| Mounts & Insulation    | Space-grade PTFE/polyimide polymer inserts | DuPont Kapton, 3M              |

---

## 2. EM/RF Harvesting Subsystem

| Component            | Spec                                 | Source/Alt                         |
|----------------------|------------------------------------|----------------------------------|
| Fractal Antenna Sheets | Copper-on-Kapton, reconfigurable PCB arrays | Custom PCB (e.g. JLCPCB, OSH Park) |
| Tesla-spiral planar coils | Flat 6-layer pancake coil, 0.1 mm copper trace | DIY etch or multilayer PCB fab    |
| RF Rectenna Modules   | Wideband Schottky-based rectifiers, matched pairs | Skyworks SMS7630 / Avago HSMS-286 |
| Impedance Tuner ICs   | Auto-match controller for adaptive loads | Analog Devices / Skyworks         |

---

## 3. Thermal Differential Harvesters

| Component            | Spec                                 | Source/Alt                        |
|----------------------|------------------------------------|---------------------------------|
| TEG Plates           | Bismuth Telluride or SiGe flexible tiles (8–12 units) | Hi-Z HZ-20 / Custom cut TEC1-based |
| Thermal Interface Pads | Graphene or ceramic TIM             | Arctic / Fujipoly                |
| Copper Heat Spreaders | Internal fin plates, 2mm thick      | K&S Precision Metals            |

---

## 4. Vibration Harvester Subsystem

| Component           | Spec                                  | Source/Alt                      |
|---------------------|-------------------------------------|--------------------------------|
| Piezo MEMS Array    | 2cm x 2cm patches, wired in parallel (×12) | Mide V21BL / TE Connectivity    |
| Suspension Mounts   | Shock-isolated foam or silicone standoffs | 3M VHB, Parker vibration kits   |

---

## 5. Radiation Energy Conversion Layer

| Component            | Spec                                     | Source/Alt                       |
|----------------------|----------------------------------------|--------------------------------|
| Betavoltaic Thin Film Cells | Layered p-n poly silicon with beta shielding (×6 strips) | City Labs nanoTritium / prototype spec |
| Radiation Filter Layer | Boron-carbide and lead-alternative nano laminate | Custom composite or 3D printed  |

---

## 6. Quantum/Static Charge Harvesting

| Component             | Spec                                   | Source/Alt                      |
|-----------------------|--------------------------------------|--------------------------------|
| Nano-gap Capacitor Array | Vacuum-gap capacitors (Casimir range) × 100s in 1cm² grid | Lab prototyping, MEMS fabrication |
| Charge Multiplier ICs  | Super low-voltage boost converters     | TI bq25504 / Linear LTC3108     |

---

## 7. Power Regulation & Storage

| Component             | Spec                                   | Source/Alt                      |
|-----------------------|--------------------------------------|--------------------------------|
| Graphene Supercapacitors | 2.7V–5.5V, 10F–100F total            | Skeleton Technologies / Maxwell |
| Solid-State Battery Pack | 300Wh pack, Li-Si, thin profile       | QuantumScape / ProLogium (prototypes) |
| Power Bus Controller   | Smart routing, buck/boost + MPPT logic | TI bq40z80 / Vicor PRM modules  |

---

## 8. Monitoring & Safety

| Component             | Spec                                   | Source/Alt                      |
|-----------------------|--------------------------------------|--------------------------------|
| Sensor Suite          | Temp, Vibration, EM field, Charge, Radiation monitors | Bosch, Texas Instruments        |
| Onboard MCU           | STM32H7 or RP2040 (ultra-low power, radiation-screened) | STMicroelectronics / Pi Pico    |
| Safety Disconnect     | Polyfuse + manual hardware switch     | Littelfuse + toggle hardware    |

---

## Notes

- No rare elements or exotic materials required  
- All power conversion circuits use commercially proven ICs and passive components  
- Modular—units can be swapped or repaired without disturbing rest of system  
