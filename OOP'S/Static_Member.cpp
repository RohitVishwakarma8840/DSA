#include<iostream>
using namespace std;

class Customer{
 string name;
 int account_no , balance;

 public:

 Customer(string name , int account_no, int balance){
    this->name=name;
    this->account_no=account_no;
    this->balance=balance;
 }


};





int main(){

Customer A1("Rohit",1,10000);
Customer  A2("Mohit",2,20000);






    return 0;
}





