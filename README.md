# OBC Evaluation Board

## Installations
- [STM32CubeCLT](https://www.st.com/en/development-tools/stm32cubeclt.html) -- GNU C/C++ for Arm® toolchain executables, GDB debugger, STM32CubeProgrammer utility, etc.
- [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html) -- MCU configuration, HAL generation
- [Visual Studio Code](https://code.visualstudio.com/) -- Developer environment
  - C/C++ Extension Pack (Microsoft)
  - CMake (twxs)
  - CMake Tools (Microsoft)
  - Cortex-Debug (marus25)
  - Serial Monitor (Microsoft)

## Setup
### Hardawre
The following pin connections need to be made between an ST-Link and the pins of the OBC, from Top to Bottom ("Top" is shown by an arrow on the PCB).
1. SWO - *Do Not Connect*
2. NRST
3. SWDIO
4. GNDA
5. SWCLK
6. 3V3

### Software
1. Open the CMake Extension in VS Code from the left side panel, and under find Project Status -> Configure -> Select Configure Preset (pencil icon). Select `OBC-PROTO`.
2. If no errors occured during the configure process find Project Status -> Build (arrow pointing into a bowl of balls icon)
3. If no errors occured during the build process, go to the "Run and Debug" page from the left side panel (Doritos icon with a bug) and ensure that Cortex Debug is selected at the top alongside the green Doritos icon. Click the green Doritos to upload the code and start debugging.
4. Click the vertical breadstick + Doritos icon to enable the code to run.