/***********************************************************************
* Program:
*    Assignment 31, Array Two
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A function to prompt the user for ten grades and return the result of
*  the average grade with a percentage.
*
*  Estimated:  2.0 hrs
*  Actual:     2.0 hrs
*  Hard: The average calculation.
************************************************************************/

#include <iostream>
using namespace std;


/**********************************************************************
 * Get grades
 ***********************************************************************/
void getGrades(int grades[])
{

   for (int i = 0; i < 10; i++)
   {
      cout << "Grade " << (i + 1) << ": ";
      cin >> grades[i];
   }

   return;
}

/**********************************************************************
 * Find the average of the grades and return the answer
 ***********************************************************************/
int averageGrades(int grades[])
{
   int sum = 0;
   for (int i = 0; i < 10; i++)
   {
      if (grades[i] == -1)
         ;
      else
         sum+= grades[i];
   }

   int averageGrade = sum / 9;

   return averageGrade;
}


/**********************************************************************
 * Declare the array and pass it as a parameter.
 ***********************************************************************/
int main()
{

   int grades[10] = {};

   getGrades(grades);

   int averageGrade = averageGrades(grades);

   if (averageGrade > 0)
      cout << "Average Grade: " << averageGrade << "%" << endl;
   else
      cout << "Average Grade: ---%" << endl;
   return 0;
}
