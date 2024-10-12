//
// Created by pinchiguillo on 10/10/2024.
//

#include "main.h"
#include <fmt/core.h>
#include <iostream>
#include "funciones.h"

int g = 20;

#define PI 3.14159

#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    std::cout << "Hola Mundo" << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    std::cout << "Suma: " << suma(5, g) << std::endl;
    std::cout << "Resta: " << resta(5, g) << std::endl;

    std::cout << "Área del círculo: " << AREA_CIRCULO(5) << std::endl;
    std::cout << "PI: " << PI << std::endl;

    fmt::print("Using fmt library\n");
    fmt::print("La suma de 5 y 3 es: {}\n", suma(5, 3));
    fmt::print("La resta de 5 y 3 es: {}\n", resta(5, 3));

    return 0;
}