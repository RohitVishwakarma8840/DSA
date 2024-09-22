 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<int>st;
        vector<long long>ans(n,-1);
        
        for(int i=0; i<n;i++){
            
            while(!st.empty() && arr[st.top()]<arr[i]){
                ans[st.top()]=arr[i];
                st.pop();
                
            }
            
            
            st.push(i);
            
            
            
        }
        
         return ans;