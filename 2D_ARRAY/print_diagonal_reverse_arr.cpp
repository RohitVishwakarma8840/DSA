#include<iostream>
using namespace std;

int main(){

int arr[3][3]={1,2,3,4,5,6,7,8,9};

int first=0; int i=0; int j=0;
while(i<3){
    first+=arr[i][j];
    i++,j++;
}


int second=0;  i=0; j=2;
while(j>=0){

second+=arr[i][j];
i++;
j--;
}

cout<<first<<" and the second ans is "<<second<<endl;


    return 0;
}











