#include<iostream>
using namespace std;


int main(){

// int num;
// cout<<"enter your number"<<endl;
// cin>>num;

// int ans=0;
// int rem;
// int mul=1;

// while(num>0){
// // remainder
// rem=num%2;
// // quoitent
// num=num/2;

// // ans
// ans=rem*mul+ans;

// // mul
// mul=mul*10;


// }

// cout<<ans<<endl;


// decimal to binary

int num;
cout<<"enter the number "<<endl;
cin>>num;

int ans=0;
int mul=1;
int rem;


while(num>0){

// remainder
rem=num%10;
// num ko divide kar do 
num=num/10;

// ans
ans=rem*mul+ans;

// mul 
mul=mul*2;


}


cout<<"the answer is "<<ans<<endl;


    return 0;
}