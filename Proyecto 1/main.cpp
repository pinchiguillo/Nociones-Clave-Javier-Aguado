//
// Created by pinchiguillo on 10/10/2024.
//

#include "main.h"
#include <iostream>
#include "Estudiante.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Juan");
    estudiante1.setEdad(20);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Ingeniería en Sistemas");

    estudiante1.mostrarDetalles();

    return 0;
}