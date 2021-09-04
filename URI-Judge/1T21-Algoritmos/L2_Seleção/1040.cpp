#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    // freopen("1040.in","r",stdin);
    cout << fixed << setprecision(1);
    //def variáveis
    double N1, N2, N3, N4, Media, exame;

    //entrada
    cin >> N1 >> N2 >> N3 >> N4;

    //processamento
    Media = (N1*2+N2*3+N3*4+N4)/10;
    cout << "Media: " << Media << endl;
    if (Media <5) {
        cout << "Aluno reprovado." << endl;
    }
    if (Media >=7) {
        cout << "Aluno aprovado." << endl;
    }
    if (Media >=5 and Media <7) {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        Media = (Media + exame)/2;
        if (Media <5) {
            cout << "Aluno reprovado." << endl;
        } else {
            cout << "Aluno aprovado." << endl;
        }
        cout << "Media final: " << Media << endl;
    }
    return 0;
}