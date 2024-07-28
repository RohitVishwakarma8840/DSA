#include<iostream>
using namespace std;

class Customer{

string name;
int account_no;
int balance;

// if we dont define a constructor then it is called automatically by the compiler 
// Constructor is called automatically at the time of object creation 

public:

 // Default Constructor 

 Customer(){
 
  cout<<"Constructor is called"<<endl;
  name="rohit";
  account_no=121;
  balance=500000;

 }

 // We can make another constructor 
 // Parametrized Constructor 
 Customer(string n,int a , int b ){
  name=n;
  account_no=a;
  balance=b;

 }

 void display(){
    cout<<name<<" "<<account_no<<" "<<balance<<endl;

 }




};




int main(){

  Customer A1;
  A1.display();
  Customer A2("Rover",234,60000);
  A2.display();


    return 0;
}








