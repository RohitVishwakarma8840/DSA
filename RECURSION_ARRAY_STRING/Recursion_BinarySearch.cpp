#include<iostream>
using namespace std;

bool binarysearch(int arr[] , int X , int start , int end){

// base case 
if(start>end)
return 0;

int mid= start+(end-start)/2;

if(arr[mid]==X)
return 1;
else if(arr[mid]>X)
binarysearch(arr,X,start,mid-1);
else
return binarysearch(arr,X,mid+1,end);

}


int main(){

int arr[]={3,8,11,15,20,22};
 
 int X=20;
 cout<<binarysearch(arr,X,0,5);


    return 0;
}








