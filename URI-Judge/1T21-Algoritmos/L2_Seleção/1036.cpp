#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    cout << fixed << setprecision(5);

    double a, b, c, R1, R2, delta;

    cin >> a;
    cin >> b;
    cin >> c;

    delta =  pow(b,2)-4*a*c;
    if (a==0 or delta < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
    R1 = (-b + sqrt(delta)) / (2 * a);
    R2 = (-b - sqrt(delta)) / (2 * a);

    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
    }
return 0;
}
