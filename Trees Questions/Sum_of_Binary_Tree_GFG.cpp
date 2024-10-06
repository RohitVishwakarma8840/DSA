void Total(Node *root , int &sum){
    
    if(root==NULL)
    return;
    
    sum+=root->key;
    Total(root->left , sum);
    Total(root->right , sum);
    
}


long int sumBT(Node* root)
{
 int sum = 0;
 Total(root,sum);
  return sum;





}