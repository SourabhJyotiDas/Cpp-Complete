#include <iostream>
using namespace std;

int main()
{

   int n = 7;

   for (int i = 0; i < n; i++)
   {
      int num = 1;
      int condition;
      if (i < n / 2 + 1)
      {
         condition = 2 * i + 1;
      }
      else
      {
         condition -= 2;
      }

      for (int j = 0; j < condition; j++)
      {
         if (j == 0 || j == condition - 1)
         {
            cout << "*";
         }
         else if (j < condition / 2)
         {
            cout << num;
            num++;
         }
         else
         {
            cout << num;
            num--;
         }
         // cout << "*";
      }
      cout << endl;
   }
}