#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};
int *ptr=arr;

// Print the address of first element 
cout<<arr<<endl;
cout<<arr+0<<endl;
cout<<&arr[0]<<endl;
cout<<ptr<<endl;

// print the address of first index 1
cout<<arr+1<<endl;
cout<<&arr[1]<<endl;

// Print the value of 0th index 
cout<<arr[0]<<endl;
cout<<*arr<<endl;
cout<<*(arr+0)<<endl;
cout<<*ptr<<endl;



for(int i=0;i<5;i++)
cout<<arr+i<<" ";

cout<<endl;

for(int i=0;i<5;i++)
cout<<*(arr+i)<<" ";








    return 0;
}





