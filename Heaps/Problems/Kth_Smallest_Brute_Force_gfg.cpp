class  Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        
        priority_queue<int>q;
        
       for (auto num : arr) {
      q.push(num);
}

 while(q.size()>k){
     q.pop();
 }

   return q.top();
        
    }
};