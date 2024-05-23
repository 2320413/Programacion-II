#include <string>
#include "Ejempleadoscomercios_lib.h"

using namespace std;

    string Employeer::getName(){
        return name;
    }
    void Employeer::setName(string _name){
        name=_name;
    }

    int Employeer::getAge(){
        return age;
    }
    void Employeer::setAge(int _age){
        age=_age;
    }

    double Employeer::getSalary(){
        return salary;
    }
    void Employeer::setSalary(double _salary){
        salary=_salary;
    }


    double Commercial::getCommission(){
        return commission;
    }
    void Commercial::setCommission(double _commission){
        commission=_commission;
    }

    string Commercial::Tostring(){
        string str= "Nombre: " + name + 
        "\nEdad: " + to_string(age)+ 
        "\nSalario: " + to_string(salary) + 
        "\nComision: " + to_string(commission);

        return str;
    }

    double Commercial::plus(){
        if((age>30) && (commission>12)){
            salary+=3000;
        }
        return salary;
    }


    int Delivery::getZone(){
        return zone;
    }
    void Delivery::setZone(int _zone){
        zone=_zone;
    }

    string Delivery::Tostring(){
        string str= "Nombre: " + name + 
        "\nEdad: " + to_string(age)+ 
        "\nSalario: " + to_string(salary) + 
        "\nZona: " + to_string(zone);

        return str;
    }

    double Delivery::plus(){
        if ((25>age) && (zone==3)){
            salary+=3000;
        }
        return salary;
    }