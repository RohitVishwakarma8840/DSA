// Function to delete a node from BST.
Node *deleteNode(Node *root, int target) {

    // base condition 
    if (!root)
        return NULL;

    if (root->data > target) {
        root->left = deleteNode(root->left, target);
        return root;
    }

    if (root->data < target) {
        root->right = deleteNode(root->right, target);
        return root;
    }

    // Node to be deleted found
    else {

        // Case 1: Node is a leaf node
        if (!root->left && !root->right) {
            delete root;
            return NULL;
        }

        // Case 2: Node has only one child
        else if (!root->right) { // Left child exists
            Node *temp = root->left;
            delete root;
            return temp;
        }

        else if (!root->left) { // Right child exists
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // Case 3: Node has two children
        else {
            // Find the greatest element from the left subtree
            Node *child = root->left;
            Node *parent = root;

            // Traverse to the rightmost node of the left subtree
            while (child->right) {
                parent = child;
                child = child->right;
            }

            if (parent != root) {
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
            } else {
                child->right = root->right;
            }

            delete root;
            return child;
        }
    }
}
