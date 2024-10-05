  void pre(Node *root , vector<int>&ans){
    
    if(root==NULL)
    return ;
    
    ans.push_back(root->data);
    
    // left
    pre(root->left , ans);
    
    // right
    pre(root->right , ans);
    
    
    
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  
  vector<int>ans;
  pre(root , ans);
  
  return ans;
  
  
}