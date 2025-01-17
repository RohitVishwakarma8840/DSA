 // For disconnected graph 
 
 class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool CycleDetect(int node ,int parent,vector<vector<int>>& adj,vector<bool>visited){
        
        visited[node] = 1;
        
        for(int j=0; j<adj[node].size(); j++){
        
        if(parent==adj[node][j])
        continue;
        if(visited[adj[node][j]])
        return 1;
            
        if(CycleDetect(adj[node][j],node,adj,visited))
        return 1;
            
            
            
        }
        
        
        return 0;
        
    
    }
    
    
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
         vector<bool> visited(V, false);
         
         for (int i = 0; i < V; i++) {
            if (!visited[i]) { // Start DFS from unvisited nodes
                if (CycleDetect(i, -1, adj, visited)) 
                    return true;
            }
        }
        
        return false;
    }
};