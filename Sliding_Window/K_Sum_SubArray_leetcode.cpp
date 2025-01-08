class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

   unordered_map<int,int>m;
   int PrefixSum = 0;
   int total = 0;
   m[0] = 1;

  for(int i=0; i<nums.size(); i++){
     PrefixSum += nums[i];
     if(m.count(PrefixSum-k))
     {
       total += m[PrefixSum-k];
       m[PrefixSum]++;

     }
   else{
    m[PrefixSum]++;
   }
  }
  return total;

        
    }
};