


vector<int>ans;
ans.push_back(head->data);

Node *curr=head->next;

while(curr){
 
 // Duplicate not found
 if(ans[ans.size()-1]!=curr->data){
  ans.push_back(curr->data);
  curr=curr->next;
 }
 // Duplicate found 
 else{
   curr=curr->next;

 }
}

int index=0;
Node *prev=NULL;
Node *curr=head;
while(index<ans.size())
{
curr->data=ans[index++];
prev=curr;
curr=curr->next;
}

prev->next=NULL;