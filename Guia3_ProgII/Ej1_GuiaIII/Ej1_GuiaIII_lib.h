#include <string>

class Cuenta{

private:
    string titular;
    double cantidad;
public:
    Cuenta (string t) : titular(t), cantidad(0) {}
    Cuenta (string t, double c) : titular (t), cantidad(c) {}

    string getTitular();

    void setTitular(string t);

    double getCantidad();

    void setCantidad(double c);

    void ingresar(double c);

    void retirar(double c);
};