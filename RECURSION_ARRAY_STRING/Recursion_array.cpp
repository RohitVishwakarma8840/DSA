#include<iostream>
using namespace std;


void print(int arr[], int index , int n ){

// Base Condition 
if(index==n){
    return ;
}

cout<<arr[index]<<" ";
print(arr,index+1, n);
// Calling off next function 


}


int main(){

int arr[]={3,4,1,2,8};
print(arr,0,5);


    return 0;
}








