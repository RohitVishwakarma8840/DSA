#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; // pointer jo node type ki value ko point kar raha hai

  // Constructor for creating a linked list 
  Node(int value){
   data=value;
   next=NULL;

  }



};

int main(){

Node *Head , *Tail;
Tail=Head=NULL;

int arr[]={2,4,6,8,10};

// Inserting the value at End
for(int i=0;i<5;i++)
{
// Linked List does not exist 
if(Head==NULL){
    Head= new Node(arr[i]);
    Tail=Head;
}
// Linked List Exist karti hai then 
else{
  Tail->next= new Node(arr[i]);
  Tail=Tail->next;
}
}

Node *temp;
temp=Head;

while(temp){
 
 cout<<temp->data<<" ";
 temp=temp->next;

}


    return 0;
}






