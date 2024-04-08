#include<iostream>
using namespace std;

int main(){

 int a=10;
 int *ptr=&a;
 cout<<ptr<<endl;
 
 // size of ptr ; 
 cout<<sizeof(ptr)<<endl;

// Derefrencing the pointer 
  cout<<*ptr<<endl;

int b=30;
ptr=&b;
cout<<ptr<<endl;
cout<<*ptr<<endl;
 
b=40;
cout<<*ptr<<endl;










    return 0;
}







