#include <iostream>
using namespace std;

int main()
{
      int n = 4; // Number of rows
      int index = 1;
      // Loop for the upper part of the pattern
      for (int i = 0; i < n; i++)
      {
            int printableIndex = 0;
            for (int j = 0; j < 2 * i + 1; j++)
            {
                  if (j == printableIndex)
                  {
                        cout << index;
                        index++;
                        printableIndex += 2;
                  }
                  else
                  {
                        cout << "*";
                  }
            }
            cout << endl;
      }

      // Loop for the lower part of the pattern
      for (int i = 0; i < n; i++)
      {
            int printableIndex = 0;
            for (int j = 0; j < 2 * n - 2 * i; j++)
            {
                  if (j == printableIndex)
                  {
                        cout << index;
                        index++;
                        printableIndex += 2;
                  }
                  else
                  {
                        cout << "*";
                  }
            }
            cout << endl;
      }

      return 0;
}