#include<iostream>
#include<cmath>
using namespace std;

// Abstraction is hiding the unnessecary details form the users so that they 
// donot have a look over that 

class Customer{
 string name;
 int account_no , balance;

 public:

  static int total_customer;      // static keyword is used here 


 Customer(string name , int account_no, int balance){
    this->name=name;
    this->account_no=account_no;
    this->balance=balance;
    total_customer++; // this will work with static not by normal methods 
    
 }

 void display(){
    cout<<name<<" "<<account_no<<" "<<balance<<" "<<total_customer<<endl;
 }

};

// Initialise the static variable which we have created 

int Customer::total_customer=0;

int main(){

Customer A1("Rohit",1,10000);
Customer  A2("Mohit",2,20000);

A1.display();
A2.display();

Customer A3("camila",3,3000);

Customer::total_customer=5;  // accessing the static variable without the objects here 

A3.display();

cout<<pow(2,4)<<endl; // abstraction example 

    return 0;
}





