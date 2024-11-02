#include "error_valor.h"
#include <iostream>

// Función que devuelve el resultado de la división o -1 si hay un error de división por cero
double dividir(double a, double b, bool &error) {
    if (b == 0) {
        error = true;
        return -1;  // Valor de error
    }
    error = false;
    return a / b;
}

