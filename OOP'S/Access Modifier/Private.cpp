#include<iostream>
using namespace std;

 // private hi consider kare jaynege 


class Human{
public:
 string name;
 int age;
 int weight;


};

class Student : private Human{

private:
int roll_no , fees;

public:

void fun(string s, int a , int w){
    name=s;
    age=a;
    weight=w;

}

void display(){

    cout<<name<<" "<<age<<" "<<weight<<endl;
}


};



int main(){

 Student A; 
A.fun("Rohit",40,321);
// A.name="rover"; not valid becoz private 
A.display();

    return 0;
} 

 





