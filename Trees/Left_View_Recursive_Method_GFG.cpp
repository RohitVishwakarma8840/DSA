 
 void Lview(Node *root , int level , vector<int>&ans){
     
     if(!root)  // Base Condition 
     return;
     
     if(level==ans.size())
     ans.push_back(root->data);
     
     Lview(root->left , level+1 , ans);
     Lview(root->right, level+1 , ans);
     
     
 }

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   
   vector<int>ans;
   if(!root)
   return ans;
   
   Lview(root,0,ans);
   return ans;
 
}