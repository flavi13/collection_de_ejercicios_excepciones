//
// Created by Flavia Rivero on 24/10/24.
//

#include "main.h"
#include "ejercicio1/bandera.h"
#include <iostream>
#include "ejercicio3/funciones.h"
#include "ejercicio4/mi_excepcion.h"
#include "ejercicio5/excepcion.h"
#include "ejercicio6/excepcion_no_capturada.h"
#include "ejercicio7/archivo.h"
#include <fstream>

void lanzaExcepcionPersonalizada() {
    throw MiExcepcion("Ocurrió un error en la función lanzaExcepcion");
}


int main() {
    int result = divide(5, 0);

    // Verificar y manejar la bandera de error
    manejarErrores();

    // Continuar con el programa
    std::cout << "El resultado de la división es: " << result << std::endl;

    //ejercicio 3
    try {
        func1();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada en main: " << e.what() << std::endl;
    }
//ejercicio 4
    try {
        lanzaExcepcionPersonalizada();
    } catch (const MiExcepcion& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }
//ejercicio 5
    try {
        try {
            lanzaExcepcion5();
        }
        catch (const std::runtime_error& e) {
            std::cout << "Excepción capturada y manejada. Reactivando..." << std::endl;
            throw; // Relanza la excepción
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción reactivada capturada: " << e.what() << std::endl;
    }

//ejercicio 6
    lanzaExcepcion6();

    std::ofstream file("archivo.txt");
//ejercicio 7
    try {
        file.close(); // Cierro el archivo para simular un error
        escribeEnArchivo(file);
    } catch (const std::runtime_error& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }

    // archivo está cerrado
    if (file.is_open()) {
        file.close();
    }

    return 0;
}


