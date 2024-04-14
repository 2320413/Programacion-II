#include <iostream>
#include "Ej8_GuiaI_lib.h"

using namespace std;

int main ()
{
    int n, X;
    int a[100];

    cout << "Ingrese el grado del polinomio: " << endl;
    cin >> n;

    for(int i=0; i<n+1; i++)
    {
        cout << "Ingrese el coeficiente del termino " << i << endl;
        cin >> a[i];
    }

    cout << "Ingrese el valor de la variable X: " << endl;
    cin >> X;

    cout << evalpol(n, X, a) << endl;

    return 0;
}