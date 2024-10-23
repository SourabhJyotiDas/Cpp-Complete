#include <iostream>
using namespace std;

int main()
{
   int n = 5;

   for (int i = 0; i < n; i++)
   {
      int c = 1;

      for (int j = 0; j < i + 1; j++)
      {
         cout << c << " ";
         c = c * (i - j) / j;
      }
      cout << endl;
   }
}