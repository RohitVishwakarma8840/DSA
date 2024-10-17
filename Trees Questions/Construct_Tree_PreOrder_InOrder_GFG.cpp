class Solution {
public:

    int find(int in[], int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (in[i] == target)
                return i;
        }
        return -1;
    }

    Node* Tree(int in[], int pre[], int InStart, int InEnd, int& index) {
        if (InStart > InEnd)
            return NULL;

        Node* root = new Node(pre[index]);
        int pos = find(in, pre[index], InStart, InEnd);
        index++;

        // Left
        root->left = Tree(in, pre, InStart, pos - 1, index);

        // Right
        root->right = Tree(in, pre, pos + 1, InEnd, index);

        return root;
    }

    Node* buildTree(int in[], int pre[], int n) {
        int index = 0; // Initialize index to keep track of preorder index
        return Tree(in, pre, 0, n - 1, index);
    }
};
