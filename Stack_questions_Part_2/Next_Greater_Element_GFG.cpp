   stack<int>st;
       vector<long long>ans(n,-1);
       
       for(int i=n-1;i>=0;i--){
           
           while(!st.empty() && arr[st.top()]<=arr[i])
           st.pop();
           
           
           if(!st.empty())
           ans[i] = arr[st.top()];
           
           st.push(i);
           
       };

       
          return ans;