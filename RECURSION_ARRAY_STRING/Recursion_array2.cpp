#include<iostream>
using namespace std; 

void printInReverse(int arr[],int index){

if(index==-1)
return ;

cout<<arr[index]<<" ";
printInReverse(arr,index-1);


}



// void print(int arr[],int n,int index){

//     if(index==n)
//     return ;

// // for printing in the reverse order we do this 
// print(arr,n,index+1);
// cout<<arr[index]<<" ";


// }

int main(){

 int arr[]={3,4,5,7,8};

// print(arr,5,0);

printInReverse(arr,4);



    return 0;
}










