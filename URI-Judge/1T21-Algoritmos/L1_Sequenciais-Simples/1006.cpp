#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

double NotaA=2, NotaB=3, NotaC=5, Media;

cout << fixed << setprecision(1);

cin >> NotaA;

cin >> NotaB;

cin >> NotaC;

Media = (NotaA * 2 + NotaB * 3  + NotaC * 5 ) / 10;


cout << "MEDIA = " << Media << endl;

return 0;
}
