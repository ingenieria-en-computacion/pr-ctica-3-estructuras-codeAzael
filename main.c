#include <stdio.h>
#include "conjunto.h"

int main(){
    CONJUNTO c, d, e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("El conjunto c esta vacio %d\n", es_vacio(c));
    c = agregar(c, 2);
    c = agregar(c, 3);
    c = agregar(c, 10);
    c = agregar(c, 11);
    c = agregar(c, 15);
    print_conjunto(c);

    d = agregar(c, 12);
    d = agregar(c, 22);
    d = agregar(c, 32);
    d = agregar(c, 2);
    print_conjunto(c);

    e = _union(c, d);

    return 0;
}