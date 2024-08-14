/***********************************************************************
* Program:
*    Assignment 25 Calendar Table
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    Display a calendar.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*      Hard: adding the blank spaces with the offset parameter.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Takes two parameters and shows the calendar table.
 ***********************************************************************/
int displayTable()
{
   cout << "Number of days: ";
   int days;
   cin >> days;

   cout << "Offset: ";
   int offset;
   cin >> offset;
   offset++;

   cout << "  Su  Mo  Tu  We  Th  Fr  Sa" << endl;
   cout << "  ";
   for (int blank = 0; blank < offset; blank++)
   {
     cout << "    ";
   }

   for (int day = 1; day <= days; day++)
   {
    if (day < 10) cout << " " << day << "  ";
    else cout << day << "  ";
    offset ++;
     if (offset % 7 == 0)
    {
      cout << endl;
      cout << "  ";
    }
    }

    return 0;
}

/**********************************************************************
 * Just call the other functions.
 ***********************************************************************/
int main()
{
   displayTable();
   cout << endl;
   return 0;
}
