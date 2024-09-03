  class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        
        Node *head = new Node(0);
        Node *tail = head;
        
        while(head1 && head2){
            
        if(head1->data<=head2->data){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }  
    else{
        
        tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
    }
        
        
        }
        
        if(head)
        tail->next=head1;
        else
        tail->next=head2;
        
        
        tail = head;
        head = head->next;
        delete tail;
        
        
        
        return head;
        
        
        
    }