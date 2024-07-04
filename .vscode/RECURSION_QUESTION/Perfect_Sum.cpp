#include<iostream>
using namespace std;

int Subset(int arr[] , int index , int sum , int n){

if(index==n){

if(sum==0)
return 1;

else
return 0;

// return sum==0;



}

return Subset(arr, index+1,sum , n ) + Subset(arr , index+1 , sum-arr[index] , n);







}


int main(){

int arr[]={2,5,6,1};
int sum=8;

cout<<Subset(arr, 0, sum , 4)<<endl;




    return 0;
}





