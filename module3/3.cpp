/***********************************************************************
* Program:
*    Assignment 33, Pointers
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*     A program to ask a lovely couple for their account balance. Then, based
*   on who has the most money, all subsequent purchases will be charged to
*   his or her account.
*
*
*    Estimated:  2.0 hrs
*    Actual:     1.5 hrs
*    Hard: None. Quite easy, not that I'm complaining, you know.
************************************************************************/

#include <iostream>
using namespace std;


/**********************************************************************
 * Main, a big one. I missed doing long functions, for some reason I enjoy it.
 * So, it stores data on pointers right after their creation. And with a if
 * it does a simple expression to subtract from the respective variable.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   float SamB;
   float * Sam;
   Sam = &SamB;
   cout << "What is Sam's balance? ";
   cin >> SamB;

   float SueB;
   float * Sue;
   Sue = &SueB;
   cout << "What is Sue's balance? ";
   cin >> SueB;

   cout << "Cost of the date:\n";
   cout << "\tDinner:    ";
   float dinner;
   cin >> dinner;

   cout << "\tMovie:     ";
   float movie;
   cin >> movie;

   cout << "\tIce cream: ";
   float ice;
   cin >> ice;

   float dateCost = dinner + movie + ice;
   float * cost;
   cost = &dateCost;

   if (*Sam > *Sue)
   {
      *Sam -= *cost;
   }
   else
   {
      *Sue -= *cost;
   }

   cout << "Sam's balance: " << "$" << *Sam << endl;
   cout << "Sue's balance: " << "$" << *Sue << endl;
   return 0;
}
