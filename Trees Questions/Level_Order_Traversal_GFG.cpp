class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      
      queue<Node *>q;
      q.push(root);
      vector<int>ans;
      Node *temp;
      
      while(!q.empty()){
          
          
          temp = q.front();
          q.pop();
          
          ans.push_back(temp->data);
          
           if(temp->left)
           q.push(temp->left);
           
           if(temp->right)
           q.push(temp->right);
          
   
          
      }
      
      
        return ans;
      
      
      
      
      
    }
};