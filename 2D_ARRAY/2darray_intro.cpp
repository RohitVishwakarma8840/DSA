#include<iostream>
using namespace std;

int main(){

// initializing the 2d array 
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

// printing the array 
// for(int row=0;row<3;row++){
// for(int col=0;col<4;col++){
// cout<<arr[row][col]<<" ";
// }
// cout<<endl;
// }

// Finding an element in an array 

int x=7;

for(int row=0;row<3;row++){
for(int col=0;col<4;col++){

if(arr[row][col]==x){
cout<<"YES the element is present "<<endl;
return 0;
}
}
}




cout<<"NO the element is not present "<<endl; 


    return 0;
}