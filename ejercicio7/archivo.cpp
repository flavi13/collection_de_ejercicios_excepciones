//
// Created by Flavia Rivero on 2/11/24.
//

#include "archivo.h"

void escribeEnArchivo(std::ofstream& file) {
    if (!file.is_open()) {
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    file << "Hola, mundo!";
}

