#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision (2);

    double valor, pagamento, i;

    cin >> valor >> pagamento;

    if (pagamento ==1 ) {
        i = valor * 10/100.0;
        valor = valor - i;
        cout << valor << endl;
    }
    else if (pagamento == 2) {
        cout << valor << endl;
    }

    else if (pagamento == 3) {
    i = valor * 8/100.0;
    valor = valor + i;
    cout << valor << endl;
    }

    return 0;
}
