#include "Ej_II_Parcial_lib.h"
#include <string>

using namespace std;

string Animal::getType()
{
    return type;
}
void Animal::setType(string _type)
{
    type=_type;
}

int Animal::getAge()
{
    return age;
}
void Animal::setAge(int _age)
{
    age=_age;
}

string Animal::getTreatment()
{
    return treatment;
}
void Animal::setTreatment(string _treatment)
{
    treatment=_treatment;
}

string Animal::Tostring(){
        string str= "Tipo: " + type + 
        "\nEdad: " + to_string(age)+ 
        "\nTratamiento: " + treatment;

        return str;
    }