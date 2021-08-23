#include <iostream>
using namespace std;
#include "ContactNode.h"

//Define the default constructor.
ContactNode::ContactNode(){
   nextNodePtr=nullptr;
}

//Define the parametrized constructor.
ContactNode::ContactNode(string name, string phoneNum){
   contactName = name;
   contactPhoneNum = phoneNum;
   nextNodePtr = nullptr;
}

//Define the function to insert the node.
void ContactNode::InsertAfter(ContactNode *nextNode) {
   ContactNode *t;
   
   if(nextNodePtr == nullptr)
   nextNodePtr = nextNode;
   
   else {
      t = nextNodePtr;
      while(t->GetNext() != nullptr) {
         t = t->GetNext();
      }
      t->InsertAfter(nextNode);
   }
}

//Define the function returning name.
string ContactNode::GetName() {
   return contactName;
}

//Define the function returning contactPhoneNum.
string ContactNode::GetPhoneNumber() {
   return contactPhoneNum;
}

//Define the function returning nextNode.
ContactNode* ContactNode::GetNext() {
   return nextNodePtr;
}

//Define the function to print the link list data.
void ContactNode::PrintContactNode() {
   
   //Print the record of the first node.
   cout<<"Name: "<<GetName()<<endl;
   cout<<"Phone number: "<<GetPhoneNumber()<<endl<<endl;   
   ContactNode *t = GetNext();
   
   //Print the record of the successive nodes.
   while(t != nullptr) {
      
      cout << "Name: "<< t->GetName() << endl;
      cout << "Phone number: " << t->GetPhoneNumber() << endl << endl;
      t = t->GetNext();
   }
}