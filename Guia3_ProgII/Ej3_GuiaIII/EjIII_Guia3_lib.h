#include <iostream>
#include <math.h>

class Raices{
    private:
        float A, B, C;
    public: 
        Raices() : A(0), B(0), C(0){};
        Raices(float cua, float lin, float ind): A(cua), B(lin), C(ind) {};
        
        void obtenerRaices(float x[2]);

        float obtenerRaiz();

        double getDiscriminante();

        bool tieneRaices();

        bool tieneRaiz();

        void calcular();

        float getCuadratico();
        void setCuadratico(float _A);

        float getLineal();
        void setLineal(float _B);

        float getIndepenndent();
        void setIndependent(float _C);
};
