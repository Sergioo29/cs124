/***********************************************************************
* Program:
*    Project 13, Sudoku 2
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    This program is a Sudoku game, but still without the rules.
*
*    Estimated:  10.0 hrs
*    Actual:     4.0 hrs
*    Hard: Add the rules
************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

/************************************************************
 * File name
 ***********************************************************/
void currentFile(char fileName[])
{
   cout << "Where is your board located? ";
   cin  >> fileName;
   cin.ignore();
}

/**********************************************************************
* Display
***********************************************************************/
bool display(char fileName[], char board[])
{
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "ERROR: Unable to open " << fileName << endl;
      return false; // Boolean so Main won't continue to read the code
   }
   int n = 0;
   while (fin >> board[n])
   {
      if (board[n] == '0') // zeros means spaces inside the file
         board[n] = ' ';
      n++;
   }
   fin.close();

   // The ensured first display
   cout << "Options:\n"
        << "   ?  Show these instructions\n"
        << "   D  Display the board\n"
        << "   E  Edit one square\n"
        << "   S  Show the possible values for a square\n"
        << "   Q  Save and Quit\n"
        << "\n";
   cout << "   A B C D E F G H I\n";
   cout << "1  " << board[0] << " " << board[1] << " " << board[2] << "|"
        << board[3] << " " << board[4] << " " << board[5] << "|"
        << board[6] << " " << board[7] << " " << board[8] << endl;
   cout << "2  " << board[9] << " " << board[10] << " " << board[11] << "|"
        << board[12] << " " << board[13] << " " << board[14] << "|"
        << board[15] << " " << board[16] << " " << board[17] << endl;
   cout << "3  " << board[18] << " " << board[19] << " " << board[20] << "|"
        << board[21] << " " << board[22] << " " << board[23] << "|"
        << board[24] << " " << board[25] << " " << board[26] << endl;
   cout << "   -----+-----+-----\n";
   cout << "4  " << board[27] << " " << board[28] << " " << board[29] << "|"
        << board[30] << " " << board[31] << " " << board[32] << "|"
        << board[33] << " " << board[34] << " " << board[35] << endl;
   cout << "5  " << board[36] << " " << board[37] << " " << board[38] << "|"
        << board[39] << " " << board[40] << " " << board[41] << "|"
        << board[42] << " " << board[43] << " " << board[44] << endl;
   cout << "6  " << board[45] << " " << board[46] << " " << board[47] << "|"
        << board[48] << " " << board[49] << " " << board[50] << "|"
        << board[51] << " " << board[52] << " " << board[53] << endl;
   cout << "   -----+-----+-----\n";
   cout << "7  " << board[54] << " " << board[55] << " " << board[56] << "|"
        << board[57] << " " << board[58] << " " << board[59] << "|"
        << board[60] << " " << board[61] << " " << board[62] << endl;
   cout << "8  " << board[63] << " " << board[64] << " " << board[65] << "|"
        << board[66] << " " << board[67] << " " << board[68] << "|"
        << board[69] << " " << board[70] << " " << board[71] << endl;
   cout << "9  " << board[72] << " " << board[73] << " " << board[74] << "|"
        << board[75] << " " << board[76] << " " << board[77] << "|"
        << board[78] << " " << board[79] << " " << board[80] << endl
        << "\n";

   return true; // Boolean that tells Main to keep reading the code
}

/**********************************************************************
* Get numbers
***********************************************************************/
char getNum(string coordinate)
{
   char value;
   cout << "What is the value at '" << coordinate << "': ";
   cin >> value;
   return value;
}

/**********************************************************************
* Edit square
***********************************************************************/
void editSquare(char board[])
{
   string coordinate;
   cout << "What are the coordinates of the square: ";
   cin >> coordinate;

   // So, I had to do the easier to understand, but harder to do and longer
   // form of this function...

   // They all look the same: all possible coordinates are listed below. If
   // it is valid, then we will check if that place is filled

   if (coordinate == "A1")
   {
      if (board[0] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[0] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A2")
   {
      if (board[9] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[0] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A3")
   {
      if (board[18] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[18] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A4")
   {
      if (board[27] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[27] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A5")
   {
      if (board[36] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[36] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A6")
   {
      if (board[45] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[45] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A7")
   {
      if (board[54] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[54] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A8")
   {
      if (board[63] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[63] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "A9")
   {
      if (board[72] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[72] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B1")
   {
      if (board[1] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[1] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B2")
   {
      if (board[10] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[10] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B3")
   {
      if (board[19] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[19] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B4")
   {
      if (board[28] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[28] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B5")
   {
      if (board[37] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[37] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B6")
   {
      if (board[46] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[46] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B7")
   {
      if (board[55] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[55] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B8")
   {
      if (board[64] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[64] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "B9")
   {
      if (board[73] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[73] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C1")
   {
      if (board[2] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[2] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C2")
   {
      if (board[11] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[11] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C3")
   {
      if (board[20] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[20] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C4")
   {
      if (board[29] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[29] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C5")
   {
      if (board[38] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[38] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C6")
   {
      if (board[47] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[47] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C7")
   {
      if (board[56] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[56] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C8")
   {
      if (board[65] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[65] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "C9")
   {
      if (board[74] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[74] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D1")
   {
      if (board[3] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[3] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D2")
   {
      if (board[12] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[12] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D3")
   {
      if (board[21] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[21] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D4")
   {
      if (board[30] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[30] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D5")
   {
      if (board[39] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[39] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D6")
   {
      if (board[48] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[48] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D7")
   {
      if (board[57] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[57] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D8")
   {
      if (board[66] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[66] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "D9")
   {
      if (board[75] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[75] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E1")
   {
      if (board[4] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[4] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E2")
   {
      if (board[13] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[13] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E3")
   {
      if (board[22] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[22] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E4")
   {
      if (board[31] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[31] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E5")
   {
      if (board[40] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[40] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E6")
   {
      if (board[49] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[49] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E7")
   {
      if (board[58] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[58] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E8")
   {
      if (board[67] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[67] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "E9")
   {
      if (board[76] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[76] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F1")
   {
      if (board[5] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[5] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F2")
   {
      if (board[14] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[14] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F3")
   {
      if (board[23] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[23] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F4")
   {
      if (board[32] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[32] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F5")
   {
      if (board[41] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[41] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F6")
   {
      if (board[50] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[50] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F7")
   {
      if (board[59] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[59] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F8")
   {
      if (board[68] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[68] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "F9")
   {
      if (board[77] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[77] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G1")
   {
      if (board[6] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[6] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G2")
   {
      if (board[15] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[15] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G3")
   {
      if (board[24] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[24] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G4")
   {
      if (board[33] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[33] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G5")
   {
      if (board[42] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[42] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G6")
   {
      if (board[51] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[51] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G7")
   {
      if (board[60] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[60] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G8")
   {
      if (board[69] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[69] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "G9")
   {
      if (board[78] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[78] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H1")
   {
      if (board[7] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[7] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H2")
   {
      if (board[16] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[16] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H3")
   {
      if (board[25] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[25] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H4")
   {
      if (board[34] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[34] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H5")
   {
      if (board[43] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[43] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H6")
   {
      if (board[52] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[52] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H7")
   {
      if (board[61] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[61] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H8")
   {
      if (board[70] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[70] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "H9")
   {
      if (board[79] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[79] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I1")
   {
      if (board[8] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[8] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I2")
   {
      if (board[17] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[17] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I3")
   {
      if (board[26] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[26] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I4")
   {
      if (board[35] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[35] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I5")
   {
      if (board[44] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[44] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I6")
   {
      if (board[53] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[53] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I7")
   {
      if (board[62] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[62] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I8")
   {
      if (board[71] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[71] = getNum (coordinate);
      cout << endl;
      return;
   }
   if (coordinate == "I9")
   {
      if (board[80] != ' ')
      {
         cout << "ERROR: Square '" << coordinate << "' is filled\n" << endl;
         return;
      }
      board[80] = getNum (coordinate);
      cout << endl;
      return;
   }

   // Whew... Finally over... Trust me, I did this one by one. There is a trick
   // using a nº 9 pattern that turn this job easier once you get used to it

   else // Again, no lower case (or inverted coordinate). Need to fix this
      cout << "ERROR: Invalid coordinate\n";
}

/**********************************************************************
* Compute values
***********************************************************************/
void computeValues(int board[][9], int row, int col, bool values[])
{
   FOR r <- 0 to 9 by 1

      IF r NOT EQUAL row

         SET values[board[r][col]] <- false

   FOR c <- 0 to 9 by 1

      IF c NOT EQUAL col

         SET values[board[row][c]] <- false

   SET mRow <- (row / 3) * 3

   SET mCol <- (col / 3) * 3

      FOR r <- mRow to mRow + 3 by 1

         FOR c <- mCol to mCol + 3 by 1

            IF r NOT EQUAL row OR c NOT EQUAL col

               SET values[board[r][c]] <- false
   return;
}

/**********************************************************************
* Display board
***********************************************************************/
void displayBoard(char board[])
{
   cout << "   A B C D E F G H I\n";
   cout << "1  " << board[0] << " " << board[1] << " " << board[2] << "|"
        << board[3] << " " << board[4] << " " << board[5] << "|"
        << board[6] << " " << board[7] << " " << board[8] << endl;
   cout << "2  " << board[9] << " " << board[10] << " " << board[11] << "|"
        << board[12] << " " << board[13] << " " << board[14] << "|"
        << board[15] << " " << board[16] << " " << board[17] << endl;
   cout << "3  " << board[18] << " " << board[19] << " " << board[20] << "|"
        << board[21] << " " << board[22] << " " << board[23] << "|"
        << board[24] << " " << board[25] << " " << board[26] << endl;
   cout << "   -----+-----+-----\n";
   cout << "4  " << board[27] << " " << board[28] << " " << board[29] << "|"
        << board[30] << " " << board[31] << " " << board[32] << "|"
        << board[33] << " " << board[34] << " " << board[35] << endl;
   cout << "5  " << board[36] << " " << board[37] << " " << board[38] << "|"
        << board[39] << " " << board[40] << " " << board[41] << "|"
        << board[42] << " " << board[43] << " " << board[44] << endl;
   cout << "6  " << board[45] << " " << board[46] << " " << board[47] << "|"
        << board[48] << " " << board[49] << " " << board[50] << "|"
        << board[51] << " " << board[52] << " " << board[53] << endl;
   cout << "   -----+-----+-----\n";
   cout << "7  " << board[54] << " " << board[55] << " " << board[56] << "|"
        << board[57] << " " << board[58] << " " << board[59] << "|"
        << board[60] << " " << board[61] << " " << board[62] << endl;
   cout << "8  " << board[63] << " " << board[64] << " " << board[65] << "|"
        << board[66] << " " << board[67] << " " << board[68] << "|"
        << board[69] << " " << board[70] << " " << board[71] << endl;
   cout << "9  " << board[72] << " " << board[73] << " " << board[74] << "|"
        << board[75] << " " << board[76] << " " << board[77] << "|"
        << board[78] << " " << board[79] << " " << board[80] << endl
        << "\n";
}

/**********************************************************************
* Save the file
***********************************************************************/
void newFile(char board[])
{
   string newFile; // Tested using string here, works fine
   cout << "What file would you like to write your board to: ";
   cin >> newFile;

   ofstream fout(newFile);
   if (fout.fail())
   {
      cout << "ERROR: Unable to save " << newFile << endl;
      return;
   }
                                 // Instead of while, for seemed better
   for (int i = 0; i <= 80; i++) // In this case, we know the file size
   {
      if (board[i] == ' ') // Revert the changes so they can me made again
         board[i] = '0';
      fout << board[i];
   }


   cout << "Board written successfully\n";
   fout.close();
}

/**********************************************************************
* Interact
***********************************************************************/
void interact(char board[])
{
   char option;
   cout << "> ";
   cin >> option;  // If the user types lower case the program shut down...
   switch (option) // Need to fix this later... And add an error check
   {
      case '?':
         cout << "Options:\n"
              << "   ?  Show these instructions\n"
              << "   D  Display the board\n"
              << "   E  Edit one square\n"
              << "   S  Show the possible values for a square\n"
              << "   Q  Save and Quit\n";
         cout << endl; // The testBed wants to "make it double"
         cout << endl;
         interact (board); // Loop the function
         break;
      case 'D':
         displayBoard (board);
         interact (board); // Loop the function
         break;
      case 'E':
         editSquare(board);
         interact (board); // Loop the function
         break;
      case 'S':
         computeValues();
         interact (board); // Loop the function
         break;
      case 'Q':
         newFile(board);
         break; // Dead-end, no loop
   }
   return;
}

/**********************************************************************
* Main
***********************************************************************/
int main()
{
   char fileName[256];
   currentFile(fileName);

   char board[256]; // Using char instead of int, to turn 0's into blank spaces
   bool read = display(fileName, board);
   if (read == false) // Stop the code if the fin fails
      return 0;

   interact(board);

   return 0;
}