#include <iostream>

int main() {


    int M,N,maior,x,menor,soma=0;

cin >> M >> N;

while(M>0 && N>0)
{


      if (M>=N)
      {
               maior = M;
               menor = N;
               }
               else
               {
                   maior = N;
                   menor = M;
                   }


                   for (x = menor; x<=maior; x++){

                   soma = soma+x;

                   cout << x << endl;


                   }
                  cout << "Soma= " << soma << endl;



                   soma = 0;

                   }
    return 0;
}
