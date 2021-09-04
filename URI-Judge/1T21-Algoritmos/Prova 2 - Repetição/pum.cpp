#include <iostream>
using namespace std;
int main(){

    int n;
    int i;

    cin >> n;
    for(int i = 0; i < n*4; i = i + 4){
            cout << i+1 << " " << i+2 << " " << i+3 << " PUM\n";

    }
    return 0;
}
