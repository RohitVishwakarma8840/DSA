class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       priority_queue<int> q;
        for (int gift : gifts) {
            q.push(gift);
        }
        while (k > 0) {
            int sq = q.top();
            q.pop();
            int res = floor(sqrt(sq));
            q.push(res);
            k--;
        }
        long long final = 0;
        while (!q.empty()) {
            final += q.top();
            q.pop();
        }
        return final;
   
      
    }
};