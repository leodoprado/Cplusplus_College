#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

string nome;
double salarioFixo, totalVendas, salario;

cout << fixed << setprecision (2);

cin >> nome;
cin >> salarioFixo;
cin >> totalVendas;

salario = salarioFixo + 15/100.0 * totalVendas;

cout << "TOTAL = R$ " << salario << endl;

return 0;
}