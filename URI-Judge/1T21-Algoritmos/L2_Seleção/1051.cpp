#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

cout << fixed << setprecision (2);

float salario, imposto;

cin >> salario;

if (salario <= 2000) {
    cout << "Isento" << endl;

} else
if (salario > 2000 and salario <= 3000) {
    imposto = (salario - 2000)*0.08;
    cout << "R$ " << imposto << endl;
}
if (salario > 3000 and salario <= 4500) {
    imposto = (salario - 3000) * 0.18 + 80;
    cout << "R$ " << imposto << endl;
}
if (salario > 4500) {
    imposto = (salario - 4500) * 0.28 + 80 + 1500*0.18;
    cout << "R$ " << imposto << endl;
}

return 0;
}
