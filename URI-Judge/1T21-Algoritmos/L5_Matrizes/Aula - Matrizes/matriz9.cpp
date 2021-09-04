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
   ///Verde
   for (int i=0; i<=3; i = i+1){
      for (int j=i+1; j<=8-i; j=j+1){
         cout << matriz[i][j]<< "+";
         soma = soma + matriz[i][j];
         cont++;
      }
      cout << endl;
   }
   cout << soma << endl;
   soma = 0;
   ///Amarelo
   for (int i=6; i<=9; i = i+1){
      for (int j=10-i; j<=i-1; j=j+1){
         cout << matriz[i][j]<< "+";
         soma = soma + matriz[i][j];
         cont++;
      }
      cout << endl;
   }
   cout << soma << endl;

/// Mostrar soma dos elementos marcados
/// em verde e em amarelo
   return 0;
}
