cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave_Javier_Aguado)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nociones_Clave_Javier_Aguado
    "Proyecto 1/main.cpp"
        "Proyecto 1/main.h"
        "Proyecto 1/Persona.cpp"
        "Proyecto 1/Persona.h"
        "Proyecto 1/Estudiante.cpp"
        "Proyecto 1/Estudiante.h"

)

add_executable(Nociones_Clave_Javier_Aguado2
    "Proyecto 2/main.cpp"
    "Proyecto 2/main.h"
        "Proyecto 2/funciones.h"
        "Proyecto 2/funciones.cpp"
        "Proyecto 2/nuevo.cpp"
)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(Nociones_Clave_Javier_Aguado2 PRIVATE fmt::fmt)

add_library(matematicas STATIC "Proyecto 2/matematicas.cpp")
add_library(matematicas_s SHARED "Proyecto 2/matematicas.cpp")