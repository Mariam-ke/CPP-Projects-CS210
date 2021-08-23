/*
 * Calculator.cpp
 *  Author: [Mariam Haji]
 */
 
#include <iostream>
using namespace std;

int main() //Standard Requries int main() and return 0 instead of void main
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer; //A Char needs signle quotes, a semicolon and should be lowercase  

  do { //added a do statement
    cout << "Enter expression" <<endl;
		cin >> op1 >> operation >> op2; //fixed from reading input 2 first the 1
		
		if (operation == '+') //If statements don't have ';' and use single quotes
		cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //changed >> to << since >> is used for input statements
		
		if (operation == '-') //If statements don't have ';'
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //changed >> to << since >> is used for input statements
			
		if (operation == '*')
			cout << op1 << " / " << op2 << " = " << op1 * op2 << endl; //added ; to complete the statment and resolve bug
			
		if (operation == '/')
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // changed the output to read / since it's a division instead on *

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
   } while (answer=='y' || answer=='Y');
 

    return 0; //For the int main
	 
}



// Cases for the Wrong Time Input
	if (hour > 23) {
		cout << "Wrong Time input";
	}
	else if (min > 60) {
		cout << "Wrong Time Input";
	}
	else if (sec > 60) {
		cout << "Wrong Time Input";
	}

	// Otherwise
	else {
		while (1)
		cout << currTime << ":";
		cout << "Current Time = " << hour << ":" << min << ":" << sec << endl;
		