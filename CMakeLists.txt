cmake_minimum_required(VERSION 3.21)
project(AutoBotAI VERSION 1.0.0)

# Build with the Geode CLI and the matching Geode SDK/toolchain.
add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Geode's generated CMake environment supplies the SDK and packaging helpers.
setup_geode_mod(${PROJECT_NAME})
