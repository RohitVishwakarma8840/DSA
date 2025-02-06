//  Kahn’s Algorithm (BFS-based Topological Sorting)

class Solution {
  public:
  
    
    
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        
        int V = adj.size();
        vector<int>ans;
        
        // we will find the dfs 
        vector<int>InDeg(V,0);

        
        for(int i=0;i<V;i++){
            for(int j=0; j<adj[i].size(); j++){
                InDeg[adj[i][j]]++;
            }
        }
        
        
        // push all the elements in the stack 
        queue<int>q;
      for(int i=0; i<V;i++)
      if(!InDeg[i])  // pushing the InDeg = 0 in the queue (no incoming edges are onto that )
      q.push(i);
      
      while(!q.empty()){
          
         int node = q.front();
         q.pop();
         ans.push_back(node);
         
         // push the neighbours 
         for(int j=0; j<adj[node].size(); j++){
             InDeg[adj[node][j]]--;
             if(InDeg[adj[node][j]]==0)
             q.push(adj[node][j]);
             
             
         }
          
          
          
      }

        
        
        return ans;
        
    }
};



// Dry run gpt 



//         5 → 0
//         ↓
//         4 → 1 → 3 → 2
//                  ↓
//                  6
// Adjacency List Representation:

// cpp
// Copy
// Edit
// adj = {
//     {},     // Node 0 (no outgoing edges)
//     {},     // Node 1
//     {},     // Node 2
// //     {2,6},  // Node 3 → 2,6
// //     {1},    // Node 4 → 1
// //     {0,2},  // Node 5 → 0,2
// //     {}      // Node 6
// // }
// // Step-by-Step Execution of Code
// // Let's break it down:

// // Step 1: Compute In-Degree of Each Node

// // Copy
// // Edit
// // InDeg[] = [1,1,2,0,1,0,1]
// // Explanation:

// Node 0 has 1 incoming edge (from 5).
// Node 1 has 1 incoming edge (from 4).
// Node 2 has 2 incoming edges (from 3,5).
// Node 3 has 0 incoming edges (start processing).
// Node 4 has 1 incoming edge (from 5).
// Node 5 has 0 incoming edges (start processing).
// Node 6 has 1 incoming edge (from 3).
// Step 2: Push Nodes with In-Degree = 0 into Queue

// makefile
// Copy
// Edit
// Queue: [3,5]
// Step 3: Process Nodes in BFS Order

// Pop 3, add to answer → process its neighbors (2,6):

// makefile
// Copy
// Edit
// ans = [3]
// Queue: [5]
// InDeg[] = [1,1,1,0,1,0,0]  // Decreased InDeg[2] and InDeg[6]
// Pop 5, add to answer → process its neighbors (0,2):

// makefile
// Copy
// Edit
// ans = [3,5]
// Queue: [6]
// InDeg[] = [0,1,0,0,1,0,0]  // Decreased InDeg[0] and InDeg[2]
// Pop 6, add to answer:

// makefile
// Copy
// Edit
// ans = [3,5,6]
// Queue: [2,0]
// Pop 2, add to answer:

// makefile
// Copy
// Edit
// ans = [3,5,6,2]
// Queue: [0,4]
// Pop 0, add to answer:

// makefile
// Copy
// Edit
// ans = [3,5,6,2,0]
// Queue: [4]
// Pop 4, add to answer → process its neighbors (1):

// makefile
// Copy
// Edit
// ans = [3,5,6,2,0,4]
// Queue: [1]
// InDeg[] = [0,0,0,0,0,0,0]  // Decreased InDeg[1]
// Pop 1, add to answer:

// makefile
// Copy
// Edit
// ans = [3,5,6,2,0,4,1]
// Queue: []
// Final Topological Order:

// csharp
// Copy
// Edit
// [3,5,6,2,0,4,1]
// This order satisfies the topological sorting conditions.

// Time Complexity Analysis
// Building In-Degree Array → 
// 𝑂
// (
// 𝑉
// +
// 𝐸
// )
// O(V+E)
// Processing Each Node Once → 
// 𝑂
// (
// 𝑉
// )
// O(V)
// Processing Each Edge Once → 
// 𝑂
// (
// 𝐸
// )
// O(E)
// Thus, Overall Complexity: 
// 𝑂
// (
// 𝑉
// +
// 𝐸
// )
// O(V+E) (Efficient for large DAGs).
