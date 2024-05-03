#include<iostream>
using namespace std;

void printEven(int n){

if(n==2){
    cout<<"2"<<endl;
    return ;
}

cout<<n<<endl;
printEven(n-2);


}

// void print(int n){
 
//  // Base Condition
// if(n==1){
//     cout<<"1" ;
//     return ;
// }

// cout<<n<<endl;
// print(n-1);  // again calling the function 

// }

int main(){

// int n=5;

// print(n);


// Printing the even no
int n=10;
printEven(n);

    return 0;
}









