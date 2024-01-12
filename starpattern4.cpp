#include<iostream>
using namespace std;

int  main(){

// int row,col;
// int i;

// for(row=1;row<=4;row=row+1){   // replace 4 with n for taking the input from the user  

// for(col=1;col<=4-row;col=col+1){  
//     cout<<"  ";
// }

// for(i=1;i<=row;i=i+1){
//     cout<<i<<" ";
// }

// cout<<endl;
// }

// int row,col;
// for(row=1;row<=5;row=row+1){

// for(col=1;col<=5-row;col=col+1){
//     cout<<"  ";
// }

// for(col=1;col<=row;col=col+1){
// cout<<col<<" ";
// }
// cout<<endl;
// }

//      A 
//    A B
//  A B C

// int row,col;
// for(row=1;row<=5;row=row+1){

// for(col=1;col<=5-row;col=col+1){
//     cout<<"  ";
// }

// for(char name='A';name<='A'+row-1;name=name+1){

//     cout<<name<<" ";
// }

// cout<<endl;
// }


//       1 
//     2 1
//   3 2 1
// 4 3 2 1

// int row,col;

// for(row=1;row<=5;row=row+1){

// for(col=1;col<=5-row;col=col+1){
//     cout<<"  ";
// }

// for(int i=row;i>=1;i=i-1){
//     cout<<i<<" ";
// }

// cout<<endl;

// }

//        *
//      * * * 
//    * * * * *

// int row,col;
// int n;
// cout<<"enter the value"<<endl;
// cin>>n;

// for(row=1;row<=n;row=row+1){
    
// for(col=1;col<=n-row;col=col+1){
//     cout<<"  ";
// }

// for(col=1;col<=2*row-1;col=col+1){
//     cout<<"* ";
// }

// cout<<endl;
// }


//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// int row,col;
// for(row=1;row<=5;row=row+1){

// for(col=1;col<=5-row;col=col+1){
//     cout<<"  ";
// }
// for(col=1;col<=row;col=col+1){
//     cout<<col<<" ";
// }
// for(col=row-1;col>=1;col=col-1){
//     cout<<col<<" ";
// }

// cout<<endl;

// }


// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

// int row,col ;
// int n;
// cout<<"enter the value of n "<<endl;
// cin>>n;

// for(row=n;row>=1;row=row-1){

// for(col=1;col<n-row;col=col=col+1){

//     cout<<"  ";
// }

// for(col=1;col<=2*row-1;col=col+1){
//     cout<<"* ";
// }

// cout<<endl;

// }

// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *

// int row,col;
 
// for(row=4;row>=1;row=row-1){

// for(col=1;col<=row;col=col+1){
//     cout<<"* ";
// }
// for(col=1;col<=8-2*row;col=col+1){
//     cout<<"  ";
// }
// for(col=1;col<=row;col=col+1){
//     cout<<"* ";
// }
// cout<<endl;
// }

// for(row=1;row<=4;row=row+1){

// for(col=1;col<=row;col=col+1){
//     cout<<"* ";
// }
// for(col=1;col<=8-2*row;col=col+1){
//     cout<<"  ";
// }
// for(col=1;col<=row;col=col+1){
//     cout<<"* ";
// }

//     cout<<endl;
// }



//     *
//    * *
//   * * *
//  * * * *
//  * * * *
//   * * *
//    * *
//     *

int row,col;
for(row=1;row<=4;row=row+1){

for(col=1;col<=4-row;col=col+1){
    cout<<" ";
}

for(col=1;col<=row;col=col+1){
    cout<<"* ";
}
cout<<endl;

}


for(row=4;row>=1;row=row-1){

for(col=1;col<=4-row;col=col+1){
    cout<<" ";
}

for(col=1;col<=row;col=col+1){
    cout<<"* ";
}

    cout<<endl;
}








    return 0;
}








