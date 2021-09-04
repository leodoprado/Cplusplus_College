#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

double resol(double n1, double n2, int ataque)
{
    double prob;
    if (ataque == 3)
    {
        return n1 / (n1 + n2);
    }

    else
    {
        prob = 1 - (6 - ataque)/6.0;
        prob = (1 - prob) /  prob;
        return (1 - pow(prob, n1)) / (1 - pow(prob, n1+n2));
    }
}

int main()
{
    cout << fixed << setprecision(1);
    double probabilidade;
    int V1, V2, ataque, dano;
    int aux;

    for(;;)
    {
        cin >> V1 >> V2 >> ataque >> dano;

        if (V1 == 0 && V2 == 0 && ataque == 0 && dano == 0)
        {
            break;
        }

        aux = V1;
        V1 = 0;
        while(aux > 0)
        {
            aux -= dano;
            V1++;
        }

        aux = V2;
        V2 = 0;
        while(aux > 0)
        {
            aux -= dano;
            V2++;
        }

        probabilidade = resol(V1, V2, ataque);
        cout << probabilidade * 100 << endl;
    }
return 0;
}
