/***********************************************************************
* Program:
*    Project 07, Calendar
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*
*   This program will ask the user for a year and a month, and then it'll
*  display the respective calendar.
*
* Estimated:  10.0 hrs
* Actual:     17.0 hrs
* Hardest: The offset.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


/**********************************************************************
 * Find if the chosen year is a Leap Year or not.
 ***********************************************************************/
bool leapYear (int year)
{
   if (year % 4 != 0)
      return false;
   else if (year % 100 != 0)
      return true;
   else if (year % 400 != 0)
      return false;
   return true;
}


/**********************************************************************
 * Find how many days the year has.
 ***********************************************************************/
int DaysInYear (int year)
{
   if (leapYear (year) == true)
      return 366;
   else
      return 365;
}


/**********************************************************************
 * Find how many days the month has.
 ***********************************************************************/
int DaysInMonth(int month, int year)
{
   if (month == 2)
   {
      if (leapYear (year) == true)
         return 29;
      else
         return 28;
   }
   if (month == 4 || month == 6 || month == 9 || month == 11)
      return 30;
   else
      return 31;
}


/**********************************************************************
 * Find the first day of the first week.
 ***********************************************************************/
int computeOffset (int month, int year)
{
   int numDays = 0;

   for (int yearCount = 1753; yearCount < year; yearCount++)
      numDays += DaysInYear (yearCount);

   for (int monthCount = 1; monthCount < month; monthCount++)
      numDays += DaysInMonth (monthCount, year);

   return (numDays % 7);
}


/**********************************************************************
 * The calendar itself.
 ***********************************************************************/
void displayTable(int month, int year, int offset, int numDays)
{
   // Header
   if (month == 1)
      cout << "January, " << year << endl;
   if (month == 2)
      cout << "February, " << year << endl;
   if (month == 3)
      cout << "March, " << year << endl;
   if (month == 4)
      cout << "April, " << year << endl;
   if (month == 5)
      cout << "May, " << year << endl;
   if (month == 6)
      cout << "June, " << year << endl;
   if (month == 7)
      cout << "July, " << year << endl;
   if (month == 8)
      cout << "August, " << year << endl;
   if (month == 9)
      cout << "September, " << year << endl;
   if (month == 10)
      cout << "October, " << year << endl;
   if (month == 11)
      cout << "November, " << year << endl;
   if (month == 12)
      cout << "December, " << year << endl;


   cout << "  Su  Mo  Tu  We  Th  Fr  Sa" << endl;

   // for the first week blank spaces
   if (offset != 6)
   {
      for (int blank = -1; blank < offset; blank++)
      {
         cout << "    ";
      }
   }

   int dayOfWeek = offset;
   // offset= Sun=-1  Mon=0  Tue=1  Wed=2  Thu=3  Fri=4  Sat=5

   if (dayOfWeek > 5) // Sunday issues
      dayOfWeek = -1;

   for (int day = 1; day <= numDays; day++)
   {
      cout << setw(4) << day;

      // jump lines when the week ends
      dayOfWeek++;
      if (dayOfWeek > 5)
      {
         cout << endl;
         dayOfWeek = -1;
      }
   }
   if (dayOfWeek != -1)
   {
      cout << endl;
   }

}


/**********************************************************************
 *  The other functions caller and also the get function of the user prompts,
 * with some do-while loops to make sure the given month and year is valid.
 ***********************************************************************/
int main()
{
   int month;
   cout << "Enter a month number: ";
   cin >> month;
   if (month < 1 || month > 12)
   {
      do
      {
         cout << "Month must be between 1 and 12." << endl;
         cin >> month;
      } while (month < 1 || month > 12);
   }

   int year;
   cout << "Enter year: ";
   cin >> year;
   if (year < 1753 || year > 2020)
   {
      do
      {
         cout << "Year must be between 1753 and 2020." << endl;
         cin >> year;
      } while (year < 1753 || year > 2020);
   }

   cout << endl;


   int numDays = DaysInMonth (month, year);
   int offset = computeOffset (month, year);

   displayTable (month, year, offset, numDays);

   return 0;
}
