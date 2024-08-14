/***********************************************************************
* Program:
*    Project 09, Mad Lib
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A program to read a madlib file and display the Questions.
*
*    Estimated:  6.0 hrs
*    Actual:     9.0 hrs
*    Hard: How to know which part of the file (which line, where does it start)
           the prompts are.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;


/**********************************************************************
 * Get.
 ***********************************************************************/
void getFilename(char fileName[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;
}

/**********************************************************************
 * askQuestions
 ***********************************************************************/
void askQuestions()
{
   // it is inside readFile...
}

/**********************************************************************
 * Read.
 ***********************************************************************/
void readFile(char fileName[])
{
   ifstream fin(fileName);
   if (fin.fail()) // check for any type of error
   {
      cout << "Unable to open file "
           << fileName
           << endl;
      return; // report failure to the user
   }

   char questions[256][256];
   int numRead = 0;
   while (fin >> questions [numRead])
   {
      numRead++;
   }

   fin.close();


   char words[256][256];


      cout << "\tAdjective: ";
      cin >> words[0];


   return;
}

/**********************************************************************
 * Display.
 ***********************************************************************/
void display()
{
   cout << "Display here" << endl;
}

/**********************************************************************
 * playAgain
 ***********************************************************************/
bool playAgain()
{
   cout << "Do you wanna play again?" << endl;
   return true;
}

/**********************************************************************
 * MAIN just call the other functions.
 ***********************************************************************/
int main()
{

   char fileName[256];
   getFilename(fileName);

   readFile(fileName);

   cout << "Thank you for playing." << endl;
   return 0;
}
