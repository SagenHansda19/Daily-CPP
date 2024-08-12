#include<iostream>
using namespace std;
struct Node
{
     int data;
     Node* next;
};
Node* insertatend(Node* head, int newdata)
{
     Node* newnode = new Node();   //new node creation
     newnode-> data = newdata;
     newnode-> next = nullptr;
     if(head == nullptr)      //if head is null then make new node as head
     {
          head = newnode;
     }
     else      
     {
          Node* temp = head;       //create a temp node to assign head
          while(temp->next != nullptr)
          {
               temp = temp->next;       //traverse to the end of list
          }
          temp->next = newnode;    //inseting newnode at the end
     }
     return head;
}
void print(Node* head)
{
     while(head != nullptr)
     {
          cout<<head->data<<" ";
          head = head->next;
     }
     cout<<endl;
}
int main()
{
     Node* head = nullptr;    //initialize empty list
     head = insertatend(head , 87);
     head = insertatend(head , 69);
     head = insertatend(head , 55);
     print(head);
     return 0;
}