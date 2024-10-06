class Solution {
  public:
    int getSize(Node* node) {
        
        if(node==NULL)
        return 0;
        
        
        return (1+ getSize(node->left) + getSize(node->right));
        
        
    }
};
