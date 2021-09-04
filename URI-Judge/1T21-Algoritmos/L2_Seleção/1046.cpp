#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    int A, B;

    cin >> A >> B;

    if (B <= A) B += 24; {
        cout << "O JOGO DUROU " << B - A << " HORA(S)" << endl;
    }

    return 0;
}
