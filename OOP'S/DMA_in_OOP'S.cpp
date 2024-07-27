#include<iostream>
using namespace std;

class Student{
public:
string name;
int age,roll_no;
string grade;


};

int main(){

Student *S= new Student;

(*S).name="Rohit";
(*S).age=10;
(*S).roll_no=121;
(*S).grade="A+";


cout<<S->name<<" ";
cout<<S->age<<" ";
cout<<S->roll_no<<" ";
cout<<S->grade<<" ";


  delete S; 

    return 0;
}





