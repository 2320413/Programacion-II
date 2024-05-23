#include <iostream>

using namespace std;

class Empleado {
   private:
      char *nombre;
      char *direccion;
      long sueldo;
      Fecha nacim;
      Fecha contrat;
   public:
      void setNombre(char *);
      void setDireccion(char *);
      void setSueldo(long);
      void setNac(Fecha);
      void setCont(Fecha);
      char *getNombre();
      char *getDireccion();
      long getSueldo();
      Fecha getNac();
      Fecha getCont();
      void verEmpleado();
};
void Empleado::setNombre(char *nom) {
     nombre = new char[strlen(nom)+1];
     strcpy(nombre, nom);
}
void Empleado::setDireccion(char *dir) {
     direccion = new char[strlen(dir)+1];
     strcpy(direccion, dir);
}
void Empleado::setSueldo(long suel) {
     sueldo = suel;
}
void Empleado::setNac(Fecha f) {
      nacim = f;
}
void Empleado::setCont(Fecha f) {
     contrat = f;
}
char *Empleado::getNombre() {
     return nombre;
}
char *Empleado::getDireccion() {
     return direccion;
}
long Empleado::getSueldo() {
     return sueldo;
}
Fecha Empleado::getNac() {
      return nacim;
}
Fecha Empleado::getCont() {
      return contrat;
}
void Empleado::verEmpleado() {
     cout<<"Nombre: "<< nombre << endl;
     cout<<"Direccion: "<< direccion << endl;
     cout<<"Sueldo: "<< sueldo << endl;
     cout<<"Fecha de nacimiento "<< endl;
     nacim.verFecha();
     cout<<"Fecha de contratacion "<< endl;
     contrat.verFecha();
} 
int main(int argc, char *argv[]) {
    Empleado E;
    Fecha F, G;
    char *c = new char[10];
    long d, m, a, s;
    cout<<"Ingrese nombre:   ";
    cin.getline(c,10);
    E.setNombre(c);
    cout<<"Ingrese direccion:   ";
    cin.getline(c,10);
    E.setDireccion(c);
    cout<<"Ingrese sueldo:   ";
    cin>>s;
    E.setSueldo(s);
    cout<<"Ingrese fecha de nacimiento "<< endl;
    cout << "       Dia:  ";
    cin >> d;
    cout << "       Mes:  ";
    cin >> m;
    cout << "       Año:  ";
    cin >> a;

	F.setDia(d);
    	F.setMes(m);
    	F.setAgno(a);
    	E.setNac(F);
    	cout<<"Ingrese fecha de contratacion "<< endl;
    	cout << "       Dia:  ";
    	cin >> d;
    	cout << "       Mes:  ";
    	cin >> m;
    	cout << "       Agno:  ";
    	cin >> a;
    	G.setDia(d);
    	G.setMes(m);
    	G.setAgno(a);
    	E.setCont(G);
    	E.verEmpleado();
	return 0;
}
