#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int x;
    int pares, impares, positivos, negativos;
    int i;

    pares = 0;
    impares = 0;
    positivos = 0;
    negativos = 0;

    for(i = 1; i <= 5; i = i+1){
        cin >> x;
        if (x%2 == 0)
            pares = pares+1;
            else {
                impares = impares + 1;
            }
        if (x > 0)
            positivos = positivos + 1;
            else if(x < 0) {
                negativos = negativos + 1;
            }
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

   return 0;
}
