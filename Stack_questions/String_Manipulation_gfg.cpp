class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        
        stack<string>s;
    
     for(int i=0; i<arr.size(); i++){
         
         // if stack is empty 
         if(s.empty())
         s.push(arr[i]);
         
         // if they are same
         else if(s.top()==arr[i])
         s.pop();
         
         // if they are different 
         else
         s.push(arr[i]);
         
        
         
     }
        
        
    return s.size();
        
    }
};