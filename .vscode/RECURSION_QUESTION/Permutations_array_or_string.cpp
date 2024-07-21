#include<iostream>
#include<vector>
using namespace std;

void permute(int arr[] ,  vector<vector<int>> &ans,  vector<int> &temp , vector<bool>&visited){

  // base condition 
  if(visited.size()==temp.size()){
   ans.push_back(temp);
   return ;
  }




  for(int i=0; i<visited.size(); i++){

  if(visited[i]==0){
    visited[i]=1;
    temp.push_back(arr[i]);
    permute(arr, ans,temp, visited);
    visited[i]=0;
    temp.pop_back();

  }



  }


}





int main(){

 int arr[]={1,2,3};
 vector<vector<int>> ans;
 vector<int>temp;
 vector<bool>visited(3,0);

// calling the function 
 permute(arr, ans , temp , visited);


  for(int i=0;i<ans.size();i++){
     for(int j=0; j<ans[i].size();j++){
   cout<<ans[i][j]<<" ";
     }
     cout<<endl;
  }








    return 0;
}

//// Dry RUN OF THE CODE 
// To explain the process through a text diagram, we will show the state of the temp and visited arrays at each step, as well as the contents of the ans vector when a permutation is completed.

// Initial State
// arr = {1, 2, 3}
// ans = {}
// temp = {}
// visited = {false, false, false}
// Step-by-Step Execution
// First Call to permute

// permute({1, 2, 3}, ans, {}, {false, false, false})
// Iterate over visited:
// i = 0, visited[0] is false
// Set visited[0] = true, temp = {1}
// Recurse with permute({1, 2, 3}, ans, {1}, {true, false, false})
// Second Call to permute

// permute({1, 2, 3}, ans, {1}, {true, false, false})
// Iterate over visited:
// i = 0, visited[0] is true
// i = 1, visited[1] is false
// Set visited[1] = true, temp = {1, 2}
// Recurse with permute({1, 2, 3}, ans, {1, 2}, {true, true, false})
// Third Call to permute

// permute({1, 2, 3}, ans, {1, 2}, {true, true, false})
// Iterate over visited:
// i = 0, visited[0] is true
// i = 1, visited[1] is true
// i = 2, visited[2] is false
// Set visited[2] = true, temp = {1, 2, 3}
// Recurse with permute({1, 2, 3}, ans, {1, 2, 3}, {true, true, true})
// Fourth Call to permute (Base Case)

// permute({1, 2, 3}, ans, {1, 2, 3}, {true, true, true})
// temp.size() == visited.size()
// Add {1, 2, 3} to ans
// Backtrack: Set visited[2] = false, temp = {1, 2}
// Backtrack to Third Call

// Continue iteration in permute({1, 2, 3}, ans, {1, 2}, {true, true, false})
// i = 2, already checked
// Backtrack: Set visited[1] = false, temp = {1}
// Backtrack to Second Call

// Continue iteration in permute({1, 2, 3}, ans, {1}, {true, false, false})
// i = 1, already checked
// i = 2, visited[2] is false
// Set visited[2] = true, temp = {1, 3}
// Recurse with permute({1, 2, 3}, ans, {1, 3}, {true, false, true})
// Fifth Call to permute

// permute({1, 2, 3}, ans, {1, 3}, {true, false, true})
// Iterate over visited:
// i = 0, visited[0] is true
// i = 1, visited[1] is false
// Set visited[1] = true, temp = {1, 3, 2}
// Recurse with permute({1, 2, 3}, ans, {1, 3, 2}, {true, true, true})
// Sixth Call to permute (Base Case)

// permute({1, 2, 3}, ans, {1, 3, 2}, {true, true, true})
// temp.size() == visited.size()
// Add {1, 3, 2} to ans
// Backtrack: Set visited[1] = false, temp = {1, 3}
// Backtrack to Fifth Call

// Continue iteration in permute({1, 2, 3}, ans, {1, 3}, {true, false, true})
// i = 1, already checked
// i = 2, already checked
// Backtrack: Set visited[2] = false, temp = {1}
// Backtrack to Second Call

// Continue iteration in permute({1, 2, 3}, ans, {1}, {true, false, false})
// i = 2, already checked
// Backtrack: Set visited[0] = false, temp = {}
// Continuing Similar Steps for Remaining Iterations:
// The process continues similarly for the remaining permutations. Here are the remaining permutations generated:

// Permutations Generated:
// {2, 1, 3}
// {2, 3, 1}
// {3, 1, 2}
// {3, 2, 1}
// Final State:
// ans = {{1, 2, 3}, {1, 3, 2}, {2, 1, 3}, {2, 3, 1}, {3, 1, 2}, {3, 2, 1}}
// Output:
// Copy code
// 1 2 3 
// 1 3 2 
// 2 1 3 
// 2 3 1 
// 3 1 2 
// 3 2 1 








