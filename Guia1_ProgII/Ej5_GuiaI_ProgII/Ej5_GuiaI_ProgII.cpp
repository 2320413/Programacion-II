#include <iostream>
#include "Ej5_GuiaI_ProgII_lib.h"

using namespace std;

int main()
{
    int n, m, cont2=1, cont3=1;
    int dn[100], dm[100];
    cout << "Ingrese un numero: " << endl;
    cin >> n;
    cout << "Ingrese un segundo numero: " << endl;
    cin >> m;
    divisoresN (n, dn);
    divisoresM (m, dm);
    if (comparar(dn, dm)==true) {
        cout << "Tienen los mismos divisores!" << endl;
        while (dn[cont2]!=0) 
        {
            cout << dn[cont2] << endl;
            cont2++;
        } 
    }
    else 
    {
        cout << "No tienen los mismos divisores!" << endl;
        cout << "Divisores de " << n << ":" << endl; 
        while (dn[cont2]!=0) 
        {
            cout << dn[cont2] << endl;
            cont2++;
        } 
        cout << "Divisores de " << m << ":" << endl; 
        while (dm[cont3]!=0) 
        {
            cout << dm[cont3] << endl;
            cont3++;
        } 
    }
}