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



int main(){

Node *head=NULL , *tail=NULL;

// Create Doubly Linked List 
 int arr[]={1,2,3,4,5};

 for(int i=0;i<5;i++){
   if(head==NULL){
    head=new Node(arr[i]);
    tail=head;
   }

   else{
    Node *temp=new Node(arr[i]);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
       
   }
 }

Node *trav=head;
while(trav){
    cout<<trav->value<<" ";
    trav=trav->next;

}


    return 0;
}