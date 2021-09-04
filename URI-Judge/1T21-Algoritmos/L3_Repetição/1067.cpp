#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

   int i;
   int x;

   cin >> x;

   i = 1;
   while (i <= x){
        if (i%2 != 0) {
            cout << i << endl;
        }
    i = i+1;
   }

   return 0;
}
