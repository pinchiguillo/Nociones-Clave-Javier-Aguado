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

#FetchContent_MakeAvailable(fmt)

#target_link_libraries(Nociones_Clave_Javier_Aguado PRIVATE fmt::fmt)