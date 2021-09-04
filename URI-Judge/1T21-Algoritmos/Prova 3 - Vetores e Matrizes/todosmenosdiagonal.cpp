#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
   freopen("entrada.in.c","r",stdin);
   cout << fixed << setprecision(1);
   double matriz[20][20];

   for (int i=0; i<20; i++){
      for (int j=0; j<20; j++){
         cin >> matriz[i][j];
      }
   }
   double soma = 0;
   for (int i=0; i<=18; i++){
      for (int j=i+1; j<20; j++){
         soma = soma + matriz[i][j];
      }
   }
   double soma1 = 0;
   for (int i=1; i<=19; i++){
      for (int j=0; j<i; j++){
         soma1 = soma1 + matriz[i][j];
      }
   }
      cout << soma + soma1 << endl;

   return 0;
}
