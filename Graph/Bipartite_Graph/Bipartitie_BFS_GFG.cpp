Solution {
    public:
      bool isBipartite(vector<vector<int>>& adj) {
          
          int V= adj.size();
          
          vector<int>color( V,-1);
          queue<int>q;
          
          q.push(0);
          color[0] =0;
          
          
          while(!q.empty()){
              int node = q.front();
              q.pop();
              
              for(int j=0; j<adj[node].size() ; j++){
                  
                  // color not assigned to them 
                  if(color[adj[node][j]]==-1){
                      color[adj[node][j]] = (color[node]+1)%2;
                      q.push(adj[node][j]);
                  }
                  else{
                  // color is not 
                  if(color[node]==color[adj[node][j]])
                  return 0;     
                  }
              
              }
              
              
              
          }
          
          return 1;
          
      
          
          
      }
  };