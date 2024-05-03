#include "EjII_GuiaIII_lib.h"
#include <string.h>
#include <time.h>

using namespace std;

int Persona::generarDNI() 
{
    int dni;
    dni = rand()% 90000000 + 10000000;
    return dni;
}

int Persona::getDNI()
{
    return dni;
}

char Persona::comprobarSexo(char sexo)
{
    if (sex == 'M') 
    {
        return 'M';
    }
    else 
    {
        return 'H';
    }
}

int Persona::calcularIMC(){
    float tempAlt= altura/100;
    float imc= peso/(tempAlt*tempAlt);
    if (imc<20) return -1;
    if (imc >= 20 && imc <= 25) return 0;
    if (imc > 25) return 1; 
}

bool Persona::esMayorDeEdad() 
{
    return edad >= 18;
}

string Persona::getNombre()
{
    return nombre;
} 

void Persona::setNombre(string n)
{
    nombre=n;
}

int Persona::getEdad()
{
    return edad;
}

void Persona::setEdad(int age)
{
    edad= age;
}

int Persona::getPeso()
{
    return peso;
}

void Persona::setPeso(int pes)
{
    peso= pes;
}

int Persona::getAltura()
{
    return altura;
}

void Persona::setAltura(int alt)
{
    altura= alt;
}

char Persona::getSexo()
{    
    return sexo;
}

void Persona::setSexo(char sex)
{
    sexo= sex;
}


