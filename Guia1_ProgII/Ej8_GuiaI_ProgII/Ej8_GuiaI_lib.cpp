#include "Ej8_GuiaI_lib.h"
#include <math.h>

int evalpol(int n, int X, int a[100]){
    int pol=0;
    
    for(int j=0; j<n+1; j++)
    {
        pol+=(a[j])*pow(X,j);
    }

    return pol;
}