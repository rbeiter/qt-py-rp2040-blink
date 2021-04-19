cmake_minimum_required(VERSION 3.12)

set(CMAKE_BUILD_TYPE Debug)

set(PICO_BOARD adafruit_qtpy_rp2040)

include(pico_sdk_import.cmake)
project(blink)
pico_sdk_init()

set(MAIN_EXECUTABLE blink)
add_executable(${MAIN_EXECUTABLE} main.c)
pico_add_extra_outputs(${MAIN_EXECUTABLE})
target_link_libraries(${MAIN_EXECUTABLE} pico_stdlib pico_stdio)
