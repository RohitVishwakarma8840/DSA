 class Solution{
    public:
     
     Node *lca(Node *root,int n1,int n2){
         
         if(!root)
         return NULL;
         
         
         if(n1<root->data && n2<root->data)
         return lca(root->left,n1,n2);
         if(n1>root->data && n2>root->data)
          return lca(root->right,n1,n2);
        
         return root;
         
         
     }
    
        Node* LCA(Node *root, int n1, int n2)
        {
            return lca(root,n1,n2);
        }

};
