#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   cout << fixed << setprecision(2);

   int i, n;
   double p;
   double media;

   p=0;
   n=0;

   while(1){
        cin >> i;

    if(i < 0)
    break;

    n+=i;
    p++;
   }

   media = n/p;

    cout << media << endl;

    return 0;
}
