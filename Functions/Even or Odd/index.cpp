#include <iostream>
using namespace std;

bool CheackEvenOrOdd(int num)
{
   if ((num & 1) == 0)
   {
      cout << "True" << endl;
      return true;
   }
   else
   {
      cout << "False" << endl;
      return false;
   }
}

int main()
{
   int input = 4;

   bool output = CheackEvenOrOdd(input);
   cout << output << endl;
}