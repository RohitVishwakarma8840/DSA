#include<iostream>
using namespace std; 

class Node{
    public:
    int data; 
    Node *prev , *next;

    // constructor
    Node(int value){
        data = value;
        next = prev = NULL;
    }

};

class Dequeue{
    Node *front , *rear ; 
    public:

  Dequeue(){
    front = rear = NULL; 
  }

   // push front 



   // push back 


   // pop front 



   // pop back 




}








int main(){





    return 0;
}