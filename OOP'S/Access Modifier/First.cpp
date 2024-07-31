#include<iostream>
using namespace std;

class Human{

private:
int a;
protected:
int b;

public:
int c;

// if we replace that function in private 
// then also it will work 

// void fun(){
//     a=10;
//     b=20;
//     c=30;
//     cout<<"The function is called "<<endl;
// }


};


int main(){

 Human Rohit;
 Rohit.c=40;

 Rohit.fun();



    return 0;
}






