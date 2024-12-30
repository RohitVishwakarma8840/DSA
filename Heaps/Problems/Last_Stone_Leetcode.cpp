class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

   priority_queue<int>p;

   // Remember the edge case like 2,2 or 3,3 etc 

  int n = stones.size();

  for(int i=0;i<n;i++)
  p.push(stones[i]);
  int res = 0;
    
  while(p.size()>1){
  
  int weight = p.top();
  p.pop();
  weight -= p.top();
  p.pop();

  if(weight)
  p.push(weight);

  }

   
 return p.empty() ? 0 : p.top();





        
    }
};