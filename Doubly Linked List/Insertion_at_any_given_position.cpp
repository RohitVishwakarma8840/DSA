#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node *next=NULL;
    Node *prev=NULL;

    Node(int val){
        value=val;
        next,prev=NULL;


    }


};

// 1 2 3 4 

 Node *CreateDLL(int arr[],int index , int size ,Node *back){

// Base Case 
   if(index==size)
   return NULL;

   Node *temp= new Node(arr[index]);
    temp->prev=back;
    temp->next = CreateDLL(arr,index+1, 5,temp);
     
     return temp;

 }

int main(){

 Node *head=NULL;

// Recursion Doubly Linked List 

  int arr[]={1,2,3,4,5};


  // Calling the Recursive function 
    head= CreateDLL(arr,0,5,NULL);


     // Insert at any position 
  int pos=2;


  // Insert at Start
  if(pos==0){
   
   // Linked list exist naa kare 
   if(head==NULL){
    head=new Node(5);
   }
   else{
    Node *temp=new Node(5);
    temp->next=head;
    head->prev=temp;
    head=temp;


   }
  } 
 else{
   Node *curr=head;

   // Go to the Node which i have to insert 
   while(--pos){
    curr=curr->next;
   }

 // Insert at End 
  if(curr->next==NULL){
    Node *temp= new Node(5);
    temp->prev=curr;
    curr->prev=temp;
  }

 // Inserting at any middle position 
  else{
  Node *temp= new Node(5);
  temp->next=curr->next;
  temp->prev=curr;
  curr->next=temp;
  temp->next->prev=temp;

  }
 }




Node *trav=head;
while(trav){
    cout<<trav->value<<" ";
    trav=trav->next;

}
 


    return 0;
}