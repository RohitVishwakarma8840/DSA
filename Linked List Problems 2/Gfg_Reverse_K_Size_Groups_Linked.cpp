class Solution {
  public:
    struct node *reverseIt(struct node *head, int k) {
        
        // Creating a dummy node 
        node *first = new node(0);
        first->next = head;
        head = first;
        int x;
        node *second , *prev , *curr ,*front;
        
        
        // Reversing the linked list 
        while(first->next)
        {
            x = k;
           second = first->next;
           prev = first;
           curr = first->next;
           
            
         while( x && curr)
         {
             front = curr->next;
             curr->next = prev;
             prev = curr; 
             curr = front;
             x--;
         }
    
    
       first->next = prev;
       second->next = curr;
       first=second;
            
        }
        
    // Deleting the Dummy Node 
    first=head;
    head= head->next;
    delete first;
    
    return head;
        
    }
};