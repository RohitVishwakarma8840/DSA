 class Solution {
  public:
  
  void find(Node *root,vector<int>&ans,int low,int high){
      
      if(!root)
      return;
      
      
      if(low<root->data && high<root->data)
      return find(root->left,ans,low,high);
      
     else if(low>root->data && high>root->data)
      return find(root->right,ans,low,high);
      
      else{
          
          find(root->left,ans,low,high);
          ans.push_back(root->data);
          find(root->right,ans,low,high);
      }
      
      
      
      
  }
  
    vector<int> printNearNodes(Node *root, int low, int high) {
        vector<int>ans;
        find(root,ans,low,high);
        return ans;
        
        
        
        
        
    }
};