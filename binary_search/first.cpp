#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int key){

int start=0;
int end=n-1;
int mid;

while(start<=end){

mid=start+(end-start)/2;

if(arr[mid]==key){
    return mid;
}

else if(arr[mid]>key){

    end=mid-1;
}
else{
start=mid+1;
}


}


return -1;
}


int main(){

int arr[1000];
int n;
cout<<"enter the size of array "<<endl;
cin>>n;

cout<<"enter the elements of array "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int key;
cout<<"enter the key"<<endl;
cin>>key;

cout<<"the answer is  ";
cout<<Binarysearch(arr,n,key)<<endl;



    return 0;
}


















