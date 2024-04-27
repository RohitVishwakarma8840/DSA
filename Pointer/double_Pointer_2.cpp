#include<iostream>
using namespace std;


// void fun(int *p){

// *p=*p+10;

// }

void fun(int  **p1){

*p1=*p1+1;


}



int main(){

int n=10;
int *p=&n;  // Single pointer 
int **p2=&p; // double pointer 

// fun(p);
   fun(p2);
cout<<*p<<endl;





    return 0;
}






