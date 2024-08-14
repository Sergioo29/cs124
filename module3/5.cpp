/***********************************************************************
* Program:
*    Assignment 35, Advanced Conditionals
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A test of switch statements and conditional operators.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*
************************************************************************/

#include <iostream>
using namespace std;


/**********************************************************************
 * Grade
 ***********************************************************************/
void computeLetterGrade()
{

}


/**********************************************************************
 * Sign
 ***********************************************************************/
void computeGradeSign()
{

}

/**********************************************************************
 * Main
 ***********************************************************************/
int main()
{

   int grade = 0;
   cout << "Enter number grade: ";
   cin >> grade;

   if (grade >= 93)
      cout << grade << "% is A" << endl;
   else if (grade >= 90)
      cout << grade << "% is A-" << endl;
   else if (grade >= 87)
      cout << grade << "% is B+" << endl;
   else if (grade >= 83)
      cout << grade << "% is B" << endl;
   else if (grade >= 80)
      cout << grade << "% is B-" << endl;
   else if (grade >= 77)
      cout << grade << "% is C+" << endl;
   else if (grade >= 73)
      cout << grade << "% is C" << endl;
   else if (grade >= 70)
      cout << grade << "% is C-" << endl;
   else if (grade >= 67)
      cout << grade << "% is D+" << endl;
   else if (grade >= 63)
      cout << grade << "% is D" << endl;
   else if (grade >= 60)
      cout << grade << "% is D-" << endl;
   else
      cout << grade << "% is F" << endl;

   return 0;
}
