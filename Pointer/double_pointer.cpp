#include<iostream>
using namespace std;

int main(){

int n=10;
int *p=&n;      // Single Pointer 
int **p2=&p;    // Double Pointer
int ***p3=&p2;  // Triple Pointer

cout<<p<<endl;
cout<<&p<<endl;
cout<<p2<<endl;
cout<<p3<<endl;


    return 0;
}










