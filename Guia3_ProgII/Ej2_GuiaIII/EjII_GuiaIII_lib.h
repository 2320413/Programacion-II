#include <string>

class Persona{
    private:
    string nombre;
    int edad, dni, peso, altura;
    char sexo;
     
    int generarDNI();

    char comprobarSexo(char sexo);

    public:
    Persona() : nombre(""), edad(0), peso(0), altura(0) {dni = generarDNI();}
    Persona(string n, int age, char sex) : nombre(n), edad(age), peso(0), altura(0) 
    {
        sexo = comprobarSexo(sex);
        dni = generarDNI();
    }
    Persona(string n, int age, char sex, int pes, int alt) : nombre(n), edad(age), peso(pes), altura(alt) {
        sexo = comprobarSexo(sex);
        dni = generarDNI();
        }
    
    int calcularIMC();

    bool esMayorDeEdad();
    
    string getNombre();
    void setNombre(string n);

    int getEdad();
    void setEdad(int age);

    int getPeso();
    void setPeso(int pes);

    int getAltura();
    void setAltura(int alt);

    char getSexo();
    void setSexo(char sex);

    int getDNI();
    
};