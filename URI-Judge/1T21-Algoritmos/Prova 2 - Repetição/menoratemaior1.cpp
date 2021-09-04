#include <iostream>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int M,N;
    int maior, menor,soma;
    int x;

cin >> M >> N;
soma = 0;
while(M>0 && N>0)
{
      if (M>=N){
            maior = M;
            menor = N;
        } else {
            maior = N;
            menor = M;
        }
            for (x = menor; x<=maior; x++){
                soma = soma+x;
                cout << x << endl;
                }
                cout << soma << endl;

                cin >> M >> N;
                soma = 0;
}
    return 0;
}
