#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;


Node (int value){
    data = value;
    next = NULL;
}

};

class Stack{
 Node *top;
 int size;

public:
 Stack(){
 top=NULL;
 size = 0;
 }

 // Push 
 void Push(int value){


  Node *temp = new Node(value);
  
  if(temp==NULL){
    cout<<"Stack Overflow "<<endl;
    return ;
  }
  else{
  temp->next = top;
  top = temp;
  size++;
    cout<<"Pushed " << value <<" into stack "<<endl;

  }

 }

 // Pop
 void Pop(){
 if(top==NULL){
    cout<<"Stack Overflow "<<endl;
    return ;
 }
 else{
  Node *temp = top;
  cout<<"Popped " << top->data <<" from stack "<<endl;
  top = top->next;
  delete temp;
  size--;

 }

 }

//Display Peek 
int Peek(){

  if(top==NULL){
    cout<<"Stack is Empty "<<endl;
    return -1; 
  }
  else{
     cout<<top->data<<endl;
  }
    
 }

// isEmpty
bool isEmpty(){
  return top==NULL;
}

// Size function 
int isSize(){
  return size;
}


};



int main(){

Stack S;
S.Push(6);       
S.Push(64);       
S.Push(68);       
S.Push(69);       
S.Pop();
S.Peek();







    return 0;
}