/***********************************************************************
* Program:
*    Assignment 06, Calendar
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*
*   This program will ask the user for a year and a month, and then it'll
*  display the respective calendar.
*
* Estimated:  10.0 hrs
* Actual:     7.0 hrs
* Hardest: The display function.
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * First day of the month function.
 ***********************************************************************/
int zeller (int year, int month, int day)
{
  int a = (14-month)/12;
  int y = year - a;
  int m = month + 12*a - 2;

  int d = (day + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;
  return d;
}


/**********************************************************************
 *  The year is a leap year? True or False.
 ***********************************************************************/
bool isLeapYear (int year)
{
   if (year % 4 != 0) return false;
   else if (year % 100 != 0) return true;
   else if (year % 400 != 0) return false;
   return true;
}


/**********************************************************************
 * Determine the first day of the month.
 ***********************************************************************/
int computeOffset (int month, int year)
{
  int offset;
  for (int count = 1753, count == year, count++)
  {

  }
  return offset;
}


/**********************************************************************
 * First day of the month function.
 ***********************************************************************/
int numDays (int month, int year)
{
   if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
       || month == 10 || month == 12)
       return 31;
   if (month == 2)
   {
      if ( isLeapYear(year) == true ) return 29;
      else return 28;
   }
   return 30;
}


/**********************************************************************
 * The table display of the Calendar itself.
 ***********************************************************************/
void display (int month, int year, int offset, int numDays)
{
   cout << "  Su  Mo  Tu  We  Th  Fr  Sa" << endl;

   if (offset !=6) // if the 1st day is Sunday so it doesnt need this spaces
   {
     for (int blanks=0; blank <=offset; blank++) // 1st week blank spaces
     {
       cout << "    ";
     }
   }

   int dayOfWeek = offset + 2;
   if (dayOfWeek > 7) // Sunday issue
      dayOfWeek = 1;

   for (int day = 1; day <= numDays; day++)
   {
     cout << setw (4) << day;

     dayOfWeek++;       // see if the week ended to jump to another line
     if (dayOfWeek > 7)
     {
        cout << endl;
        dayOfWeek = 1;
     }
   }
   if (dayOfWeek != 1)
       cout << endl;
}


/**********************************************************************
 * Main
 ***********************************************************************/
int main()
{

   cout << "Enter a month number: ";
   int month;
   cin >> month;

   cout << "Enter year: ";
   int year;
   cin >> year;

   int offset = computeOffset (month, year);
   int numDays = numDays (month, year);
   display (month, year, offset, numDays);

   return 0;
}
