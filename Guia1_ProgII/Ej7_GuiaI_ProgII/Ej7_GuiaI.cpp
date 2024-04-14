#include <iostream>
#include "Ej7_GuiaI_lib.h"

using namespace std;

int main(){
    int X,Y, aux=0;

    cout << "Ingrese el valor de X: " << endl;
    cin >> X;
    cout << "Ingrese el valor de Y: " << endl;
    cin >> Y;

    intercambiar(X, Y, aux);

    cout << "Intercambiados los valores, queda: " << endl;
    
    cout << "X= " << X << endl;
    cout << "Y= " << Y << endl;

    return 0;
}