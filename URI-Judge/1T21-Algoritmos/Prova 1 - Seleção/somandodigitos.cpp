#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main (){

int N, resto, somatorio;

cin >> N;

while(N>0){
    resto=N%10;
    N=(N-resto)/10;
    somatorio=somatorio+resto;
}
    cout << somatorio << endl;
return 0;
}
