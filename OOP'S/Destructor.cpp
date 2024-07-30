#include<iostream>
using namespace std;

class Customer{
    string name;
    int *data;

    public:
    
    Customer(){
     name="4";
    cout<<"Constructor"<<name<<endl;


    }

    Customer(string name){
    this->name=name;
    cout<<"Constructor"<<name<<endl;

    }

    // Destructor 
    // how destructor works its code 
    
    ~ Customer(){
      cout<<"Destructor "<<name<<endl;

    }


};




int main(){

 Customer A1("1"), A2("2"), A3("3");
 Customer  *A4= new Customer;
 delete A4;

// This will release the memory of A4 dynamic memory 



    return 0;
}






