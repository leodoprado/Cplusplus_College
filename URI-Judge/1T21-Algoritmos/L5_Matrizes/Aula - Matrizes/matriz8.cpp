#include <iostream>
#include <cstdio>
#define TAM 10

using namespace std;

int main() {
   freopen("entrada.in","r",stdin);
   int matriz[TAM][TAM];
   ///    L  C
   for (int i=0; i<10; i++){
      for (int j=0; j<10; j++){
         cin >> matriz[i][j];
      }
   }
   double soma = 0;
   int cont = 0;
   for (int i=0; i<=9; i = i+1){
      for (int j=1; j<=9; j=j+2){
         cout << matriz[i][j]<< "+";
         soma = soma + matriz[i][j];
         cont++;
      }
      cout << endl;
   }
   cout << soma/cont << endl;
/// Mostrar soma dos elementos marcados
/// em verde e em amarelo
   return 0;
}
