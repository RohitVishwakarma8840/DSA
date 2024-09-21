stack<char> st;
    vector<char> ans;
    
    // Push characters onto the stack
    for(int i = 0; i < len; i++) {
        st.push(S[i]);
    }
    
    // Pop characters from the stack to reverse
    for(int i = 0; i < len; i++) {
        ans.push_back(st.top());
        st.pop();
    }
    
    // Create a dynamically allocated char array for the result
    char* result = new char[len + 1];  // +1 for null terminator
    for(int i = 0; i < len; i++) {
        result[i] = ans[i];
    }
    result[len] = '\0';  // Null-terminate the string
    
    return result;
    