/***********************************************************************
* Program:
*    Assignment 23, Loop
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    Just a loop syntax test with some numbers. It adds all the multiples of
*    7 that are less than 100
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*      Difficult part.
************************************************************************/

#include <iostream>
using namespace std;


int loop (int number)
{
  int sum = 0;
  for (int count = number; count < 100; count+= number)
    sum += count;

  return sum;
}

/**********************************************************************
 * It calls for the loop function to do the math.
 ***********************************************************************/
int main()
{
  int number;

  cout << "What multiples are we adding? ";
  cin >> number;

  int sum = loop(number);

  cout << "The sum of multiples of " << number
       << " less than 100 are: " << sum << endl;

   return 0;
}
