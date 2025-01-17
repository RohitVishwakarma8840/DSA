class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        int V = adj.size(); // Determine the number of vertices from adj
        vector<bool> visited(V, false);
        vector<int> ans;
        queue<int> q;

        // Start BFS from node 0
        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            // Explore neighbors of the current node
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return ans;
    }
};
