#include <iostream>
using namespace std;

int calculateFactorial(int value)
{
   int factorial = 1;
   for (int i = 1; i <= value; i++)
   {
      factorial = factorial * i;
   }
   return factorial;
}

int main()
{
   int input = 5;

   int factorialResult = calculateFactorial(input);
   cout << factorialResult;
}