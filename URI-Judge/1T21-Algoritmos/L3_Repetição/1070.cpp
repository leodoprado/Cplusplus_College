#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

   int x;
   int impar;

   cin >> x;

   impar = 0;
   while(impar < 6){

        if(x%2 != 0){
            cout << x << endl;
            impar = impar + 1; }

    x = x+1; }

 return 0;
}
