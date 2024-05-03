#include<iostream>
using namespace std;

void printEven(int n ,int N){

if(n==N){
cout<<N;
return ;
}

cout<<n<<endl;
printEven(n+2,N);



}





int main(){

// Print even No from 1 to N 
int N;
cout<<"Enter the number "<<endl;
cin>>N;

if(N%2==1)
N--;

printEven(2,N);

    return 0;
}








