cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave_Javier_Aguado)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nociones_Clave_Javier_Aguado
    main.cpp
    main.h
        estudiante.cpp
        persona.cpp)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

target_link_libraries(Nociones_Clave_Javier_Aguado PRIVATE fmt::fmt)