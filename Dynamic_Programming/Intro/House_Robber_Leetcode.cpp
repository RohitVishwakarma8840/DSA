class Solution {
    public:
    
      int find(int index,vector<int>&nums,int n,vector<int>&dp){
    
      // Base Case 
      if(index>=n)
      return 0;
    

      // check if computed 
      if(dp[index]!= -1)
      return dp[index];
    
      dp[index] =  max(nums[index]+find(index+2,nums,n,dp), find(index+1,nums,n,dp));
     
    
       return dp[index];
    
    
      }
    
        int rob(vector<int>& nums) {
         
          int n  = nums.size();
         vector<int>dp(n+2,-1);
    
            return find(0,nums,n,dp);
            
        }
    };