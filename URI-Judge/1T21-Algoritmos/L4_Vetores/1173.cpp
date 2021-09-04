#include <iostream>

using namespace std;

int main()
{
   int N[10];
   int i;
   
   cin >> N[0];
   
   for(i = 1; i <= 9; i++){
       N[i] = N[i-1] *2;
   }
   
   for(i = 0; i <= 9; i++){
       cout << "N[" << i << "] = " << N[i] << endl;
   }
   
    return 0;
}