
#include <iostream>
#include "Promedio.h"
void promedio() {
const int num_ejercicios  = 8;
float notas [num_ejercicios];
float sum = 0.0;

// Solicitar las calificaciones de los ejercicios
for (int i = 0; i < num_ejercicios; ++i) {
    std::cout << "Ingrese la calificación del ejercicio " << (i + 1) << " (0 a 10): ";
    std::cin >> notas[i];

    // Validación de entrada
    while (notas[i] < 0 || notas[i] > 10) {
        std::cout << "Calificación inválida. Ingrese un valor entre 0 y 10: ";
        std::cin >> notas[i];
    }

    sum += notas[i];
}

// Calcular y mostrar el promedio
float promedio = sum /num_ejercicios;
std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
}
