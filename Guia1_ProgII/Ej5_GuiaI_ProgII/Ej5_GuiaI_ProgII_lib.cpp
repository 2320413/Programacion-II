#include "Ej5_GuiaI_ProgII_lib.h"

bool isPrimo(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0) return false;
    }
    
    return true;
}

int divisores(int P, int dm[100])
{
    int cont1=0;
    for (int D=2; D< P; D++)
    {
        if (P%D==0 and isPrimo(D))
        {
            dm[cont1++] = D;
        }
    }
    return cont1;
}


bool comparar(int dn[100], int dm[100], int l1, int l2) { 
    if (l1 != l2) return false;

    for (int l=0; l < l1; l++){
        if (dn[l]!=dm[l]) return false;
    } 
    return true;
}