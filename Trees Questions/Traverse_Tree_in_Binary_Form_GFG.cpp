vector<int> findSpiral(Node *root)
{
    if (root == nullptr) // Handle edge case when the tree is empty
        return {};

    stack<Node*> s1;  // Right to left
    stack<Node*> s2;  // Left to right

    s1.push(root);
    vector<int> ans;

    while (!s1.empty() || !s2.empty()) {
        // Process nodes from right to left
        while (!s1.empty()) {
            Node *temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);

            // Push children in the order: right first, then left
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }

        // Process nodes from left to right
        while (!s2.empty()) {
            Node *temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);

            // Push children in the order: left first, then right
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }

    return ans;
}
