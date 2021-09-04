#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   cout << fixed << setprecision(1);

   int a;
   int n
   int i;
   int x;
   int p, mediap, somap;

   cin >> a;

   for(i = 1; i < a; i++){
        cin >> x;

        if(x > 0.0){
            p++;
            somap = somap + x;
        }
        if(x < 0.0){
            n++;
            somap = somap + x;
        }

   }

   mediap = somap/p;

   cout << mediap << endl;

    return 0;
}

