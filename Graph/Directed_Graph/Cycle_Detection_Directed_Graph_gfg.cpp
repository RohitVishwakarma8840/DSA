class Solution {
  public:
  
  bool DetectCycle(int node,vector<vector<int>>&adj,vector<bool>&path,vector<bool>&visited){
      
      visited[node] = 1;
      path[node] = 1;
      
      // look at adjacent node 
      for(int j=0;j<adj[node].size();j++){
          
          
          // if neighbour node is already present in my path
          // cycle is present 
          
          if(path[adj[node][j]])
          return 1;
          
          // if neighbour is already visited skip it 
          if(visited[adj[node][j]])
          continue;
          
          if(DetectCycle(adj[node][j],adj,path,visited))
          return 1;
      }
             
      
      
      
     path[node] = 0;
      return 0;
      
  }
  
  
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        
        vector<bool>path(V,0);
        vector<bool>visited(V,0);
        
        
        for (int i = 0; i < V; i++) { 
            
            if(!visited[i] && DetectCycle(i,adj,path,visited))
            return 1;
        }
        
        
        return 0;
        
    }
};