#include <iostream>
using namespace std;

float circleArea(float radious)
{
   float area = 3.14 * radious * radious;
   return area;
}

int main()
{
   int radious = 5;

   float outputOfCircleArea = circleArea(radious);
   cout << outputOfCircleArea << endl;
}