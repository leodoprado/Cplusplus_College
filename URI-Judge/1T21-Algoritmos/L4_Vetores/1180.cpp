#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int X[N];
    int i;
    int menor, posicao;
    
    cin >> X[0];
    menor = X[0];
    posicao = 0;
    
    for(i =1; i < N; i++){
        cin >> X[i];
        if(X[i] < menor){
            menor = X[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}