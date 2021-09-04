#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

int i=0, n=0, in=0, out=0;

cin >> n;

int valores[n];

for(i=0; i<n; i = i+1){
    cout << valores[i] << endl;
}
for (i=0; i<n; i++){
    if(valores[i] >= 10 && valores[i] <= 20) in++;
    else out++;
}

cout << in << " in" << endl;
cout << out << " out" << endl;

return 0;
}
