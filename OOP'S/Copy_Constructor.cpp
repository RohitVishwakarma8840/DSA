#include<iostream>
using namespace std;

class Customer{

 public:
string name;
int account;
int balance;

Customer(){
    cout<<"constructor is called "<<endl;
}

Customer(string a, int b ,int c){
  name=a;
  account=b;
  balance=c;

}

void display(){
    cout<<name<<" "<<account<<" "<<balance<<endl;
}


  // Copy Constructor 
 Customer(Customer &B){
  name=B.name;
  account=B.account;
  balance=B.balance;
  
  
 }

};


int main(){

Customer A1("rohit",232,400000);

// if we donot define the copy constructor by ourself 
// then the automatically has default constructor by itself;
Customer A2(A1);

A2.display();



    return 0;
}






