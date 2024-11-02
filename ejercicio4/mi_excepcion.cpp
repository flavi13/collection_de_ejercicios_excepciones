#include "mi_excepcion.h"

// Implementación del constructor
MiExcepcion::MiExcepcion(const std::string& msg) : mensaje(msg) {}

// Implementación del método what()
const char* MiExcepcion::what() const noexcept {
    return mensaje.c_str();
}
