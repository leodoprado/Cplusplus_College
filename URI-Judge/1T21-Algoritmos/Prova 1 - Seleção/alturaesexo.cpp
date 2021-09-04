#include <iomanip>
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {

    cout << fixed << setprecision (1);

    double altura=0, peso=0;
    char  sexo, M, F;

    cin >> altura >> sexo;

    if (sexo == 'M') {
        peso = ((72.7*altura)-58);
        cout << peso << " kg" << endl;
    } else if (sexo == 'F') {
        peso = ((62.1*altura)-44.7);
        cout << peso << " kg" << endl;
    }

    return 0;
}
