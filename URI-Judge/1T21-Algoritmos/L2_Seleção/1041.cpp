#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){

 double x, y;

 cin >> x;
 cin >> y;

 if (x == 0 and y == 0) {
    cout << "Origem" << endl;
 } else
    if (y == 0 and x != 0) {
        cout << "Eixo X" << endl;
    } else
        if (y!= 0 and x == 0) {
            cout << "Eixo Y" << endl;
        } else
            if (x > 0 and y > 0) {
                cout << "Q1" << endl;
            } else
                if (x < 0 and y > 0) {
                    cout << "Q2" << endl;
                } else
                    if (x < 0 and y < 0) {
                        cout << "Q3" << endl;
                    } else
                        if (x > 0 and y < 0) {
                            cout << "Q4" << endl;
                        }
return 0;
}
