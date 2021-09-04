#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    double X[100];
    int N, i;

    for (i=0; i<100; i++) {
        cin >> X[i];

        if(X[i]<0) {
            X[i] = X[i] * -3;
        } else {
            X[i] = X[i] * 3;
        }
    }

    for (i=0; i<100; i++) {
        cout << "Y[" << i << "]=" << X[i] << endl;
    }

    cin >> N;

    cout << "Y[" << N << "]=" << X[N] << endl;

    return 0;
}
