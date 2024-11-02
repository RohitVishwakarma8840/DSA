class Solution{
  public:
  
  bool Dead(Node *root,int lower,int upper)
  {
      if(!root)
      return 0;
      
      // leaf node 
      if(!root->right && !root->left)
      {
          
      if (root->data - lower == 1 && upper - root->data == 1)
          return 1;
          else
          return 0;
      }
      
     return Dead(root->left,lower,root->data) || Dead(root->right,root->data,upper);
      
  }
  
  
  
  
    bool isDeadEnd(Node *root)
    {
        //Your code here
       return Dead(root,0,INT_MAX);
        }
};