#include <iostream>
#include "Parcial_I_Ej_III_lib.h"
#include <string>

using namespace std;

int main(){
    Book *a;

    a= new Book("Santanna",(45354200, "Andres"), "El Principito");

    cout << a->toString() << endl;
}

