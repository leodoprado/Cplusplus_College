#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//cout << fixed << setprecision(1);
   int N[1000];
   int i;
   int t;

    cin >> t;

   for(i = 0; i <= 999; i++){
        N[i] = i%t;
   }
   for(i = 0; i <= 999; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
   }

    return 0;
}
