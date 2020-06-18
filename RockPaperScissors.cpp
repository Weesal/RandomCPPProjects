#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
   // Declare variables
   bool rock = false;
   bool scissors = false;
   bool paper = false;
   int opponent, userChoiceInteger;
   string userChoice;
   string tie = "You tied!";
   string win = "You win!";
   string lose = "You lose!";
   
   // Create computer choice
   srand(time(0));
   opponent = rand() % 10;
   
   if (opponent >= 0 && opponent <= 3)
      rock = true;
   else if (opponent > 3 && opponent <= 6)
      paper = true;
   else if (opponent > 6 && opponent <= 9)
      scissors = true;
   else
      cout << "Error. The computer didn't choose. It wants to stop playing" << endl;
      
   // Prompt user for a choice
   cout << "Enter rock, paper, or scissors: ";
   cin >> userChoice;
   
   if (userChoice == "rock" || userChoice == "Rock")
      userChoiceInteger = 0;  
   else if (userChoice == "paper" || userChoice == "Paper")
      userChoiceInteger = 1;      
   else if (userChoice == "scissors" || userChoice == "Scissors")
      userChoiceInteger = 2;
   
   // Compare the values
   if (rock)
   {
      switch(userChoiceInteger)
      {
         case 0: cout << tie << endl;
         break;
         case 1: cout << win << endl;
         break;
         case 2: cout << lose << endl;
         break;
      }
   }
   else if (paper)
   {
      switch(userChoiceInteger)
      {
         case 0: cout << lose << endl;
         break;
         case 1: cout << tie << endl;
         break;
         case 2: cout << win << endl;
         break;
      }
   }      
   else if (scissors)
   {
      switch(userChoiceInteger)
      {
         case 0: cout << win << endl;
         break;
         case 1: cout << lose << endl;
         break;
         case 2: cout << tie << endl;
         break;
      }      
   }     
         
   return 0;
}