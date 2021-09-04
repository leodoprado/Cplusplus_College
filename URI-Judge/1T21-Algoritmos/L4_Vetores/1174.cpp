#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
   double A[100];
   int i;
   
   
   for(i = 0; i <= 99; i++){
       cin >> A[i];
     
   }
   
   for(i = 0; i <= 99; i++){
       if(A[i] <= 10.0){
       cout << "A[" << i << "] = " << A[i] << endl;
       }
   }
   
   
    return 0;
}

