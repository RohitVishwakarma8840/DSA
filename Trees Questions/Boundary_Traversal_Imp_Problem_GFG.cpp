class Solution {
public:

 void LeftSub(Node *root,vector<int>&ans){
     
     // Base Case 
  if(!root || (!root->left && !root->right))
   return;
     
     
     
     ans.push_back(root->data);
     if(root->left)
     LeftSub(root->left,ans);
     else
     LeftSub(root->right,ans);
     
 }


 void Leaf(Node *root,vector<int>&ans){
     
     // Base Case
     if(!root)
     return;
     
     // leaf node 
  if(!root->left && !root->right){
      ans.push_back(root->data);
      return;
  }
     
    // Left part 
    Leaf(root->left,ans);
    
    // Right part 
    Leaf(root->right,ans);
     
 }

 
  void RightSub(Node *root, vector<int>&ans){
      
     // base case 
     if(!root || (!root->left && !root->right))
     return;
     
     // Right part 
    if(root->right)
    RightSub(root->right,ans);
    else
    RightSub(root->left,ans);
      
     ans.push_back(root->data);
     
  }





    vector <int> boundary(Node *root)
    {
        
        vector<int>ans;
        
        // Root Element 
      ans.push_back(root->data);
        
        // left element ko daal do , except leaf node 
      LeftSub(root->left,ans);
        
    // Leaf ko insert kara do 
    if(root->left || root->right)
      Leaf(root,ans);
        
   // Right element ko daalo in reverse order mai 
    RightSub(root->right,ans);
        
        return ans;
        
        
        
        
        

    }
};