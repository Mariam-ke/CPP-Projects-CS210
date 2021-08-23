#ifndef Contact_H
#define Contact_H
#include<string>
using namespace std;

//Defien the class.
class ContactNode {
   public:
      //Define the constructor.
      ContactNode();
      ContactNode(string name, string phone);
      
      //Define the function to insert the records.
      void InsertAfter(ContactNode*);
   
      //Define the accessor.
      string GetName();
      string GetPhoneNumber();
      ContactNode* GetNext();
   
      //Define the function to print the link list data.
      void PrintContactNode();
   
   //Define the data members.
   private:
      string contactName;
      string contactPhoneNum;
      ContactNode* nextNodePtr;
};

#endif