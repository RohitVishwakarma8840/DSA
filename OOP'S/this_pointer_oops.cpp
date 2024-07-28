#include<iostream>
using namespace std;

class Customer{
string name;
int account_no;
int balance;


public:
Customer(string name,int account_no,int balance){
    // using this keyword to know which one is which 

    this->name=name;
    this->account_no=account_no;
    this->balance=balance;
    
}

void display(){
cout<<name<<" "<<account_no<<" "<<balance<<endl;

};

};

int main(){

Customer A1("Rohit",342,24000);
 A1.display();






    return 0;
}








