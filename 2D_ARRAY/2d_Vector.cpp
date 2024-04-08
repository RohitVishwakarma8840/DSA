#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

// initializing 2d vector 
// vector<vector<int> >matrix;

// vector<vector<int>>matrix(3,vector<int>(4,1));

// printing the 2d array 
// for(int i=0;i<3;i++){
//   for(int j=0;j<4;j++){

//     cout<<matrix[i][j]<<" ";
//   }
// cout<<endl;
// }

// cout<<"The Rows are : "<<matrix.size()<<endl;
// cout<<"The columns are :"<<matrix[0].size()<<endl;

cout<<"enter the row and column of the vector "<<endl;
int n,m;
cin>>n>>m;
vector<vector<int>>matrix(n,vector<int>(m,1));

 for(int i=0;i<3;i++){
  for(int j=0;j<4;j++)

   cin>>matrix[i][j];
  }

for(int i=0;i<3;i++){
 for(int j=0;j<4;j++){
 cout<<matrix[i][j]<<" ";
 }
cout<<endl;


}












    return 0;
}








