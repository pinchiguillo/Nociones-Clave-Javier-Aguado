# Nociones-Clave-Javier-Aguado

[Link Repositorio](https://github.com/pinchiguillo/Nociones-Clave-Javier-Aguado.git)

Enunciado de Ejercicios
Principales características del lenguaje C++

Crea un programa simple que imprima "Hola Mundo" en la consola.
Haz una función que tome dos números enteros como parámetros y devuelva su suma.
Utiliza una variable global y muestra su valor dentro y fuera de una función.
Programación orientada a objetos

Crea una clase "Persona" que tenga atributos para el nombre, la edad y el género. Haz funciones para establecer y obtener estos valores.
Extiende la clase "Persona" con una clase "Estudiante" que tenga un atributo adicional para el grado que está cursando.
Crea un método en la clase "Estudiante" que muestre todos los detalles del estudiante.
Entorno de desarrollo y archivo CMakeLists.txt

Crea un nuevo proyecto en CLion e imprime "¡Hola CLion!" en la consola.
Configura el archivo CMakeLists.txt para incluir una biblioteca externa.
Crea un nuevo archivo de código en el proyecto y añádelo al archivo CMakeLists.txt.
Organización de un programa C++

Divide un programa en varias funciones y colócalas en diferentes archivos .cpp. Utiliza el archivo de encabezado .h para declarar las funciones.
Crea un archivo de biblioteca estática .a con algunas funciones y utilízalo en tu programa.
Crea un archivo de biblioteca dinámica .so (o .dll en Windows) con algunas funciones y utilízalo en tu programa.
Preprocesador

Define una constante con preprocesador y utilízala en tu programa.
Crea una macro de preprocesador que calcule el área de un círculo.
Utiliza la directiva #include para incluir un archivo de encabezado en tu programa.
Elección de un compilador

Configura CLion para que use el compilador GCC.
Configura CLion para que use el compilador MSVC.
Compara el rendimiento y los errores al compilar tu programa con diferentes compiladores.
Enlazador

Crea un programa que utilice funciones de una biblioteca estándar de C++, como <vector> o <iostream>, y asegúrate de que el enlazador puede encontrarla.
Crea un programa que utilice funciones de una biblioteca externa, configura tu proyecto para que el enlazador pueda encontrarla.
Prueba a cambiar la orden de enlazado de las bibliotecas y observa si el comportamiento de tu programa cambia.
Relación paso a paso:
Principales características del lenguaje C++

Hola Mundo: Crea un nuevo proyecto en CLion. Dentro del archivo main.cpp, escribe el siguiente código:

#include <iostream>

int main() {
    std::cout << "Hola Mundo" << std::endl;
    return 0;
}
Después de escribir el código, presiona el botón de ejecución (la flecha verde) en CLion para compilar y ejecutar el programa.

Función de suma: Agrega la siguiente función al archivo main.cpp:

int suma(int a, int b) {
    return a + b;
}
Dentro de tu función principal (int main()), puedes llamar a la función suma de la siguiente manera:


std::cout << "La suma es: " << suma(5, 3) << std::endl;
Este código debería imprimir "La suma es: 8".

Variable global: Agrega la siguiente línea al comienzo de tu archivo main.cpp (antes de la función int main()):

int g = 20;
Ahora, puedes utilizar g dentro y fuera de las funciones. Por ejemplo, agrega las siguientes líneas a tu función int main():


std::cout << "Valor de g antes de la función suma: " << g << std::endl;
std::cout << "La suma es: " << suma(5, g) << std::endl;
std::cout << "Valor de g después de la función suma: " << g << std::endl;
Programación orientada a objetos

Clase Persona: Crea un nuevo archivo en tu proyecto llamado "Persona.h". Dentro de este archivo, escribe el siguiente código:

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
    std::string nombre;
    int edad;
    std::string genero;

public:
    void setNombre(const std::string &nombre);
    std::string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setGenero(const std::string &genero);
    std::string getGenero();
};

#endif
También necesitarás un archivo "Persona.cpp" donde implementarás las funciones que has declarado en "Persona.h":

#include "Persona.h"

void Persona::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

std::string Persona::getNombre() {
    return nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setGenero(const std::string &genero) {
    this->genero = genero;
}

std::string Persona::getGenero() {
    return genero;
}
Ahora puedes crear objetos de la clase Persona en tu función int main().

Clase Estudiante: Al igual que antes, crea un nuevo archivo "Estudiante.h" y extiende la clase Persona:

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "Persona.h"

class Estudiante : public Persona {
    std::string grado;

public:
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrarDetalles();
};

#endif
La implementación de la clase Estudiante irá en "Estudiante.cpp":

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
Ahora puedes crear objetos de la clase Estudiante en tu función int main() y llamar a la función mostrarDetalles().

Entorno de desarrollo y archivo CMakeLists.txt

Nuevo proyecto en CLion: Abre CLion y crea un nuevo proyecto. CLion creará automáticamente un archivo main.cpp con un programa de "Hola Mundo" y un archivo CMakeLists.txt. Puedes ejecutar este programa para verificar que todo está funcionando correctamente.
Configurar CMakeLists.txt: Supongamos que quieres agregar la biblioteca fmt a tu proyecto. Agregarías las siguientes líneas a tu archivo CMakeLists.txt:

include(FetchContent)
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
Asegúrate de agregar fmt::fmt a la línea target_link_libraries de tu proyecto. Luego puedes usar #include <fmt/core.h> y fmt::print en tu código.

Nuevo archivo de código: Agrega un nuevo archivo de código a tu proyecto (por ejemplo, "nuevo.cpp"). Deberías agregar nuevo.cpp a la línea add_executable en tu archivo CMakeLists.txt. Luego puedes poner código en "nuevo.cpp" y será parte de tu programa cuando lo compiles y ejecutes.
Organización de un programa C++

Varias funciones: Crea un nuevo archivo "funciones.cpp" en tu proyecto. En ese archivo, escribe una o más funciones, como:

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}
También necesitarás un archivo de encabezado "funciones.h" para declarar estas funciones. Luego puedes usar estas funciones en tu función int main().

Biblioteca estática: Primero, crea las funciones que desees incluir en la biblioteca. Por ejemplo, puedes tener un archivo "matematicas.cpp" que contenga funciones de suma, resta, multiplicación y división. Luego, en tu archivo CMakeLists.txt, agrega lo siguiente para crear una biblioteca estática:

add_library(matematicas STATIC matematicas.cpp)
Ahora puedes enlazar esta biblioteca a tu programa principal con target_link_libraries en tu archivo CMakeLists.txt.

Biblioteca dinámica: La creación de una biblioteca dinámica es similar a la creación de una biblioteca estática. En lugar de STATIC, usa SHARED:

add_library(matematicas SHARED matematicas.cpp)
Ahora puedes enlazar esta biblioteca a tu programa principal con target_link_libraries en tu archivo CMakeLists.txt.

Preprocesador

Constante con preprocesador: Al principio de tu archivo main.cpp, agrega la siguiente línea:

#define PI 3.14159
Ahora puedes usar PI en tu código como si fuera una variable constante.

Macro de preprocesador: Al principio de tu archivo main.cpp, agrega la siguiente línea:

#define AREA_CIRCULO(r) (PI * (r) * (r))
Ahora puedes usar AREA_CIRCULO(r) en tu código para calcular el área de un círculo.

Directiva #include: En la parte superior de tu archivo main.cpp, agrega la siguiente línea para incluir la biblioteca de I/O de C++:

#include <iostream>
Ahora puedes usar std::cout, std::cin, std::endl, etc. en tu código.

Elección de un compilador

Configurar CLion para usar GCC: Ve a "File > Settings > Build, Execution, Deployment > Toolchains". Haz clic en el signo más para agregar una nueva cadena de herramientas. Configura el compilador C y C++ para usar GCC. Haz clic en "OK" para guardar los cambios.
Configurar CLion para usar MSVC: El proceso es similar al anterior, pero debes configurar el compilador C y C++ para usar MSVC en lugar de GCC. Ten en cuenta que MSVC solo está disponible en Windows.
Comparar compiladores: Haz una copia de tu proyecto y configúralo para usar un compilador diferente. Observa si hay diferencias en el rendimiento o los errores al compilar y ejecutar tu programa.
Enlazador

Biblioteca estándar de C++: Tu programa ya está utilizando la biblioteca estándar de C++ si estás utilizando std::cout, std::cin, std::endl, etc. El enlazador puede encontrar estas funciones porque las bibliotecas estándar de C++ se instalan con el compilador.
Biblioteca externa: Supongamos que quieres usar la biblioteca fmt en tu proyecto. Agregarías las líneas correspondientes a tu archivo CMakeLists.txt, como se describió en el ejercicio 3b. El enlazador puede encontrar la biblioteca fmt porque has configurado tu proyecto para descargarla y compilarla.
Orden de enlace: En tu archivo CMakeLists.txt, la línea target_link_libraries determina el orden en que las bibliotecas se enlazan a tu programa. Si tienes problemas de enlace, puedes intentar cambiar el orden de las bibliotecas.
