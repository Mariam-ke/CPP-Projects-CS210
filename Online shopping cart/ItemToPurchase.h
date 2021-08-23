#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   
   public:
   //Declaration of default constructor
   ItemToPurchase();

   //Declaration of SetName function
   void SetName(string ItemName);
   
   //Declaration of SetPrice function
   void SetPrice(int itemPrice);

   //Declaration of SetQuantity function
   void SetQuantity(int itemQuantity);

   //Declaration of GetName function
   string GetName();

   //Declaration of GetPrice function
   int GetPrice();

   //Declaration of GetQuantity function
   int GetQuantity();
   
   private:
   
   //Declaration of itemName as type of string
   string itemName;
   
   //Declaration of itemPrice as type of integer
   int itemPrice;
   //Declaration of itemQuantity as type of integer
   int itemQuantity; 
};

#endif