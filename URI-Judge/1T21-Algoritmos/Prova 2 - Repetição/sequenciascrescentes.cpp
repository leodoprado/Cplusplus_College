#include <iostream>

using namespace std;

int main(){

    int i;
    int n;

    while(1){
        cin >> n;
        if(n == 0)
        break;
        for(i = 1; i <=n; i++)
            cout << i;
            cout << "\n";
    }
    return 0;
}
