#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592654

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double A, B, C;
    double angulo, distancia, totalDistancia;

    while(cin >> A >> B >> C)
    {
        angulo = tan(A * PI / 180);

        distancia = B * angulo;

        totalDistancia = distancia + C;

        cout << totalDistancia * 5 << endl;
    }

return 0;
}
