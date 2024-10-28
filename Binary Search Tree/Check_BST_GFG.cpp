 class Solution {
  public:
  
      bool BST(Node *root, int &prev){
          
      if(!root)
      return 1;
      
      bool l = BST(root->left,prev);
      
      if(l==0)
      return 0;
      
      if(root->data<=prev)
      return 0;
      
      prev = root->data;
     return  BST(root->right,prev);
          
          
          
      }
 
  
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        
     int prev = INT_MIN;
     return BST(root,prev);
        
 
    }
};
