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
*    Actual:     5.0 hrs
*    Hard: How to pass data between expressions.
************************************************************************/

// Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Variables
double income;
double bliving;
double aliving;
double tax;
double tith;
double other;
double btith;
double bother;
double btax = 0; // and will still be zero = no taxes goal ;)

/**********************************************************************
*  Prompt Income
***********************************************************************/
double getIncome ()
{
   cout << "\tYour monthly income: ";
   cin >> income;
   return income;
}


/**********************************************************************
*  Prompt Budget for Living
***********************************************************************/
double budgetLiving ()
{
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   return bliving;
}


/**********************************************************************
*  Prompt the Reality
***********************************************************************/
double actualLiving ()
{
   cout << "\tYour actual living expenses: ";
   cin >> aliving;
   return aliving;
}


/**********************************************************************
*  Prompt Taxes
***********************************************************************/
double getTaxes ()
{
   cout << "\tYour actual taxes withheld: ";
   cin >> tax ;
   return tax;
}


/**********************************************************************
*  Test from Bishop
***********************************************************************/
double Worthy ()
{
   cout << "\tYour actual tithe offerings: ";
   cin >> tith;
   return tith;
}


/**********************************************************************
*  Prompt Other expenses
***********************************************************************/
double getOthers ()
{
   cout << "\tYour actual other expenses: ";
   cin >> other;
   return other;
}


/**********************************************************************
*  The tith calculation
***********************************************************************/
double computeTithing (double income)
{
   return btith = (income / 10);
}

/**********************************************************************
*  The rest calculation
***********************************************************************/
double computeOthers (double income, double bliving, double btith)
{
   return bother = (income - bliving - btith);
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
   getIncome ();
   budgetLiving ();
   actualLiving ();
   getTaxes ();
   Worthy ();
   getOthers ();

// Calculations
   computeTithing (income);
   computeOthers (income, bliving, btith);

// Results
   display (income, bliving, aliving, tax, tith, other, btith, bother, btax);

   return 0;
}
