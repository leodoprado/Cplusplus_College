
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int cont;
    int n;

    cin >> n;

    for(cont = 1; cont <= n; cont++){
        if(cont%2 == 0){

            cout << cont << "^2 = " << cont*cont << endl;
        }
    }

    return 0;
}
