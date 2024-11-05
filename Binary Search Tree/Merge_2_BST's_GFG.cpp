class Solution {
  public:
  
  void inorder(Node *root,vector<int>&ans){
      
      if(!root)
      return;
      
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
      
      
  }
  
  
  

    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        
        vector<int>ans1;
        vector<int>ans2;
        
        inorder(root1,ans1);
        inorder(root2,ans2);
        
        vector<int>ans;
        
        int i=0,j=0;
        while(i<ans1.size() && j<ans2.size())
       {
           
           if(ans1[i]<ans2[j])
           ans.push_back(ans1[i++]);
           else
           ans.push_back(ans2[j++]);
           
           
       } 
        
        
       while(i<ans1.size())
       {
           ans.push_back(ans1[i++]);
       }
        
        
       while(j<ans2.size())
       {
           ans.push_back(ans2[j++]);
       }
        
        
        return ans;
    }
};