class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *curr)
    {
       
       Node *temp = curr->next;
       curr->data = temp->data;
       curr->next = temp->next;
       delete temp; 
       
       
       
       
       
       
    }

};
