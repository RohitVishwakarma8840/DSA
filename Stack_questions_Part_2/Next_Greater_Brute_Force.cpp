 class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
         
         vector<long long>ans(n,-1);
         
         for(int i=0; i<n;i++){
       for(int j=i+1;j<n;j++){
           
          if(arr[j]>arr[i]){
              
              ans[i] = arr[j];
              break;
          }
           
       }
         }
        
         return ans;

    }
};