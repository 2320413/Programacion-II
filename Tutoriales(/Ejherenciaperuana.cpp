#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal{
    private:
        int edad;
    public: 
        Animal(): edad(0){};
        Animal(int _edad): edad(_edad) {};
};

class Humano : public Animal{
    private:
        string nombre;
    public:
        Humano(int _edad, string _nombre): Animal(_edad), nombre(_nombre){};
};

class Perro : public Animal{
    private:
        string nombre, raza;
    public:
        Perro(int _edad, string _nombre, string _raza): Animal(_edad), nombre(_nombre), raza(_raza) {};
};

int main(){
    Animal *animales[2];

    animales[0] = new Perro(5, "Boby", "Pastor Aleman");
    animales[1] = new Humano(18, "Juan");
}