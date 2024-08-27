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

 Node *head=NULL;

 // To insert at Start 

 // Linked List doesn't exist 
 if(head==NULL){
    head=new Node(5);
 }

 // Linked List exist 
 else{
  Node *temp=new Node(5);
  temp->next=head;
  head->prev=temp;
  head=temp;
 }

  Node *trav=head;
  while(trav){
    cout<<trav->value<<" ";
    trav=trav->next;
  }


    return 0;
}