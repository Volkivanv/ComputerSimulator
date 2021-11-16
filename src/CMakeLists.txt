cmake_minimum_required(VERSION 3.20)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(ComputerSimulator main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp ${MY_INCLUDE_DIR}/cpu.h
        ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h)
TARGET_INCLUDE_DIRECTORIES(ComputerSimulator PUBLIC ${MY_INCLUDE_DIR})