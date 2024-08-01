#include<iostream>
using namespace std;

// name and age members in the Human class. These members are protected,
//  meaning they can be accessed by derived classes but not directly by instances of those classes. 

class Human{
protected:
 string name;
 int age;

// once they are private they cannot be accessed by anyone outside the class

};

class Student : public Human{

int roll_no , fees;


};



int main(){

 Student A;
 A.name="rohit";

    return 0;
}

 





