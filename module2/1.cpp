/***********************************************************************
* Program:
*    Assignment 21, Stub
*    Brother Foushee, CS124
* Author:
*    Sergio Henrique
* Summary:
*    A program to stub out every function represented in the a structure chart.
*
*    Estimated:  2.0 hrs
*    Actual:     2.0 hrs
* Hard: The parameter of display on stub.
**************************************************************************/

#include <iostream>
#include <cassert>

using namespace std;

int promptDevalue()
{
  int devalue;
   return devalue;
}

int promptInsurance()
{
  int insurance;
   return insurance;
}

int promptParking()
{
  int parking;
   return parking;
}


int getPeriodicCost()
{
  promptDevalue();
  promptInsurance();
  promptParking();
      int costPeriodic;
   return costPeriodic;
}

int promptMileage()
{
  int mileage;
   return mileage;
}

int promptGas()
{
  int gas;
   return gas;
}

int promptRepairs()
{
  int repairs;
   return repairs;
}

int promptTires()
{
  int tires;
   return tires;
}

int getUsageCost()
{
promptMileage();
promptGas();
promptRepairs();
promptTires();
      int costUsage;
   return costUsage;
}



void display(int costPeriodic, int costUsage)
{
    cout << "Success\n";
   return;
}


int main()
{

display(getPeriodicCost(), getUsageCost());

   return 0;
}
