// *** Finds if the entered point is within the triangle *** \\

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double userX, userY;
   double triangleY;
   
   cout << "Enter a point's x- and y-coordinates: ";
   cin >> userX >> userY;
   
   triangleY = (-0.5) * userX + 100;
   
   if (userY > triangleY)
   {
      cout << "The point is not within the triangle" << endl;
      cout << showpoint << triangleY << endl;
   }
   else
   {
      cout << "The point is in the triangle" << endl;
      cout << showpoint << triangleY << endl;
   }
     
   return 0;
}