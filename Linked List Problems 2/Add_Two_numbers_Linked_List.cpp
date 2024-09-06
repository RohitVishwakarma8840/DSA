        
 Solution {
  public:
  
   // Reverse the linked list 
   Node *Reverse(Node *curr , Node *prev){
       
       if(curr==NULL)
       return prev;
       
       Node *front= curr->next;
       curr->next = prev;
      return Reverse(front,curr);
       
    
   }
  
  
  
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* first, Node* second) {
        
        
        // code here 
        first = Reverse(first,NULL);
        second = Reverse(second,NULL);
        
        Node *curr1 = first , *curr2=second;
        Node *head = new Node(0);
        Node *tail = head;
        int sum,carry=0;
        
        // Addition 
        while(curr1 && curr2){
            
          sum = curr1->data + curr2->data + carry;
          tail->next = new Node(sum%10);
            curr1 = curr1->next;
            curr2 = curr2->next;
            tail=tail->next;
            carry=sum/10;
            
            
        }
        
        
        while(curr1){
            sum=curr1->data+carry;
            tail->next = new Node(sum%10);
            curr1=curr1->next;
            tail = tail->next;
            carry=sum/10;
        }
        
         
        while(curr2){
            sum=curr2->data+carry;
            tail->next = new Node(sum%10);
            curr1=curr2->next;
            tail = tail->next;
            carry=sum/10;
        }
        
  
       while(carry){
           tail->next = new Node(carry%10);
           tail=tail->next;
           carry/=10;
       }
  
        
        // Dummy node bhi present hai 
        head = Reverse(head->next , NULL);
        return head;
        
        
        
  
        
    }
};