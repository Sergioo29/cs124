/***********************************************************************
* Program:
*    Assignment 10, Hello World
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    This is my first code and my first assignment. It displays the famous
*   "Hello World" on screen
*
*    Estimated:  2.0 hrs
*    Actual:     0.4 hrs
*    The most difficult part was the installation of the programs.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * It simply displays the text "Hello World"
 ***********************************************************************/


 int main()
 {
   char a[] = "software";
  bool b[] =
     { false, true, false, false,
       false, true, false, true };

  for (int i = 0; i < 8; i++)
     if (b[i])
        cout << a[i];
    return 0;
 }
