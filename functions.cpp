#include<iostream>
using namespace std;

// int sum(int a,int b){  // function call 

// int ans=a+b;          // fuction define 
// return ans;

// }

// void mul(int x,int y ){
  
//   int ans=x*y;
// cout<<ans<<endl;

// }

bool isPrime(int n){

if(n<2)
return 0;

for(int i=2;i<=7;i=i+1){
    if(n%i==0)
    return 0;
}

return 1;

}

int fact(int n){
int ans=1;
for(int i=1;i<=n;i=i+1){

    ans=ans*i;
}
return ans;

}




int main(){

// int m,n,p,q;
// cout<<"enter the number "<<endl;
// cin>>m>>n;
// cout<<"enter the second numbers"<<endl;
// cin>>p>>q;
// cout<<sum(m,n)<<endl;  // function call;
// mul(p,q);  // function call;

int a,b;
cout<<"enter the number to check for prime "<<endl;
cin>>a>>b;

cout<<isPrime(a)<<endl;
cout<<isPrime(b)<<endl;
cout<<fact(a)<<endl;
cout<<fact(b)<<endl;
cout<<fact(b-a)<<endl;





    return 0;
}