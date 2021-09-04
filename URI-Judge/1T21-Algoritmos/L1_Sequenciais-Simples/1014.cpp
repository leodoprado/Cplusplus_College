#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int DistanciaTotal;
double CombustivelGasto, ConsumoMedio;

cout << fixed << setprecision (3);

cin >> DistanciaTotal;
cin >> CombustivelGasto;

ConsumoMedio = DistanciaTotal/CombustivelGasto;

cout << ConsumoMedio << " km/l" << endl;

return 0;
}