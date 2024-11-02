#ifndef BANDERA_H
#define BANDERA_H

extern bool errorFlag;  // Bandera de error

// Función que realiza la división y establece la bandera de error en caso de error
int divide(int a, int b);

// Función para manejar errores basada en la bandera de error
void manejarErrores();

#endif // BANDERA_H
