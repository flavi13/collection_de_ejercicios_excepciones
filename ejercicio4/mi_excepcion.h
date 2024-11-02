#ifndef MI_EXCEPCION_H
#define MI_EXCEPCION_H

#include <exception>
#include <string>

// Definición de la clase de excepción personalizada
class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg);
    const char* what() const noexcept override;
};

#endif // MI_EXCEPCION_H
