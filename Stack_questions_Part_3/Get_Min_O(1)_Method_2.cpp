class Solution{
    
    stack<int> st;
   
    public:
    
   int getMin(){
        if(st.empty())
            return -1;
        
        return st.top() % 101;
    }
       
    int pop(){
        if(st.empty())
            return -1;
        
        int element = st.top() / 101;
        st.pop();
        return element;
    }
       
    void push(int x){
        if(st.empty()){
            st.push(x * 101 + x);
        }
        else{
            st.push(x * 101 + min(st.top() % 101, x));
        }
           
       }
};