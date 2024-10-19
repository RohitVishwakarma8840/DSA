find(Node *root,int pos , int &l){
    
    if(!root)
    return;
    
    l = max(pos,l);
    
    find(root->left,pos+1,l);
    find(root->right,pos,l);
    

}

void findDia(Node *root,int pos,vector<vector<int>>& ans){
    
     if(!root)
     return;
     
     ans[pos].push_back(root->data);
     findDia(root->left,pos+1,ans);
     findDia(root->right,pos,ans);
    
    
    
}

vector<int> diagonal(Node *root)
{
  
  int l=0;    // left most diagonal 
  find(root,0,l);
   
  vector<vector<int>>ans(l+1);
  findDia(root,0,ans);
  
  vector<int>temp;
  
  for(int i=0;i<ans.size();i++)
  for(int j=0;j<ans[i].size();j++)
  temp.push_back(ans[i][j]);
   
   
   
   return temp;
   
   
}