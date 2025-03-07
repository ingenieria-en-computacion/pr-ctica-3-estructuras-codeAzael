#include <stdio.h>
#include "complejos.h"

int main() {

    COMPLEJOS c1 = crear_complejos(1.0, 2.0);
    COMPLEJOS c2 = crear_complejos(3.0, 4.0);
    COMPLEJOS c3 = crear_complejos(5.0, 6.0);

    print_complejo(c1);
    print_complejo(c2);
    print_complejo(c3);
    printf("\n");

    COMPLEJOS suma = Suma(c1, c2);
    printf("La suma de c1 y c2 es: ");
    print_complejo(suma);
    printf("\n");

    COMPLEJOS producto = Producto(c1, c3);
    printf("El producto de la suma de c1 y c2 con c3 es: ");
    print_complejo(producto);
    printf("\n");
    
    return 0;
}
