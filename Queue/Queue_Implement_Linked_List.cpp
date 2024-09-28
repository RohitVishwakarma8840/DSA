#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }


};

class Queue{
Node *front;
Node *rear;

public:

Queue(){
    front = rear = NULL;
}

// Queue is empty or not 
bool IsEmpty(){

  return front==NULL;

}

// Push element into the queue 
void push(int x){
    // empty hai 
    if(IsEmpty()){
    cout<< " Pushed " <<  x << " into the queue " <<endl;
    front= rear = new Node(x);
    return;
    }

    // empty nahi hai 
    else{
                rear->next = new Node(x);

        if(rear->next==NULL){ // it means ki heap ki memory full ho chuki hai 
        cout<<" Queue Overflow "<<endl;  // it means there is no space left in the heap;
        return;
}

        cout<< " Pushed " <<  x << " into the queue " <<endl;
        rear=rear->next;
    }

}

  void pop(){

 // if empty
  if(IsEmpty()){
    cout<<" Queue Underflow "<<endl;
    return;
  }

 // not empty
 else{
    cout<<"Popped "<< front->data << " from the queue "<<endl;
  Node *temp = front;
  front = front->next;
  delete temp;
 }

  }

 int start(){
    // empty
    if(IsEmpty()){
        cout<<" Queue is empty" <<endl;
        return -1;
    }
    else{
        cout<<front->data<<endl;
    }
 }



};


int main(){


Queue q;

q.push(2);
q.push(3);
q.push(32);
q.push(45);
q.pop();
q.pop();

    return 0;
}




