//Obtener una función copia que utilice punteros para copiar una cadena en otra.
#include<iostream>
#include<cstring>
using namespace std;

void copia(const char *a, char *b, int c){
    for(int i = 0; i<c; i++){
        *b = *a;
        a++;
        b++;
    }  
    *b = '\0';
}

int main(){
    char a[50];
    char b[50];
    cin.getline(a, 50);
    int c=strlen(a);
    copia(a,b,c);

    cout<<b;

}