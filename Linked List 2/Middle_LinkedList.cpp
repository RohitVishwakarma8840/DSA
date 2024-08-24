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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        // Count total no of nodes in the linked list 
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }

   count/=2;
   // The no of steps to take from start is given by count/=2 ; here 

      temp=head;
      while(count--){
        temp=temp->next;
      }


        return temp;
    }
};