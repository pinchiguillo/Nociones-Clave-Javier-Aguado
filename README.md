# Nociones Clave - Javier Aguado

[Link Repositorio](https://github.com/pinchiguillo/Nociones-Clave-Javier-Aguado.git)

# Enunciado de Ejercicios

## Principales características del lenguaje C++

1. **Crea un programa simple que imprima "Hola Mundo" en la consola.**
2. **Haz una función que tome dos números enteros como parámetros y devuelva su suma.**
3. **Utiliza una variable global y muestra su valor dentro y fuera de una función.**

## Programación orientada a objetos

1. **Crea una clase "Persona" que tenga atributos para el nombre, la edad y el género. Haz funciones para establecer y obtener estos valores.**
2. **Extiende la clase "Persona" con una clase "Estudiante" que tenga un atributo adicional para el grado que está cursando.**
3. **Crea un método en la clase "Estudiante" que muestre todos los detalles del estudiante.**

## Entorno de desarrollo y archivo `CMakeLists.txt`

1. **Crea un nuevo proyecto en CLion e imprime "¡Hola CLion!" en la consola.**
2. **Configura el archivo `CMakeLists.txt` para incluir una biblioteca externa.**
3. **Crea un nuevo archivo de código en el proyecto y añádelo al archivo `CMakeLists.txt`.**

## Organización de un programa C++

1. **Divide un programa en varias funciones y colócalas en diferentes archivos `.cpp`. Utiliza el archivo de encabezado `.h` para declarar las funciones.**
2. **Crea un archivo de biblioteca estática `.a` con algunas funciones y utilízalo en tu programa.**
3. **Crea un archivo de biblioteca dinámica `.so` (o `.dll` en Windows) con algunas funciones y utilízalo en tu programa.**

## Preprocesador

1. **Define una constante con preprocesador y utilízala en tu programa.**
2. **Crea una macro de preprocesador que calcule el área de un círculo.**
3. **Utiliza la directiva `#include` para incluir un archivo de encabezado en tu programa.**

## Elección de un compilador

1. **Configura CLion para que use el compilador GCC.**
2. **Configura CLion para que use el compilador MSVC.**
3. **Compara el rendimiento y los errores al compilar tu programa con diferentes compiladores.**

## Enlazador

1. **Crea un programa que utilice funciones de una biblioteca estándar de C++, como `<vector>` o `<iostream>`, y asegúrate de que el enlazador puede encontrarla.**
2. **Crea un programa que utilice funciones de una biblioteca externa, configura tu proyecto para que el enlazador pueda encontrarla.**
3. **Prueba a cambiar la orden de enlazado de las bibliotecas y observa si el comportamiento de tu programa cambia.**

---

## Relación paso a paso:

### Principales características del lenguaje C++

1. **Hola Mundo:** Crea un nuevo proyecto en CLion. Dentro del archivo `main.cpp`, escribe el siguiente código:

```cpp
#include <iostream>

int main() {
    std::cout << "Hola Mundo" << std::endl;
    return 0;
}
```

# Guía de desarrollo en C++ con CLion

## 1. Compilar y ejecutar el código en CLion
Después de escribir el código, presiona el botón de ejecución (la flecha verde) en CLion para compilar y ejecutar el programa.

## 2. Función de suma

Agrega la siguiente función al archivo `main.cpp`:

```cpp
int suma(int a, int b) {
    return a + b;
}
```

Dentro de tu función principal (`int main()`), puedes llamar a la función `suma` de la siguiente manera:

```cpp
std::cout << "La suma es: " << suma(5, 3) << std::endl;
```

Este código debería imprimir:

```
La suma es: 8
```

## 3. Uso de variables globales

Agrega la siguiente línea al comienzo de tu archivo `main.cpp` (antes de la función `int main()`):

```cpp
int g = 20;
```

Puedes utilizar `g` dentro y fuera de las funciones. Agrega las siguientes líneas a tu función `int main()`:

```cpp
std::cout << "Valor de g antes de la función suma: " << g << std::endl;
std::cout << "La suma es: " << suma(5, g) << std::endl;
std::cout << "Valor de g después de la función suma: " << g << std::endl;
```

## 4. Programación Orientada a Objetos

### Clase Persona

Crea un archivo llamado `Persona.h` y agrega el siguiente código:

```cpp
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
```

Crea también el archivo `Persona.cpp` para implementar las funciones declaradas:

```cpp
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
```

### Clase Estudiante

Crea el archivo `Estudiante.h` y extiende la clase `Persona`:

```cpp
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
```

Implementa la clase `Estudiante` en `Estudiante.cpp`:

```cpp
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
```

## 5. CMake y Entorno de Desarrollo

### Configuración de CMake

En el archivo `CMakeLists.txt`, puedes agregar una biblioteca como `fmt` de la siguiente manera:

```cmake
include(FetchContent)
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

target_link_libraries(tu_proyecto PRIVATE fmt::fmt)
```

## 6. Organización de un programa C++

Crea un archivo `funciones.cpp` con las siguientes funciones:

```cpp
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}
```

Declara estas funciones en `funciones.h` para usarlas en `main.cpp`.

## 7. Preprocesador

### Constante

Define una constante en tu archivo `main.cpp`:

```cpp
#define PI 3.14159
```

### Macro

Crea una macro para calcular el área de un círculo:

```cpp
#define AREA_CIRCULO(r) (PI * (r) * (r))
```

## 8. Elección de Compilador

Puedes configurar CLion para usar GCC o MSVC en las opciones de `Toolchains` en la configuración de CLion.

## 9. Enlazador

Para enlazar una biblioteca externa como `fmt`, asegúrate de incluir las líneas necesarias en tu archivo `CMakeLists.txt`. Usa `target_link_libraries` para especificar el orden de enlace.
