#include "Ej5_GuiaI_ProgII_lib.h"

bool primoN(int dn[100]) {
    for (int i = 2; i < dn[i]; i++) 
    {
        if (dn[i]%i == 0) return false;
    }
    return true;
}

bool primoM(int dm[100]) {
    for (int i = 2; i < dm[i]; i++) 
    {
        if (dm[i]%i == 0) return false;
    }
    return true;
}

int divisoresN(int n, int dn[100])
{
    int cont=0;
    for (int j=0; j< n; j++)
    {
        if (n%j==0)
        {
            dn[j]=n/j;
            if (primoN(dn)==true)
            {
                cont++;
                dn[j]=dn[cont];
            }
        }
    }
    return dn[100];
}

int divisoresM(int m, int dm[100])
{
    int cont1=0;
    for (int k=0; k< m; k++)
    {
        if (m%k==0)
        {
            dm[k]=m/k;
            if (primoM(dm)==true)
            {
                cont1++;
                dm[k]=dm[cont1];
            }
        }
    }
    return dm[100];
}

bool comparar(int dn[100], int dm[100]){ 
    for (int l=0; l<100; l++){
        if (dn[l]!=dm[l]) return false;
    } 
    return true;
}