#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

   int i;
   int p;
   double x;

   p = 0;

   i = 1;
   while (i <= 6){
        cin >> x;
        if (x > 0.0)
            p = p + 1;
    i = i+1;
   }

   cout << p << " valores positivos\n";

   return 0;
}
