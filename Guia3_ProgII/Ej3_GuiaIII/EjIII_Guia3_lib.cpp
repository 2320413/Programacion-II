#include "EjIII_Guia3_lib.h"

using namespace std;

    void Raices::obtenerRaices(float x[2]){
        if(tieneRaices())
        {
            double disc= getDiscriminante();
            for (int i=0; i<2; i++)
            {
            if(i==0)
            {
                x[i]= (-B+ sqrt(disc))/2*A;
            }
            if(i==1)
            {
                x[i]= (-B- sqrt(disc))/2*A;
            }           
            }
        }        
    }

    float Raices::obtenerRaiz()
    {
        if (tieneRaiz())
        {
            return -B/2*A;
        }
    }

    double Raices::getDiscriminante(){
        double d= B*B;
        double e=-4*A*C;
        return d+e;
    }

    bool Raices::tieneRaices(){
        return getDiscriminante()>0;
    }

    bool Raices::tieneRaiz(){
        return getDiscriminante()==0;
    }

    void Raices::calcular()
    {
        float y[2];
        if (tieneRaiz()) 
        {
            cout << getDiscriminante() << endl;
            cout << "La única raiz vale: " << obtenerRaiz() << endl;
        } else if (tieneRaices())
        {
            cout << getDiscriminante() << endl;
            obtenerRaices(y);
            for(int j=0; j<2; j++)
            {
                cout << "Raiz" << j+1 << "= " << y[j] << endl;
            }
        } 
        else 
        {
            cout << getDiscriminante() << endl;
            cout << "No hay raices reales." << endl;
        }
    }

    float Raices::getCuadratico(){
        return A;
    }

    void Raices::setCuadratico(float _A){
        A=_A;
    }

    float Raices::getLineal(){
        return B;
    }
    void Raices::setLineal(float _B){
        B=_B;
    }

    float Raices::getIndepenndent(){
        return C;
    }
    void Raices::setIndependent(float _C){
        C=_C;
    }