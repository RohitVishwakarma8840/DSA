class  Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool BFS(vector<vector<int>>& adj, vector<bool>& visited, int start) {
        queue<pair<int, int>> q;
        visited[start] = 1;
        q.push(make_pair(start, -1)); // node and its parent 

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (int j = 0; j < adj[node].size(); j++) {
                if (parent == adj[node][j])
                    continue;
                if (visited[adj[node][j]])
                    return 1;

                visited[adj[node][j]] = 1;
                q.push(make_pair(adj[node][j], node));
            }
        }
        return 0;
    }

    bool isCycle(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> visited(V, 0);

        // Check for cycles in all components
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (BFS(adj, visited, i))
                    return 1;
            }
        }
        return 0;
    }
};