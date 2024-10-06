void Total(Node *node, int &count) {
    if (node == NULL)
        return;

    count++;  // Increment the count for the current node
    Total(node->left, count);   // Recurse on the left subtree
    Total(node->right, count);  // Recurse on the right subtree (corrected the typo)
}

class Solution {
  public:
    int getSize(Node* node) {
        
        int count = 0;
        Total(node , count);
        return count;
        
        
        
        
    }
};
