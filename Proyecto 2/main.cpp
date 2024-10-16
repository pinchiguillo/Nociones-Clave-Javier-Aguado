//
// Created by pinchiguillo on 12/10/2024.
//

#include "main.h"
#include <iostream>
#include <fmt/core.h>
#include "funciones.h"

int main() {
    std::cout << "¡Hola CLion!" << std::endl;

    fmt::print("¡Hola CLion!\n");

    fmt::print("Suma: {}\n", suma(5, 3));

    return 0;
}