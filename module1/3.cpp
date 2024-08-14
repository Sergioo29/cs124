
/***********************************************************************
* Program:
*    Assignment 13, Expressions
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A temperature converter in development!  .
*
*    Estimated:  3.0 hrs
*    Actual:     2.0 hrs
*     Setting the numbers int, float em stuff so the expression could work.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 *   A temperature converter in development. It prompts the user for a
 * Fahrenheit temperature and converts it to Celsius.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.precision(0);

   float f;

   cout << "Please enter Fahrenheit degrees: ";
   cin >> f;

   float c = 5.0 / 9.0 * (f - 32.0);

   cout << "Celsius: " << c << endl;
   return 0;
}
