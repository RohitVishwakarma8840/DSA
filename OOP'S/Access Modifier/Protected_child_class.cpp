#include<iostream>
using namespace std;

// name and age members in the Human class. These members are protected,
//  meaning they can be accessed by derived classes but not directly by instances of those classes. 



// the access specifier used in the Student class. When you derive Student from Human using protected inheritance,
//  the members of Human that are public become protected in Student. 


class Human{
public:
 string name;
 int age;
 int weight;

// once they are private they cannot be accessed by anyone outside the class

};

class Student : protected Human{

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
//  A.name="rohit"; in this way direct access nahi kar sakte hai 
A.fun("Rohit",40,321);
// A.name="mohit";  not valid here 
A.display();

    return 0;
} 

 





