class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        stack<Node*>s;
        vector<int>ans;
        s.push(node);
        
        while(!s.empty()){
            
        Node *temp = s.top();
        s.pop();
       ans.push_back(temp->data);
       
    // left
     if(temp->left)
     s.push(temp->left);
   
     // right
     if(temp->right)
     s.push(temp->right);
        }
        
     reverse(ans.begin(),ans.end());        
        return ans;
        

    }
};