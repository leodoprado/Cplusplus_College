#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    cout << fixed << setprecision(2);

   int codigo, quantidade;
   double preco;

    cin >> codigo;
    cin >> quantidade;

if (codigo == 1) {
    preco = 4.00;
}
if (codigo == 2) {
    preco = 4.50;
}
if (codigo == 3) {
    preco = 5.00;
}
if (codigo == 4) {
    preco = 2.00;
}
if (codigo == 5) {
    preco = 1.50;
}

cout << "Total: R$ " << preco * quantidade << endl;

return 0;
}