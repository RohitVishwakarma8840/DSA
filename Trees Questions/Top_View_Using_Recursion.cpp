class Solution
{
    public:
    
        // Function to return a list of nodes visible from the top view 
    // from left to right in Binary Tree.
    
     void find(Node *root, int pos, int &l, int &r) {
        if (!root)
            return;

        l = min(pos, l);
        r = max(pos, r);

        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }
    
    void Tview(Node *root, int pos, vector<int> &ans, vector<int> &level, int l) {
        // base case
        if (!root)
            return;
        
        // level 
        if (level[pos] > l) {
            ans[pos] = root->data;
            level[pos] = l;
        }
        
        Tview(root->left, pos - 1, ans, level, l + 1);
        Tview(root->right, pos + 1, ans, level, l + 1);
    }
    
    vector<int> topView(Node *root) {
        int l = 0, r = 0;
        find(root, 0, l, r);
        vector<int> ans(r - l + 1);
        vector<int> level(r - l + 1, INT_MAX);
        Tview(root, -1 * l, ans, level, 0);
        return ans;
    
       
       
       
       
       
       
        
    }
};