#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    double N[100];
    double X;
    int i;
    
    cin >> X;
    N[0] = X;
    
    for(i = 1; i <= 99; i++){
        N[i] = N[i-1]/2.0;
    }
    for(i = 0; i <= 99; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }
   

    return 0;
}
