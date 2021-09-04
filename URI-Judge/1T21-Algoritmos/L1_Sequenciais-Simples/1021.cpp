#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int cem, cinquenta, vinte, dez, cinco, dois, um, m50, m25, m10, m5, m1, notas, centavos, resto1, resto2, resto3, resto4, resto5, restor1, restor2, restor3, restor4;
double Valor, ValorCentavos;

cin >> Valor;

notas = (int) Valor;
ValorCentavos = (Valor - notas) * 100;
centavos = (int) ValorCentavos;




cem = Valor / 100;
resto1 = (notas % 100);

cinquenta = resto1/50;
resto2 = resto1 % 50;

vinte = resto2 / 20;
resto3 = resto2 % 20;

dez = resto3 / 10;
resto4 = resto3 % 10;

cinco = resto4 / 5;
resto5 = resto4 % 5;

dois = resto5 / 2;

um = resto5 % 2;

m50 = centavos / 50;
restor1 = centavos % 50;

m25 = restor1 / 25;
restor2 = restor1 % 25;

m10 = restor2 / 10;
restor3 = restor2 % 10;

m5 = restor3 / 5;
restor4 = restor3 % 5;

m1 = restor4;


cout << "NOTAS:" << endl;
cout << cem << " nota(s) de R$ 100.00" << endl;
cout << cinquenta << " nota(s) de R$ 50.00" << endl;
cout << vinte << " nota(s) de R$ 20.00" << endl;
cout << dez << " nota(s) de R$ 10.00" << endl;
cout << cinco << " nota(s) de R$ 5.00" << endl;
cout << dois << " nota(s) de R$ 2.00" << endl;
cout << "MOEDAS:" << endl;
cout << um << " moeda(s) de R$ 1.00" << endl;
cout << m50 << " moeda(s) de R$ 0.50" << endl;
cout << m25 << " moeda(s) de R$ 0.25" << endl;
cout << m10 << " moeda(s) de R$ 0.10" << endl;
cout << m5 << " moeda(s) de R$ 0.05" << endl;
cout << m1 << " moeda(s) de R$ 0.01" << endl;

return 0;
}
