cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave_Javier_Aguado)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nociones_Clave_Javier_Aguado
    main.cpp
    main.h
        estudiante.cpp
        persona.cpp)
