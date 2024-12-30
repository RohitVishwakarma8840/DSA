class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
   int minCost(vector<int>& arr) {
    priority_queue<long long, vector<long long>, greater<long long>> p;

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        p.push(arr[i]);
    }

    long long cost = 0;
    while (p.size() > 1) {
        long long rope = p.top();
        p.pop();
        rope += p.top();
        p.pop();
        cost += rope;
        p.push(rope);
    }

    return cost;
        
    }
};