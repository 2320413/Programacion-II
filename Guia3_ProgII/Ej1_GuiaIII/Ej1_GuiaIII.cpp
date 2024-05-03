#include <iostream>
#include <string.h>
#include "Ej1_GuiaIII_lib.h"

using namespace std;

int main()
{
    string tit;
    double cant, constitucion, retiro;

    cout << "Ingrese el nombre del titular de la cuenta: " << endl;
    getline(cin, tit);

    cout << "Ingrese la cantidad de dinero que hay en la cuenta: " << endl;
    cin >> cant;

    Cuenta account(tit, cant);

    cout << "Titular de la cuenta: " << account.getTitular() << endl;
    cout << "Cantidad de la cuenta: " << account.getCantidad() << endl;

    cout << "Cuanto ingresar dinero a su cuenta?" << endl;
    cin >> constitucion;

    account.ingresar(constitucion);

    cout << "Cuanto dinero desea retirar de su cuenta?" << endl;
    cin >> retiro;

    account.retirar(retiro);

    cout << "Su saldo final es de: " << account.getCantidad() << endl;

    return 0;
}