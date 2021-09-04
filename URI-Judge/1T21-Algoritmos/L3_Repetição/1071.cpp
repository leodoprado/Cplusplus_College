#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

int x, y;
int i;
int soma = 0;

    cin >> x >> y;

    if(x < y){
        for(i = x+1; i < y; i = i+1){
            if(i%2 != 0)
                soma += i;
            }
            } else{
                for(i = y+1; i < x; i = i+1){
                if(i%2 != 0)
                    soma += i;
                }
    }

    cout << soma << endl;

return 0;
}
