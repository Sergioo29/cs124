/***********************************************************************
* Program:
*    Project 03, Monthly Budget
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    This programs keeps track of your monthly budget.
*
*    Estimated:  3.0 hrs
*    Actual:     0.0 hrs
*      Doing the expressions.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
*  It will prompt the user for his expenditures, save on variables and then
* show it all graphically.
***********************************************************************/
int main ()
{
  // Display money
   cout.setf(ios::fixed); // no scientific notation except for the deficit
   cout.setf(ios::showpoint); // always show the decimal point, for cents
   cout.precision(2); // two decimals for cents

   float income;
   float bliving;
   float aliving;
   float tax;
   float tith;
   float other;

   cout << "This program keeps track of your monthly budget" << endl;
   cout << "Please enter the following:" << endl;
// Prompt the user
   cout << "\tYour monthly income: ";
   cin >> income;
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   cout << "\tYour actual living expenses: ";
   cin >> aliving;
   cout << "\tYour actual taxes withheld: ";
   cin >> tax ;
   cout << "\tYour actual tithe offerings: ";
   cin >> tith;
   cout << "\tYour actual other expenses: ";
   cin >> other;

   cout << endl;
// display the results
   cout << "The following is a report on your monthly expenses" << endl;

   cout << "\tItem                  Budget          Actual" << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tIncome          " << "$"
        << setw(11) << income << "    $"
        << setw(11) << income << endl;
   cout << "\tTaxes           " << "$"
        << setw(11) << 0. << "    $"
        << setw(11) << tax << endl;
   cout << "\tTithing         " << "$"
        << setw(11) << income / 10 << "    $"
        << setw(11) << tith << endl;
   cout << "\tLiving          " << "$"
        << setw(11) << bliving << "    $"
        << setw(11) << aliving << endl;
   cout << "\tOther           " << "$"
        << setw(11) << income - (income / 10) - bliving << "    $"
        << setw(11) << other << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tDifference      " << "$"
        << setw(11) << 0. << "    $"
        << setw(11) << income - tax - tith - aliving - other << endl;
   return 0;
}
