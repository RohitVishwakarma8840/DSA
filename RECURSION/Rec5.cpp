#include<iostream>
using namespace std;

// int sum(int n){

// // Base Case
// if(n==1)
// return 1;

// return n+sum(n-1);


// }
 
int pow(int num , int n){
    if(n==1)
    return num;


    return num*pow(num,n-1);
}


int main(){

// int n;
// cout<<"Enter the number "<<endl;
// cin>>n;

// cout<<sum(n)<<endl;

int n, num;
cout<<" enter the number and the power up to which be have to calculate "<<endl;
cin>>n>>num;

cout<<" the result is "<<pow(num ,n)<<endl;
    return 0;
}







