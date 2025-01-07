
 class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        
    unordered_map<long long int,long long int>m;
    
    long long total = 0;
    long long int PrefixSum = 0;
    int n = arr.size();
    
    m[0] =1;
    
    for(int i=0; i<n; i++)
    {
        PrefixSum +=arr[i];
        if(m.count(PrefixSum))
        {
         total += m[PrefixSum];
         m[PrefixSum]++;
         
        }
        
        else
        m[PrefixSum] = 1;
        
    }
        
        
        return total;
        

        
        
    }
};