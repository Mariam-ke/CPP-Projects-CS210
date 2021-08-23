/* 
Write a function DrivingCost() with input parameters drivenMiles, milesPerGallon, 
and dollarsPerGallon, that returns the dollar cost to drive those miles. 
All items are of type double. If the function is called with 50 20.0 3.1599, 
the function returns 7.89975.

Define that function in a program whose inputs are the car's miles/gallon and the 
gas dollars/gallon (both doubles). Output the gas cost for 10 miles, 50 miles, 
and 400 miles, by calling your DrivingCost function three times.

Output each floating-point value with two digits after the decimal point, 
which can be achieved by executing:

cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is: 20.0 3.1599

the output is: 1.58 7.90 63.20

Your program must define and call a function:
double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)
*/

#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

/* Define your function here */ 

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) 
{
   double dollarCost = 0;
   dollarCost = (dollarsPerGallon * drivenMiles) / milesPerGallon;
   return dollarCost;
   }

int main() {
   /* Type your code here */
   
   //declare variables
   double miles = 0;
   double dollars = 0;
   
   //get user inpet
   cin >> miles;
   cin >> dollars;
   
   cout << fixed << setprecision(2);
   cout << DrivingCost(10, miles, dollars) << " ";
   cout << DrivingCost(50, miles, dollars) << " ";
   cout << DrivingCost(400, miles, dollars) << endl;

   return 0;
}

