#include <iostream>
#include <math.h>
#include "Ej1_GuiaI_ProgII_lib.h"

using namespace std; 

int main () {
    int X, Y, D, R;
    cout << "Ingrese la distancia en la que parte el grillo: " << endl;
    cin >> X;
    do 
    {
        cout << "Ingrese la distancia a la que el grillo tiene que llegar, tiene que ser mayor o igual a: " << X << endl;
        cin>>Y;
    } while (Y<=X);
    cout << "Ingrese la distancia que recorre el grillo de un salto: " << endl;
    cin >> D;
    R=Y-X;
    cout << "La cantidad de saltos que hace el grillo es de: " << saltosgrillo(D, R) << endl;
    return 0;
}