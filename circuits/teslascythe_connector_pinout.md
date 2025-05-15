# TeslaScythe – Connector Pinout Reference

This document details the pin assignments for all primary connectors used throughout the TeslaScythe hardware subsystems. Clear and consistent pinouts enable reliable assembly, maintenance, and troubleshooting.

---

## Main Power Connector (J1)

| Pin | Signal             | Description                              |
|------|--------------------|------------------------------------------|
| 1    | VBUS               | Main power input (regulated 5 V DC)      |
| 2    | GND                | Ground reference                         |
| 3    | VBAT               | Battery voltage output                    |
| 4    | TEMP_BATT          | Battery temperature sensor input         |
| 5    | FAULT              | Fault signal (active low)                 |
| 6    | RESET              | System reset line                         |

---

## Harvester Input Connector (J2)

| Pin | Signal             | Description                              |
|------|--------------------|------------------------------------------|
| 1    | RF_IN              | RF Antenna Grid input                     |
| 2    | TEG_POS            | Positive terminal of TEG Array            |
| 3    | TEG_NEG            | Negative terminal of TEG Array            |
| 4    | VIB_IN             | Vibration MEMS input                      |
| 5    | RAD_IN             | Radiation Layer input                     |
| 6    | CAS_IN             | Casimir Cell input                        |
| 7    | GND                | Ground reference                         |

---

## MCU Interface Connector (J3)

| Pin | Signal             | Description                              |
|------|--------------------|------------------------------------------|
| 1    | UART_TX            | MCU UART transmit                        |
| 2    | UART_RX            | MCU UART receive                         |
| 3    | I2C_SCL            | I2C clock line                          |
| 4    | I2C_SDA            | I2C data line                           |
| 5    | SPI_MISO           | SPI Master In Slave Out                  |
| 6    | SPI_MOSI           | SPI Master Out Slave In                  |
| 7    | SPI_SCK            | SPI Clock                               |
| 8    | SPI_CS             | SPI Chip Select                         |
| 9    | GPIO1              | General purpose I/O                     |
| 10   | GPIO2              | General purpose I/O                     |
| 11   | RESET              | MCU reset                               |
| 12   | VCC_3V3            | 3.3 V supply                            |
| 13   | GND                | Ground reference                        |

---

## Sensor Connector (J4)

| Pin | Signal             | Description                              |
|------|--------------------|------------------------------------------|
| 1    | TEMP_REG           | Voltage regulator temperature sensor    |
| 2    | VOLT_SENSE         | Voltage sense line                       |
| 3    | CURRENT_SENSE      | Current sense line                       |
| 4    | FAULT_IN           | External fault input                     |
| 5    | GND                | Ground reference                         |

---

## Notes

- Connector housings are Molex Micro-Fit 3.0 or equivalent.
- All ground pins are common and star-grounded at the main board.
- Shielded cables are used for sensitive signals like RF_IN.
- Connector keying and polarity are strictly enforced to prevent misconnection.

---

## Version

- Document Version: 1.0  
- Last Updated: 2025-05-15
