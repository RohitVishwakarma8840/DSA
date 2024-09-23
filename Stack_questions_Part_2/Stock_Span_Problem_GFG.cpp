class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<int>st;
       vector<int>ans(n,1);
       
      for(int i=n-1; i>=0 ; i--){
          
         while(!st.empty() && price[st.top()]<price[i]){
              
             ans[st.top()]=st.top()-i;
              st.pop();
              
          }
          
          st.push(i);
      }
 
       
       while(!st.empty()){
           ans[st.top()]=st.top()+1;
           st.pop();
       }
       
       
       
       
       return ans;
       
       
       
       
    }
};