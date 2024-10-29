 Solution {
  public:
  
  void kLargest(Node *root,int &ans,int &k){
      
      if(!root)
      return;
      
      kLargest(root->right,ans,k);
      k--;
      
      if(k==0)
      ans = root->data;
      
      if(k<=0)
      return;
      
   kLargest(root->left,ans,k);

  }
  
    int kthLargest(Node *root, int k) {
        int ans;
        kLargest(root,ans,k);
        return ans;
        
    }
};