#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    double A, B, C, D, R, S, T;

    cin >> A >> B >> C;

    R = pow((A * B + A), 4);
    S = pow ((B + sqrt(C + 2) + 1), 2);
    T = pow((B - 1), 4) /(R + sqrt(S + 1));
    D = pow((R + A), 2) - (S * T);

    cout << D << endl;

    return 0;
}
