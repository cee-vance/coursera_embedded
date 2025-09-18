Coursera Embedded Systems Projects
This repository contains a collection of embedded systems projects developed as part of the Coursera Embedded Systems course offered by the University of Colorado Boulder. The course focuses on low-level programming, hardware interfacing, and real-time systems using the Texas Instruments MSP432 (M2) LaunchPad development board.

🛠️ Platform
Development Board: TI MSP432P401R LaunchPad (M2)

Toolchain: ARM GCC, TI Code Composer Studio (CCS), or GNU Make

Language: C

Target Architecture: ARM Cortex-M4F

📁 Project Structure
Each folder in the repository corresponds to a specific lab or assignment from the course:

msp432: Core driver code and board initialization

project1, project2, etc.: Individual projects demonstrating concepts like GPIO, timers, interrupts, UART, ADC, and PWM

common: Shared utilities and headers used across multiple projects

🚀 Getting Started
To build and flash the code onto your MSP432 board:

Clone the repository:

bash
git clone https://github.com/cee-vance/coursera_embedded.git
cd coursera_embedded
Install dependencies:

TI Code Composer Studio (recommended)

Or use ARM GCC and Make for CLI-based development

Build and flash:

Open the project in CCS and click "Build"

Connect your MSP432 board via USB and click "Debug" to flash

📚 Course Concepts Covered
Memory-mapped I/O and register-level programming

Interrupt-driven design

Finite State Machines (FSMs)

Real-time constraints and scheduling

Serial communication (UART)

Analog input (ADC) and PWM output

Debugging and profiling embedded code

🧠 Learning Outcomes
By exploring this repository, you’ll gain hands-on experience with:

Bare-metal embedded programming in C

Interfacing with sensors and actuators

Designing responsive and efficient embedded applications

Understanding the hardware-software boundary

📄 License
This project is released under the MIT License. See LICENSE for details.
