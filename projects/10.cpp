/***********************************************************************
* Program:
*    Project 10, Mad Lib
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A program to run a MadLib from a file, with a "play again" option.
*
*    Estimated:  3.0 hrs
*    Actual:     +15.0 hrs
*    Hard: How to format the spacing and punctuation on display function.
*          I didn't get how this "token" works.
************************************************************************/

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;


/**********************************************************************
 * Get.
 **********************************************************************/
void getFilename(char fileName[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;
   cin.ignore();
}

/**********************************************************************
 * Ask.
 **********************************************************************/
void askQuestions(char word[])
{
   char firstLetter = word[0];
   char secondLetter = word[1];

   if (firstLetter == ':' && isalpha(secondLetter)) // Find the prompt.
   {
      cout << "\t" << (char)toupper(secondLetter);
      for (int iWord = 2; word[iWord]; iWord++)
      {
         if (word[iWord] == '_')
            cout << " ";
         else
            cout << (char)tolower(word[iWord]);
      }
      cout << ": "; // Ask the question.
      cin.getline (word, 256);
//    cout << "\tYou typed " << word; // A test.
   }

}


/**********************************************************************
 * Display.
 **********************************************************************/
void display(char word[])
{
   for (int i = 0; word[i]; i++)
   {
      if (word[i] == ':' && word[i + 1] == '!')
         cout << endl;
      else
         cout << word[i];
   }
   if (word[0] != ':')
      cout << " ";
}

/**********************************************************************
 * Read.
 **********************************************************************/
void readFile(char fileName[])
{
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "Unable to open file "
           << fileName
           << endl;
      return;
   }

   char word[256][256];
   int numWords = 0;
   int * pNum;
   pNum = &numWords;

   while (fin >> word[numWords] && numWords < 256)
   {
      askQuestions(word[numWords]);
      numWords++;
   }

   fin.close();

   cout << endl;
   for (char i = 0; i < numWords; i++)
   {
      display (word[i]);
   }
   cout << endl;
   return;
}

/**********************************************************************
 * Restart.
 **********************************************************************/
void playAgain()
{
   char decision;
   bool wanna = false;
   do
   {
      cout << "Do you want to play again (y/n)? ";
      cin >> decision;
      if (decision == 'y' || decision == 'Y')
      {
         wanna = true;
         char fileName[256];
         getFilename(fileName);
         readFile(fileName);
      }
      else
         wanna = false;
   } while (wanna == true);

}

/**********************************************************************
 * MAIN just call the other functions and finish.
 **********************************************************************/
int main()
{
   char fileName[256];
   getFilename(fileName);

   readFile(fileName);

   playAgain();

   cout << "Thank you for playing." << endl;
   return 0;
}
