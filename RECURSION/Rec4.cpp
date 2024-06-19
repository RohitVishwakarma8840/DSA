#include<iostream>
 using namespace std;

int fact(int n){

if(n==1 || n==0)
return 1;


return n*fact(n-1);

}




 int main(){

 int n; 
 cout<<"Enter the Number "<<endl; 
 cin>>n;

if(n<0){
cout<<"Not possible "<<endl;
return 0;
}

 cout<<fact(n)<<endl;





    return 0;
 }







