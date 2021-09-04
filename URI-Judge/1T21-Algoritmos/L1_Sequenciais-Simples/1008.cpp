#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

int NMR_FUN, HRS_TRA;
double VALOR_HR, SALARIO;

cout << fixed << setprecision (2);

cin >> NMR_FUN;
cin >> HRS_TRA;
cin >> VALOR_HR;

SALARIO = HRS_TRA * VALOR_HR;

cout << "NUMBER = " << NMR_FUN << endl;
cout << "SALARY = U$ " << SALARIO << endl;

return 0;
}
