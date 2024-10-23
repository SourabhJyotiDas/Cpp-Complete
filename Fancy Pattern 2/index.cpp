#include <iostream>
using namespace std;

int main()
{
   int n = 4;
   int num = 1;

   for (int i = 0; i < n; i++)
   {
      int printAbleIndex = 0;
      for (int j = 0; j < 2 * i + 1; j++)
      {
         if (j == printAbleIndex)
         {
            cout << num;
            num++;
            printAbleIndex += 2;
         }
         else
         {
            cout << "*";
         }
      }
      cout << endl;
   }

   int start = num;

   for (int i = 0; i < n; i++)
   {

      int printAbleIndex = 0;

      int k = start - n;

      for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
      {
         if (j == printAbleIndex)
         {
            cout << k;
            k++;
            printAbleIndex += 2;
         }
         else
         {
            cout << "*";
         }
      }
      start = start - (n - i - 1);
      cout << endl;
   }
}