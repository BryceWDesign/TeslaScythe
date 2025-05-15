# TeslaScythe – Block Diagram Overview

This document outlines the top-level energy and data flow between modules in the TeslaScythe system. It illustrates how power is harvested, regulated, stored, and monitored, and how key modules interact.

---

## System-Level Block Diagram

```text
                    +-------------------------+
                    |     RF Antenna Grid     |
                    +-------------------------+
                               |
                               v
              +-------------------------------------+
              | Signal Rectifier + Smart Matching   |
              +-------------------------------------+
                               |
                               v
                     +----------------------+
                     |  Power Combiner Bus  |<-------------+
                     +----------------------+              |
                        ^         ^     ^                  |
                        |         |     |                  |
         +--------------+         |     |                  |
         |                        |     |                  |
+----------------+     +--------------------+     +-------------------+
|   TEG Array    | --> |  Voltage Stabilizer | --> |  Graphene Buffer  |
+----------------+     +--------------------+     +-------------------+
                                                      |
                                                      v
                                            +------------------------+
                                            |   Li-Si Battery Bank   |
                                            +------------------------+
                                                      |
                                                      v
                                        +----------------------------+
                                        |  Power Bus Regulator + MCU |
                                        +----------------------------+
                                                      |
                                                      v
                       +----------------+  +----------------+  +----------------+
                       | Vibration MEMS |  | Radiation Cell |  |  Casimir Cell  |
                       +----------------+  +----------------+  +----------------+
