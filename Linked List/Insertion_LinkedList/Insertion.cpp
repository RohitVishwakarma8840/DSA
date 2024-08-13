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

    return 0;
}






