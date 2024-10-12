#include "Estudiante.h"
#include <iostream>

void Estudiante::setGrado(const std::string &grado) {
    this->grado = grado;
}

std::string Estudiante::getGrado() {
    return grado;
}

void Estudiante::mostrarDetalles() {
    std::cout << "Nombre: " << getNombre() << std::endl;
    std::cout << "Edad: " << getEdad() << std::endl;
    std::cout << "Genero: " << getGenero() << std::endl;
    std::cout << "Grado: " << grado << std::endl;
}