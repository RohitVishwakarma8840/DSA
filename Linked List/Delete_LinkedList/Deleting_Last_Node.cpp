#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }


};

Node* CreateLinkedList(int arr[],int index , int size){

    // Base Case 
    if(index==size)
    return NULL;

   Node *temp;
   temp=new Node(arr[index]);
   temp->next=CreateLinkedList(arr,index+1,size);
   return temp;



}

// Function to print the linked list
void PrintLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){

Node* Head;
Head=NULL;

int arr[]={2,4,6,8,10};

Head= CreateLinkedList(arr,0,5);

// Deleting the node at the End
if(Head!=NULL){

 // Only one Node is Present 
 if(Head->next==NULL){
    Node *temp=Head;
    delete temp;
    Head=NULL;

 }

 // More than 1 node are present 
 else{
    Node *curr=Head;
    Node *prev=NULL;

    // curr->next jab tak null nahi hai 
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }

    delete curr;
    prev->next=NULL;
 }
 

}





// Print the linked list
    PrintLinkedList(Head);



    return 0;
}