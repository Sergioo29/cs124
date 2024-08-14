/***********************************************************************
* Program:
*    Assignment 14, Functions
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*     This program will address Peter's question to the Lord in
*    Matthew 18:21-22*
*    Estimated:  3.0 hrs
*    Actual:     2.0 hrs
*      Difficult part was figuring out that I need to do the other Functions
*    BEFORE the main one, and not after... ¬.¬"
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
*  The question.
***********************************************************************/
char questionPeter()
{
   cout << "Lord, how oft shall my brother sin against me,"
        << " and I forgive him?" << endl;
   cout << "Till seven times?" << endl;

   return 0;
}

/**********************************************************************
*  The answer.
***********************************************************************/
int responseLord()
{
   return 490;
}

/**********************************************************************
 *  The function "main" couts a scripture just to train how to call for
 * functions.
 ***********************************************************************/
int main()
{
    // ask Peter's question
   questionPeter();

    // the first part of the Lord's response
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord() << ".\n";

   return 0;
}
