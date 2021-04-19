# Simple GPIO pin toggle demo

To build, provide a path to the ARM GCC cross-compiler and either a path to the PICO SDK checked out on your local machine or set `PICO_SDK_FETCH_FROM_GIT=true` in the environment:

    export PATH=${PATH}:/path/to/arm-none-eabi-gcc/bin/

    # And:
    export PICO_SDK_PATH=/path/to/pico-sdk/
    # or:
    export PICO_SDK_FETCH_FROM_GIT=true

    # Configure the project and native build system:
    cmake -B build

    # Perform a build:
    cmake --build build -j4

To install:

- Place the QT Py RP2040 into bootloader mode by holding the BOOT button while plugging the USB cable in or tapping the RESET button.  You will see the `RPI-RP2` volume mount
- Copy the `build/blink.uf2` file to the `RPI-RP2` mount

The QT Py RP2040 will reboot and start toggling the D0/A0 pin.

# Pin mapping

This information is from the Circuit Python port for the [QT Py RP2040](https://github.com/adafruit/circuitpython/blob/main/ports/raspberrypi/boards/adafruit_qtpy_rp2040/pins.c):

| QT Py Pin      | RP2040 GPIO |
| -------------- | ----------  |
| A0 / D0        | GPIO 29     |
| A1 / D1        | GPIO 28     |
| A2 / D2        | GPIO 27     |
| A3 / D3        | GPIO 26     |
| SDA 0 / D4     | GPIO 24     |
| SCL 0 / D5     | GPIO 25     |
| TX / D6        | GPIO 20     |
| RX / D7        | GPIO 5      |
| SCK / D8       | GPIO 6      |
| MISO / D9      | GPIO 4      |
| MOSI / D10     | GPIO 3      |

| QT Py Pin      | RP2040 GPIO |
| -------------- | ----------- |
| NeoPixel Data  | GPIO 12     |
| NeoPixel Power | GPIO 11     |
| Button         | GPIO 21     |
| QWIIC/QT SDA 1 | GPIO 22     |
| QWIIC/QT SCL 1 | GPIO 23     |

# Current issues

When the QT Py RP2040 is placed into bootloader mode and the uf2 package build above is copied over, the program runs as expected.  Upon RESETing the board or removing and plugging back in USB, the program does not run.  Working to determine why.

