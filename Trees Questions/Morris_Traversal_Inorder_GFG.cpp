class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        // left node right inorder traversal 
        
   vector<int>ans;
   while(root){
       
       // left part doesn't exist
       if(!root->left){
     ans.push_back(root->data);     
     root = root->right;
       }
    
       // yaa phir left part exist karta hai 
       else{
           Node *curr = root->left;
           
           while(curr->right && curr->right!=root)
           curr = curr->right;
           
           // left subtree not traversed 
           if(curr->right==NULL){
               curr->right=root;
               root=root->left;
           }
       
           // left subtree already traversed
         else{
            curr->right = NULL;
            ans.push_back(root->data);
            root = root->right;
             
      
         }
       }
   }
  
  return ans;
        
    }
};