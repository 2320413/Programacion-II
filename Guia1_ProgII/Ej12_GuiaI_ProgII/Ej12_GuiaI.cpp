#include <iostream>
#include "Ej12_GuiaI_lib.h"

using namespace std;

int main() 
{
    int n;
    int arr[n];

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;
    cout << "Ingrese los elementos del vector: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    ordenarVector(arr, n);

    cout << "Vector ordenado de mayor a menor: ";

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}