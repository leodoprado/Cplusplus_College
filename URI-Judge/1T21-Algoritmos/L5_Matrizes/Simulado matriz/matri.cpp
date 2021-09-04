#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int matriz[15][15];

    int n;
    cin >> n;
    while (n) {
        /// n = 4
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                matriz[i][j] = pow(2,j+i);
            }
        }
        int tamanho = matriz[n-1][n-1];
        int digitos =0;
        while (tamanho !=0) {
            tamanho = tamanho / 10;
            digitos++;
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (j==(n-1)) {
                    cout << setw(digitos) << matriz[i][j]  ;
                } else {
                    cout << setw(digitos) << matriz[i][j] << " " ;
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;

    }

    return 0;
}
