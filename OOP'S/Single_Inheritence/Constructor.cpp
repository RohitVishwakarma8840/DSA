#include<iostream>
using namespace std;

class Human{
protected:
string name;
int age;

public:

// pehle parent class kaa constructor call hoga then child class ka 
~Human(){
    cout<<"Hello Human"<<endl;
}

void work(){
    cout<<"I am working "<<endl;
}


};

class Student : public Human{

int roll_no , fees;

public:

// Student(string name , int age, int roll_no, int fees){
//     this->name=name;
//     this->age=age;
//     this->roll_no=roll_no;
//     this->fees=fees;
// }

// constructor 
// first parent constructor will be called then child constructor will be called 

~ Student(){
    cout<<"Hello Student"<<endl;
}




};



int main(){

Student A1;
A1.work();

    return 0;
}





