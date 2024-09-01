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


    // Deleting at a particular position 
    int pos=3;

    // Delete at Start
    if(pos==1)
{
     if(head!=NULL){
    
    Node *temp = head;
    head = head->next;
    delete temp;

    if(head)
    head->prev=NULL;

    }

}

  Node *curr = head;
  while(--pos)
  curr=curr->next;
  
 //Delete at End

 if(curr->next==NULL){
  curr->prev->next=NULL;
  delete curr; 


 }
    //Delete at Middle 
else{
  curr->prev->next=curr->next;
  curr->next->prev=curr->prev;
  delete curr;

}











 

  Node *trav=head;
  while(trav){
    cout<<trav->value<<" ";
    trav=trav->next;
  }


    return 0;
}