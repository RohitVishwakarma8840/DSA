class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        vector<int>Left(n);
        vector<int>Right(n);

           // Next Smallest Right
           for(int i=0;i<n;i++){
          while(!st.empty() && heights[st.top()]>heights[i])
          {
            Right[st.top()]=i;
            st.pop();
          }
       st.push(i);
           }

       while(!st.empty())
{
    Right[st.top()]=n;
    st.pop();
}


        // Next Smallest Left
      for(int i=n-1; i>=0;i--){
        while(!st.empty() && heights[st.top()]>heights[i]){
            Left[st.top()]=i;
            st.pop();
        }
        st.push(i);
      }

   while(!st.empty()){
    Left[st.top()]=-1;
    st.pop();
   }

 // Area ko Calculate karo 
  int ans=0;
  for(int i=0; i<n; i++)
  ans = max(ans, heights[i]*(Right[i]-Left[i]-1));

  return ans;


     
    }
};