//
// Created by Flavia Rivero on 2/11/24.
//


#include "error_excepcion.h"
#include <stdexcept>


// Función que lanza una excepción si hay un error de división por cero
int divideException(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("División por cero"); // lanza una excepción
    } else {
        return a / b;
    }
}
