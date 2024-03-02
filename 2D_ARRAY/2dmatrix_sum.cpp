#include<iostream>
using namespace std;


void printmax(int arr1[][4],int row,int col){

int index=-1; int sum=INT32_MIN;

for(int i=0;i<row;i++){
int total=0;
for(int j=0;j<col;j++)
total+=arr1[i][j];
if(total>sum){
    sum=total;
    index=i;
}

}

cout<<" the row with maximum sum have index "<< index<<endl; 

}

int main(){

// int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
// int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,11};
// int ans[3][4];

// // Add 2 matrix to element the code 
// for(int row=0;row<3;row++){
// for(int col=0;col<4;col++){

// ans[row][col]=arr1[row][col]+arr2[row][col];

// }
// }

// for(int row=0;row<3;row++){
//     for(int col=0;col<4;col++){

// cout<<ans[row][col]<<" ";
//     }
//     cout<<endl;
// }







int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};


printmax(arr1,3,4);



    return 0;
}




