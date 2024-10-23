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

   bool result = primeOrNot(n);

   if (result)
   {
      cout << "Prime" << endl;
   }
   else
   {
      cout << "Not a Prime" << endl;
   }
}