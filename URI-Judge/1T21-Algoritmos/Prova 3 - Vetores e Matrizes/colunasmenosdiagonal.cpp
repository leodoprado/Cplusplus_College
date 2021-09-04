#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //freopen("entrada.in.c","r",stdin);
    cout << fixed << setprecision(1);

    double matriz[20][20], soma=0, soma1=0;
    int i, j;

    for (i=0; i<20; i++) {
        for (j=0; j<20; j++) {
            cin >> matriz[i][i];
        }
    }

    for (i=0; i<=19; i++) {
        for (j=0; j<=19; j=j+2) {
            soma1 = soma1 + matriz[i][j];
        }
    }

    for (i=0; i<=19; i=i+2){
        soma = soma + matriz[i][i];
    }

    cout << soma1+soma << endl;

    return 0;
}
