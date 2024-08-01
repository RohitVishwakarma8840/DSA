#include<iostream>
using namespace std;

class Human{
 string name;
 int age;

// once they are private they cannot be accessed by anyone outside the class

};

class Student : public Human{

int roll_no , fees;


};



int main(){

 Student A;
//  A.age=20; // it cannot be done once the class is declared public it cannot by any access modifier 
// 
    return 0;
}

 





