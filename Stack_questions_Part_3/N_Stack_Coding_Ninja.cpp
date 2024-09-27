#include <bits/stdc++.h> 

 class Node{
 public:
 int index;
 Node *next;

 Node(int x){
  index = x;
  next = NULL;
 }


 };






class NStack
{
public:
stack<int>st;  // Empty index kitne hai 
int *arr;      // Original Array 
Node **Top;   // Top element's value of particular stack




    NStack(int N, int S)
    {
        arr = new int[S];
        Top = new Node*[N];
        for(int i=0; i<N; i++)
        Top[i] = NULL;
        for(int i=0 ; i<S;i++)
        st.push(i);
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if(st.empty()) // means array full hai there is no space for it 
        return 0;

        // agar khaali toh then 
        arr[st.top()] = x;
        Node *temp = new Node(st.top());
        temp->next = Top[m-1];
        Top[m-1] = temp;
        st.pop();
        return 1;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(Top[m-1]==NULL)
        return -1;

     int element = arr[Top[m-1]->index];
     st.push(Top[m-1]->index);
     Top[m-1] = Top[m-1]->next;
     return element;





    }
};