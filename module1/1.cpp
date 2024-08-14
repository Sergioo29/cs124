
/***********************************************************************
* Program:
*    Assignment 11, Output
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    This is a program to display an example of a simple personal budget
*  may look like.
*
*    Estimated:  4.0 hrs
*    Actual:     5.4 hrs
*      The space fields formatting was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * The main function here is a "cout" showing a chart of a monthly budget.
 ***********************************************************************/
int main()
{
  // configure the output to display money
   cout.setf(ios::fixed); // no scientific notation except for the deficit
   cout.setf(ios::showpoint); // always show the decimal point, for cents
   cout.precision(2); // two decimals for cents

   cout << "\tItem           Projected" << endl;
   cout << "\t=============  ==========" << endl;
   cout << "\tIncome         " << "$"
        << setw(9) << 1000. << endl;
   cout << "\tTaxes          " << "$"
        << setw(9) << 100. << endl;
   cout << "\tTithing        " << "$"
        << setw(9) << 100. << endl;
   cout << "\tLiving         " << "$"
        << setw(9) << 650. << endl;
   cout << "\tOther          " << "$"
        << setw(9) << 90. << endl;
   cout << "\t=============  ==========" << endl;
   cout << "\tDelta          " << "$"
        << setw(9) << 60. << endl;
   return 0;
}
