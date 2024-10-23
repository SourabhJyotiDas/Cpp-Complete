#include <iostream>
using namespace std;

int main()
{
      // cout << "Hello World";

      int n = 5;

      for (int i = 0; i < n; i++)
      {
            for (int j = i + 1; j <= n; j++)
            {
                  if (i == 0 || j == n || j == i + 1)
                  {
                        cout << j;
                  }
                  else
                  {
                        cout << " ";
                  }
            }

            cout << endl;
      }
}