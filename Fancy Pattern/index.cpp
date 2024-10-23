#include <iostream>
using namespace std;

int main()
{
      int n = 8;

      for (int i = 0; i < n; i++)
      {
            int printableIndex = 8 - i;
            int num = i + 1;
            int times = i + 1;

            for (int j = 0; j < 17; j++)
            {
                  if (j == printableIndex && times )
                  {
                        cout << num;
                        printableIndex += 2;
                        times--;
                  }
                  else
                  {
                        cout << "*";
                  }
            }

            cout << endl;
      }
}