#include<iostream>
using namespace std;

class Student{

public:
 string name;
 int age , roll_number;
 string grade;

};

int main(){

Student S1;  // Object is created here 
S1.name="Rohit ";
S1.age=10;
S1.roll_number=23;
S1.grade="A";

cout<<S1.name<<" ";
cout<<S1.age<<" ";
cout<<S1.grade<<endl ;

Student S2;
S2.name="Mohit";
S2.age=20;

cout<<S2.name<<endl;
cout<<S2.age<<endl;




    return 0;
}








