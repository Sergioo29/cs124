/***********************************************************************
* Program:
*    Assignment 34, Pointer Arithmetic
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*     You give me a simple string and a letter, and I will give you how many
*  of that latter your string has!
*
*    Estimated:  2.0 hrs
*    Actual:     1.4 hrs
*    Hard: It was not hard, the book has similar examples. I just changed
*          the for loop to the standard string traversing loop with pointers.
************************************************************************/

#include <iostream>
using namespace std;


/**********************************************************************
 * An loop that check each character of the c string array to see that if
 * this char equals the letter, if so, we add to the sum.
 ***********************************************************************/
int countLetters(char letter, char text[])
{
   int sum = 0;

   for (char * p = text; *p; p++)
   {
      if (*p == letter)
         sum+= 1;
   }
   return sum;
}



/**********************************************************************
 * Main, prompts, call the other function and display.
 ***********************************************************************/
int main()
{
   cout << "Enter a letter: ";
   char letter;
   cin >> letter;

   cout << "Enter text: ";
   char text[256];
   cin.ignore();
   cin.getline(text, 256);

   int number = countLetters(letter, text);

   cout << "Number of " << "'" << letter << "'s: " <<  number << endl;

   return 0;
}
