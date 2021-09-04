#include <iostream>
#include <cstdio>

using namespace std;

int main() {
   //freopen("entrada.in.c","r",stdin);
   int matriz[20][20];

   for (int i=0; i<20; i++){
      for (int j=0; j<20; j++){
         cin >> matriz[i][j];
      }
   }
   int soma = 0;
   for (int i=0; i<=18; i++){
      for (int j=i+1; j<20; j++){
         soma = soma + matriz[i][j];
      }
   }
   int soma1 = 0;
   for (int i=1; i<=19; i++){
      for (int j=0; j<i; j++){
         soma1 = soma1 + matriz[i][j];
      }
   }
      cout << soma + soma1 << endl;

   return 0;
}
