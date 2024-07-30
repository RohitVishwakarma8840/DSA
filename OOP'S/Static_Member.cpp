#include<iostream>
using namespace std;

// static members are attributes of class 

class Customer{
 string name;
 int account_no , balance;
 static int total_customer;      // static keyword is used here 
//  int total_customer;  // this will not work

 public:

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
A3.display();
A1.display();
A2.display();



    return 0;
}





