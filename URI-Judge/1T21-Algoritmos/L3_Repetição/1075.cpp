
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int i;
    int n;

    cin >> n;

    for(i = 1; i <= 1000; i++){
        if(i % n == 2){
            cout << i << endl;
        }
    }


    return 0;
}
