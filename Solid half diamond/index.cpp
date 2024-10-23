#include <iostream>
using namespace std;

int main()
{
      int n = 5;
      int num = 0;

      for (int i = 0; i < 2 * n - 1; i++)
      {
            int condition;
            if (i < n)
            {
                  condition = i + 1;
            }
            else
            {
                  condition--;
            }

            for (int j = 0; j < condition; j++)
            {
                  cout << "*";
            }

            cout << endl;
      }
}