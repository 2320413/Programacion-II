#include <iostream>
#include <string>
#include "Ej_II_Parcial_lib.h"

using namespace std;

int main(){
    Animal *a[2];

    a[0]= new Animal("Perro", 10, "Sin tratamiento");
    a[1]= new Animal("Gato", 6, "Rabia");

    for (int i=0; i<2; i++)
    {
        cout << a[i]->Tostring() << endl;
    }
}


