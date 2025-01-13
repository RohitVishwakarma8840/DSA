class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

  int product = 1 , start = 0 , end = 0 , n = nums.size();
  int count = 0;

  while(end<n){

  product *= nums[end];

  // product should be small than k 
  while(product>=k && start<=end){

    product /= nums[start];
    start++;
  }

  count += 1+(end-start);
  end++;

  }


  return count; 
    }
};