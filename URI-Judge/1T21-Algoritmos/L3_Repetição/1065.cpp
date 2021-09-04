#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int x;
    int p;
    int i;

    p = 0;
    for(i = 1; i <= 5; i = i+1){
        cin >> x;
        if (x%2 == 0)
            p = p+1;
    }

    cout << p << " valores pares" << endl;

   return 0;
}
