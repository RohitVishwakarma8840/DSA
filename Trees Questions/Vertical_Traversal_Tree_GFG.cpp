Solution {
public:
    // Function to find the vertical order traversal of Binary Tree.
    void find(Node *root, int pos, int &l, int &r) {
        if (!root)
            return;

        l = min(l, pos);
        r = max(r, pos);

        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }

    vector<int> verticalOrder(Node *root) {
        int l = 0, r = 0;
        find(root, 0, l, r);

        // Positive
        vector<vector<int>> Positive(r + 1);
        vector<vector<int>> Negative(abs(l) + 1);

        queue<Node *> q;
        q.push(root);
        queue<int> index;
        index.push(0);

        while (!q.empty()) {
            Node *temp = q.front();
            q.pop();
            int pos = index.front();
            index.pop();

            if (pos >= 0)
                Positive[pos].push_back(temp->data);
            else
                Negative[abs(pos)].push_back(temp->data);  // Fixed the missing argument in push_back()

            // Left
            if (temp->left) {
                q.push(temp->left);
                index.push(pos - 1);
            }

            // Right
            if (temp->right) {
                q.push(temp->right);
                index.push(pos + 1);
            }
        }

        vector<int> ans;
        // Negative 2D array
        for (int i = Negative.size() - 1; i > 0; i--) {  // Fixed the loop condition
            for (int j = 0; j < Negative[i].size(); j++) {
                ans.push_back(Negative[i][j]);
            }
        }

        // Positive 2D array
        for (int i = 0; i < Positive.size(); i++) {
            for (int j = 0; j < Positive[i].size(); j++) {
                ans.push_back(Positive[i][j]);
            }
        }

        return ans;
    }
};
