//#include <iostream>
//#include <cstdlib>
#include <bits/stdc++.h> //substitui todas as libs
using namespace std;

int main() {

    string linha;
    cin >> linha;
    while (linha[0] != '-'){
        if (linha.size()>1 and linha[1] == 'x'){
            /// hexa p decimal
            cout << dec << strtol(linha.c_str(), NULL, 16) << endl;
        } else {
            /// decimal p/ hexa
            cout << "0x" << uppercase;
            cout << hex << strtol(linha.c_str(), NULL, 10) << endl;
            cout << dec;
        }
            cin >> linha;
    }
return 0;
}
