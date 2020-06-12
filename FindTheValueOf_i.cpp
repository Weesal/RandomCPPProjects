#include <iostream>
using namespace std;

/* This program finds the value of i after applying 
   any integer value to it's power.
*/

int main()
{
   // Prompt user to enter what power i is to
   cout << "Please enter what power i is to: ";
   int powerOfI;
   cin >> powerOfI;
   
   // Calculate what i would be
   int remainder;
   string iToThe;
   remainder = powerOfI % 4;
   
   // Determine i based on the left over power
   if (remainder == 1)
      iToThe = "i";
   else if (remainder == 2)
      iToThe = "-1";
   else if (remainder == 3)
      iToThe = "-i";
   else if (remainder == 4)
      iToThe = "1";
   else if (remainder == 0)
      iToThe = "1";
      
   // Display the result
   cout << "i to the " << powerOfI << " is " << iToThe << endl;
   
   return 0;
}