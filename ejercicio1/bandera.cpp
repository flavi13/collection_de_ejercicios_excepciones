#include "bandera.h"
#include <iostream>

bool errorFlag = false;  // Inicializar la bandera de error

int divide(int a, int b) {
    if (b == 0) {
        errorFlag = true;  // Establecer la bandera de error
        return 0;  // Valor de error
    } else {
        return a / b;
    }
}

void manejarErrores() {
    if (errorFlag) {
        std::cout << "Ocurrió un error: división por cero." << std::endl;
        errorFlag = false;  // Reiniciar la bandera de error después de manejar el error
    }
}
