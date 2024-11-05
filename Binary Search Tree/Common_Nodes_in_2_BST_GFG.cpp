class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int>ans;
     stack<Node*>s1,s2;
     
     while(root1){
         
         s1.push(root1);
         root1= root1->left;
         
         
         
         
     }
     
     while(root2){
         
         s2.push(root2);
         root2= root2->left;
     }
     
     while(!s1.empty()&& !s2.empty()){
         
         // top element equal aaye
         if(s1.top()->data==s2.top()->data)
         {
             ans.push_back(s1.top()->data);
             root1 = s1.top()->right;
             s1.pop();
             root2 = s2.top()->right;
             s2.pop(); 
         }
         
         // s1>s2
         else if(s1.top()->data>s2.top()->data)
         {
             
             root2 = s2.top()->right;
             s2.pop();
        
         }
         // s2 > s1
         else{
             root1 = s1.top()->right;
             s1.pop();
             
             
         }
         
          while(root1){
         
         s1.push(root1);
         root1= root1->left;
         
         
         
         
     }
     
     while(root2){
         
         s2.push(root2);
         root2= root2->left;
     }
         
         
         
     }
    
     return ans;
     
    }
};