#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

   int i, total, n, l, C=0, R=0, S=0;
   char c;
   double x, y, z;


    cin >> n;

   for(i = 0; i < n; i++){
       cin >> l >> c;

        if(c=='S') S+=1;
        else if(c=='R') R+=1;
        else C+=1;
   }

   total = C+S+R;
   x = (C*100.00)/total;
   y = (S*100.00)/total;
   z = (R*100.00)/total;

   cout << "Total: " << total << " cobaias" << endl;
   cout << "Total de coelhos: " << C << endl;
   cout << "Total de ratos: " << R << endl;
   cout << "Total de sapos: " << S << endl;
   cout << "Percentual de coelhos: " << x << " %" << endl;
   cout << "Percentual de ratos: " << y << " %" << endl;
   cout << "Percentual de sapos: " << z << " %" << endl;

    return 0;
}
