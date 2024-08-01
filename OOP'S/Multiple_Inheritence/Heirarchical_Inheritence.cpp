#include<iostream>
using namespace std;

class Human{
protected:
string name;
int age;

public:

Human(){

};

Human(string name,int age){
    this->name=name;
    this->age=age;
}

void display(){
    cout<<name<<" "<<age<<endl;
}


};

class Student : public Human{

int roll_no , fees;

public:


Student(string name , int age, int roll_no, int fees): Human(name,  age)
   {
    this->roll_no=roll_no;
    this->fees=fees;
}

void display(){
    cout<<name<<"  "<<age<<" "<<roll_no<<" "<<fees<<endl;
}


};

class Teacher : public Human{
    int salary;

    public:
    Teacher(int salary, string name,int age){
        this->salary=salary;
        this->name=name;
        this->age=age;

    }

    void display(){
        cout<<salary<<" "<<name<<" "<<age<<endl;
    }

};



int main(){

Student A1("Rohit",20,21,3000);
A1.display();  // we are able to access the work function 

Teacher A2(99,"jutta",23);
A2.display();

    return 0;
}





