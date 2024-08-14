/***********************************************************************
* Program:
*    Assignment 40, Multi D. Array
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    Testing two dimensional arrays with tic-tac-toes.
*
*    Estimated:  2.0 hrs
*    Actual:     4.0 hrs
*    Hard: The blank spaces turned into \0 on test 2.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/**********************************************************************
 * Read
 ***********************************************************************/
void source(char fileName[])
{
   cout << "Enter source filename: ";
   cin >> fileName;
   cin.ignore();
   return;
}

/**********************************************************************
 * Read
 ***********************************************************************/
void destiny(char file[])
{
   char fileName2[256];
   cout << "Enter destination filename: ";
   cin >> fileName2;
   cin.ignore();

   ofstream fout(fileName2);
   if (fout.fail())
   {
      cout << "Unable to save file " << fileName2 << endl;
      return;
   }

   fout << file[0] << file[1] << file[2];
   fout << "..";
   fout << file[3] << file[4] << file[5];
   fout << "...";
   fout << file[6] << file[7] << file[8];
   fout << "..";
   cout << "File written" << endl;
   fout.close();

   return;
}

/**********************************************************************
 * Display
 ***********************************************************************/
void display(char fileName[])
{
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "Unable to open file " << fileName << endl;
      return;
   }

   char file[256];
   int n = 0;
   while (fin >> file[n])
   {
      if (file[n] == '.')
         file[n] = ' ';
      n++;
   }
   fin.close();

   cout << " " << file[0] << " | " << file[1] << " | " << file[2] << " \n";
   cout << "---+---+---\n";
   cout << " " << file[3] << " | " << file[4] << " | " << file[5] << " \n";
   cout << "---+---+---\n";
   cout << " " << file[6] << " | " << file[7] << " | " << file[8] << " \n";


   destiny(file);
   return;
}


/**********************************************************************
 * Main
 ***********************************************************************/
int main()
{
   char fileName[256];
   source (fileName);
   display (fileName);

   return 0;
}
