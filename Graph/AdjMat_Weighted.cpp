#include<iostream>
#include<vector>
using namespace std;


int main(){

 // Adjacency Matrix 
 // undirected weighted graph

int vertex,edges;
cin>>vertex>>edges;

vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));



int u,v,weight;
for(int i=0; i<edges;i++){
 
 cin>>u>>v>>weight;
 AdjMat[u][v] = weight;
 AdjMat[v][u] = weight;



}


  for(int i=0; i<vertex;i++){
    for(int j=0; j<vertex ; j++)
    {
      cout<<AdjMat[i][j]<<" ";

     

    }
     cout<<endl;
  }





    return 0;
}

// Input of the following 
// 5 6
// 0 1 3 
// 0 2 4 
// 1 2 9
// 1 3 1
// 2 4 2
// 3 4 7



// Output of the following 
// 0 3 4 0 0 
// 3 0 9 1 0
// 4 9 0 0 2
// 0 1 0 0 7
// 0 0 2 7 0



