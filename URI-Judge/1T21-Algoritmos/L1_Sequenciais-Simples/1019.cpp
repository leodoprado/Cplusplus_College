#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int segundos, horas, minutos;

cin >> segundos;

horas = segundos / 3600;
minutos = (segundos % 3600)/60;
segundos = ((segundos % 3600) % 60);

cout << horas << ":" << minutos << ":" << segundos << endl;

return 0;
}
