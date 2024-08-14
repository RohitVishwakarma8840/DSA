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

  Node *Head;
  Head=new Node(4);

  cout<<Head->data<<endl;
  cout<<Head->next<<endl;


 int arr[]={2,3,6,8,10};


for(int i=0;i<5;i++)
{
  // if linked list does not exist 
  if(Head==NULL){
    Head=new Node(5);
  }
 
 // if linked list exist
  else{
  Node *temp=Head;
  temp=new Node(arr[i]);
  temp->next=Head;
  Head=temp;
  }
}

// Print the Value 
Node *temp= Head;

while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}


    return 0;
}






