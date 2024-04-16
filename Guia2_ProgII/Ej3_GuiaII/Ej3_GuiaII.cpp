#include <iostream>

using namespace std;

int main(){
    int a[5]={10, 20, 30, 40, 50};
    int *p, *q, *r;

    for (int i=0; i<5; i++)
    {
        p=&a[i];
        cout << *p << endl;
    }
    q=&a[4];
    r=&a[0];

    cout << "La diferencia entre " << a[4] << " y " << a[0] << " es de: " << *q-*r <<  endl;

    return 0;
}