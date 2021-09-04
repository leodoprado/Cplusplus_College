#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

double Nota1=3.5, Nota2=7.5, Media;

cout << fixed << setprecision (5);


cin >> Nota1;

cin >> Nota2;

Media = (Nota1 * 3.5 + Nota2 * 7.5) / 11;

cout << "MEDIA = " << Media << endl;

return 0;
}
