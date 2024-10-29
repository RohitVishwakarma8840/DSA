 cal(Node *root,int &sum,int &k){
    
    if(!root)
    return;
    
    cal(root->left,sum,k);
    k--;
    
    if(k>=0)
    sum += root->data;
    
    if(k<=0)
    return;
    
    cal(root->right,sum,k);
    
    
}

// Function to calculate sum of first k nodes in in-order traversal
int sum(Node* root, int k) { 
    int sum = 0;
    cal(root, sum, k);
    return sum;
}