#include "EjIII_Guia3_lib.h"

using namespace std;

int main ()
{
    float a, b, c;
    Raices objeto;

    cout << "Ingrese el termino cuadratico: " << endl;
    cin >> a;

    while (a==0)
    {
        cout << "Ingrese el termino cuadratico (distinto de 0): " << endl;
        cin >> a;
    };
    
    cout << "Ingrese el termino lineal: " << endl;
    cin >> b;

    cout << "Ingrese el termino independiente:" << endl;
    cin >> c;

    objeto= Raices(a, b, c);

    objeto.calcular();

}
