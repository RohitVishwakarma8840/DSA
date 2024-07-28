#include<iostream>
using namespace std;

class Customer{

string name;
int account_no;
int balance;

// if we dont define a constructor then it is called automatically by the compiler 
// Constructor is called automatically at the time of object creation 

public:
 Customer(){
 
  cout<<"Constructor is called"<<endl;

 }


};




int main(){

  Customer A1;




    return 0;
}








