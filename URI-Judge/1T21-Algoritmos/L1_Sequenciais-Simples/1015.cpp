#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

cout << fixed << setprecision (4);

double x1, y1, x2, y2, Distancia;

cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;

Distancia = (sqrt(pow(x2-x1,2) + pow(y2-y1,2)));

cout << Distancia << endl;

return 0;
}
