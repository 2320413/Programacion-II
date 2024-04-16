#include <iostream>

using namespace std;

int main(){
    int x=5, y=9;
    int *p;

    p=&x;

    cout << *p << endl;

    p=&y;

    cout << *p << endl;
    
    return 0;
}