
/***********************************************************************
* Program:
*    Assignment 12, Input & Variables
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    This program will store a information you put on and give you some
* information about money.
*
*    Estimated:  5.0 hrs
*    Actual:     3.0 hrs
*      The testBed wanting a specific space between the dollar sign and The
* displayed value was the hardest part to figure out how to do it.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * The function "main" does cout a question and store the given information
 * into a variable to display it later.
 ***********************************************************************/
int main()
{
  // configure the display to show money.
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2); //cents

   float income;
   // Prompt the user
   cout << "\tYour monthly income: ";
   cin >> income;

   // display the results
   cout << "Your income is: $"
        << setw (9)
        << income
        << endl;
   return 0;
}
