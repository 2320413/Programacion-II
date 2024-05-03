#include "Ej1_GuiaIII_lib.h"
#include <string.h>

using namespace std;
    string Cuenta::getTitular()
    {
        return titular;
    }

    void Cuenta::setTitular(string t)
    {
        titular= t; 
    }

    double Cuenta::getCantidad()
    {
        return cantidad;
    }

    void Cuenta::setCantidad(double c)
    {
        cantidad = c;
    }

    void Cuenta::ingresar(double c)
    {
        if(c>0) cantidad +=c;
    }

    void Cuenta::retirar(double c)
    {
        cantidad-= c;
        if (cantidad<0) cantidad=0;
    }