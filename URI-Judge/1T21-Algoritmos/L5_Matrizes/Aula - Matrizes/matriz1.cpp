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
   for (int i=0; i<10; i++){
      for (int j=0; j<10; j++){
         cout << matriz[i][j] <<" ";
      }
      cout << endl;
   }

   return 0;
}
