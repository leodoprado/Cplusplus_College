#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int VelocidadeMedia, KmL=12;
double QtdLitrosNecessaria, TempoGastoViagem;

cout << fixed << setprecision(3);

cin >> TempoGastoViagem;
cin >> VelocidadeMedia;

QtdLitrosNecessaria = TempoGastoViagem * VelocidadeMedia/KmL;

cout << QtdLitrosNecessaria << endl;

return 0;
}
