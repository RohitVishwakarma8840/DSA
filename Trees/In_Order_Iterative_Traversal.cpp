class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        
        stack<Node*>s;
        stack<bool>visited;
        s.push(root);
        visited.push(0);
        vector<int>ans;
        
        while(!s.empty()){
            
        Node *temp = s.top();
        s.pop();
        bool flag = visited.top();
        visited.pop();
        
        // first time visit 
         if(!flag){
             
             // Right
             if(temp->right){
                 s.push(temp->right);
                 visited.push(0);
             }
             
             // Node 
             s.push(temp);
             visited.push(1);
             
             // left 
             if(temp->left){
                 s.push(temp->left);
                 visited.push(0);
             }
             
         }
        
   
        // second time visit 
        else
        ans.push_back(temp->data);
        
 
            
        }
        
        
        return ans;
        
    }
};