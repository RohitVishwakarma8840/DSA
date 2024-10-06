// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };


class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        
        if(root==NULL)
        return 0;
        
        if(!root->left && !root->right)
        return 0;
        
        return (1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right));
        
    }
};

