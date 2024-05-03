#include <iostream>
#include <string>

using namespace std;

class Cuenta {
private:
    string titular;
    double cantidad;

public:
    Cuenta(string _titular) : titular(_titular), cantidad(0) {}
    Cuenta(string _titular, double _cantidad) : titular(_titular), cantidad(_cantidad) {}

    // Métodos get y set
    string getTitular() const {
        return titular;
    }

    void setTitular(string _titular) {
        titular = _titular;
    }

    double getCantidad() const {
        return cantidad;
    }

    void setCantidad(double _cantidad) {
        cantidad = _cantidad;
    }

    // Método para ingresar dinero a la cuenta
    void ingresar(double _cantidad) {
        if (_cantidad > 0) {
            cantidad += _cantidad;
        }
    }

    // Método para retirar dinero de la cuenta
    void retirar(double _cantidad) {
        if (_cantidad > 0) {
            cantidad -= _cantidad;
            if (cantidad < 0) {
                cantidad = 0;
            }
        }
    }
};

int main() {
    string titular;
    double cantidadInicial;
    
    // Solicitar al usuario que ingrese el titular de la cuenta
    cout << "Ingrese el titular de la cuenta: ";
    getline(cin, titular);

    // Solicitar al usuario que ingrese la cantidad inicial (opcional)
    cout << "Ingrese la cantidad inicial en la cuenta (si no desea ingresar, escriba 0): ";
    cin >> cantidadInicial;
    cin.ignore(); // Limpiar el buffer del salto de línea

    // Crear la cuenta con los datos ingresados por el usuario
    Cuenta cuenta(titular, cantidadInicial);

    // Mostrar información de la cuenta
    cout << "\nTitular de la cuenta: " << cuenta.getTitular() << endl;
    cout << "Cantidad en la cuenta: " << cuenta.getCantidad() << endl;

    // Operaciones sobre la cuenta
    double cantidadIngresar, cantidadRetirar;
    cout << "\nIngrese la cantidad a ingresar en la cuenta: ";
    cin >> cantidadIngresar;
    cuenta.ingresar(cantidadIngresar);

    cout << "Ingrese la cantidad a retirar de la cuenta: ";
    cin >> cantidadRetirar;
    cuenta.retirar(cantidadRetirar);

    // Mostrar saldo final de la cuenta
    cout << "\nSaldo final en la cuenta: " << cuenta.getCantidad() << endl;

    return 0;
}

