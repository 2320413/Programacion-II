#include <string>

using namespace std;

class Employeer{
    protected:
        string name;
        int age;
        double salary;
    public:
        Employeer() : name(""), age(0), salary(0) {};
        Employeer(string _name, int _age, double _salary) : name(_name), age(_age), salary(_salary) {};

        string getName();
        void setName(string _name);

        int getAge();
        void setAge(int _age);

        double getSalary();
        void setSalary(double _salary);
};

class Commercial : public Employeer{
    private:
        double commission;
    public:
        Commercial(string _name, int _age, double _salary, double _commission) : Employeer(_name, _age, _salary), commission(_commission){};

        double getCommission();
        void setCommission(double _commission);

        string Tostring();

        double plus();

};

class Delivery : public Employeer{
    private:
        int zone;
    public:
        Delivery(string _name, int _age, double _salary, int _zone) : Employeer(_name, _age, _salary), zone(_zone){};

        int getZone();
        void setZone(int _zone);

        string Tostring();

        double plus();
};