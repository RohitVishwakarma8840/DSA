Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
   
            Node *slow = head;
    Node *fast = head;

    // Detect loop using Floyd’s Cycle-Finding Algorithm
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // If slow and fast meet at some point, then there is a loop
        if (slow == fast) {
            break;
        }
    }

    // If loop does not exist
    if (fast == NULL || fast->next == NULL) {
        return 0;
    }

    // Loop exists, so count the number of nodes in the loop
    int count = 1;
    slow = slow->next;

    // Count the nodes until slow meets fast again
    while (slow != fast) {
        count++;
        slow = slow->next;
    }

    return count;
        
        
        
    }
};