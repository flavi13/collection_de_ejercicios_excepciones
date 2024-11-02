//
// Created by Flavia Rivero on 2/11/24.
//

#include "main3.h"
#include <iostream>
#include "error_excepcion.h"


int main() {
    try {
        int resultException = divideException(5, 0);
        std::cout << "El resultado de la división es: " << resultException << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cout << "Excepción: " << e.what() << std::endl;
    }

    return 0;
}
