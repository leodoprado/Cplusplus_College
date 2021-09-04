#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int Minutos;

double Km, TempoNecessario;

cin >> Km;

//1km a cada 2 minutos

TempoNecessario = Km * 2;

cout << TempoNecessario << " minutos" << endl;

return 0;
}