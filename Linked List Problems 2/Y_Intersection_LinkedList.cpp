 class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
          // Traverse to the end of the first list
        Node* curr1 = head1;
        while (curr1->next) {
            curr1 = curr1->next;
        }

        // Connect the last node of the first list to its head
        curr1->next = head1;

        // Use the Floyd's Cycle-Finding Algorithm (slow and fast pointers)
        Node* slow = head2;
        Node* fast = head2;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            // If slow and fast meet, break the loop
            if (slow == fast) {
                break;
            }
        }

        // If there is no cycle, return -1
        if (!fast || !fast->next) {
            curr1->next = NULL;  // Restore the original list structure
            return -1;
        }

        // Reset slow to head2 and move both pointers one step at a time
        slow = head2;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // Restore the original structure by disconnecting the last node of the first list
        curr1->next = NULL;
        
        // Return the intersection point data
        return slow->data;
        
    }
};