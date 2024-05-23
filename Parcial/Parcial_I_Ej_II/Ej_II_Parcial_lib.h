#include <string>

using namespace std;

class Animal{
    private:
        string type, treatment;
        int age;
    public: 
        Animal(){};
        Animal(string _type, int _age, string _treatment): type(_type), age(_age), treatment(_treatment){};

        string getType();
        void setType(string _type);

        int getAge();
        void setAge(int _age);

        string getTreatment();
        void setTreatment(string _treatment);

        string Tostring();
};