#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

 int vertex,edges;
 cin>>vertex>>edges;

 vector<int>AdjList[vertex];

 int u,v;
 for(int i=0 ; i<edges; i++){

  cin>>u>>v;
  AdjList[u].push_back(v);
  AdjList[v].push_back(u);


 }


  // Print the list 
  for(int i=0; i<vertex;i++){

  cout<<i<<"  ->";
  for(int j=0; j<AdjList[i].size(); j++){
  cout<<AdjList[i][j]<<" ";

  }
 cout<<endl;
  }


    return 0;
}

// Input of the following code 
// 5 6
// 0 1
// 1 2
// 0 2
// 1 3
// 3 4
// 2 4


// Output of the follwoing code 
// 0  ->1 2 
// 1  ->0 2 3
// 2  ->1 0 4
// 3  ->1 4
// 4  ->3 2