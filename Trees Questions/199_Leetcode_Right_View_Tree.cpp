/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
         vector<int>ans;
   queue<TreeNode*>q;

   if(root==NULL)
   return ans;
   
   q.push(root);
   
   while(!q.empty()){
      int n = q.size();
      ans.push_back(q.front()->val);
      while(n--){
      TreeNode *temp = q.front();
        q.pop();
          
         // left 
         if(temp->right)
         q.push(temp->right);
         // right
         if(temp->left)
         q.push(temp->left);

      }
   }
      return ans;
        
    }
};