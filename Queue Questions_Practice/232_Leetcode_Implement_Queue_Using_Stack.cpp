class MyQueue {
public:
 
  stack<int>s1; // for push 
  stack<int>s2; // for pop

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        // Empty toh nahi hai 
        if(empty())
        return 0;
        else if(!s2.empty()){
       int element = s2.top();
        s2.pop();
        return element;
        }
        else{
      
       while(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
       }
       int element = s2.top();
        s2.pop();
        return element;

        }

    }
    
    int peek() {
        if(empty())
        return 0;

        else if(!s2.empty())
        {
            return s2.top();
        }
        else{
              while(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
       }      
       return s2.top();
        }


    }
    
    bool empty() {
        return s1.empty() && s2.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */