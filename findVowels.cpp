#include <iostream>
#include <string>
using namespace std;

/* Hello. This program goes through every single character a user enters
   into the string and finds the amounts of vowels
   I DID NOT INCLUDE ANYTHING TO DO WITH THE (sometimes) VOWEL 'Y'
   Feel free to download and modify
*/

int main()
{
   // Prompt the user for a string
   string userString;
   cout << "Please enter a string: ";
   getline(cin, userString, '\n');
   
   // Remember the amount of characters entered
   int characterAmount;
   int lastCharacter = 0;
   characterAmount = userString.length();
   
   // Go through the string to find any vowels
   int vowelAmount = 0;
   while (lastCharacter != characterAmount)
   {
      if (userString.at(lastCharacter) == 'a' || userString.at(lastCharacter) == 'A' ||
         userString.at(lastCharacter) == 'e' || userString.at(lastCharacter) == 'E' ||
         userString.at(lastCharacter) == 'i' || userString.at(lastCharacter) == 'I' ||
         userString.at(lastCharacter) == 'o' || userString.at(lastCharacter) == 'O' ||
         userString.at(lastCharacter) == 'u' || userString.at(lastCharacter) == 'U')
         {
         vowelAmount++;
         cout << "Found a vowel!" << endl;
         }
      else
      {
         cout << "Moved to the next character" << endl;
      }
      
      lastCharacter++;
   }
   
   // Print the result
   cout << "There are " << vowelAmount << " vowel(s) in this string." << endl;

   return 0;
}