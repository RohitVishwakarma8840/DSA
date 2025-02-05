class Solution {
  public:
    // Function to return list containing vertices in Topological order.
    void DFS(int node,vector<vector<int>>& adj,vector<bool>&visited,stack<int>&s){
        
        visited[node] = 1;
        
        
        for(int j=0;j<adj[node].size();j++){
            
            if(!visited[adj[node][j]])
            DFS(adj[node][j],adj,visited,s);

        }
        
         s.push(node);
        
    
    }
    
    
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        
        int V = adj.size();
        
        // we will find the dfs 
        vector<bool>visited(V,0);
        stack<int>s;
        
        DFS(0,adj,visited,s);
        
        
        for(int i=0;i<V;i++){
            
            if(!visited[i])
            DFS(i,adj,visited,s);
            
            
        }
        
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        
        return ans;
        
    }
};