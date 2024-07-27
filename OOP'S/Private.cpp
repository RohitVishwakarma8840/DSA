#include<iostream>
using namespace std;

class Student{
    string name;
    int age ,roll_number;
    string grade;

    // Function Getter and Setter 
    public:
    void setname(string n){
        if(n.size()==0){
           cout<<"Invalid Name ";
        }
        name = n;
    }

    void setage(int x){
        age=x;
    }

  // Getting the private members in main function 
  void getname(){
    cout<<name<<endl;
  }

  void getage(){
    cout<<age<<endl;
  }


};

int main(){

Student S1;

S1.setname("Rohit");
S1.setage(10);

S1.getname();
S1.getage();

    return 0;
}






