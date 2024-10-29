 Solution {
  public:
  
  void ArrayToBST(vector<int>arr,int start,int end,vector<int>&ans){
      
      if(start>end)
      return;
      
      int mid = start+(end-start)/2;
      ans.push_back(arr[mid]);
      
      ArrayToBST(arr,start,mid-1,ans);
      ArrayToBST(arr,mid+1,end,ans);
      
      
      
  }
  
  
  
  
    vector<int> sortedArrayToBST(vector<int>& nums) {
        
        vector<int>ans;
        ArrayToBST(nums,0,nums.size()-1,ans);
        return ans;
        
        
        
    }
};