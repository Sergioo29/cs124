/***********************************************************************
* Program:
*    Project 04, Monthly Budget
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    Some questions that will be prompted to calculate the user's personal
*   budget.
*
*    Estimated:  3.0 hrs
*    Actual:     3.0 hrs
*      Hard: Add the tax.
************************************************************************/

// Libraries
#include <iostream>
#include <iomanip>
using namespace std;


/**********************************************************************
*  Prompt Income
***********************************************************************/
double getIncome ()
{
   double income;
   cout << "\tYour monthly income: ";
   cin >> income;
   return income;
}


/**********************************************************************
*  Prompt Budget for Living
***********************************************************************/
double budgetLiving ()
{
   double bliving;
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   return bliving;
}


/**********************************************************************
*  Prompt the Reality
***********************************************************************/
double actualLiving ()
{
   double aliving;
   cout << "\tYour actual living expenses: ";
   cin >> aliving;
   return aliving;
}


/**********************************************************************
*  Prompt Taxes
***********************************************************************/
double getTaxes ()
{
   double tax;
   cout << "\tYour actual taxes withheld: ";
   cin >> tax ;
   return tax;
}


/**********************************************************************
*  Test from Bishop
***********************************************************************/
double Worthy ()
{
   double tith;
   cout << "\tYour actual tithe offerings: ";
   cin >> tith;
   return tith;
}


/**********************************************************************
*  Prompt Other expenses
***********************************************************************/
double getOthers ()
{
   double other;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   return other;
}


/**********************************************************************
*  The tax calculation
***********************************************************************/
double computeTax (double income)
{

   double yeari = income * 12;
   double atax;
   double btax;

   if (yeari >= 0 && yeari <= 15100)
      atax = yeari * 0.10;
   else if (yeari > 15100 && yeari <= 61300)
      atax = 1510 + 0.15 * (yeari - 15100);
   else if (yeari > 61300 && yeari <= 123700)
      atax = 8440 + 0.25 * (yeari - 61300);
   else if (yeari > 123700 && yeari <= 188450)
      atax = 24040 + 0.28 * (yeari - 123700);
   else if (yeari > 188450 && yeari <= 336550)
      atax = 42170 + 0.33 * (yeari - 188450);
   else if (yeari > 336550)
      atax = 91043 + 0.35 * (yeari - 336550);

   return btax = atax / 12;
}

/**********************************************************************
*  The tith calculation
***********************************************************************/
double computeTithing (double income)
{
   double btith;
   return btith = (income / 10);
}

/**********************************************************************
*  The rest calculation
***********************************************************************/
double computeOthers (double income, double bliving, double btith, double btax)
{
   double bother;
   return bother = (income - bliving - btith - btax);
}


/**********************************************************************
*  Show it all graphically.
***********************************************************************/
double display (double income, double bliving, double aliving, double tax,
   double tith, double other, double btith, double bother, double btax)
{
   cout << endl;
   cout << "The following is a report on your monthly expenses" << endl;

   cout << "\tItem                  Budget          Actual" << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tIncome          " << "$"
        << setw(11) << income << "    $"
        << setw(11) << income << endl;
   cout << "\tTaxes           " << "$"
        << setw(11) << btax << "    $"
        << setw(11) << tax << endl;
   cout << "\tTithing         " << "$"
        << setw(11) << btith << "    $"
        << setw(11) << tith << endl;
   cout << "\tLiving          " << "$"
        << setw(11) << bliving << "    $"
        << setw(11) << aliving << endl;
   cout << "\tOther           " << "$"
        << setw(11) << bother << "    $"
        << setw(11) << other << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tDifference      " << "$"
        << setw(11) << income - btax - btith - bliving - bother << "    $"
        << setw(11) << income - tax - tith - aliving - other << endl;
   return 0;
}

/**********************************************************************
*  The delegator.
***********************************************************************/
int main ()
{

// Display of money
   cout.setf(ios::fixed); // no scientific notation except for the deficit
   cout.setf(ios::showpoint); // always show the decimal point, for cents
   cout.precision(2); // two decimals for cents

// Start
   cout << "This program keeps track of your monthly budget" << endl;
   cout << "Please enter the following:" << endl;

// Prompts
   double income = getIncome ();
   double bliving = budgetLiving ();
   double aliving = actualLiving ();
   double tax = getTaxes ();
   double tith = Worthy ();
   double other = getOthers ();

// Calculations
   double btax = computeTax (income);
   double btith = computeTithing (income);
   double bother = computeOthers (income, bliving, btith, btax);

// Results
   display (income, bliving, aliving, tax, tith, other, btith, bother, btax);

   return 0;
}
