//
// Created by pinchiguillo on 12/10/2024.
//

#include "main.h"
#include <iostream>
#include <fmt/core.h>
#include "funciones.h"

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    std::cout << "¡Hola CLion!" << std::endl;

    fmt::print("¡Hola CLion!\n");

    fmt::print("Suma: {}\n", suma(5, 3));

    fmt::print("Area del circulo: {}\n", AREA_CIRCULO(5));

    return 0;
}