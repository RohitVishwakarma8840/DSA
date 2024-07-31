#include<iostream>
using namespace std;

// static members are attributes of class 

class Customer{
 string name;       // name account balance these all will be the part of object 
 int account_no , balance;  // will be used when there is an object
 static int total_customer;      // static keyword is used here // It will be a part of class 
//  int total_customer;  // this will not work
static int total_balance;



 public:

 Customer(string name , int account_no, int balance){
    this->name=name;
    this->account_no=account_no;
    this->balance=balance;
    total_customer++; // this will work with static not by normal methods 
    total_balance+=balance;
    
 }

 // static Member function 
 // Member function
 static void accesStatic(){
    cout<<"total no of customer "<<total_customer<<endl;   // ye  Class kaa function hai ye class ko belong karta hai
    // matlab ye name account balance ko access nahi kar sakta hai actually  
    cout<<"total balance "<<total_balance<<endl;
 }

  void deposit(int amount){
   if(amount>0)
   {
      balance+=amount;
      total_balance+=amount;
   }
  }

  void withdraw(int amount){

 if(amount<=balance&&amount>0){
   balance-=amount;
   total_balance-=amount;
 }



  }


 void display(){
    cout<<name<<" "<<account_no<<" "<<balance<<" "<<total_customer<<endl;
 }

};

// Initialise the static variable which we have created 

int Customer::total_customer=0;
int Customer::total_balance=0;


int main(){

Customer A1("Rohit",1,10000);
Customer  A2("Mohit",2,20000);
Customer A3("Mohan",23,30000);
A1.deposit(500);
Customer::accesStatic();





    return 0;
}





