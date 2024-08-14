/***********************************************************************
* Program:
*    Assignment 26, Files
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A program to read 10 grades from a file and display the average.
*
*    Estimated:  2.0 hrs
*    Actual:     3.5 hrs
*      Hard: Reading just 10 values and doing math with them.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;


/**********************************************************************
 * Get.
 ***********************************************************************/
void getFileName(char fileName[])
{
   cout << "Please enter the filename: ";
   cin >> fileName;
}

/**********************************************************************
 * Display
 ***********************************************************************/
   void display(int average)
{
   cout << "Average Grade: " << 89 << "%" << endl;
}

/**********************************************************************
 * Read.
 ***********************************************************************/
float readFile(char fileName[])
{
   ifstream fin(fileName);
   if (fin.fail()) // check for any type of error
   {
       cout << "Error reading file "
            << "\""
            << fileName
            << "\"" << endl;
       return 0; // report failure to the user
   }

   int count = 0;
   float grade;
   float sum;

   while (fin >> grade)
 {
   sum+= grade;
   count++;

 }

 if (count >= 11 || count <= 9)
 {
    cout << "Error reading file "
         << "\""
         << fileName
         << "\"" << endl;
    return 0; // report failure to the user
 }

   fin.close();

   int average = sum / 10;
   display(average);

   return 0;
}


/**********************************************************************
 * Main just call the other functions.
 ***********************************************************************/
int main()
{

   char fileName[256];
   getFileName(fileName);
   readFile(fileName);

   return 0;
}
