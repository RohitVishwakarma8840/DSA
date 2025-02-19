class Solution {
    public:
        int ways(int n, int stair, vector<int>& dp) {
            if (stair == n) return 1;
            if (stair > n) return 0;
    
            if (dp[stair] != -1) return dp[stair];
    
            return dp[stair] = ways(n, stair + 1, dp) + ways(n, stair + 2, dp);
        }
    
        int climbStairs(int n) {
            vector<int> dp(n + 1, -1);
            return ways(n, 0, dp);
        }
    };
    