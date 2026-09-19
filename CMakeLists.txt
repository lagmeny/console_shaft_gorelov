cmake_minimum_required(VERSION 3.10)
project(console_shaft_gorelov)
set(CMAKE_C_STANDARD 99)
add_executable(
        ${PROJECT_NAME}
        Main.c
        game.c
        game.h
)