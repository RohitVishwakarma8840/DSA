#include<iostream>
using namespace std;

int main(){

int n, m; // n= rows and m=cols;
cout<<" Enter the no of rows and columns"<<endl;
cin>>n>>m;

int **ptr = new int *[n];

// Creating the 2D Array 
for(int i=0; i<n ; i++){
    ptr[i] = new int[m];
}

// asking the values from the user 
for(int i=0; i<n;i++)
for(int j=0; j<m;j++)
cin>>ptr[i][j];

// Printing the value of the array 
for(int i=0; i<n;i++){
for(int j=0; j<m;j++)
cout<<ptr[i][j]<<" ";
cout<<endl;
}

// Release the Memory 
for(int i=0; i<n ; i++)
delete [] ptr[i];

delete ptr;

    return 0;
}