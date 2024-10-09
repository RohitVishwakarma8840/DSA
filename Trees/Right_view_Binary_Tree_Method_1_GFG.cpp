class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       
       vector<int>ans;
   queue<Node*>q;
   
   q.push(root);
   
   while(!q.empty()){
      int n = q.size();
      ans.push_back(q.front()->data);
      while(n--){
      Node *temp = q.front();
        q.pop();
          
           // right
         if(temp->right)
         q.push(temp->right);
         
         // left 
         if(temp->left)
         q.push(temp->left);
        
          
      }
       
   }
   
   return ans;
       
       
       
       
       
       
       
    }
};