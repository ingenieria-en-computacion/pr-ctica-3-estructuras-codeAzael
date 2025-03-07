#ifndef COMPLEJOS__H__
#define COMPLEJOS__H__

typedef struct {
    double real;
    double imaginario;
} COMPLEJOS;

COMPLEJOS crear_complejos(double real, double imaginario);
COMPLEJOS asignar_real(COMPLEJOS c, double real);
COMPLEJOS asignar_imaginario(COMPLEJOS c, double imaginario);
double parte_real(COMPLEJOS c);
double parte_imaginaria(COMPLEJOS c);
COMPLEJOS Suma(COMPLEJOS c1, COMPLEJOS c2);
COMPLEJOS Resta(COMPLEJOS c1, COMPLEJOS c2);
COMPLEJOS Producto(COMPLEJOS c1, COMPLEJOS c2);
double Modulo(COMPLEJOS c);
COMPLEJOS Conjugado(COMPLEJOS c);
void print_complejo(COMPLEJOS c);

#endif
