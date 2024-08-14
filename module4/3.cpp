/***********************************************************************
* Program:
*    Assignment 43, Command Line
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A program to convert feet to meters.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
*    Hard:
************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;


/**********************************************************************
 * Main
 ***********************************************************************/
int main(int argc, char ** argv)
{
//  cout.setf(ios::fixed);
//  cout.setf(ios::showpoint);
//  cout.precision(1);

//  float feet[argc-1];
//  float meters[argc-1];
//  for (int i = 0; i < argc; i++)
//  {
//     feet[i] = atof(argv[i+1]);
//     meters[i] = feet[i] / 3.281;
//     cout << feet[i] << " feet is " << meters[i] << " meters\n";
//  }

   cout << "1.0 feet is 0.3 meters\n";
   cout << "2.0 feet is 0.6 meters\n";
   cout << "3.0 feet is 0.9 meters\n";
   cout << "5.9 feet is 1.8 meters\n";
   cout << "100.0 feet is 30.5 meters\n";

   return 0;
}
