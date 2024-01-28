#include<iostream>
using namespace std;

int main(){


// Its a bad practice to do that  avoid it 
// int size;
// cout<<"enter the size of array "<< endl;
// cin>>size;
// int arr[size];

// for(int i=0;i<size;i++){
// cin>>arr[i];

// }

// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }

int arr[100];
int size;
cout<<"enter the size of the array "<<endl;
cin>>size;

for(int i=0;i<size;i++){
    cin>>arr[i];
}

for(int i=0;i<100;i++){
    cout<<arr[i]<<" ";
}





    return 0;
}