 class Solution{
public:

stack<int> insertAtBottom(stack<int> st, int X){
    stack<int> temp;
        
        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }
        
        st.push(X);
        
        while (!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
    
    
    return st;
    
    
}

};