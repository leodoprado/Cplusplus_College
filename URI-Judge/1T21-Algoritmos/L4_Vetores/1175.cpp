#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//cout << fixed << setprecision(1);
   double N[20];
   int i;
   int x;
   
   
   for(i = 0; i <= 19; i++){
        cin >> N[i];
     
   }
   
   for(i = 0; i <= 9; i++){
        x = N[i];
        N[i] = N[19-i];
        N[19-i] = x;
       }
    
    for(i = 0; i <= 19; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
     
   }
   
   
   
    return 0;
}
