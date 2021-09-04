#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

double Raio, PI=3.14159, VOLUME;

cout << fixed << setprecision (3);

cin >> Raio;

VOLUME = (4/3.0) * PI*Raio*Raio*Raio;

cout << "VOLUME = " << VOLUME << endl;


return 0;

}