/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

    ListNode *temp=head;
    int count=0;

    while(temp){
        count++;
        temp=temp->next;
    }

    count-=n;

  // piche se Nth node matlab first node
  // ko delete karna hai means first node 
    if(count==0){
        temp=head;
        head=head->next;
        delete temp;
        return head;

    }

   ListNode *curr=head;
   ListNode *prev=NULL;

// post decreament 
   while(count--){
     prev=curr;
     curr=curr->next;
 

    }
   
   prev->next= curr->next;

    delete curr;

 return head;

        
        
    }
};