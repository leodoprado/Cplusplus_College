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
   for (int i=0; i<=8; i++){
      for (int j=i+1; j<10; j++){
         cout << matriz[i][j]<< "+";
         soma = soma + matriz[i][j];
      }
      cout << endl;
   }
   cout << soma << endl;
//linha i=0, comeca coluna 1
//linha i=1, comeca na coluna 2
//sempre termina na coluna 9
   return 0;
}
