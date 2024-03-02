#include<iostream>
using namespace std;


// here we have passed our col value because computer uses it 
// base-address + ((row-index*col)+col-index)*size; thats why we pass it here 
void printcol(int arr[][4],int row,int col){

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){

  cout<<arr[i][j]<<" "; 

    }
    cout<<endl;
}

}



int main(){

// 2d array initialization 
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

printcol(arr,3,4);



    return 0;
}










