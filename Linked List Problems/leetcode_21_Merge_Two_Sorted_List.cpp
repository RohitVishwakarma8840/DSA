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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify merging process
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        
        while(list1 && list2) {
            if(list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        
        // Attach the remaining nodes from either list1 or list2
        if(list1) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }
        
        // Get the head of the merged list and delete dummy node
        tail = head;
        head = head->next;
        delete tail;
        
        return head;
    }
};
