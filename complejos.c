#include <stdio.h>
#include <math.h>
#include "complejos.h"

COMPLEJOS crear_complejos(double real, double imaginario) {
    COMPLEJOS c;
    c.real = real;
    c.imaginario = imaginario;
    return c;
}

COMPLEJOS asignar_real(COMPLEJOS c, double real) {
    c.real = real;
    return c;
}

COMPLEJOS asigna_imaginario(COMPLEJOS c, double imaginario) {
    c.imaginario = imaginario;
    return c;
}

double parte_real(COMPLEJOS c) {
    return c.real;
}

double parte_imaginaria(COMPLEJOS c) {
    return c.imaginario;
}

double Modulo(COMPLEJOS c) {
    return sqrt(c.real * c.real + c.imaginario * c.imaginario);
}

COMPLEJOS Suma(COMPLEJOS c1, COMPLEJOS c2) {
    COMPLEJOS resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

COMPLEJOS Producto(COMPLEJOS c1, COMPLEJOS c2) {
    COMPLEJOS resultado;
    resultado.real = c1.real * c2.real - c1.imaginario * c2.imaginario;
    resultado.imaginario = c1.real * c2.imaginario + c1.imaginario * c2.real;
    return resultado;
}

COMPLEJOS Conjugado(COMPLEJOS c) {
    COMPLEJOS resultado;
    resultado.real = c.real;
    resultado.imaginario = -c.imaginario;
    return resultado;
}