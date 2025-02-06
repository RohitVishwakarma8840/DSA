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