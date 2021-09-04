#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    double R[40];
    double den = 1.0;
    double N = 1.0;
    int x;
    cin >> x;
for(int i = 0; i<40; i ++){
    R[i] = pow(x,N)/den;

    N = N + 1.0;
    den = den + 4.0;
    }
for(int i = 39; i>=0;i = i - 1){
    cout << "R[" <<i <<"]=" << R[i] << endl;
    }

    return 0;
}
