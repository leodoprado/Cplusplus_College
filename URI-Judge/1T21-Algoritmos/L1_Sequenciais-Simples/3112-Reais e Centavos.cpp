#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

cout << fixed << setprecision(0);

int reais;
float valor, centavos;

cin >> valor;

reais =(valor * 2)/2.0;
centavos =(valor - reais)*100;


cout << reais << " reais e " << centavos << " centavos" << endl;

return 0;
}

