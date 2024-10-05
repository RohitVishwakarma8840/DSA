  void PostOrder(Node *root , vector<int>&ans){

  if(root==NULL)
  return ;

  // left 
  PostOrder(root->left, ans);



  // Right
  PostOrder(root->right, ans);
  
    // Node 
  ans.push_back(root->data);

 }





//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  
  
        vector<int> ans;
        PostOrder(root, ans);  // Call InOrder with root and ans
        return ans;
}
