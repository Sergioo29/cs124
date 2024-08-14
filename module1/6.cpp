/***********************************************************************
* Program:
*    Assignment 16, If
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    This program determine which tax bracket a user is in.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*      Combining multiple ifs.
************************************************************************/

#include <iostream>
using namespace std;

double income;
double bracket;

/**********************************************************************
 * Determine which tax bracket a user is in
 ***********************************************************************/
double computeTax(double income)
{
   if (income >= 0 && income <= 15100)
   bracket = 10;
   else if (income >= 15100 && income <= 61300)
   bracket = 15;
   else if (income >= 61300 && income <= 123700)
   bracket = 25;
   else if (income >= 123700 && income <= 188450)
   bracket = 28;
   else if (income >= 188450 && income <= 336550)
   bracket = 33;
   else if (income > 336550)
   bracket = 35;
   return bracket;
}

/**********************************************************************
 * Prompts the user for his or her income and calcs the bracket.
 ***********************************************************************/
int main()
{
   cout << "Income: ";
   cin >> income;

   computeTax (income);

   cout << "Your tax bracket is " << bracket << "%" << endl;
   return 0;
}
