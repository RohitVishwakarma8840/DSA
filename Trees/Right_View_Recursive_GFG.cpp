 void Rview(Node *root , int level , vector<int>&ans){
     
     if(!root)  // Base Condition 
     return;
     
     if(level==ans.size())
     ans.push_back(root->data);
     
     Rview(root->right, level+1 , ans);
     Rview(root->left, level+1 , ans);
     
     
 }

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       
      vector<int>ans;
   if(!root)
   return ans;
   
   Rview(root,0,ans);
   return ans;

       
    }
};