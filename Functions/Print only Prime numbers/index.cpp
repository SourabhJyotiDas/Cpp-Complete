#include <iostream>
using namespace std;

bool primeOrNot(int num)
{
   for (int i = 2; i < num; i++)
   {
      if (num % i == 0)
      {
         return false;
      }
   };

   return true;
}

int main()
{

   int n = 6;

   for (int i = 2; i <= n; i++)
   {
      bool result = primeOrNot(i);
      if (result)
      {
         cout << i << " ";
      }
   }
}