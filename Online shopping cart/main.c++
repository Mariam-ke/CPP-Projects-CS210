/*
(1) Create three files to submit:

ItemToPurchase.h - Class declaration
ItemToPurchase.cpp - Class definition
main.cpp - main() function
Build the ItemToPurchase class with the following specifications:

Default constructor
Public class functions (mutators & accessors)
SetName() & GetName() (2 pts)
SetPrice() & GetPrice() (2 pts)
SetQuantity() & GetQuantity() (2 pts)
Private data members
string itemName - Initialized in default constructor to "none"
int itemPrice - Initialized in default constructor to 0
int itemQuantity - Initialized in default constructor to 0
(2) In main(), prompt the user for two items and create two objects of the ItemToPurchase class. 
Before prompting for the second item, call cin.ignore() to allow the user to input a new string. (2 pts)

Ex:

Item 1
Enter the item name:
Chocolate Chips
Enter the item price:
3
Enter the item quantity:
1

Item 2
Enter the item name:
Bottled Water
Enter the item price:
1
Enter the item quantity:
10

(3) Add the costs of the two items together and output the total cost. (2 pts)

Ex:

TOTAL COST
Chocolate Chips 1 @ $3 = $3
Bottled Water 10 @ $1 = $10

Total: $13
*/

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   //Declaration of ItemToPurchase class objects
   ItemToPurchase item1Cart, item2Cart;
   
   string itemName;

    //create a variable names for itemPrice itemQuantity and totalCost as type of integer
    int itemPrice;
    int itemQuantity;
    int totalCost = 0;

    //Display statement for Item1
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;

    //call the getline function
    getline(cin, itemName);

    //Display statememt
    cout << "Enter the item price:" << endl;
    cin >> itemPrice;

    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;

    item1Cart.SetName(itemName);
    item1Cart.SetPrice(itemPrice);
    item1Cart.SetQuantity(itemQuantity);

    //call cin.ignore() function
    cin.ignore();

    //Display statement for Item 2
    cout << endl;
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;

    getline(cin, itemName);
    
    cout << "Enter the item price:" << endl;
    cin >> itemPrice;

    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;

    item2Cart.SetName(itemName);
    item2Cart.SetPrice(itemPrice);
    item2Cart.SetQuantity(itemQuantity);

    //Display statement
    cout << endl;
    cout << "TOTAL COST" << endl;

    cout << item1Cart.GetName() << " " << item1Cart.GetQuantity() << " @ $" << item1Cart.GetPrice() << " = $" << (item1Cart.GetQuantity()*item1Cart.GetPrice()) << endl;
    cout << item2Cart.GetName() << " " << item2Cart.GetQuantity() << " @ $" << item2Cart.GetPrice() << " = $" << (item2Cart.GetQuantity()*item2Cart.GetPrice()) << endl;
    
    totalCost = (item1Cart.GetQuantity()*item1Cart.GetPrice()) + (item2Cart.GetQuantity()*item2Cart.GetPrice());

    cout << endl;
    cout << "Total: $" << totalCost << endl;
    
   
   return 0;
}