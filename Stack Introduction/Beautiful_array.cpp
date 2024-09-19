Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
      
      stack<int>s;
      
      for(int i=0;i<arr.size();i++){
          
          // if Stack is empty then 
          if(s.empty())
           s.push(arr[i]);
          
          //Non Nwegative no 
         else if(arr[i]>=0){
          
          // non-negative
          if(s.top()>=0){
          s.push(arr[i]);
          }
          // negative
          else{
              s.pop();
          }
             
          }
          
          // Negative No 
          else{
              if(s.top()<0){
                  s.push(arr[i]);
              }
              else{
                  s.pop();
              }
              
       
          }
          
  
          
      }
        
        
        vector<int>ans(s.size());
        int i = s.size()-1;
        while(!s.empty()){
            ans[i]=s.top();
            i--;
            s.pop();
            
            
        }
        
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
    }
};