#include<iostream>
using namespace std;


int main(){

// char name;

// for(name='a';name<='z';name=name+1){

// cout<<name<<" ";


// }



// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=n;i>=1;i=i-1){
//     cout<<i<<" ";
// }

// for(int i=1;i<=100;i=i+3){

//     cout<<i<<" ";
// }


// printing the table 
// int n;
// cout<<"enter the value of n "<<endl;
// cin>>n;

// for(int i=1;i<=10;i=i+1){
    
//     cout<<n*i<<" ";
// }

// calculating the power of a number;
// int n;
// int i,power,num;

// cout<<"enter the number"<<endl;
// cin>>n;
// cout<<"enter the power"<<endl;
// cin>>power;

// num=n;
// for(i=1;i<power;i=i+1){

//     num=num*n;
// }

// cout<<"the answer is "<<num<<endl;


// printing the sum of natural numbers from 1 to n 

// int n;
// cout<<"enter the value of n "<<endl;
// cin>>n;
// int sum=0;

// for(int i=1;i<=n;i=i+1){

//     sum=sum+i;
// }

// cout<<"the value of sum is "<<sum<<endl;

// second method 

// int n;
// cout<<"enter the number "<<endl;
// cin>>n;

// int sum=n*(n+1)/2;
// cout<<sum<<endl;

// factorial of a number 
// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// int ans=1;
// for(int i=1;i<=n;i=i+1){

//     ans=ans*i;
// }
// cout<<"the value of ans is "<<ans<<endl;

// prime number or not
// int n;
// cout<<"enter the number"<<endl;
// cin>>n;

// if(n<2){
//     cout<<"not a prime number"<<endl;
//     return 0;
// }

// else{
// for(int i=2;i<n;i=i+1){
// if(n%i==0){
//    cout<<"not prime"<<endl;
// return 0;
// }
// }

// }
// cout<<"prime"<<endl;

// program to print fibonnaci series in a question 

int n;
cout<<"enter the number"<<endl;
cin>>n;

int last=0;
int prev=1;
int current;

for(int i=3;i<=n;i=i+1){
current=last+prev;
last=prev;
prev=current;


}


cout<<current<<endl;

    return 0;
}