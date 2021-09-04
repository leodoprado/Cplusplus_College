
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    int A, B, C, D, E, F;
    double MaiorAB, MaiorABC, MaiorABCD, MaiorABCDE, MaiorABCDEF;

    cin >> A >> B >> C >> D >> E >> F;

        MaiorAB = (A+B + abs(A-B))/2.0;
        MaiorABC = (MaiorAB + C + abs(MaiorAB-C))/2.0;
        MaiorABCD = (MaiorABC + D + abs(MaiorABC-D))/2.0;
        MaiorABCDE = (MaiorABCD + E + abs(MaiorABCD-E))/2.0;
        MaiorABCDEF = (MaiorABCDE + F + abs(MaiorABCDE-F))/2.0;

        cout << "O maior eh " << MaiorABCDEF << endl;

    return 0;
}
