 
 int check(Node *root, bool &valid) {
    if (!root)
        return 0;

    int lh = check(root->left, valid);
    int rh = check(root->right, valid);

    if (abs(lh - rh) > 1)
        valid = 0;

    return 1+max(lh, rh);
}


class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root) {
    bool valid = 1;
    check(root, valid);
    return valid;
}

};