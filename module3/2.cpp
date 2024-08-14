/***********************************************************************
* Program:
*    Assignment 32, Strings
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*     You give me a simple string and a letter, and I will give you how many
*  of that latter your string has!
*
*    Estimated:  3.0 hrs
*    Actual:     4.0 hrs
*      Hard: Instead of the normal cin, we had to use "getline" and "ignore"
*            that are new features.
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

   for (int i = 0; text[i]; i++)
   {
      if (text[i] == letter)
         sum+= 1;
   }
   return sum;
}



/**********************************************************************
 * Main
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
