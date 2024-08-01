#include<iostream>
using namespace std;

class Person{
protected:
string name;

public:

void introduce(){
  cout<<" Hello my name is "<<name <<endl;

}


};

class Employee: public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<" Monthly salary is "<<salary<<endl;
    }


};

class Manager : public Employee{
    public:
    string department;

    Manager(string name, int salary , string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }

    void work(){
        cout<<"My department is "<<department<<endl;
    }



};


int main(){

Manager A1("Rohit",200000,"developer");
A1.work();


    return 0;
}







