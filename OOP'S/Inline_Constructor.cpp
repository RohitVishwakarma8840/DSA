#include<iostream>
using namespace std;

class Customer{
 string name;
 int account_no;
 int balance;

 public:
 Customer(){
    cout<<"Constructor is called "<<endl;
 }

 inline Customer(string a,int b,int c): name(a) , account_no(b),balance(c){
// this is called Inline Customer 

 }

 void display(){
    cout<<name<<" "<<account_no<<" "<<balance<<endl;
 }

};




int main(){

 Customer A1;
 Customer A2("Rohit", 452,20000);

 A2.display();


    return 0;
}







