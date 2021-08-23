/*
Driving costs
Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is: 20.0 3.1599

the output is: 3.16 11.85 79.00
*/

#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)

{

  double dollarCost = 0;

  dollarCost = (dollarsPerGallon * drivenMiles) / milesPerGallon;

  return dollarCost;

}

int main() {

   /* Type your code here. */
   double miles = 0;
   double dollars = 0;
   
   cin >> miles;
   cin >> dollars;
   
   cout << fixed << setprecision(2);
   
   cout << DrivingCost(20, miles, dollars) << " " << DrivingCost(75, miles, dollars) << " " << DrivingCost(500, miles, dollars) << endl;
   return 0;
}
