#include "Ej6_GuiaI_ProgI_lib.h"

bool primo (int n)
{
    for(int i=2; i<n; i++)
    {
        if (n%i==0) return false;
    }
    return true;
}