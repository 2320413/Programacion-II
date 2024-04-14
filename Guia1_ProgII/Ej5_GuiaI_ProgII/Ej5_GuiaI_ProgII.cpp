#include <iostream>
#include "Ej5_GuiaI_ProgII_lib.h"

using namespace std;

int main()
{
    int n, m, div_cantN, div_cantM;
    int dn[100], dm[100];
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    cout << "Ingrese un segundo numero: " << endl;
    cin >> m;
    div_cantN = divisores(n, dn);
    div_cantM = divisores(m, dm);
    if (comparar(dn, dm, div_cantN, div_cantM)) {
        cout << "Tienen los mismos divisores!" << endl;
        while (div_cantN > 0)
        {
            cout << dn[--div_cantN] << endl;
        } 
    }
    else 
    {
        cout << "No tienen los mismos divisores!" << endl;
        cout << "Divisores de " << n << ":" << endl; 
        while (div_cantN > 0) 
        {
            cout << dn[--div_cantN] << endl;
        } 
        cout << "Divisores de " << m << ":" << endl; 
        while (div_cantM > 0) 
        {
            cout << dm[--div_cantM] << endl;
        } 
    }
}