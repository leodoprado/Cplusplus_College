#include <iostream>
#include <cstdio>
#define TAM 10

using namespace std;

int main() {
   freopen("entrada.in.c","r",stdin);
   int matriz[TAM][TAM];
   ///    L  C
   for (int i=0; i<10; i++){
      for (int j=0; j<10; j++){
         cin >> matriz[i][j];
      }
   }
   int soma = 0;
   int cont = 0;
   for (int i=0; i<10; i++){
        soma = soma + matriz[i][i];
        cont++;
   }
   for (int i=10; i>=0; i--){
        soma = soma + matriz[i][i];
        cont++;
   }
   cout << soma << endl;
   ///Soma de todos elementos da
   ///diagonal principal

   return 0;
}
