#include <iostream>
using namespace std;

int main()
{
      int n = 5;

      for (int i = 0; i < n; i++)
      {
            int k = n + i;
            int num = 1;

            for (int j = 0; j < k; j++)
            {
                  if (j < n - i - 1)
                  {
                        cout << "*";
                  }
                  else if (j < n)
                  {
                        cout << num;
                        num++;
                  }
                  else if (j == n)
                  {
                        num = num - 2;
                        cout << num;
                        num--;
                  }
                  else
                  {
                        cout << num;
                        num--;
                  }
            }

            cout << endl;
      }
}