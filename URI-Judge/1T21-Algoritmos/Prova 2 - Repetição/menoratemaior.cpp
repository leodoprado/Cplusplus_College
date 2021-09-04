#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
   // freopen("1.sol","w",stdout);
    cout << fixed << setprecision(1);
    double i,j;
    for (i=1000,j=2; j<=60; i=i-20,j=j+2) {
        cout << i/j << endl;
    }

    return 0;
}
