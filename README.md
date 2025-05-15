# TeslaScythe – Energy Harvesting & Power Regulation Platform

Welcome to the TeslaScythe project — a cutting-edge ambient energy harvesting system designed for spacecraft and high-reliability applications. This README provides comprehensive build, deployment, and operational details to ensure full clarity and professional usability.

---

📦 **Project Scope**

- **Goal:** Harvest ambient energy sources inside a spacecraft cabin or technical bay  
- **Dimensions:** 3 ft × 2 ft × 2 ft  
- **Output Objective:** Continuous power feed or 200Wh/day storage  
- **Deployment:** Internal-only; no moving parts; radiation-tolerant and safe  

---

🧩 **Core Subsystems**

- **RF Antenna Grid:** Fractal antenna arrays capturing 100 kHz to 5 GHz RF energy  
- **Signal Rectifier + Smart Matching:** Wideband Schottky rectifiers with adaptive impedance tuning  
- **Power Combiner Bus:** Aggregates energy from RF, thermal, vibration, and radiation harvesters  
- **TEG Array:** Thermoelectric generators converting heat gradients to electricity  
- **Voltage Stabilizer:** Ultra-low dropout regulators and MPPT DC-DC controllers for smooth output  
- **Graphene Buffer:** High-rate graphene supercapacitor bank for transient buffering  
- **Li-Si Battery Bank:** Solid-state lithium-silicon batteries for primary energy storage  
- **Vibration MEMS:** Piezoelectric arrays tuned to environmental vibrations (~60–120 Hz)  
- **Radiation Layer:** Betavoltaic cells capturing ionization energy in orbit/high-altitude environments  
- **Casimir Cells:** Quantum vacuum energy harvesters for supplemental charge maintenance  
- **Power Bus Regulator:** Buck/boost, MPPT, and load balancing controlled by MCU with diagnostics  

---

🛠️ **Firmware Build & Deployment**

- **Build Environment:**  
  - Compatible with GCC toolchains targeting AVR, STM32, MSP430 MCUs  
  - Source files in `/firmware/src/` with headers in `/firmware/include/`  
- **Configuration:**  
  - `config.h` defines all pin assignments, fault thresholds, UART baud rates, and enabled features  
  - Easily customizable parameters for ADC inputs, telemetry toggling, and protection settings  
- **Flashing:**  
  - Use ISP, JTAG, or bootloader method specific to your MCU  
  - Examples:  
    - AVR: `avrdude -c usbtiny -p m328p -U flash:w:main.hex`  
    - STM32: ST-Link or DFU tools  
    - MSP430: mspdebug or Code Composer Studio  
- **Telemetry:**  
  - CSV format output via UART, enabling easy serial monitoring and data parsing  
  - Sample output:  
    ```
    VBAT,VOUT,IBAT,TEMP_BATT,TEMP_REG  
    3.74,2.90,0.13,36.2,40.7  
    ```  
- **Safety Features:**  
  - Overvoltage, undervoltage detection  
  - Temperature monitoring of battery and regulators  
  - Automatic shutdown and restart upon fault recovery  
  - Controlled via firmware flags like `ENABLE_FAULT_PROTECTION`  

---

📡 **Telemetry & Monitoring**

- Real-time diagnostics implemented in MCU firmware  
- Data includes battery voltage, current, regulator voltages, temperatures, and fault status  
- Firmware supports OTA updates through a secure bootloader interface  

---

🔧 **Hardware Documentation**

- Detailed schematics, pinouts, and component lists located in `/circuits/`  
- Modular design with MIL-Spec connectors and star grounding to minimize interference  
- Designed for radiation tolerance and extreme temperature ranges (-50°C to +120°C)  

---

⚠️ **Notes**

- This system is a prototype for research and development; all components chosen for spaceflight viability or equivalent lab-grade testing  
- PCB layouts and manufacturing files are to be added and updated in `/boards/`  
- Simulation files and proof-of-concept demos will be included in future releases  

---

Thank you for exploring TeslaScythe. I welcome collaboration and feedback to push spaceflight energy harvesting technology forward!

---

*Last updated: 2025-05-15*

