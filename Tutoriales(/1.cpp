#include <iostream>
using namespace std;

void Suma(int *a, int *b, int *r){
    *r= *b+*a;
}

int main(){ 
    int A=1, B=2, C=3, *P1, *P2, r=0;
    cout << A << " " << B << " " << C << " " << r << endl;
    P1=new int(10);
    cout << A << " " << B << " " << C << " " << r << endl;
    P2=&C;
    cout << A << " " << B << " " << C << " " << r << endl;
    Suma(P1, &B, &r);
    cout << A << " " << B << " " << C << " " << r << endl;
    C= ++*P2**P1;
    cout << A << " " << B << " " << C << " " << r << endl;
    P1=&A;
    cout << A << " " << B << " " << C << " " << r << endl;
    C=4;
    cout << A << " " << B << " " << C << " " << r << endl;
    P2=&(++C);
    cout << A << " " << B << " " << C << " " << r << endl;
    B=*P1*=*P2;
    cout << A << " " << B << " " << C << " " << r << endl;
    Suma(P1, &B, &r);
    cout << A << " " << B << " " << C << " " << r << endl;
}