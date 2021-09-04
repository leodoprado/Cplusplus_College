#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    int horaini, horafim, minini, minfim;
    int tempoini, tempofim, resultmin, resulthora, tempo;

    cin >> horaini >> minini;
    cin >> horafim >> minfim;

    tempoini = horaini*60 + minini;
    tempofim = horafim*60 + minfim;

    if (tempofim > tempoini) {
        tempo = tempofim - tempoini;
    } else {
        tempo = 24*60 - tempoini + tempofim;
    }

    resulthora= tempo / 60;
    resultmin= tempo % 60;
    cout << "O JOGO DUROU " << resulthora << " HORA(S) E " << resultmin << " MINUTO(S)" << endl;

    return 0;
}
