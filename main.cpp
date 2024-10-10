//
// Created by pinchiguillo on 10/10/2024.
//

#include "main.h"

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

    return 0;
}