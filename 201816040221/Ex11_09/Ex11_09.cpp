// Exercise 12.9 Solution: ex12_09.cpp
// Driver program for Package hierarchy.
#include <iostream>
#include <iomanip>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

int main()
{
   Package package1( "Zhang Daxian", "1 Main St","Beijing","Daoding", 11111,
      "Mary Smith", "7 Elm St", "New York", "NY", 55555, 20.9, 0.5 );
   TwoDayPackage package2( "Lisa Klein", "5 Broadway", "Zhengzhou","Gaoxinqu",
      651455, "Bob George", "21 Pine Rd", "Cambridge","MA", 58691,
      10.5, 0.65, 2.0 );
   OvernightPackage package3( "Ed Lewis", "2 Oak St", "Boston", "MA",
      46578, "Don Kelly", "9 Main St", "Denver", "CO", 66666,
      12.25, .7, .25 );

   cout << fixed << setprecision( 2 );

   // print each package's information and cost
   cout << "Package 1:\n\nSender:\n" << package1.getSenderName()
      << '\n' << package1.getSenderAddress() << '\n'
     << package1.getSenderCity() << ", " << package1.getSenderState()
      << ' ' << package1.getSenderZIP();
   cout << "\n\nRecipient:\n" << package1.getRecipientName()
      << '\n' << package1.getRecipientAddress() << '\n'
      << package1.getRecipientCity() << ", "
      << package1.getRecipientState() << ' '
      << package1.getRecipientZIP();
   cout << "\n\nCost: $" << package1.calculateCost() << endl;

   cout << "\nPackage 2:\n\nSender:\n" << package2.getSenderName()
      << '\n' << package2.getSenderAddress() << '\n'
      << package2.getSenderCity() << ", " << package2.getSenderState()
      << ' ' << package2.getSenderZIP();
   cout << "\n\nRecipient:\n" << package2.getRecipientName()
      << '\n' << package2.getRecipientAddress() << '\n'
      << package2.getRecipientCity() << ", "
      << package2.getRecipientState() << ' '
      << package2.getRecipientZIP();
   cout << "\n\nCost: $" << package2.calculateCost() << endl;

   cout << "\nPackage 3:\n\nSender:\n" << package3.getSenderName()
      << '\n' << package3.getSenderAddress() << '\n';
      /*<< package3.getSenderCity() << ", " << package3.getSenderState()
      << ' ' << package3.getSenderZIP();*/
   cout << "\n\nRecipient:\n" << package3.getRecipientName()
      << '\n' << package3.getRecipientAddress() << '\n'
      << package3.getRecipientCity() << ", "
      << package3.getRecipientState() << ' '
      << package3.getRecipientZIP();
   cout << "\n\nCost: $" << package3.calculateCost() << endl;
} // end main

