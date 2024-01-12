#include<iostream>
using namespace std;

int main(){

// for(int i=1;i<=5;i=i+1){

// for(int j=1;j<=i;j=j+1){

// cout<<"* ";

// }
// cout<<endl;

// }

// for(int i=1;i<=5;i=i+1){

// for(int j=1;j<=i;j=j+1){

// cout<<j<<" ";

// }
// cout<<endl;

// }


// 1
// 2 1 
// 3 2 1
// for(int row=1;row<=5;row=row+1){

// for(int col=1;col<=row;col=col+1){

//     cout<<row<<" ";
// }
// cout<<endl;
// }

// for(int row=1;row<=5;row=row+1){

// for(int col=row;col>=1;col=col-1){

// cout<<col<<" ";

// }
// cout<<endl;
// }


// a
// b b 
// c c c 
// d d d d 

// int i;
// char ch='a';

// for( i=1;i<=5;i=i+1){

// for(int j=1;j<=i;j=j+1){

// cout<<char(ch+(i-1))<<" ";


// }

// cout<<endl;

// }

// * * * * *
// * * * *
// * * *
// * *

// for(int i=5;i>=1;i=i-1){

// for(int j=i;j>=1;j=j-1){

// cout<<"*"<<" ";

// }

//     cout<<endl;
// }
// 

// for(int row=1;row<=5;row=row+1){

// for(int col=1;col<=(5-(row-1));col=col+1){
// cout<<"* ";
// }
// cout<<endl;
// }

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3;

// for(int row=1;row<=5;row=row+1){

// for(int col=1;col<=5-row+1;col=col+1){

//   cout<<col<<" ";
// }
// cout<<endl;
// }



// for(int row=5;row>=1;row=row-1){

// for(int col=1;col<=row;col=col+1){

// cout<<col<<" ";

// }
// cout<<endl;
// }

// 5 
// 5 4 
// 5 4 3 
// int row,col;
// for( row=1; row<=5;row=row+1){

// for(col=5;col>=5-row+1;col=col-1){
//     cout<<col<<" ";

// }

// cout<<endl;

// }


//      *
//     **
//    ***

// int row,col;
// for(row=1;row<=5;row=row+1){
    
//     for(col=1;col<=5-row;col=col+1){
//         cout<<"  ";
//     }
    
//     for(col=1;col<=row;col=col+1){
//         cout<< "*"<<" ";
//     }
//     cout<<endl;

// }

// for n elements printing stars

// int n; 
// int row, col;
// cout<<"enter the number n :"<<endl;
// cin>>n;

// for(row=1;row<=n;row=row+1){

// for(col=1;col<=n-row;col=col+1){
//     cout<<"  ";
// }
// for(col=1;col<=row;col=col+1){
//     cout<<"* ";
// }

// cout<<endl;
// }

//      1
//     2 2
//   3 3 3
// 4 4 4 4

int row,col;

for(row=1;row<=4;row=row+1){   // replace 4 with n for taking the input from the user  

for(col=1;col<=4-row;col=col+1){  
    cout<<"  ";
}

for(col=1;col<=row;col=col+1){
    cout<<row<<" ";
}

cout<<endl;

}









    return 0;
}