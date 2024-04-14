#include <iostream>
#include "Ej2_GuiaI_ProgII_lib.h"

using namespace std;

int main () {
    int N, M, K;
    cout << "Ingrese un numero entero positivo:" << endl;
    cin >> N;
    cout << "Ingrese un numero mayor a " << N << ":" << endl;
    cin >> M;
    while (N>M)
    {
        cout << "Ingrese un numero mayor a " << N << ":" << endl;
        cin >> M;
    }
    cout << "Ingrese el numero que quiere que se utilice para calcular la cantidad de divisibles por dicho numero que hay entre " << N << " y " << M << endl;
    cin >> K;
    cout << "La cantidad de divisores que hay entre "<< N << " y " << M << "son: " << divisores(N, M, K) << endl;
}