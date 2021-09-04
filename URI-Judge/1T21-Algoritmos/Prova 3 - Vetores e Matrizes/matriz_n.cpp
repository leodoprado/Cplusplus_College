#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //freopen("entrada.in.c","r",stdin);
    cout << fixed << setprecision(1);
    double matriz[20][20], soma = 0;

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
             cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < 20; i++) {
        matriz[i][i] = 0;
    }

    for(int i = 2; i < 20; i = i + 2) {
        for(int j = 0; j < i; j++) {
            soma = soma + matriz[j][i];
        }
    }
    cout << soma << endl;
}
