cmake_minimum_required(VERSION 3.28)
set(CMAKE_CXX_STANDARD 20)

project(LMC
        VERSION 0.1.0
        DESCRIPTION "LaunchMC CLI Tool for managing Minecraft instances."
        LANGUAGES CXX)

file(GLOB_RECURSE SOURCES "cli/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE cli)