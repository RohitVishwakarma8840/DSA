class Solution {
public:
    void correctBST(struct Node* root) {
        if (!root) return;  // Ensure root is not null

        Node *curr = NULL;
        Node *first = NULL, *second = NULL;
        Node *last = NULL, *present = NULL;
     
        while (root) {
            // If left doesn't exist
            if (!root->left) {
                last = present;
                present = root;

                // Check if nodes are out of order
                if (last && last->data > present->data) {
                    if (!first)
                        first = last;
                    second = present;
                }
                root = root->right;
            }
            // If left exists
            else {
                curr = root->left;
                
                // Find the rightmost node in the left subtree or the predecessor
                while (curr->right && curr->right != root) {
                    curr = curr->right;
                }

                // Left subtree not yet threaded
                if (!curr->right) {
                    curr->right = root;
                    root = root->left;
                }
                // Left subtree already threaded, revert changes
                else {
                    curr->right = NULL;
                    last = present;
                    present = root;
                    
                    // Check if nodes are out of order
                    if (last && last->data > present->data) {
                        if (!first)
                            first = last;
                        second = present;
                    }
                    root = root->right;
                }
            }
        }

        // Swap the values of the two incorrect nodes if they exist
        if (first && second) {
            int temp = first->data;
            first->data = second->data;
            second->data = temp;
        }
    }
};
