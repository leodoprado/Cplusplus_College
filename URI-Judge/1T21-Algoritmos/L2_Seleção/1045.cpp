#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    float A, B, C;
    float aux;

    cin >> A >> B >> C;

    if (A < B and B > C){
        aux = A; A = B; B = aux; }
    if (B < C){
        aux = B; B = C; C = aux; }
    if (A < B){
        aux = A; A = B; B = aux; }


    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
        if (A*A == (B*B + C*C)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
    else if (A*A > (B*B + C*C)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
    else if (A*A < (B*B + C*C)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B and B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
    else if (A == B or A == C or B == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
            }

    return 0;
}
