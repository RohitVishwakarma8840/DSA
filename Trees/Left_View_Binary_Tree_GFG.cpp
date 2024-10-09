vector<int> leftView(Node *root)
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
          
         // left 
         if(temp->left)
         q.push(temp->left);
         // right
         if(temp->right)
         q.push(temp->right);
          
      }
       
   }
   
   return ans;
 
}