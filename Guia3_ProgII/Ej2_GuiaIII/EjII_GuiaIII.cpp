#include <iostream>
#include <string.h>
#include <time.h>
#include "EjII_GuiaIII_lib.h"

using namespace std;

int main (){
    
    srand(time(NULL));
    string name;
    int e, p; 
    float a;
    char s;
    Persona objeto[3];

    for(int i=0; i<3; i++)
    {
        cout << "Ingrese el nombre del objeto " << i+1 << endl;
        cin >> name;

        cout << "Ingrese la edad del objeto " << i+1 << endl;
        cin >> e;

        cout << "Ingrese el sexo del objeto, (H o M) " << i+1 << endl;
        cin >> s;

        cout << "Ingrese el peso del objeto(kg)" << i+1 << endl;
        cin >> p;

        cout << "Ingrese la altura del objeto (cm) " << i+1 << endl;
        cin >> a;

        objeto[i]=Persona(name, e, s, p, a);
    }

    for(int j=0; j<3; j++)
    {
        cout << "Persona " << j+1 << endl;
        float tempIMC= objeto[j].calcularIMC();
        bool tempEdad= objeto[j].esMayorDeEdad();

        if(tempIMC==-1)
            {cout << "Estas flaquinho" << endl;} 
        else if (tempIMC==0)
            {cout << "Estas fit" << endl;}
        else if (tempIMC==1)
            {cout << "Estas gordito" << endl;}
        
        if(tempEdad)
        {cout << "Es mayor de edad" << endl;}
        else 
        {cout << "Es menor de edad" << endl;}
    }

    cout << "Info de cada objeto: " << endl;

    for (int k=0; k<3; k++)
    {
        cout << "Objeto" << k+1 << endl;
        cout << "Nombre: " << objeto[k].getNombre() << endl;
        cout << "Edad: "<< objeto[k].getEdad() << endl;
        cout << "Sexo: " << objeto[k].getSexo() << endl;
        cout << "Peso: " << objeto[k].getPeso() << endl;
        cout << "Altura: " <<  objeto[k].getAltura() << endl;
        cout << "DNI: " << objeto[k].getDNI() << endl;
    }
    
    return 0;
}