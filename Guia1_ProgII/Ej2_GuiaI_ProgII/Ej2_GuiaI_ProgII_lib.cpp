#include "Ej2_GuiaI_ProgII_lib.h"

int divisores (int N, int M, int K)
{
    int cant=0;
    int aux=N;
    while (aux<M)
    {
        if (aux%K==0)
        {
            cant++;
        }
        aux++;
    }
    return cant;
}