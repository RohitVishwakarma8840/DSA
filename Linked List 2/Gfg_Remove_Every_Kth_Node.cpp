class Solution {
    public:
    Node* deleteK(Node *head,int K){
      
      Node *curr=head;
      Node *prev=NULL;
      int count=1;
      
      if(K==1)
      return NULL;
      
      while(curr){
          if(K==count){
              prev->next=curr->next;
              delete curr;
              curr=prev->next;
              count=1;
              

          }
          else{
              prev=curr;
              curr=curr->next;
              count++;
              
    }
      }
      
      
       return head;
      

      
    }
};