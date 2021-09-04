#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int codPeca1, qtdPeca1, codPeca2, qtdPeca2;
double valUnitPeca1, valUnitPeca2, valor;

cout << fixed << setprecision (2);

cin >> codPeca1;
cin >> qtdPeca1;
cin >> valUnitPeca1;

cin >> codPeca2;
cin >> qtdPeca2;
cin >> valUnitPeca2;

valor = qtdPeca1 * valUnitPeca1 +
        qtdPeca2 * valUnitPeca2;


cout << "VALOR A PAGAR: R$ " << valor << endl;

return 0;
}