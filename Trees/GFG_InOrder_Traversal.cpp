


void InOrder(Node *root , vector<int>&ans){

  if(root==NULL)
  return ;

  // left 
  InOrder(root->left, ans);

  // Node 
  ans.push_back(root->data);

  // Right
  InOrder(root->right, ans);

 }



class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        

        vector<int> ans;
        InOrder(root, ans);  // Call InOrder with root and ans
        return ans;
        
    }
};