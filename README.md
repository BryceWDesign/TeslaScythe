# TeslaScythe Project README

TeslaScythe is a compact, modular ambient energy harvesting system designed for deployment inside spacecraft environments. It captures and stores residual energy from multiple background sources—including EM/RF, thermal gradients, vibration, ionizing radiation, and quantum vacuum fluctuations—within a tightly constrained 3×2×2 ft internal volume. The system is intended to provide supplementary or backup power to astronaut suits or spacecraft subsystems in long-duration missions.

---

## 📦 Project Scope

**Goal**: Harvest ambient energy sources inside a spacecraft cabin or technical bay  
**Dimensions**: 3 ft × 2 ft × 2 ft  
**Output Objective**: Continuous power feed or 200Wh/day storage  
**Deployment**: Internal-only; no moving parts; radiation-tolerant and safe

---

## 🧩 Core Subsystems

### 1. EM & RF Energy Collector  
- Reconfigurable fractal antenna arrays  
- Tesla-style planar coils  
- Smart rectification and impedance-matching circuit  

### 2. Thermal Differential Harvesters  
- Solid-state thermoelectric generators (TEGs)  
- Mounted between internal heat zones and walls  
- Passive spacecraft thermal redistribution benefit  

### 3. Ionizing Radiation Collector  
- Thin-film betavoltaic-style energy layers  
- Safe, shielded polycrystalline semiconductors  

### 4. Vibration Energy Harvester  
- MEMS-scale piezo arrays  
- Mounted on internal vibration frame  
- Captures movement from crew or onboard machinery  

### 5. Quantum/Casimir Vacuum Energy  
- Nano-gap capacitor arrays  
- Passive trickle energy harvesting from near-field quantum fluctuations  

---

## 🔋 Storage & Power Conditioning

- Main Storage: Solid-state lithium-silicon battery array (~300Wh)  
- Buffer Layer: Graphene-based ultracapacitors  
- Regulation: Smart buck/boost converters, MPPT modules, and fault protection  

---

## 🔧 Engineering Guidelines

- No external moving parts  
- All harvesting methods operate in parallel with a central bus  
- Low and continuous energy priority over burst harvesting  
- Radiation- and impact-resistant enclosure  
- Designed to meet SpaceX-grade tolerances  

---

## 📐 Text-Based System Diagram

[ RF Antenna Grid ]  
  |  
[ Signal Rectifier + Smart Matching ]  
  |  
  |--> [ Power Combiner Bus ]  
     |  
[ TEG Array ] -------->|  
[ Vibration MEMS ] --->|--> [ Voltage Stabilizer ] --> [ Graphene Buffer ] --> [ Li-Si Battery Bank ]  
[ Radiation Layer ] -->|  
[ Casimir Cells ] ---->|  

---

## 🛠 Build Philosophy

- Modular, swappable components  
- No rare-earth or exotic elements  
- Commercial off-the-shelf (COTS) components wherever possible  
- Full fabrication achievable with current-gen additive manufacturing or PCB shops  
- High-reliability, long-duration, low-maintenance operation  

---

## 📎 License

This project is open-sourced under the MIT License. Contributions are welcome.
