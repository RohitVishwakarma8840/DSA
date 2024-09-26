Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        
    
        
        int n = mat.size();
        stack<int> st;
        for(int i = n-1; i >= 0; i--)
            st.push(i);
        
        while(st.size() > 1) {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            
            if(mat[first][second] && !mat[second][first])
                st.push(second);
            else if(!mat[first][second] && mat[second][first])
                st.push(first);
        }
        
        // If stack is empty, no celebrity
        if(st.empty())
            return -1;
        
        int num = st.top();
        st.pop();
        
        // Celebrity verification: num should not know anyone, and everyone should know num
        int row = 0, col = 0;
        for(int i = 0; i < n; i++) {
            row += mat[num][i];
            col += mat[i][num];
        }
        
        return row == 0 && col == n-1 ? num : -1;
    }
};
