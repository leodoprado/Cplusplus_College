
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int cont;
    int n;
    int x;

    cin >> n;

    for(cont = 1; cont <= n; cont++){
        cin >> x;
        if(x == 0){
            cout << "NULL\n";
        } else {
            if(x%2 == 0) { cout << "EVEN "; }
            else { cout << "ODD "; }
        }
            if(x > 0){ cout << "POSITIVE\n"; }
            else {
                if(x < 0){
                cout << "NEGATIVE\n"; }
    }
    }

    return 0;
}
