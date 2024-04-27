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


// Value ko modify karna jo ki n mai rakhi hai 

// *p=*p+5;
// cout<<n<<endl;

**p2=**p2+5;
cout<<n<<endl;

***p3=***p3+5;
cout<<n<<endl;

    return 0;
}










