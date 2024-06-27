#include<iostream>
#include<vector>
using namespace std;

void Subsequence(int arr[],int index, int size , vector<vector<int>>&ans,vector<int>temp){

if(index==size){
    ans.push_back(temp);
    return ;
}

// DO Not Add 
Subsequence(arr,index+1,size,ans,temp);

// Adding the 
temp.push_back(arr[index]);
Subsequence(arr,index+1,size,ans,temp);



}



int main(){

int arr[]={1,2,3};

vector<vector<int>>ans;
vector<int>temp;

Subsequence(arr,0,3,ans,temp);

for(int i=0;i<ans.size();i++){

  for(int j=0;j<ans[i].size();j++){
    cout<<ans[i][j]<<" ";
  }

cout<<endl;


}



    return 0;
}







