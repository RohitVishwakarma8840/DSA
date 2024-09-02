
Node *prev=head;
Node *curr=head->next;

while(curr){

 if(prev->data=curr->data){
    prev->next=curr->next;
    delete curr;
    curr=prev->next;
 }
else{
prev=prev->next;
curr=curr->next;
}
}

