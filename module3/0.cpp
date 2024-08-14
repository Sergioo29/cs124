/***********************************************************************
* Program:
*    Assignment 30, Array
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A function to prompt the user for ten grades and return the result of
*  the average grade with a parcentage.
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
   int sum;
   for (int i = 0; i < 10; i++)
   {
      sum+= grades[i];
   }

   int averageGrade = sum / 10;

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

   cout << "Average Grade: " << (averageGrade-1) << "%" << endl;

   return 0;
}
