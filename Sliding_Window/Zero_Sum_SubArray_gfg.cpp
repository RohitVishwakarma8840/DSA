
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



// Dry Run of code gpt 

// Initialization
// m = { 0: 1 } (To account for subarrays that start from index 0).
// total = 0.
// PrefixSum = 0.

// Iteration Steps
// Iteration 1 (i = 0):
// arr[i] = 6.
// PrefixSum = 0 + 6 = 6.
// Check if PrefixSum exists in m: No.
// Add 6 to m: m = {0: 1, 6: 1}.

// Iteration 2 (i = 1):
// arr[i] = -1.
// PrefixSum = 6 + (-1) = 5.
// Check if PrefixSum exists in m: No.
// Add 5 to m: m = {0: 1, 6: 1, 5: 1}.


// Iteration 3 (i = 2):
// arr[i] = -3.
// PrefixSum = 5 + (-3) = 2.
// Check if PrefixSum exists in m: No.
// Add 2 to m: m = {0: 1, 6: 1, 5: 1, 2: 1}.

// Iteration 4 (i = 3):
// arr[i] = 4.
// PrefixSum = 2 + 4 = 6.
// Check if PrefixSum exists in m: Yes (6 appears once).
// Increment total: total = 0 + 1 = 1.
// Increment frequency of 6 in m: m = {0: 1, 6: 2, 5: 1, 2: 1}.


// Iteration 5 (i = 4):
// arr[i] = -2.
// PrefixSum = 6 + (-2) = 4.
// Check if PrefixSum exists in m: No.
// Add 4 to m: m = {0: 1, 6: 2, 5: 1, 2: 1, 4: 1}.


// Iteration 6 (i = 5):
// arr[i] = 2.
// PrefixSum = 4 + 2 = 6.
// Check if PrefixSum exists in m: Yes (6 appears twice).
// Increment total: total = 1 + 2 = 3.
// Increment frequency of 6 in m: m = {0: 1, 6: 3, 5: 1, 2: 1, 4: 1}.


// Iteration 7 (i = 6):
// arr[i] = 4.
// PrefixSum = 6 + 4 = 10.
// Check if PrefixSum exists in m: No.
// Add 10 to m: m = {0: 1, 6: 3, 5: 1, 2: 1, 4: 1, 10: 1}.



// Iteration 8 (i = 7):
// arr[i] = 6.
// PrefixSum = 10 + 6 = 16.
// Check if PrefixSum exists in m: No.
// Add 16 to m: m = {0: 1, 6: 3, 5: 1, 2: 1, 4: 1, 10: 1, 16: 1}.

// Iteration 9 (i = 8):
// arr[i] = -12.
// PrefixSum = 16 + (-12) = 4.
// Check if PrefixSum exists in m: Yes (4 appears once).
// Increment total: total = 3 + 1 = 4.
// Increment frequency of 4 in m: m = {0: 1, 6: 3, 5: 1, 2: 1, 4: 2, 10: 1, 16: 1}.


// Iteration 10 (i = 9):
// arr[i] = -7.
// PrefixSum = 4 + (-7) = -3.
// Check if PrefixSum exists in m: No.
// Add -3 to m: m = {0: 1, 6: 3, 5: 1, 2: 1, 4: 2, 10: 1, 16: 1, -3: 1}.
// Final Result
// total = 4.
// Explanation of Subarrays with Sum 0
// Subarray [6, -1, -3, 4, -2, 2].
// Subarray [-1, -3, 4].
// Subarray [4, -2, 2].
// Subarray [6, -12].