#include "Ej1_GuiaI_ProgII_lib.h"

int saltosgrillo(int D, int R)
{
    int F=0;
    int cantsaltos=0;
    do
    {
        F+=D;
        cantsaltos++;
    } while (F<R);
    return cantsaltos; 
}
