#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //freopen("entrada.in.c","r",stdin);
    cout << fixed << setprecision(1);
    double matriz[10][10], soma = 0;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < 10; i++) {
        soma = soma + matriz[i][i];
        soma = soma + matriz[i][9-i];
    }

    cout << soma/20 << endl;

return 0;
}
