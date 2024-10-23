#include <iostream>
using namespace std;

int main()
{
      int n = 5;

      for (int row = 0; row < n; row++)
      {
            for (int column = 0; column < row + 1; column++)
            {
                  if (column == 0 || column == row || row == n - 1)
                  {
                        cout << column + 1;
                  }
                  else
                  {
                        cout << " ";
                  }
            }
            cout << endl;
      }
}