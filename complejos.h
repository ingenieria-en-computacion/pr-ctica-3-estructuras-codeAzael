#ifndef COMPLEJOS__H__
#define COMPLEJOS__H__

typedef struct {
    double real;
    double imaginario;
} COMPLEJOS;

COMPLEJOS crear_complejos(double real, double imaginario);
COMPLEJOS asignar_real(COMPLEJOS c, double real);
COMPLEJOS asigna_imaginario(COMPLEJOS c, double imaginario);
double parte_real(COMPLEJOS c);
double parte_imaginaria(COMPLEJOS c);
COMPLEJOS suma(COMPLEJOS c1, COMPLEJOS c2);
COMPLEJOS resta(COMPLEJOS c1, COMPLEJOS c2);
COMPLEJOS producto(COMPLEJOS c1, COMPLEJOS c2);
double modulo(COMPLEJOS c);
COMPLEJOS conjugado(COMPLEJOS c);

#endif