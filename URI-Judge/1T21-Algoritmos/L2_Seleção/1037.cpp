#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

cout << fixed << setprecision (2);

double valor;

cin >> valor;

if (valor >= 0 and valor <= 25) {
    cout << "Intervalo [0,25]" << endl;
} else
        if (valor > 25 and valor <= 50) {
            cout << "Intervalo (25,50]" << endl;
        } else
            if (valor > 50 and valor <= 75) {
                cout << "Intervalo [50,70]" << endl;
            } else
                if (valor > 75 and valor <= 100) {
                    cout << "Intervalo (75,100]" << endl;
                 } else {
                    cout << "Fora de intervalo" << endl;
                    }

return 0;
}