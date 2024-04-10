#include<iostream>
using namespace std;

int main(){

// what is Refrence Variable 
// Refrence variable is same as that of the original but with a different name it has 
int num=10;
int &temp=num;
// this is the syntax for creating a refrence variable 
cout<<num<<" "<<temp<<endl;
cout<<&num<<" "<<&temp<<endl;

// here you can see that both have same address 

    return 0;
}