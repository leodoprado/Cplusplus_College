#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << fixed << setprecision(1);
    double P1[30], P2[30], P3[30], P4[30];

          for (int a = 0; a <30; a++)
            {
              cin >> P1[a];
            }
          for (int b = 0; b < 30; b++)
            {
              cin >> P2[b];
            }
          for (int c = 0; c < 30; c++)
            {
              cin >> P3[c];
            }
          for (int d = 0; d < 30; d++)
            {
              cin >> P4[d];
            }
  double M[30];

      for (int i = 0; i < 30; i++)
        {
          M[i] = (P1[i] * 2 + P2[i] * 2 + P3[i] * 3 + P4[i] * 3) / 10;
        }

      for (int j = 0; j < 30; j++)
        {
          cout << M[j] << endl;
        }

         int N;
      cin >> N;

          if (N >= 0 and N < 30)
            {
              cout << M[N] << endl;
            }

      return 0;
    }
