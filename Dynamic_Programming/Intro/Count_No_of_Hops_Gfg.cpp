class Solution {
    public:
    
    int find(int step,int n,vector<int>&dp){
        
        if(step==n)
        return 1;
        
        if(step>n)
        return 0;
        
        if(dp[step]!=-1) 
        return dp[step];
        
        dp[step] = find(step+1,n,dp) + find(step+2,n,dp) + find(step+3,n,dp);
        
        
        return dp[step];
        
    }
    
    
    
    
      // Function to count the number of ways in which frog can reach the top.
      int countWays(int n) {
    
       vector<int>dp(n+1,-1);
        
          // your code here
          return find(0,n,dp);
          
      }
  };