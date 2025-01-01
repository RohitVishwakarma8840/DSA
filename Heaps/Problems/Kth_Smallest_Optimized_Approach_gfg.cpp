class  Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        
        priority_queue<int>p;
        int r = arr.size()-1;
        
      for(int i=0;i<k;i++)
       p.push(arr[i]);
       
       
       for(int i=k; i<=r;i++)
       {
           if(arr[i]<p.top()){
               p.pop();
               p.push(arr[i]);
           }
           
           
       }
      
       return p.top();
        
    }
};