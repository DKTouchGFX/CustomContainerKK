# Custom Containers demo
Projekt: CustomContainerKK - Eksempel hvor den gennemgående skærm baggrund, i et menu hierarki, er implementeret som en Custom container. 
Projektet er oprettet i TouchGFX version 4.24.2, og testet med STM32CubeIDE Version: 1.16.0. Projektet er oprettet, i TouchGFX Designer, til et STM32H7B3I-EVAL board. 
Men kan køres i simulatoren under TouchGFX Designer.

# STM32H7B3I_EVAL TBS
The default IDE is set to STM32CubeIDE, to change IDE open the STM32H7B3I_EVAL.ioc with STM32CubeMX and select from the supported IDEs (EWARM, MDK-ARM, and STM32CubeIDE). Supports flashing of the STM32H7B3I_EVAL board directly from TouchGFX Designer using GCC and STM32CubeProgrammer.Flashing the board requires STM32CubeProgrammer which can be downloaded from the ST webpage.

This TBS is configured for 480 x 800 pixels 16bpp screen resolution.  

Performance testing can be done using the GPIO pins designated with the following signals: VSYNC_FREQ  - Pin PA4, RENDER_TIME - Pin PG13, FRAME_RATE  - Pin PB15, MCU_ACTIVE  - Pin PG12.
