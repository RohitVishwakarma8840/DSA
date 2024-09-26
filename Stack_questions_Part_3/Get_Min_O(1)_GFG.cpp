

Class Solution{
    int minEle;
    stack<int> st1;
    stack<int> st2;
    public:
    
      
       int getMin(){
           
           if(st2.empty())
           return -1;
           
           return st2.top();
           
           
           
           
       }
       
       int pop(){
           
           if(st1.empty())
           return -1;
           
           int element = st1.top();
           st1.pop();
           st2.pop();
           return element;
           
           
       }
       
       void push(int x){
           
           if(st1.empty()){
               st1.push(x);
               st2.push(x);
           }
           else{
               st1.push(x);
               st2.push(min(st2.top(),x));
           }
           
           
       }
};