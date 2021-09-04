#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

double A, B, C, Triangulo, Circulo, Trapezio, Quadrado, Retangulo;

cout << fixed << setprecision (3);

cin >> A;
cin >> B;
cin >> C;

Triangulo = A*C/2.0;
Circulo = 3.14159*C*C;
Trapezio = (A+B)*C/2.0;
Quadrado = B * B;
Retangulo = A * B;

cout << "TRIANGULO: " << Triangulo << endl;
cout << "CIRCULO: " << Circulo << endl;
cout << "TRAPEZIO: " << Trapezio << endl;
cout << "QUADRADO: " << Quadrado << endl;
cout << "RETANGULO: " << Retangulo << endl;

return 0;
}