#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int main(){
	int n,exp,x,cont = 2,i,j;
	bool valida,primos[32767];
	string s;
	primos[0] = primos[1] = false;
	for(i = 2; i < 1000; i++){
		valida = true;
		for(j = 2; j < (i/2+1); j++){
			if(i % j == 0){
				valida = false;
				break;
			}
		}
		if(valida){
			primos[cont++] = true;
		}else{
			primos[cont++] = false;
		}
	}
	cont=0;
   for (i=100;cont < 100; i++) {
      if (primos[i]) {
         cout << i << " ";
         cont ++;
      }

   }
	return(0);
}
