//
// Created by Flavia Rivero on 2/11/24.
//

#include "main2.h"
#include <iostream>
#include "error_valor.h"

int main() {
    bool error;
    double resultado = dividir(10, 0, error);

    if (error) {
        std::cout << "Error: División por cero." << std::endl;
    } else {
        std::cout << "El resultado de la división es: " << resultado << std::endl;
    }

    return 0;
}
