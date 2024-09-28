#include<iostream>
using namespace std;

class Queue{
int *arr;
int front , rear , size;

public:
// Constructor
Queue(int n){
 arr = new int[n];
 size = n;
 front = rear = -1;

}

// queue is empty or not 
bool IsEmpty(){
    return front==-1;
}

// queue is full or not 
bool IsFull(){
    return rear==size-1;
}


void push(int x){
 
 if(IsEmpty()){
    cout<<"Pushed " << x << "  into the queue"<<endl;
    front = rear=0;
    arr[0] = x;
    return;
 }
 // Full
 else if(IsFull()){
  cout<<"Queue Overflow ";
  return;
 }

// Insert
else{
    rear = rear + 1;
    arr[rear] = x;
 cout<<"Pushed " << x << " into the queue"<<endl;

}

}

// Pop the element 
void pop(){
// Empty
if(IsEmpty()){
    cout<<"queue underflow";
    return;
}
 else{
  if(front ==rear){
   cout<<" Popped " << arr[front] << " from the queue"<<endl;

  front = rear= -1; // this means queue empty ho chuka hai acutally 
  }

  // else queue mai jagah hai toh then 

  else
  {
       cout<<"Popped " << arr[front] << " from the queue"<<endl;

   front = front + 1;
  }
 }

}


 // Starting mai kyaa rakha hai 
 int start(){
   if(IsEmpty()){
   cout<<" Queue is Empty"<<endl;
   return -1;
   }

   else{
    return arr[front];
   }


 }


};

int main(){

 Queue q(5);
    
 q.push(1);
 q.push(2);
 q.push(51);
 q.pop();
 q.pop();
 q.pop();
 cout<<q.start()<<endl;

    return 0;
}