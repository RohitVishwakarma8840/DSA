 Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        stack<int>st;
        vector<int>ans(n,-1);
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && a[st.top()]>a[i])
       {
            ans[st.top()] = a[i];
            st.pop();
           
       }     
            
            st.push(i);
            
        }
        
          return ans;
        
        
        
        
        
        
        
    }
};