
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \
   20       30 */
   
// Helper function to recursively count leaf nodes
   
   
   
   
void counthelper(Node *root, int &count) {
    if (root == NULL) 
        return;

    // Check if the current node is a leaf node
    if (!root->left && !root->right) {
        count++;
        return;
    }

    // Recursive calls for left and right subtrees
    counthelper(root->left, count);
    counthelper(root->right, count);
}

// Function to return the count of leaves
int countLeaves(Node* root) {
    int count = 0;
    counthelper(root, count); // Fixed: added missing semicolon
    return count;
}