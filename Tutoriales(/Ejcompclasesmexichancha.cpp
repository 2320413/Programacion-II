#include <iostream>

using namespace std;

class Coord{
    private:
        int x;
        int y;
    public:
        Coord(){};
        Coord(int _x, int _y): x(_x), y(_y) {};
        
        int getX(){
            return x;
        }
        void setX(int _x){
            x=_x;
        }
        int getY(){
            return y;
        }
        void setY(int _y){
            y=_y;
        };
};

class Circulo{
    private:
        Coord centro;
        int radio;
    public:
        Circulo(){};
        Circulo(Coord c, int _radio): centro(c), radio(_radio) {};
        
        Coord getCentro(){
            return centro;
        };
        void setCentro(Coord c){
            centro= c;
        };
        
        int getRadio(){
            return radio;
        };
        void setRadio(int _radio){
            radio= _radio;
        };
};

int main(){
    Coord co1(10, 5), co2(20, 15), co3;
    Circulo cir(co1, 10), cir2;

    cout << "Los datos de la coordenada 1 son: (";
    cout << co1.getX() << "," << co1.getY() << ")" << endl;
    cout << endl;
    co3= cir.getCentro();
    cout << "Los datos del circulo 1 son: Centro: " << co3.getX() << " Y " << co3.getY();
    cout <<" y Radio: " << cir.getRadio() << endl;
    return 0;
};