#include "Ej4_GuiaII_lib.h"

int random() 
{
    return rand()%100;
}

void rellenar(int a[15]) {
    for (int i = 0; i < 15; i++) {
        a[i] = random();
    }
}
