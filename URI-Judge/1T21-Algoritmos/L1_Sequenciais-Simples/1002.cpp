#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () 
{
double raio, PI=3.14159, area;

cout << fixed << setprecision (4);

cin >> raio;

area = PI * pow(raio,2);

cout << "A=" << area << endl;

return 0;
}