#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

 int A, B, C;
 int auxA, auxB, auxC;
 int aux;

 cin >> A >> B >> C;

 auxA = A;
 auxB = B;
 auxC = C;

 // Metodo "bolha" de ordenação
 if (A > B) {
    aux = A;
    A = B;
    B = aux;
 }

 // Metodo "bolha" de ordenação
 if (B > C) {
    swap (B,C);
 }

 if (A > B) {
    swap (A,B);
 }

 cout << A << endl;
 cout << B << endl;
 cout << C << endl << endl;

 cout << auxA << endl;
 cout << auxB << endl;
 cout << auxC << endl;

 return 0;
}
