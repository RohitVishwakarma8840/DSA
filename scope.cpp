#include<iostream>
using namespace std;


int main(){



// not valid because this is within the block and it will not work 

// int n=20;

// cout<<n<<endl;

// int n=30;

// cout<<n<<endl;


// blocked scope
int n=30;
cout<<n<<endl;
int i=20;
if(i<=30){

    int n=50;  // blocked scope it will work 
    cout<<n<<endl;
}


// example 3

//  int n=20;
//   int i=30;
//   if(i>=n){
       
//       cout<<n<<endl;
       
//   }
   




    return 0;
}