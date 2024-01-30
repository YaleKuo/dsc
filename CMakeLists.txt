cmake_minimum_required(VERSION 3.27)
project(dsc C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(dsc
        main.c
        main.h
        SqListDynamic.c
        SqListDynamic.h
        SqListStatic.c
        SqListStatic.h)
