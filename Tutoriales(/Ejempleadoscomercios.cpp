#include <iostream>
#include <string>
#include "Ejempleadoscomercios_lib.h"


using namespace std;

int main(){

    Commercial employeer1 = Commercial("Borja", 35, 2000, 15);
    cout << employeer1.Tostring() << endl;

    cout << "Su salario quedara en: " << employeer1.plus() << endl;

    Delivery employeer2 = Delivery("Juan", 18, 450, 2);
    cout << employeer2.Tostring() << endl;

    cout << "Su salario quedara en: " << employeer2.plus() << endl;
}