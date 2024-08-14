/***********************************************************************
* Program:
*    Assignment 41, Allocating memory
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    Prompt the user for the number of characters in a string.
*   Allocate a string of sufficient length.
*   Prompt the user for the string using getline().
*   Display the string back to the user.
*   Release the memory and check for allocation failures.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*    Hard:
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;


/**********************************************************************
 * Main
 ***********************************************************************/
int main()
{
   int numChar;
   int * pChar;
   pChar = &numChar; // null
   cout << "Number of characters: ";
   cin >> *pChar;
   cin.ignore();

   if (*pChar >= 0)
   {
      char * string = new(nothrow) char[*pChar + 1];
      if (!string)
         cout << "No memory!\n";

      cout << "Enter Text: ";
      cin.getline(string, *pChar + 1);

      cout << "Text: " << string << endl;

      delete [] string;
   }
   else
      cout << "Allocation failure!" << endl;

   return 0;
}
