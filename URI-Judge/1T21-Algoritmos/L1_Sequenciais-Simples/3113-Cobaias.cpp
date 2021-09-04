
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    cout << fixed << setprecision (2);

    int qtdCoelhos, qtdRatos, Total;
    double percentualCoelhos, percentualRatos, totalCoelhos, totalRatos;


    cin >> qtdCoelhos >> qtdRatos;

    Total = qtdCoelhos + qtdRatos;
    totalCoelhos = Total - qtdRatos;
    totalRatos = Total - qtdCoelhos;
    percentualCoelhos = totalCoelhos / Total *100;
    percentualRatos = totalRatos / Total *100;

    cout << "Total de cobaias: " << Total << endl;
    cout << "% de coelhos: " << percentualCoelhos << endl;
    cout << "% de ratos: " << percentualRatos << endl;


    return 0;
}
