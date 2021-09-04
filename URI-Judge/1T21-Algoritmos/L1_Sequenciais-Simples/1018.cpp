#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int Reais, Cem, Cinquenta, Vinte, Dez, Cinco, Dois, Um;

cin >> Reais;

Cem = Reais / 100;
Cinquenta = (Reais % 100)/50;
Vinte = ((Reais % 100) % 50)/20;
Dez = (((Reais % 100) % 50) % 20)/10;
Cinco = ((((Reais % 100) % 50) % 20 ) % 10)/5;
Dois = (((((Reais % 100) % 50) % 20 ) % 10 ) % 5)/2;
Um = ((((((Reais % 100) % 50) % 20 ) % 10 ) % 5 ) % 2)/1;

cout << Reais << endl;
cout << Cem << " nota(s) de R$ 100,00" << endl;
cout << Cinquenta << " nota(s) de R$ 50,00" << endl;
cout << Vinte << " nota(s) de R$ 20,00" << endl;
cout << Dez << " nota(s) de R$ 10,00" << endl;
cout << Cinco << " nota(s) de R$ 5,00" << endl;
cout << Dois << " nota(s) de R$ 2,00" << endl;
cout << Um << " nota(s) de R$ 1,00" << endl;

return 0;
}
