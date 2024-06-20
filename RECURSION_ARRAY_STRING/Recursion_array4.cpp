#include<iostream>
using namespace std;

int Min(int arr[],int idx,int n){

if(idx==n-1)
return arr[idx];


return min(arr[idx],Min(arr,idx+1,n));

}


int main(){

int arr[]={7,2,4,1,6};

cout<<Min(arr,0,5);


    return 0;
}





