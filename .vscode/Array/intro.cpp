#include<iostream>
using namespace std;


int main(){

// int arr[5]; // array declaration 

// int arr[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){

//     cout<<arr[i]<<" ";
// }

// int arr[]={1,2,3,4,5,6};
// for(int i=0;i<6;i=i+1){
//     cout<<arr[i]<<" ";
// }

// int arr[]={1,2,3};
// for(int i=0;i<6;i=i+1){
//     cout<<arr[i]<<" ";  // after three it will print garbage value 
// }

// int arr[6]={0};
// for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
// }

int arr[6];
cout<<"enter the elements of the array "<<endl;
for(int i=0;i<6;i++){
 cin>>arr[i];
}

cout<<"the elements of array are "<<endl;
for(int i=0;i<6;i++){

    cout<<arr[i]<<" ";
}





    return 0;
}