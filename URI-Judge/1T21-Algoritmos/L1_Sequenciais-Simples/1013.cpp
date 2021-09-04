#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int a, b, c, MaiorAB, Maior;

cin >> a;
cin >> b;
cin >> c;

MaiorAB = (a + b + abs(a-b))/2.0;

Maior = (MaiorAB + c + abs(MaiorAB-c))/2.0;

cout << Maior << " eh o maior" << endl;

return 0;
}