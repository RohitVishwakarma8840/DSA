#include<iostream>
using namespace std;

// Method 2 using 1 Arguments

void print(int N){


if(N==1){
    cout<<1<<endl;
    return ;
}

print(N-1);
cout<<N<<endl;



}



// Method 1 using 2 Arguments 

// void print(int n ,int N){

// if(n==N){
//     cout<<N;
//     return ;
// }

// cout<<n<<endl;
// print(n+1, N);

// }


int main(){

int N;
cout<<"Enter the number "<<endl;
cin>>N;

print(N);

// print(1,N);






    return 0;
}








