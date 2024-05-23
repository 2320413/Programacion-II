#include <iostream>
#include <time.h>

using namespace std;

int random() {
    return rand()%100;
}

void rellenar(int a[15]) {
    for (int i = 0; i < 15; i++) {
        a[i] = random();
    }
}

int main() {
    srand(time(NULL));
    
    int a[15];
    rellenar(a);

    for (int *i = &a[0]; i < &a[14]; i++) {
        cout << *i << " (" << i << ")" << endl;
    }

    return 0;
}